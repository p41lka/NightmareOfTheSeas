/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#pragma once

#include "CoreMinimal.h"
#include "Factories/BlueprintFactory.h"
#include "FactoryFunctions.generated.h"

/**
 * 
 */
UCLASS()
class DIALOGUEEDITOR_API UFactoryFunctions : public UBlueprintFactory
{
	GENERATED_BODY()
	
	UFactoryFunctions(const FObjectInitializer& ObjectInitializer);
	
	virtual FText GetDisplayName() const override;
	virtual uint32 GetMenuCategories() const override;
	 virtual FString GetDefaultNewAssetName() const override;
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

};
