/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/

#pragma once
#include "Engine/DataTable.h"
#include "Data.generated.h"

/**
 * 
 */


USTRUCT()
struct FEdgeStruct
{
	GENERATED_BODY()

	UPROPERTY()
	int32 Source;

	UPROPERTY()
	FString SourceHandle;

	UPROPERTY()
	int32 Target;

	UPROPERTY()
	int32 TargetHandle;
};


UENUM(BlueprintType)
enum class ESign :uint8
{
	None UMETA(DisplayName = "None"),
	More UMETA(DisplayName = "More >"),
	Less UMETA(DisplayName = "Less <"),
	Equal UMETA(DisplayName = "Equal =="),
	NotEqual UMETA(DisplayName = "NotEqual !="),
	LessAndEqual UMETA(DisplayName = "LessAndEqual <="),
	MoreAndEqual UMETA(DisplayName = "MoreAndEqual >=")
};

UENUM(BlueprintType)
enum class EType: uint8
{
	Integer,
	Float,
	String,
	Bool
};

USTRUCT(BlueprintType)
struct FDataStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Property Condition")
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Property Condition")
	EType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Property Condition")
	FString Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Property Condition")
	ESign Sign;

	FDataStruct()
	{
		Sign = ESign::None;
		Type = EType::Integer;
	}
};


UENUM(BlueprintType)
enum class ENodeType: uint8
{
	Player,
	NPC,
	If,
	Branch,
	Commands,
	Random
};


USTRUCT(BlueprintType)
struct FDialogueDataStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue Data")
	ENodeType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue Data")
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue Data")
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue Data")
	TArray<FDataStruct> Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue Data")
	TArray<int32> Connections;

	UPROPERTY()
	int32 Priority;


	FDialogueDataStruct()
	{
		Type = ENodeType::Player;
		ID = -1;
		Priority = 0;
	}
};


USTRUCT(BlueprintType)
struct FPropertyStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	FName Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	FString Value;
};
