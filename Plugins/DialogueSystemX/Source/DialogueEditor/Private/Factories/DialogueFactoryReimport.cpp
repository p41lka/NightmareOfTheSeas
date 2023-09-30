/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#include "DialogueFactoryReimport.h"
#include "Data.h"
#include "DialogueDataTable.h"
#include "DialogueLibrary.h"
#include "Engine/DataTable.h"
#include "Misc/FileHelper.h"


UDialogueFactoryReimport::UDialogueFactoryReimport(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Formats.Add(FString(TEXT("dlg;")) + NSLOCTEXT("UTextAssetFactory", "FormatDlg", "Dialog File").ToString());
	SupportedClass = UDialogueDataTable::StaticClass();
	AutomatedImportSettings.ImportRowStruct = FDialogueDataStruct::StaticStruct();
}


EReimportResult::Type UDialogueFactoryReimport::Reimport(UObject* Obj)
{
	UDialogueDataTable* DataTable = Cast<UDialogueDataTable>(Obj);
	FString TextString;
	if (!DataTable) return EReimportResult::Failed;
	if (FFileHelper::LoadFileToString(TextString, *PreferredReimportPath))
	{
		DataTable->EmptyTable();

		TArray<FDialogueDataStruct> Array = UDialogueLibrary::GetDataArray(TextString);
		for (const FDialogueDataStruct Value : Array)
		{
			DataTable->AddRow(FName(*FString("Index: ").Append(FString::FromInt(Value.ID))), Value);
		}
		Obj->MarkPackageDirty();
		return EReimportResult::Succeeded;
	}

	return EReimportResult::Failed;
}

bool UDialogueFactoryReimport::CanReimport(UObject* Obj, TArray<FString>& OutFilenames)
{
	if (Obj)
		return Cast<UDialogueDataTable>(Obj) ? true : false;
	return false;
}

void UDialogueFactoryReimport::SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)
{
}

int32 UDialogueFactoryReimport::GetPriority() const
{
	return 100;
}
