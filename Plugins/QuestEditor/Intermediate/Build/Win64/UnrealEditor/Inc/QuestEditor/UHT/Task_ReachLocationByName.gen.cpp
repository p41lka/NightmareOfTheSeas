// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskLocation/Task_ReachLocationByName.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_ReachLocationByName() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_Location();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_ReachLocationByName();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_ReachLocationByName_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskPayload();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UTask_ReachLocationByName::execGetTaskName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTaskName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTask_ReachLocationByName::execGetTaskShortDescription)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_TARRAY_REF(FString,Z_Param_Out_CustomPayloadDataIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTaskShortDescription_Implementation(Z_Param_Out_PayloadIn,Z_Param_Out_CustomPayloadDataIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTask_ReachLocationByName::execTaskShouldShowInUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskShouldShowInUI_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTask_ReachLocationByName::execTaskShouldAnnounce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskShouldAnnounce_Implementation();
		P_NATIVE_END;
	}
	struct Task_ReachLocationByName_eventGetTaskName_Parms
	{
		FString ReturnValue;
	};
	struct Task_ReachLocationByName_eventGetTaskShortDescription_Parms
	{
		FQuestTaskPayload PayloadIn;
		TArray<FString> CustomPayloadDataIn;
		FString ReturnValue;
	};
	struct Task_ReachLocationByName_eventTaskShouldAnnounce_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Task_ReachLocationByName_eventTaskShouldAnnounce_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct Task_ReachLocationByName_eventTaskShouldShowInUI_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Task_ReachLocationByName_eventTaskShouldShowInUI_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UTask_ReachLocationByName_GetTaskName = FName(TEXT("GetTaskName"));
	FString UTask_ReachLocationByName::GetTaskName() const
	{
		Task_ReachLocationByName_eventGetTaskName_Parms Parms;
		const_cast<UTask_ReachLocationByName*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTask_ReachLocationByName_GetTaskName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTask_ReachLocationByName_GetTaskShortDescription = FName(TEXT("GetTaskShortDescription"));
	FString UTask_ReachLocationByName::GetTaskShortDescription(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn) const
	{
		Task_ReachLocationByName_eventGetTaskShortDescription_Parms Parms;
		Parms.PayloadIn=PayloadIn;
		Parms.CustomPayloadDataIn=CustomPayloadDataIn;
		const_cast<UTask_ReachLocationByName*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTask_ReachLocationByName_GetTaskShortDescription),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTask_ReachLocationByName_TaskShouldAnnounce = FName(TEXT("TaskShouldAnnounce"));
	bool UTask_ReachLocationByName::TaskShouldAnnounce() const
	{
		Task_ReachLocationByName_eventTaskShouldAnnounce_Parms Parms;
		const_cast<UTask_ReachLocationByName*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTask_ReachLocationByName_TaskShouldAnnounce),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTask_ReachLocationByName_TaskShouldShowInUI = FName(TEXT("TaskShouldShowInUI"));
	bool UTask_ReachLocationByName::TaskShouldShowInUI() const
	{
		Task_ReachLocationByName_eventTaskShouldShowInUI_Parms Parms;
		const_cast<UTask_ReachLocationByName*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTask_ReachLocationByName_TaskShouldShowInUI),&Parms);
		return !!Parms.ReturnValue;
	}
	void UTask_ReachLocationByName::StaticRegisterNativesUTask_ReachLocationByName()
	{
		UClass* Class = UTask_ReachLocationByName::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTaskName", &UTask_ReachLocationByName::execGetTaskName },
			{ "GetTaskShortDescription", &UTask_ReachLocationByName::execGetTaskShortDescription },
			{ "TaskShouldAnnounce", &UTask_ReachLocationByName::execTaskShouldAnnounce },
			{ "TaskShouldShowInUI", &UTask_ReachLocationByName::execTaskShouldShowInUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_ReachLocationByName_eventGetTaskName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get task name for visual purposes*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/Task_ReachLocationByName.h" },
		{ "ToolTip", "Get task name for visual purposes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_ReachLocationByName, nullptr, "GetTaskName", nullptr, nullptr, sizeof(Task_ReachLocationByName_eventGetTaskName_Parms), Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_ReachLocationByName_eventGetTaskShortDescription_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_Inner = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_ReachLocationByName_eventGetTaskShortDescription_Parms, CustomPayloadDataIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_ReachLocationByName_eventGetTaskShortDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get task short description*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/Task_ReachLocationByName.h" },
		{ "ToolTip", "Get task short description" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_ReachLocationByName, nullptr, "GetTaskShortDescription", nullptr, nullptr, sizeof(Task_ReachLocationByName_eventGetTaskShortDescription_Parms), Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Task_ReachLocationByName_eventTaskShouldAnnounce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Task_ReachLocationByName_eventTaskShouldAnnounce_Parms), &Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get announce UI configuration*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/Task_ReachLocationByName.h" },
		{ "ToolTip", "Get announce UI configuration" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_ReachLocationByName, nullptr, "TaskShouldAnnounce", nullptr, nullptr, sizeof(Task_ReachLocationByName_eventTaskShouldAnnounce_Parms), Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Task_ReachLocationByName_eventTaskShouldShowInUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Task_ReachLocationByName_eventTaskShouldShowInUI_Parms), &Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get if the task should be shown in UI or not*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/Task_ReachLocationByName.h" },
		{ "ToolTip", "Get if the task should be shown in UI or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_ReachLocationByName, nullptr, "TaskShouldShowInUI", nullptr, nullptr, sizeof(Task_ReachLocationByName_eventTaskShouldShowInUI_Parms), Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_ReachLocationByName);
	UClass* Z_Construct_UClass_UTask_ReachLocationByName_NoRegister()
	{
		return UTask_ReachLocationByName::StaticClass();
	}
	struct Z_Construct_UClass_UTask_ReachLocationByName_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_ReachLocationByName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask_Location,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTask_ReachLocationByName_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskName, "GetTaskName" }, // 3216986070
		{ &Z_Construct_UFunction_UTask_ReachLocationByName_GetTaskShortDescription, "GetTaskShortDescription" }, // 2103527306
		{ &Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldAnnounce, "TaskShouldAnnounce" }, // 4231476557
		{ &Z_Construct_UFunction_UTask_ReachLocationByName_TaskShouldShowInUI, "TaskShouldShowInUI" }, // 1900128104
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_ReachLocationByName_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is the basic object for reach location by name tasks. \n */" },
		{ "DisplayName", "ReachLocationByNameTask" },
		{ "IncludePath", "TaskLocation/Task_ReachLocationByName.h" },
		{ "ModuleRelativePath", "Public/TaskLocation/Task_ReachLocationByName.h" },
		{ "ToolTip", "This is the basic object for reach location by name tasks." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_ReachLocationByName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_ReachLocationByName>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_ReachLocationByName_Statics::ClassParams = {
		&UTask_ReachLocationByName::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTask_ReachLocationByName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_ReachLocationByName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_ReachLocationByName()
	{
		if (!Z_Registration_Info_UClass_UTask_ReachLocationByName.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_ReachLocationByName.OuterSingleton, Z_Construct_UClass_UTask_ReachLocationByName_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_ReachLocationByName.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_ReachLocationByName>()
	{
		return UTask_ReachLocationByName::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_ReachLocationByName);
	UTask_ReachLocationByName::~UTask_ReachLocationByName() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_ReachLocationByName, UTask_ReachLocationByName::StaticClass, TEXT("UTask_ReachLocationByName"), &Z_Registration_Info_UClass_UTask_ReachLocationByName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_ReachLocationByName), 1410039183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_2089761290(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
