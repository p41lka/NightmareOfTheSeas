/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#include "FactoryFunctions.h"
#include "DialogueEditor.h"
#include "DialogueFunctions.h"


UFactoryFunctions::UFactoryFunctions(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	ParentClass = UDialogueFunctions::StaticClass();
	bSkipClassPicker = true;
}

FText UFactoryFunctions::GetDisplayName() const
{
	return FText::FromString("Functions");
}

uint32 UFactoryFunctions::GetMenuCategories() const
{
	return FDialogueEditor::GameAssetCategory;
}

FString UFactoryFunctions::GetDefaultNewAssetName() const
{
	return TEXT("NewDilogueFunctions");
}


UObject* UFactoryFunctions::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
											 UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UDialogueFunctions>(InParent, InClass, InName, Flags | RF_Transactional);
}
