/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogueFunctions.generated.h"

UCLASS(Blueprintable, hidecategories=Object, CollapseCategories)
class DIALOGUESX_API UDialogueFunctions : public UObject
{
	GENERATED_BODY()
	
	virtual UWorld* GetWorld() const override;
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ExposeOnSpawn), Category="Functions")
	UObject* ContextObject;

	UFUNCTION(BlueprintCallable, Category="Functions")
	void CallFunctionByName(const FString Name);

	UFUNCTION(BlueprintCallable, Category="Functions")
	void CallAllFunctions(const TArray<FString>& FunctionNames);
};
