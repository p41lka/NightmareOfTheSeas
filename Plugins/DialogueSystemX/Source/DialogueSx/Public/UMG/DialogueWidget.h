/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Michail Oliinik <m19tes@gmail.com> All Rights Reserved.
*/

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data.h"
#include "DialogueDataTable.h"
#include "DialogueFunctions.h"
#include "DialogueLibrary.h"
#include "DialogueWidget.generated.h"


/**
 * 
 */


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStartTextPrinting, FText, Text, const TArray<FDataStruct>&, Data,
                                               const TArray<FString>&, Commands);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEndTextPrinting, const TArray<FDataStruct>&, Data,
                                             const TArray<FString>&, Commands);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnReplyClick, const TArray<FDataStruct>&, Data, const TArray<FString>&,
                                               Commands, const TArray<int32>&, Connections);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndDialogue);

USTRUCT(BlueprintType)
struct FReplyStruct
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	TArray<FDataStruct> ShowIf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	TArray<FDataStruct> Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	TArray<FString> Commands;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	TArray<int32> Connections;

	UPROPERTY()
	int32 Priority = 0;
};


USTRUCT(BlueprintType)
struct FNPCStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	TArray<FDataStruct> Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	TArray<int32> Connections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	TArray<FString> Commands;
};


UCLASS(Abstract)
class DIALOGUESX_API UDialogueWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = ( ExposeOnSpawn), Category="Dialogue")
	UDialogueDataTable* Dialogue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	TArray<FDialogueDataStruct> DialogueData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ExposeOnSpawn), Category="Dialogue")
	UObject* ContextObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ExposeOnSpawn), Category="Dialogue")
	TSubclassOf<UDialogueFunctions> FunctionsClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ExposeOnSpawn), Category="Dialogue")
	TArray<FPropertyStruct> Properties;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Dialogue")
	TArray<FReplyStruct> CurrentReplies;

	UPROPERTY(BlueprintReadOnly, Category="Dialogue")
	FNPCStruct CurrentNPC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	FText ContinueText;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Dialogue")
	FORCEINLINE bool CompareValues(const EType Type, const FString& Value_1, const ESign Sign, const FString& Value_2) const
	{
		return UDialogueLibrary::CompareValues(Type, Value_1, Sign, Value_2);
	}

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Dialogue")
	FORCEINLINE TArray<FReplyStruct> GetCurrentReplies() const { return CurrentReplies; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Dialogue")
	bool ShowReply(const FDataStruct& Data);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Dialogue")
	FString GetPropertyValueAsString(const FName& Name);

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	bool GetIntegerField(const FName Name, const TArray<FDataStruct>& Data, int32& Value);

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	bool GetStringField(const FName Name, const TArray<FDataStruct>& Data, FString& Value);

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	bool GetFloatField(const FName Name, const TArray<FDataStruct>& Data, float& Value);

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	bool GetBoolField(const FName Name, const TArray<FDataStruct>& Data, bool& Value);

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Dispatchers")
	FOnReplyClick OnReplyClick;

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Dispatchers")
	FOnStartTextPrinting OnStartTextPrinting;

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Dispatchers")
	FOnEndTextPrinting OnEndTextPrinting;

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Dispatchers")
	FOnEndDialogue OnEndDialogue;

protected:
	UPROPERTY()
	UDialogueFunctions* FunctionsObject;

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void NextState(const TArray<int32>& Connections);

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void AddReplies(const TArray<FDialogueDataStruct>& Replies, const TArray<FString>& Commands,
	                const TArray<FDataStruct>& ShowIf);

	UFUNCTION(BlueprintCallable, Category="Dialogue")
	void ClearReplies();

	TArray<FDialogueDataStruct> GetAllDataTableRows() const;

	void InitializeReplies(const TArray<FDialogueDataStruct>& Nodes, const TArray<FDataStruct> ShowIf,
	                       const TArray<FString> Commands);

	void InitializeNPC(const TArray<FDialogueDataStruct>& Nodes, const TArray<FString> Commands);

	void GetConnectedNodes(const TArray<int32>& Connections,
	                       TArray<FDialogueDataStruct>& Player, TArray<FDialogueDataStruct>& NPC,
	                       TArray<FDialogueDataStruct>& Other) const;

	void InitializeNewState(const FDialogueDataStruct NPCNode, const TArray<FString>& Commands);

	void SortByPriority();

	void CallFunctions(const TArray<FString>& Commands);


private:
	
	UFUNCTION()
	void OnReplyFun(const TArray<FDataStruct>& Data, const TArray<FString>&
	                Commands, const TArray<int32>& Connections);


	UFUNCTION()
	void OnTextStartPrintingFun(FText Text, const TArray<FDataStruct>& Data,
	                            const TArray<FString>& Commands);
	
	virtual void NativeConstruct() override;

	virtual void FinishDestroy() override;
};
