/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#pragma once

#include "CoreMinimal.h"
#include  "Factories/Factory.h"
#include "DialogueFactoryFile.generated.h"

/**
 * 
 */
UCLASS()
class DIALOGUEEDITOR_API UDialogueFactoryFile : public UFactory
{
	GENERATED_BODY()

	UDialogueFactoryFile(const FObjectInitializer& ObjectInitializer);

	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	                                   const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn,
	                                   bool& bOutOperationCanceled) override;
};
