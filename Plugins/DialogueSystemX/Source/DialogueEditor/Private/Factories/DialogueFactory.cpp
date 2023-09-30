/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#include "DialogueFactory.h"
#include "DialogueEditor.h"
#include "DialogueDataTable.h"
#include "DialogueLibrary.h"


UDialogueFactory::UDialogueFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UDialogueLibrary::StaticClass();
	Struct = FDialogueDataStruct::StaticStruct();
}

FText UDialogueFactory::GetDisplayName() const
{
	return FText::FromString("Dialogue");
}

uint32 UDialogueFactory::GetMenuCategories() const
{
	return FDialogueEditor::GameAssetCategory;
}

bool UDialogueFactory::ConfigureProperties()
{
	return true;
}


UDataTable* UDialogueFactory::MakeNewDataTable(UObject* InParent, FName Name, EObjectFlags Flags)
{
	UDialogueDataTable* DataTable = NewObject<UDialogueDataTable>(InParent, Name, Flags);
	return DataTable;
}

FString UDialogueFactory::GetDefaultNewAssetName() const
{
	return TEXT("NewDialogue");
}
