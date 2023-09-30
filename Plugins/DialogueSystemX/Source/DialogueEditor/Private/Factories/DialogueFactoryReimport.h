/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#pragma once

#include "CoreMinimal.h"
#include "Factories/ReimportDataTableFactory.h"
#include "EditorReimportHandler.h"
#include "DialogueFactoryReimport.generated.h"

/**
 * 
 */
UCLASS()
class DIALOGUEEDITOR_API UDialogueFactoryReimport : public UReimportDataTableFactory
{
	GENERATED_BODY()

	UDialogueFactoryReimport(const FObjectInitializer& ObjectInitializer);

	virtual EReimportResult::Type Reimport(UObject* Obj) override;
	virtual bool CanReimport(UObject* Obj, TArray<FString>& OutFilenames) override;
	virtual void SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths) override;
	virtual int32 GetPriority() const override;
};
