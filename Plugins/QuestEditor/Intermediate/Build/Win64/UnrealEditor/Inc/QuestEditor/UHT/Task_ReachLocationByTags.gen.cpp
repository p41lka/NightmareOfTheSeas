// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskLocation/Task_ReachLocationByTags.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_ReachLocationByTags() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_Location();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_ReachLocationByTags();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_ReachLocationByTags_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskPayload();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UTask_ReachLocationByTags::execGetTaskName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTaskName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTask_ReachLocationByTags::execGetTaskShortDescription)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_TARRAY_REF(FString,Z_Param_Out_CustomPayloadDataIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTaskShortDescription_Implementation(Z_Param_Out_PayloadIn,Z_Param_Out_CustomPayloadDataIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTask_ReachLocationByTags::execTaskShouldShowInUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskShouldShowInUI_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTask_ReachLocationByTags::execTaskShouldAnnounce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskShouldAnnounce_Implementation();
		P_NATIVE_END;
	}
	struct Task_ReachLocationByTags_eventGetTaskName_Parms
	{
		FString ReturnValue;
	};
	struct Task_ReachLocationByTags_eventGetTaskShortDescription_Parms
	{
		FQuestTaskPayload PayloadIn;
		TArray<FString> CustomPayloadDataIn;
		FString ReturnValue;
	};
	struct Task_ReachLocationByTags_eventTaskShouldAnnounce_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Task_ReachLocationByTags_eventTaskShouldAnnounce_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct Task_ReachLocationByTags_eventTaskShouldShowInUI_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Task_ReachLocationByTags_eventTaskShouldShowInUI_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UTask_ReachLocationByTags_GetTaskName = FName(TEXT("GetTaskName"));
	FString UTask_ReachLocationByTags::GetTaskName() const
	{
		Task_ReachLocationByTags_eventGetTaskName_Parms Parms;
		const_cast<UTask_ReachLocationByTags*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTask_ReachLocationByTags_GetTaskName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTask_ReachLocationByTags_GetTaskShortDescription = FName(TEXT("GetTaskShortDescription"));
	FString UTask_ReachLocationByTags::GetTaskShortDescription(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn) const
	{
		Task_ReachLocationByTags_eventGetTaskShortDescription_Parms Parms;
		Parms.PayloadIn=PayloadIn;
		Parms.CustomPayloadDataIn=CustomPayloadDataIn;
		const_cast<UTask_ReachLocationByTags*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTask_ReachLocationByTags_GetTaskShortDescription),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTask_ReachLocationByTags_TaskShouldAnnounce = FName(TEXT("TaskShouldAnnounce"));
	bool UTask_ReachLocationByTags::TaskShouldAnnounce() const
	{
		Task_ReachLocationByTags_eventTaskShouldAnnounce_Parms Parms;
		const_cast<UTask_ReachLocationByTags*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTask_ReachLocationByTags_TaskShouldAnnounce),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTask_ReachLocationByTags_TaskShouldShowInUI = FName(TEXT("TaskShouldShowInUI"));
	bool UTask_ReachLocationByTags::TaskShouldShowInUI() const
	{
		Task_ReachLocationByTags_eventTaskShouldShowInUI_Parms Parms;
		const_cast<UTask_ReachLocationByTags*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTask_ReachLocationByTags_TaskShouldShowInUI),&Parms);
		return !!Parms.ReturnValue;
	}
	void UTask_ReachLocationByTags::StaticRegisterNativesUTask_ReachLocationByTags()
	{
		UClass* Class = UTask_ReachLocationByTags::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTaskName", &UTask_ReachLocationByTags::execGetTaskName },
			{ "GetTaskShortDescription", &UTask_ReachLocationByTags::execGetTaskShortDescription },
			{ "TaskShouldAnnounce", &UTask_ReachLocationByTags::execTaskShouldAnnounce },
			{ "TaskShouldShowInUI", &UTask_ReachLocationByTags::execTaskShouldShowInUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_ReachLocationByTags_eventGetTaskName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get task name for visual purposes*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/Task_ReachLocationByTags.h" },
		{ "ToolTip", "Get task name for visual purposes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_ReachLocationByTags, nullptr, "GetTaskName", nullptr, nullptr, sizeof(Task_ReachLocationByTags_eventGetTaskName_Parms), Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomPayloadDataIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadDataIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomPayloadDataIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_ReachLocationByTags_eventGetTaskShortDescription_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_Inner = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_ReachLocationByTags_eventGetTaskShortDescription_Parms, CustomPayloadDataIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_ReachLocationByTags_eventGetTaskShortDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get task short description*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/Task_ReachLocationByTags.h" },
		{ "ToolTip", "Get task short description" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_ReachLocationByTags, nullptr, "GetTaskShortDescription", nullptr, nullptr, sizeof(Task_ReachLocationByTags_eventGetTaskShortDescription_Parms), Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Task_ReachLocationByTags_eventTaskShouldAnnounce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Task_ReachLocationByTags_eventTaskShouldAnnounce_Parms), &Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get announce UI configuration*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/Task_ReachLocationByTags.h" },
		{ "ToolTip", "Get announce UI configuration" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_ReachLocationByTags, nullptr, "TaskShouldAnnounce", nullptr, nullptr, sizeof(Task_ReachLocationByTags_eventTaskShouldAnnounce_Parms), Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Task_ReachLocationByTags_eventTaskShouldShowInUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Task_ReachLocationByTags_eventTaskShouldShowInUI_Parms), &Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get if the task should be shown in UI or not*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/Task_ReachLocationByTags.h" },
		{ "ToolTip", "Get if the task should be shown in UI or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_ReachLocationByTags, nullptr, "TaskShouldShowInUI", nullptr, nullptr, sizeof(Task_ReachLocationByTags_eventTaskShouldShowInUI_Parms), Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_ReachLocationByTags);
	UClass* Z_Construct_UClass_UTask_ReachLocationByTags_NoRegister()
	{
		return UTask_ReachLocationByTags::StaticClass();
	}
	struct Z_Construct_UClass_UTask_ReachLocationByTags_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_ReachLocationByTags_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask_Location,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTask_ReachLocationByTags_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskName, "GetTaskName" }, // 3306015431
		{ &Z_Construct_UFunction_UTask_ReachLocationByTags_GetTaskShortDescription, "GetTaskShortDescription" }, // 976373737
		{ &Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldAnnounce, "TaskShouldAnnounce" }, // 1217650218
		{ &Z_Construct_UFunction_UTask_ReachLocationByTags_TaskShouldShowInUI, "TaskShouldShowInUI" }, // 321324867
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_ReachLocationByTags_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is the basic object for reach location by tags tasks.\n */" },
		{ "DisplayName", "ReachLocationByTagsTask" },
		{ "IncludePath", "TaskLocation/Task_ReachLocationByTags.h" },
		{ "ModuleRelativePath", "Public/TaskLocation/Task_ReachLocationByTags.h" },
		{ "ToolTip", "This is the basic object for reach location by tags tasks." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_ReachLocationByTags_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_ReachLocationByTags>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_ReachLocationByTags_Statics::ClassParams = {
		&UTask_ReachLocationByTags::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTask_ReachLocationByTags_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_ReachLocationByTags_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_ReachLocationByTags()
	{
		if (!Z_Registration_Info_UClass_UTask_ReachLocationByTags.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_ReachLocationByTags.OuterSingleton, Z_Construct_UClass_UTask_ReachLocationByTags_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_ReachLocationByTags.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_ReachLocationByTags>()
	{
		return UTask_ReachLocationByTags::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_ReachLocationByTags);
	UTask_ReachLocationByTags::~UTask_ReachLocationByTags() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByTags_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByTags_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_ReachLocationByTags, UTask_ReachLocationByTags::StaticClass, TEXT("UTask_ReachLocationByTags"), &Z_Registration_Info_UClass_UTask_ReachLocationByTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_ReachLocationByTags), 3304625255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByTags_h_1882390669(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByTags_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByTags_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
