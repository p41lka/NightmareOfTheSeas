/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/

#pragma once

#include "CoreMinimal.h"
#include "JsonObjectConverter.h"
#include "UObject/Object.h"
#include "Data/Data.h"
#include "DialogueLibrary.generated.h"


UENUM()
enum class EResult: uint8
{
	None,
	Continue,

	Main,
	NPC,
	Player,
	If,
	Commands,
	Branch,
	Random
};


UCLASS(Abstract)
class DIALOGUESX_API UDialogueLibrary : public UObject
{
	GENERATED_BODY()

public:
	static TArray<FDialogueDataStruct> GetDataArray(const FString& Text);


	static EResult GetDataFromJsonNode(const TSharedPtr<FJsonValue> ArrayOfNodes, int32 Index,
	                                   FDialogueDataStruct& Struct, bool& IsStart);


	static bool GetDataFromJsonEdges(const TSharedPtr<FJsonValue> ArrayOfEdges, const int32 Index,
	                                 FEdgeStruct& Structure);

	static EType GetPropertyType(const FString Type);

	static ESign GetSign(const FString Sign);


	static bool CompareValues(const EType Type, const FString& Value_1, const ESign Sign, const FString& Value_2);


	template <typename T>
	static bool ConditionResult(T Val2, T Val1, const ESign Condition);


	static bool GetValue(const EType Type, const FName& Name, const TArray<FDataStruct>& Data, FString& Value);

	static bool GetProperty(const FName& Name, const TArray<FPropertyStruct>& Properties, FString& Value);

	static void GetConnectedNodes(const TArray<FDialogueDataStruct>& Nodes, const TArray<int32>& Connections,
	                              TArray<FDialogueDataStruct>& Player, TArray<FDialogueDataStruct>& NPC,
	                              TArray<FDialogueDataStruct>& Other);
};
