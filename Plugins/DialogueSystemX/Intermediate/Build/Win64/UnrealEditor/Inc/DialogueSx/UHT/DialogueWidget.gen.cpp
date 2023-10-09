// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/DialogueWidget.h"
#include "Data/Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DIALOGUESX_API UClass* Z_Construct_UClass_UDialogueDataTable_NoRegister();
	DIALOGUESX_API UClass* Z_Construct_UClass_UDialogueFunctions_NoRegister();
	DIALOGUESX_API UClass* Z_Construct_UClass_UDialogueWidget();
	DIALOGUESX_API UClass* Z_Construct_UClass_UDialogueWidget_NoRegister();
	DIALOGUESX_API UEnum* Z_Construct_UEnum_DialogueSx_ESign();
	DIALOGUESX_API UEnum* Z_Construct_UEnum_DialogueSx_EType();
	DIALOGUESX_API UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature();
	DIALOGUESX_API UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature();
	DIALOGUESX_API UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature();
	DIALOGUESX_API UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature();
	DIALOGUESX_API UScriptStruct* Z_Construct_UScriptStruct_FDataStruct();
	DIALOGUESX_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueDataStruct();
	DIALOGUESX_API UScriptStruct* Z_Construct_UScriptStruct_FNPCStruct();
	DIALOGUESX_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyStruct();
	DIALOGUESX_API UScriptStruct* Z_Construct_UScriptStruct_FReplyStruct();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DialogueSx();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics
	{
		struct _Script_DialogueSx_eventOnStartTextPrinting_Parms
		{
			FText Text;
			TArray<FDataStruct> Data;
			TArray<FString> Commands;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DialogueSx_eventOnStartTextPrinting_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DialogueSx_eventOnStartTextPrinting_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Commands_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DialogueSx_eventOnStartTextPrinting_Parms, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::NewProp_Commands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DialogueSx, nullptr, "OnStartTextPrinting__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::_Script_DialogueSx_eventOnStartTextPrinting_Parms), Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStartTextPrinting_DelegateWrapper(const FMulticastScriptDelegate& OnStartTextPrinting, const FText& Text, TArray<FDataStruct> const& Data, TArray<FString> const& Commands)
{
	struct _Script_DialogueSx_eventOnStartTextPrinting_Parms
	{
		FText Text;
		TArray<FDataStruct> Data;
		TArray<FString> Commands;
	};
	_Script_DialogueSx_eventOnStartTextPrinting_Parms Parms;
	Parms.Text=Text;
	Parms.Data=Data;
	Parms.Commands=Commands;
	OnStartTextPrinting.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics
	{
		struct _Script_DialogueSx_eventOnEndTextPrinting_Parms
		{
			TArray<FDataStruct> Data;
			TArray<FString> Commands;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DialogueSx_eventOnEndTextPrinting_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Commands_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DialogueSx_eventOnEndTextPrinting_Parms, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::NewProp_Commands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DialogueSx, nullptr, "OnEndTextPrinting__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::_Script_DialogueSx_eventOnEndTextPrinting_Parms), Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEndTextPrinting_DelegateWrapper(const FMulticastScriptDelegate& OnEndTextPrinting, TArray<FDataStruct> const& Data, TArray<FString> const& Commands)
{
	struct _Script_DialogueSx_eventOnEndTextPrinting_Parms
	{
		TArray<FDataStruct> Data;
		TArray<FString> Commands;
	};
	_Script_DialogueSx_eventOnEndTextPrinting_Parms Parms;
	Parms.Data=Data;
	Parms.Commands=Commands;
	OnEndTextPrinting.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics
	{
		struct _Script_DialogueSx_eventOnReplyClick_Parms
		{
			TArray<FDataStruct> Data;
			TArray<FString> Commands;
			TArray<int32> Connections;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DialogueSx_eventOnReplyClick_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Commands_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DialogueSx_eventOnReplyClick_Parms, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Connections_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DialogueSx_eventOnReplyClick_Parms, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Connections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Commands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::NewProp_Connections,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DialogueSx, nullptr, "OnReplyClick__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::_Script_DialogueSx_eventOnReplyClick_Parms), Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReplyClick_DelegateWrapper(const FMulticastScriptDelegate& OnReplyClick, TArray<FDataStruct> const& Data, TArray<FString> const& Commands, TArray<int32> const& Connections)
{
	struct _Script_DialogueSx_eventOnReplyClick_Parms
	{
		TArray<FDataStruct> Data;
		TArray<FString> Commands;
		TArray<int32> Connections;
	};
	_Script_DialogueSx_eventOnReplyClick_Parms Parms;
	Parms.Data=Data;
	Parms.Commands=Commands;
	Parms.Connections=Connections;
	OnReplyClick.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DialogueSx, nullptr, "OnEndDialogue__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEndDialogue_DelegateWrapper(const FMulticastScriptDelegate& OnEndDialogue)
{
	OnEndDialogue.ProcessMulticastDelegate<UObject>(NULL);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplyStruct;
class UScriptStruct* FReplyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplyStruct, (UObject*)Z_Construct_UPackage__Script_DialogueSx(), TEXT("ReplyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ReplyStruct.OuterSingleton;
}
template<> DIALOGUESX_API UScriptStruct* StaticStruct<FReplyStruct>()
{
	return FReplyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowIf_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowIf_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowIf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplyStruct>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_ShowIf_Inner = { "ShowIf", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_ShowIf_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_ShowIf = { "ShowIf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplyStruct, ShowIf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_ShowIf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_ShowIf_MetaData)) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplyStruct, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplyStruct, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Commands_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplyStruct, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Connections_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplyStruct, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Connections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplyStruct, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_ShowIf_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_ShowIf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Commands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Connections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplyStruct_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSx,
		nullptr,
		&NewStructOps,
		"ReplyStruct",
		sizeof(FReplyStruct),
		alignof(FReplyStruct),
		Z_Construct_UScriptStruct_FReplyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplyStruct.InnerSingleton, Z_Construct_UScriptStruct_FReplyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplyStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCStruct;
class UScriptStruct* FNPCStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCStruct, (UObject*)Z_Construct_UPackage__Script_DialogueSx(), TEXT("NPCStruct"));
	}
	return Z_Registration_Info_UScriptStruct_NPCStruct.OuterSingleton;
}
template<> DIALOGUESX_API UScriptStruct* StaticStruct<FNPCStruct>()
{
	return FNPCStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNPCStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNPCStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCStruct, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCStruct, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Connections_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCStruct, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Connections_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Commands_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCStruct, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Connections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCStruct_Statics::NewProp_Commands,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSx,
		nullptr,
		&NewStructOps,
		"NPCStruct",
		sizeof(FNPCStruct),
		alignof(FNPCStruct),
		Z_Construct_UScriptStruct_FNPCStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNPCStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_NPCStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCStruct.InnerSingleton, Z_Construct_UScriptStruct_FNPCStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NPCStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(UDialogueWidget::execOnTextStartPrintingFun)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_GET_TARRAY_REF(FDataStruct,Z_Param_Out_Data);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Commands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextStartPrintingFun(Z_Param_Text,Z_Param_Out_Data,Z_Param_Out_Commands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execOnReplyFun)
	{
		P_GET_TARRAY_REF(FDataStruct,Z_Param_Out_Data);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Commands);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Connections);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplyFun(Z_Param_Out_Data,Z_Param_Out_Commands,Z_Param_Out_Connections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execClearReplies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearReplies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execAddReplies)
	{
		P_GET_TARRAY_REF(FDialogueDataStruct,Z_Param_Out_Replies);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Commands);
		P_GET_TARRAY_REF(FDataStruct,Z_Param_Out_ShowIf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddReplies(Z_Param_Out_Replies,Z_Param_Out_Commands,Z_Param_Out_ShowIf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execNextState)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Connections);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextState(Z_Param_Out_Connections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execGetBoolField)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FDataStruct,Z_Param_Out_Data);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolField(Z_Param_Name,Z_Param_Out_Data,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execGetFloatField)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FDataStruct,Z_Param_Out_Data);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatField(Z_Param_Name,Z_Param_Out_Data,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execGetStringField)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FDataStruct,Z_Param_Out_Data);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringField(Z_Param_Name,Z_Param_Out_Data,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execGetIntegerField)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FDataStruct,Z_Param_Out_Data);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIntegerField(Z_Param_Name,Z_Param_Out_Data,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execGetPropertyValueAsString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPropertyValueAsString(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execShowReply)
	{
		P_GET_STRUCT_REF(FDataStruct,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowReply(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execGetCurrentReplies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FReplyStruct>*)Z_Param__Result=P_THIS->GetCurrentReplies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execCompareValues)
	{
		P_GET_ENUM(EType,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value_1);
		P_GET_ENUM(ESign,Z_Param_Sign);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value_2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CompareValues(EType(Z_Param_Type),Z_Param_Value_1,ESign(Z_Param_Sign),Z_Param_Value_2);
		P_NATIVE_END;
	}
	void UDialogueWidget::StaticRegisterNativesUDialogueWidget()
	{
		UClass* Class = UDialogueWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddReplies", &UDialogueWidget::execAddReplies },
			{ "ClearReplies", &UDialogueWidget::execClearReplies },
			{ "CompareValues", &UDialogueWidget::execCompareValues },
			{ "GetBoolField", &UDialogueWidget::execGetBoolField },
			{ "GetCurrentReplies", &UDialogueWidget::execGetCurrentReplies },
			{ "GetFloatField", &UDialogueWidget::execGetFloatField },
			{ "GetIntegerField", &UDialogueWidget::execGetIntegerField },
			{ "GetPropertyValueAsString", &UDialogueWidget::execGetPropertyValueAsString },
			{ "GetStringField", &UDialogueWidget::execGetStringField },
			{ "NextState", &UDialogueWidget::execNextState },
			{ "OnReplyFun", &UDialogueWidget::execOnReplyFun },
			{ "OnTextStartPrintingFun", &UDialogueWidget::execOnTextStartPrintingFun },
			{ "ShowReply", &UDialogueWidget::execShowReply },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics
	{
		struct DialogueWidget_eventAddReplies_Parms
		{
			TArray<FDialogueDataStruct> Replies;
			TArray<FString> Commands;
			TArray<FDataStruct> ShowIf;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Replies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Replies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Replies;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowIf_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowIf_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowIf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Replies_Inner = { "Replies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDialogueDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3055850866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Replies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Replies = { "Replies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventAddReplies_Parms, Replies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Replies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Replies_MetaData)) }; // 3055850866
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Commands_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventAddReplies_Parms, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_ShowIf_Inner = { "ShowIf", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_ShowIf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_ShowIf = { "ShowIf", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventAddReplies_Parms, ShowIf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_ShowIf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_ShowIf_MetaData)) }; // 3401700650
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Replies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Replies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_Commands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_ShowIf_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::NewProp_ShowIf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "AddReplies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::DialogueWidget_eventAddReplies_Parms), Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_AddReplies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_AddReplies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_ClearReplies_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_ClearReplies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_ClearReplies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "ClearReplies", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_ClearReplies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_ClearReplies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_ClearReplies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_ClearReplies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics
	{
		struct DialogueWidget_eventCompareValues_Parms
		{
			EType Type;
			FString Value_1;
			ESign Sign;
			FString Value_2;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value_1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Sign_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sign_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Sign;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value_2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventCompareValues_Parms, Type), Z_Construct_UEnum_DialogueSx_EType, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Type_MetaData)) }; // 3115671074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Value_1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Value_1 = { "Value_1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventCompareValues_Parms, Value_1), METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Value_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Value_1_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Sign_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Sign_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Sign = { "Sign", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventCompareValues_Parms, Sign), Z_Construct_UEnum_DialogueSx_ESign, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Sign_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Sign_MetaData)) }; // 1751508081
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Value_2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Value_2 = { "Value_2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventCompareValues_Parms, Value_2), METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Value_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Value_2_MetaData)) };
	void Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueWidget_eventCompareValues_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueWidget_eventCompareValues_Parms), &Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Value_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Sign_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Sign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_Value_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "CompareValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::DialogueWidget_eventCompareValues_Parms), Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_CompareValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_CompareValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics
	{
		struct DialogueWidget_eventGetBoolField_Parms
		{
			FName Name;
			TArray<FDataStruct> Data;
			bool Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetBoolField_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetBoolField_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Data_MetaData)) }; // 3401700650
	void Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((DialogueWidget_eventGetBoolField_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueWidget_eventGetBoolField_Parms), &Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueWidget_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueWidget_eventGetBoolField_Parms), &Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "GetBoolField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::DialogueWidget_eventGetBoolField_Parms), Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_GetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_GetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics
	{
		struct DialogueWidget_eventGetCurrentReplies_Parms
		{
			TArray<FReplyStruct> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FReplyStruct, METADATA_PARAMS(nullptr, 0) }; // 2329764912
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetCurrentReplies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2329764912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "GetCurrentReplies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::DialogueWidget_eventGetCurrentReplies_Parms), Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics
	{
		struct DialogueWidget_eventGetFloatField_Parms
		{
			FName Name;
			TArray<FDataStruct> Data;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetFloatField_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetFloatField_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetFloatField_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueWidget_eventGetFloatField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueWidget_eventGetFloatField_Parms), &Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "GetFloatField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::DialogueWidget_eventGetFloatField_Parms), Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_GetFloatField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_GetFloatField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics
	{
		struct DialogueWidget_eventGetIntegerField_Parms
		{
			FName Name;
			TArray<FDataStruct> Data;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetIntegerField_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetIntegerField_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetIntegerField_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueWidget_eventGetIntegerField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueWidget_eventGetIntegerField_Parms), &Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "GetIntegerField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::DialogueWidget_eventGetIntegerField_Parms), Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_GetIntegerField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_GetIntegerField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics
	{
		struct DialogueWidget_eventGetPropertyValueAsString_Parms
		{
			FName Name;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetPropertyValueAsString_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetPropertyValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "GetPropertyValueAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::DialogueWidget_eventGetPropertyValueAsString_Parms), Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics
	{
		struct DialogueWidget_eventGetStringField_Parms
		{
			FName Name;
			TArray<FDataStruct> Data;
			FString Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetStringField_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetStringField_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventGetStringField_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueWidget_eventGetStringField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueWidget_eventGetStringField_Parms), &Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "GetStringField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::DialogueWidget_eventGetStringField_Parms), Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_GetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_GetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_NextState_Statics
	{
		struct DialogueWidget_eventNextState_Parms
		{
			TArray<int32> Connections;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueWidget_NextState_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_NextState_Statics::NewProp_Connections_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_NextState_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventNextState_Parms, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_NextState_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_NextState_Statics::NewProp_Connections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_NextState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_NextState_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_NextState_Statics::NewProp_Connections,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_NextState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_NextState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "NextState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_NextState_Statics::DialogueWidget_eventNextState_Parms), Z_Construct_UFunction_UDialogueWidget_NextState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_NextState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_NextState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_NextState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_NextState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_NextState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics
	{
		struct DialogueWidget_eventOnReplyFun_Parms
		{
			TArray<FDataStruct> Data;
			TArray<FString> Commands;
			TArray<int32> Connections;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventOnReplyFun_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Commands_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventOnReplyFun_Parms, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Connections_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventOnReplyFun_Parms, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Connections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Commands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::NewProp_Connections,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "OnReplyFun", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::DialogueWidget_eventOnReplyFun_Parms), Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_OnReplyFun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_OnReplyFun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics
	{
		struct DialogueWidget_eventOnTextStartPrintingFun_Parms
		{
			FText Text;
			TArray<FDataStruct> Data;
			TArray<FString> Commands;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventOnTextStartPrintingFun_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventOnTextStartPrintingFun_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Commands_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventOnTextStartPrintingFun_Parms, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::NewProp_Commands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "OnTextStartPrintingFun", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::DialogueWidget_eventOnTextStartPrintingFun_Parms), Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics
	{
		struct DialogueWidget_eventShowReply_Parms
		{
			FDataStruct Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidget_eventShowReply_Parms, Data), Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::NewProp_Data_MetaData)) }; // 3401700650
	void Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueWidget_eventShowReply_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueWidget_eventShowReply_Parms), &Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "ShowReply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::DialogueWidget_eventShowReply_Parms), Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_ShowReply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_ShowReply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueWidget);
	UClass* Z_Construct_UClass_UDialogueWidget_NoRegister()
	{
		return UDialogueWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FunctionsClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentReplies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentReplies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentReplies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNPC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentNPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinueText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ContinueText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReplyClick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReplyClick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartTextPrinting_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartTextPrinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndTextPrinting_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndTextPrinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndDialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionsObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionsObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSx,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueWidget_AddReplies, "AddReplies" }, // 1554799657
		{ &Z_Construct_UFunction_UDialogueWidget_ClearReplies, "ClearReplies" }, // 3646315882
		{ &Z_Construct_UFunction_UDialogueWidget_CompareValues, "CompareValues" }, // 523774495
		{ &Z_Construct_UFunction_UDialogueWidget_GetBoolField, "GetBoolField" }, // 2799476799
		{ &Z_Construct_UFunction_UDialogueWidget_GetCurrentReplies, "GetCurrentReplies" }, // 4110531165
		{ &Z_Construct_UFunction_UDialogueWidget_GetFloatField, "GetFloatField" }, // 2907181816
		{ &Z_Construct_UFunction_UDialogueWidget_GetIntegerField, "GetIntegerField" }, // 473694504
		{ &Z_Construct_UFunction_UDialogueWidget_GetPropertyValueAsString, "GetPropertyValueAsString" }, // 4290826148
		{ &Z_Construct_UFunction_UDialogueWidget_GetStringField, "GetStringField" }, // 3238663654
		{ &Z_Construct_UFunction_UDialogueWidget_NextState, "NextState" }, // 738323924
		{ &Z_Construct_UFunction_UDialogueWidget_OnReplyFun, "OnReplyFun" }, // 3012260737
		{ &Z_Construct_UFunction_UDialogueWidget_OnTextStartPrintingFun, "OnTextStartPrintingFun" }, // 3391196465
		{ &Z_Construct_UFunction_UDialogueWidget_ShowReply, "ShowReply" }, // 1970236713
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMG/DialogueWidget.h" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Dialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, Dialogue), Z_Construct_UClass_UDialogueDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Dialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Dialogue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueData_Inner = { "DialogueData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDialogueDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3055850866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueData_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueData = { "DialogueData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, DialogueData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueData_MetaData)) }; // 3055850866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContextObject_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_FunctionsClass_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_FunctionsClass = { "FunctionsClass", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, FunctionsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogueFunctions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_FunctionsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_FunctionsClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyStruct, METADATA_PARAMS(nullptr, 0) }; // 1786543212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Properties_MetaData)) }; // 1786543212
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentReplies_Inner = { "CurrentReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FReplyStruct, METADATA_PARAMS(nullptr, 0) }; // 2329764912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentReplies_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentReplies = { "CurrentReplies", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, CurrentReplies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentReplies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentReplies_MetaData)) }; // 2329764912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentNPC_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentNPC = { "CurrentNPC", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, CurrentNPC), Z_Construct_UScriptStruct_FNPCStruct, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentNPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentNPC_MetaData)) }; // 2976169987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContinueText_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContinueText = { "ContinueText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, ContinueText), METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContinueText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContinueText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnReplyClick_MetaData[] = {
		{ "Category", "Dispatchers" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnReplyClick = { "OnReplyClick", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, OnReplyClick), Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnReplyClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnReplyClick_MetaData)) }; // 2087099235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnStartTextPrinting_MetaData[] = {
		{ "Category", "Dispatchers" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnStartTextPrinting = { "OnStartTextPrinting", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, OnStartTextPrinting), Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnStartTextPrinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnStartTextPrinting_MetaData)) }; // 1242420413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnEndTextPrinting_MetaData[] = {
		{ "Category", "Dispatchers" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnEndTextPrinting = { "OnEndTextPrinting", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, OnEndTextPrinting), Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnEndTextPrinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnEndTextPrinting_MetaData)) }; // 3313812953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnEndDialogue_MetaData[] = {
		{ "Category", "Dispatchers" },
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnEndDialogue = { "OnEndDialogue", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, OnEndDialogue), Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnEndDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnEndDialogue_MetaData)) }; // 2882879295
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_FunctionsObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMG/DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_FunctionsObject = { "FunctionsObject", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidget, FunctionsObject), Z_Construct_UClass_UDialogueFunctions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_FunctionsObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_FunctionsObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_FunctionsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentReplies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentReplies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_CurrentNPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_ContinueText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnReplyClick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnStartTextPrinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnEndTextPrinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_OnEndDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_FunctionsObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWidget_Statics::ClassParams = {
		&UDialogueWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueWidget()
	{
		if (!Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton, Z_Construct_UClass_UDialogueWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton;
	}
	template<> DIALOGUESX_API UClass* StaticClass<UDialogueWidget>()
	{
		return UDialogueWidget::StaticClass();
	}
	UDialogueWidget::UDialogueWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWidget);
	UDialogueWidget::~UDialogueWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_Statics::ScriptStructInfo[] = {
		{ FReplyStruct::StaticStruct, Z_Construct_UScriptStruct_FReplyStruct_Statics::NewStructOps, TEXT("ReplyStruct"), &Z_Registration_Info_UScriptStruct_ReplyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplyStruct), 2329764912U) },
		{ FNPCStruct::StaticStruct, Z_Construct_UScriptStruct_FNPCStruct_Statics::NewStructOps, TEXT("NPCStruct"), &Z_Registration_Info_UScriptStruct_NPCStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCStruct), 2976169987U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueWidget, UDialogueWidget::StaticClass, TEXT("UDialogueWidget"), &Z_Registration_Info_UClass_UDialogueWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueWidget), 2198030040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_4058556565(TEXT("/Script/DialogueSx"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
