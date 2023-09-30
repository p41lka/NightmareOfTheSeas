/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#include "DialogueFactoryFile.h"

#include "Data.h"
#include "DialogueDataTable.h"
#include "DialogueLibrary.h"
#include "Engine/DataTable.h"
#include "Misc/FileHelper.h"


UDialogueFactoryFile::UDialogueFactoryFile(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Formats.Add(FString(TEXT("dlg;")) + NSLOCTEXT("UTextAssetFactory", "FormatDlg", "Dialog File").ToString());
	SupportedClass = UDialogueDataTable::StaticClass();
	bCreateNew = false;
	bEditAfterNew = false;
	bEditorImport = true;
}

UObject* UDialogueFactoryFile::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                                 const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn,
                                                 bool& bOutOperationCanceled)
{
	FString TextString;
	UDialogueDataTable* DataTable = nullptr;

	if (FFileHelper::LoadFileToString(TextString, *Filename))
	{
		DataTable = NewObject<UDialogueDataTable>(InParent, InClass, InName, Flags);
		DataTable->RowStruct = FDialogueDataStruct::StaticStruct();

		TArray<FDialogueDataStruct> Array = UDialogueLibrary::GetDataArray(TextString);
		for (const FDialogueDataStruct Value : Array)
		{
			DataTable->AddRow(FName(*FString("Index: ").Append(FString::FromInt(Value.ID))), Value);
		}
	}
	bOutOperationCanceled = false;
	return DataTable;
}
