/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#pragma once

#include "CoreMinimal.h"
#include "Factories/DataTableFactory.h"
#include "DialogueFactory.generated.h"

/**
 * 
 */
UCLASS()
class DIALOGUEEDITOR_API UDialogueFactory : public UDataTableFactory
{
	GENERATED_BODY()

	UDialogueFactory(const FObjectInitializer& ObjectInitializer);

	virtual FText GetDisplayName() const override;
	virtual uint32 GetMenuCategories() const override;
	virtual FString GetDefaultNewAssetName() const override;
	virtual bool ConfigureProperties() override;
	virtual UDataTable* MakeNewDataTable(UObject* InParent, FName Name, EObjectFlags Flags) override;
};
