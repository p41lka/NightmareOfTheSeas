// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/QuestEditor/QuestEditorFunctionLibrary.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestEditorFunctionLibrary();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestEditorFunctionLibrary_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialog();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskID();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UQuestEditorFunctionLibrary::execGetQuestTasksIDs)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorFunctionLibrary::GetQuestTasksIDs(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorFunctionLibrary::execGetQuestEndTasks)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorFunctionLibrary::GetQuestEndTasks(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorFunctionLibrary::execGetAmountOfQuestEnds)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorFunctionLibrary::GetAmountOfQuestEnds(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorFunctionLibrary::execGetAmountOfQuestStarts)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorFunctionLibrary::GetAmountOfQuestStarts(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorFunctionLibrary::execConvertDialogToQuest)
	{
		P_GET_STRUCT_REF(FDialog,Z_Param_Out_DialogIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuest*)Z_Param__Result=UQuestEditorFunctionLibrary::ConvertDialogToQuest(Z_Param_Out_DialogIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorFunctionLibrary::execConvertQuestToDialog)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialog*)Z_Param__Result=UQuestEditorFunctionLibrary::ConvertQuestToDialog(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorFunctionLibrary::execGetDTDialogRowFromPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DTPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuest*)Z_Param__Result=UQuestEditorFunctionLibrary::GetDTDialogRowFromPath(Z_Param_RowName,Z_Param_DTPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorFunctionLibrary::execGetDTQuestRowFromPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DTPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuest*)Z_Param__Result=UQuestEditorFunctionLibrary::GetDTQuestRowFromPath(Z_Param_RowName,Z_Param_DTPath);
		P_NATIVE_END;
	}
	void UQuestEditorFunctionLibrary::StaticRegisterNativesUQuestEditorFunctionLibrary()
	{
		UClass* Class = UQuestEditorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertDialogToQuest", &UQuestEditorFunctionLibrary::execConvertDialogToQuest },
			{ "ConvertQuestToDialog", &UQuestEditorFunctionLibrary::execConvertQuestToDialog },
			{ "GetAmountOfQuestEnds", &UQuestEditorFunctionLibrary::execGetAmountOfQuestEnds },
			{ "GetAmountOfQuestStarts", &UQuestEditorFunctionLibrary::execGetAmountOfQuestStarts },
			{ "GetDTDialogRowFromPath", &UQuestEditorFunctionLibrary::execGetDTDialogRowFromPath },
			{ "GetDTQuestRowFromPath", &UQuestEditorFunctionLibrary::execGetDTQuestRowFromPath },
			{ "GetQuestEndTasks", &UQuestEditorFunctionLibrary::execGetQuestEndTasks },
			{ "GetQuestTasksIDs", &UQuestEditorFunctionLibrary::execGetQuestTasksIDs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics
	{
		struct QuestEditorFunctionLibrary_eventConvertDialogToQuest_Parms
		{
			FDialog DialogIn;
			FQuest ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::NewProp_DialogIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::NewProp_DialogIn = { "DialogIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventConvertDialogToQuest_Parms, DialogIn), Z_Construct_UScriptStruct_FDialog, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::NewProp_DialogIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::NewProp_DialogIn_MetaData)) }; // 1356337939
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventConvertDialogToQuest_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::NewProp_DialogIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Converts a dialog structure to a quest structure.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorFunctionLibrary.h" },
		{ "ToolTip", "Converts a dialog structure to a quest structure." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorFunctionLibrary, nullptr, "ConvertDialogToQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::QuestEditorFunctionLibrary_eventConvertDialogToQuest_Parms), Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics
	{
		struct QuestEditorFunctionLibrary_eventConvertQuestToDialog_Parms
		{
			FQuest QuestIn;
			FDialog ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventConvertQuestToDialog_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventConvertQuestToDialog_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialog, METADATA_PARAMS(nullptr, 0) }; // 1356337939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Converts a quest structure to a dialog structure.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorFunctionLibrary.h" },
		{ "ToolTip", "Converts a quest structure to a dialog structure." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorFunctionLibrary, nullptr, "ConvertQuestToDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::QuestEditorFunctionLibrary_eventConvertQuestToDialog_Parms), Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics
	{
		struct QuestEditorFunctionLibrary_eventGetAmountOfQuestEnds_Parms
		{
			FQuest QuestIn;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetAmountOfQuestEnds_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetAmountOfQuestEnds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09\x09*\x09Gets the total amount of quest end nodes.\n\x09\x09*\x09""All nodes that dont have inferior nodes are quest starts.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorFunctionLibrary.h" },
		{ "ToolTip", "Gets the total amount of quest end nodes.\nAll nodes that dont have inferior nodes are quest starts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorFunctionLibrary, nullptr, "GetAmountOfQuestEnds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::QuestEditorFunctionLibrary_eventGetAmountOfQuestEnds_Parms), Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics
	{
		struct QuestEditorFunctionLibrary_eventGetAmountOfQuestStarts_Parms
		{
			FQuest QuestIn;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetAmountOfQuestStarts_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetAmountOfQuestStarts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09\x09*\x09Gets the total amount of quest start nodes.\n\x09\x09*\x09""All nodes that dont have superior nodes are quest starts.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorFunctionLibrary.h" },
		{ "ToolTip", "Gets the total amount of quest start nodes.\nAll nodes that dont have superior nodes are quest starts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorFunctionLibrary, nullptr, "GetAmountOfQuestStarts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::QuestEditorFunctionLibrary_eventGetAmountOfQuestStarts_Parms), Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics
	{
		struct QuestEditorFunctionLibrary_eventGetDTDialogRowFromPath_Parms
		{
			FName RowName;
			TSoftObjectPtr<UDataTable> DTPath;
			FQuest ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DTPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetDTDialogRowFromPath_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::NewProp_DTPath = { "DTPath", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetDTDialogRowFromPath_Parms, DTPath), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetDTDialogRowFromPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::NewProp_RowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::NewProp_DTPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Gets dialog row from the dialogs DT and converts it to quest struct*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorFunctionLibrary.h" },
		{ "ToolTip", "Gets dialog row from the dialogs DT and converts it to quest struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorFunctionLibrary, nullptr, "GetDTDialogRowFromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::QuestEditorFunctionLibrary_eventGetDTDialogRowFromPath_Parms), Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics
	{
		struct QuestEditorFunctionLibrary_eventGetDTQuestRowFromPath_Parms
		{
			FName RowName;
			TSoftObjectPtr<UDataTable> DTPath;
			FQuest ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DTPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetDTQuestRowFromPath_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::NewProp_DTPath = { "DTPath", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetDTQuestRowFromPath_Parms, DTPath), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetDTQuestRowFromPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::NewProp_RowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::NewProp_DTPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Gets Quest row from the quest DT path*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorFunctionLibrary.h" },
		{ "ToolTip", "Gets Quest row from the quest DT path" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorFunctionLibrary, nullptr, "GetDTQuestRowFromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::QuestEditorFunctionLibrary_eventGetDTQuestRowFromPath_Parms), Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics
	{
		struct QuestEditorFunctionLibrary_eventGetQuestEndTasks_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetQuestEndTasks_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetQuestEndTasks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09\x09*\x09Gets all tasks of a quest that are quest ends.\n\x09\x09*\x09Quest end tasks have no inferior nodes.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorFunctionLibrary.h" },
		{ "ToolTip", "Gets all tasks of a quest that are quest ends.\nQuest end tasks have no inferior nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorFunctionLibrary, nullptr, "GetQuestEndTasks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::QuestEditorFunctionLibrary_eventGetQuestEndTasks_Parms), Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics
	{
		struct QuestEditorFunctionLibrary_eventGetQuestTasksIDs_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetQuestTasksIDs_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorFunctionLibrary_eventGetQuestTasksIDs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09\x09*\x09Gets all tasks IDs of a quest.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorFunctionLibrary.h" },
		{ "ToolTip", "Gets all tasks IDs of a quest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorFunctionLibrary, nullptr, "GetQuestTasksIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::QuestEditorFunctionLibrary_eventGetQuestTasksIDs_Parms), Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorFunctionLibrary);
	UClass* Z_Construct_UClass_UQuestEditorFunctionLibrary_NoRegister()
	{
		return UQuestEditorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertDialogToQuest, "ConvertDialogToQuest" }, // 3633423973
		{ &Z_Construct_UFunction_UQuestEditorFunctionLibrary_ConvertQuestToDialog, "ConvertQuestToDialog" }, // 3575094524
		{ &Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestEnds, "GetAmountOfQuestEnds" }, // 2533459923
		{ &Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetAmountOfQuestStarts, "GetAmountOfQuestStarts" }, // 1297513012
		{ &Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTDialogRowFromPath, "GetDTDialogRowFromPath" }, // 2121889578
		{ &Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetDTQuestRowFromPath, "GetDTQuestRowFromPath" }, // 2915869209
		{ &Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestEndTasks, "GetQuestEndTasks" }, // 986788944
		{ &Z_Construct_UFunction_UQuestEditorFunctionLibrary_GetQuestTasksIDs, "GetQuestTasksIDs" }, // 2207136539
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestEditor/QuestEditorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics::ClassParams = {
		&UQuestEditorFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEditorFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorFunctionLibrary.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UQuestEditorFunctionLibrary>()
	{
		return UQuestEditorFunctionLibrary::StaticClass();
	}
	UQuestEditorFunctionLibrary::UQuestEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorFunctionLibrary);
	UQuestEditorFunctionLibrary::~UQuestEditorFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorFunctionLibrary, UQuestEditorFunctionLibrary::StaticClass, TEXT("UQuestEditorFunctionLibrary"), &Z_Registration_Info_UClass_UQuestEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorFunctionLibrary), 2801594773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_888292486(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
