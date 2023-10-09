// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Task/QuestTaskInterface.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTaskInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskPayload();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(IQuestTaskInterface::execGetTaskTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTaskTimer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IQuestTaskInterface::execGetTaskColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetTaskColor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IQuestTaskInterface::execTaskShouldShowInUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskShouldShowInUI_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IQuestTaskInterface::execTaskShouldAnnounce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskShouldAnnounce_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IQuestTaskInterface::execGetTaskName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTaskName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IQuestTaskInterface::execGetTaskShortDescription)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_TARRAY_REF(FString,Z_Param_Out_CustomPayloadDataIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTaskShortDescription_Implementation(Z_Param_Out_PayloadIn,Z_Param_Out_CustomPayloadDataIn);
		P_NATIVE_END;
	}
	struct QuestTaskInterface_eventGetTaskColor_Parms
	{
		FLinearColor ReturnValue;

		/** Constructor, initializes return property only **/
		QuestTaskInterface_eventGetTaskColor_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct QuestTaskInterface_eventGetTaskName_Parms
	{
		FString ReturnValue;
	};
	struct QuestTaskInterface_eventGetTaskShortDescription_Parms
	{
		FQuestTaskPayload PayloadIn;
		TArray<FString> CustomPayloadDataIn;
		FString ReturnValue;
	};
	struct QuestTaskInterface_eventGetTaskTimer_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		QuestTaskInterface_eventGetTaskTimer_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct QuestTaskInterface_eventTaskShouldAnnounce_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		QuestTaskInterface_eventTaskShouldAnnounce_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct QuestTaskInterface_eventTaskShouldShowInUI_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		QuestTaskInterface_eventTaskShouldShowInUI_Parms()
			: ReturnValue(false)
		{
		}
	};
	FLinearColor IQuestTaskInterface::GetTaskColor() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTaskColor instead.");
		QuestTaskInterface_eventGetTaskColor_Parms Parms;
		return Parms.ReturnValue;
	}
	FString IQuestTaskInterface::GetTaskName() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTaskName instead.");
		QuestTaskInterface_eventGetTaskName_Parms Parms;
		return Parms.ReturnValue;
	}
	FString IQuestTaskInterface::GetTaskShortDescription(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTaskShortDescription instead.");
		QuestTaskInterface_eventGetTaskShortDescription_Parms Parms;
		return Parms.ReturnValue;
	}
	float IQuestTaskInterface::GetTaskTimer() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTaskTimer instead.");
		QuestTaskInterface_eventGetTaskTimer_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IQuestTaskInterface::TaskShouldAnnounce() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TaskShouldAnnounce instead.");
		QuestTaskInterface_eventTaskShouldAnnounce_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IQuestTaskInterface::TaskShouldShowInUI() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TaskShouldShowInUI instead.");
		QuestTaskInterface_eventTaskShouldShowInUI_Parms Parms;
		return Parms.ReturnValue;
	}
	void UQuestTaskInterface::StaticRegisterNativesUQuestTaskInterface()
	{
		UClass* Class = UQuestTaskInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTaskColor", &IQuestTaskInterface::execGetTaskColor },
			{ "GetTaskName", &IQuestTaskInterface::execGetTaskName },
			{ "GetTaskShortDescription", &IQuestTaskInterface::execGetTaskShortDescription },
			{ "GetTaskTimer", &IQuestTaskInterface::execGetTaskTimer },
			{ "TaskShouldAnnounce", &IQuestTaskInterface::execTaskShouldAnnounce },
			{ "TaskShouldShowInUI", &IQuestTaskInterface::execTaskShouldShowInUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskInterface_eventGetTaskColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get task color for visual purposes*/" },
		{ "ModuleRelativePath", "Public/Task/QuestTaskInterface.h" },
		{ "ToolTip", "Get task color for visual purposes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskInterface, nullptr, "GetTaskColor", nullptr, nullptr, sizeof(QuestTaskInterface_eventGetTaskColor_Parms), Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskInterface_eventGetTaskName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get task name for visual purposes*/" },
		{ "ModuleRelativePath", "Public/Task/QuestTaskInterface.h" },
		{ "ToolTip", "Get task name for visual purposes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskInterface, nullptr, "GetTaskName", nullptr, nullptr, sizeof(QuestTaskInterface_eventGetTaskName_Parms), Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskInterface_GetTaskName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskInterface_GetTaskName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskInterface_eventGetTaskShortDescription_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_Inner = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskInterface_eventGetTaskShortDescription_Parms, CustomPayloadDataIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskInterface_eventGetTaskShortDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get task short description*/" },
		{ "ModuleRelativePath", "Public/Task/QuestTaskInterface.h" },
		{ "ToolTip", "Get task short description" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskInterface, nullptr, "GetTaskShortDescription", nullptr, nullptr, sizeof(QuestTaskInterface_eventGetTaskShortDescription_Parms), Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskInterface_eventGetTaskTimer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get task timer. Returns a running timer value if there is one active. Returns -1 if there is no timer in this task.*/" },
		{ "ModuleRelativePath", "Public/Task/QuestTaskInterface.h" },
		{ "ToolTip", "Get task timer. Returns a running timer value if there is one active. Returns -1 if there is no timer in this task." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskInterface, nullptr, "GetTaskTimer", nullptr, nullptr, sizeof(QuestTaskInterface_eventGetTaskTimer_Parms), Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestTaskInterface_eventTaskShouldAnnounce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestTaskInterface_eventTaskShouldAnnounce_Parms), &Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get announce UI configuration*/" },
		{ "ModuleRelativePath", "Public/Task/QuestTaskInterface.h" },
		{ "ToolTip", "Get announce UI configuration" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskInterface, nullptr, "TaskShouldAnnounce", nullptr, nullptr, sizeof(QuestTaskInterface_eventTaskShouldAnnounce_Parms), Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestTaskInterface_eventTaskShouldShowInUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestTaskInterface_eventTaskShouldShowInUI_Parms), &Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get if the task should be shown in UI or not*/" },
		{ "ModuleRelativePath", "Public/Task/QuestTaskInterface.h" },
		{ "ToolTip", "Get if the task should be shown in UI or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskInterface, nullptr, "TaskShouldShowInUI", nullptr, nullptr, sizeof(QuestTaskInterface_eventTaskShouldShowInUI_Parms), Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestTaskInterface);
	UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister()
	{
		return UQuestTaskInterface::StaticClass();
	}
	struct Z_Construct_UClass_UQuestTaskInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestTaskInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestTaskInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestTaskInterface_GetTaskColor, "GetTaskColor" }, // 769458546
		{ &Z_Construct_UFunction_UQuestTaskInterface_GetTaskName, "GetTaskName" }, // 3254874272
		{ &Z_Construct_UFunction_UQuestTaskInterface_GetTaskShortDescription, "GetTaskShortDescription" }, // 4137112668
		{ &Z_Construct_UFunction_UQuestTaskInterface_GetTaskTimer, "GetTaskTimer" }, // 518131178
		{ &Z_Construct_UFunction_UQuestTaskInterface_TaskShouldAnnounce, "TaskShouldAnnounce" }, // 2488898452
		{ &Z_Construct_UFunction_UQuestTaskInterface_TaskShouldShowInUI, "TaskShouldShowInUI" }, // 3493055700
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestTaskInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Task/QuestTaskInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestTaskInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IQuestTaskInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestTaskInterface_Statics::ClassParams = {
		&UQuestTaskInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestTaskInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestTaskInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestTaskInterface()
	{
		if (!Z_Registration_Info_UClass_UQuestTaskInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestTaskInterface.OuterSingleton, Z_Construct_UClass_UQuestTaskInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestTaskInterface.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UQuestTaskInterface>()
	{
		return UQuestTaskInterface::StaticClass();
	}
	UQuestTaskInterface::UQuestTaskInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestTaskInterface);
	UQuestTaskInterface::~UQuestTaskInterface() {}
	static FName NAME_UQuestTaskInterface_GetTaskColor = FName(TEXT("GetTaskColor"));
	FLinearColor IQuestTaskInterface::Execute_GetTaskColor(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskInterface::StaticClass()));
		QuestTaskInterface_eventGetTaskColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskInterface_GetTaskColor);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IQuestTaskInterface*)(O->GetNativeInterfaceAddress(UQuestTaskInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTaskColor_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UQuestTaskInterface_GetTaskName = FName(TEXT("GetTaskName"));
	FString IQuestTaskInterface::Execute_GetTaskName(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskInterface::StaticClass()));
		QuestTaskInterface_eventGetTaskName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskInterface_GetTaskName);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IQuestTaskInterface*)(O->GetNativeInterfaceAddress(UQuestTaskInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTaskName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UQuestTaskInterface_GetTaskShortDescription = FName(TEXT("GetTaskShortDescription"));
	FString IQuestTaskInterface::Execute_GetTaskShortDescription(const UObject* O, FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskInterface::StaticClass()));
		QuestTaskInterface_eventGetTaskShortDescription_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskInterface_GetTaskShortDescription);
		if (Func)
		{
			Parms.PayloadIn=PayloadIn;
			Parms.CustomPayloadDataIn=CustomPayloadDataIn;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IQuestTaskInterface*)(O->GetNativeInterfaceAddress(UQuestTaskInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTaskShortDescription_Implementation(PayloadIn,CustomPayloadDataIn);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UQuestTaskInterface_GetTaskTimer = FName(TEXT("GetTaskTimer"));
	float IQuestTaskInterface::Execute_GetTaskTimer(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskInterface::StaticClass()));
		QuestTaskInterface_eventGetTaskTimer_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskInterface_GetTaskTimer);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IQuestTaskInterface*)(O->GetNativeInterfaceAddress(UQuestTaskInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTaskTimer_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UQuestTaskInterface_TaskShouldAnnounce = FName(TEXT("TaskShouldAnnounce"));
	bool IQuestTaskInterface::Execute_TaskShouldAnnounce(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskInterface::StaticClass()));
		QuestTaskInterface_eventTaskShouldAnnounce_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskInterface_TaskShouldAnnounce);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IQuestTaskInterface*)(O->GetNativeInterfaceAddress(UQuestTaskInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TaskShouldAnnounce_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UQuestTaskInterface_TaskShouldShowInUI = FName(TEXT("TaskShouldShowInUI"));
	bool IQuestTaskInterface::Execute_TaskShouldShowInUI(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskInterface::StaticClass()));
		QuestTaskInterface_eventTaskShouldShowInUI_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskInterface_TaskShouldShowInUI);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IQuestTaskInterface*)(O->GetNativeInterfaceAddress(UQuestTaskInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TaskShouldShowInUI_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestTaskInterface, UQuestTaskInterface::StaticClass, TEXT("UQuestTaskInterface"), &Z_Registration_Info_UClass_UQuestTaskInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestTaskInterface), 3929601114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_3091372581(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
