/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#include "FunctionsActions.h"

#include "DialogueFunctions.h"


FFunctionsActions::FFunctionsActions(uint32 InAssetCategory):MyAssetCategory(InAssetCategory)
{}

uint32 FFunctionsActions::GetCategories()
{
	return MyAssetCategory;
}

FColor FFunctionsActions::GetTypeColor() const
{
	return FColor::Blue;
}

UClass* FFunctionsActions::GetSupportedClass() const
{
	return ::UDialogueFunctions::StaticClass();
}

FText FFunctionsActions::GetName() const
{
	return FText::FromString("NewFunctions");
}

FText FFunctionsActions::GetAssetDescription(const FAssetData& AssetData) const
{
	return FText::FromString("Dialogue Functions");
}




