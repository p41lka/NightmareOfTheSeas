/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#include "Actions.h"

#include "DialogueLibrary.h"


FActions::FActions(uint32 InAssetCategory): MyAssetCategory(InAssetCategory)
{
}

uint32 FActions::GetCategories()
{
	return MyAssetCategory;
}

FColor FActions::GetTypeColor() const
{
	return FColor::Green;
}

UClass* FActions::GetSupportedClass() const
{
	return ::UDialogueLibrary::StaticClass();
}

FText FActions::GetName() const
{
	return FText::FromString("NewDialogue");
}

FText FActions::GetAssetDescription(const FAssetData& AssetData) const
{
	return FText::FromString("Dialogue");
}
