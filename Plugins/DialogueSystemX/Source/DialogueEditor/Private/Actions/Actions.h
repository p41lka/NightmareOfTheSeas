/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"


class DIALOGUEEDITOR_API FActions : public FAssetTypeActions_Base
{
public:
	FActions(uint32 InAssetCategory);
	virtual uint32 GetCategories() override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override;

private:
	uint32 MyAssetCategory;
	
};
