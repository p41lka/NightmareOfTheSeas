// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskSelectReward/BaseQuestTask_SelectReward.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuestTask_SelectReward() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_SelectReward();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_SelectReward_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskRewardInterface_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDefRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestNode();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskPayload();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UBaseQuestTask_SelectReward::execTaskRewardGiver)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_STRUCT_REF(FNPCQuestDefRep,Z_Param_Out_RewardGiverOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskRewardGiver_Implementation(Z_Param_Out_PayloadIn,Z_Param_Out_RewardGiverOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectReward::execTaskShowsOnlyOnceInSummary)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StringID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskShowsOnlyOnceInSummary_Implementation(Z_Param_Out_PayloadIn,Z_Param_Out_StringID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectReward::execGetTaskName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTaskName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectReward::execGetTaskShortDescription)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_TARRAY_REF(FString,Z_Param_Out_CustomPayloadDataIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTaskShortDescription_Implementation(Z_Param_Out_PayloadIn,Z_Param_Out_CustomPayloadDataIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectReward::execTaskShouldShowInUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskShouldShowInUI_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectReward::execTaskShouldAnnounce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskShouldAnnounce_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectReward::execHandleRewardSelection)
	{
		P_GET_STRUCT_REF(FQuestNode,Z_Param_Out_QuestNodeIn);
		P_GET_UBOOL(Z_Param_IsDialogTaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleRewardSelection(Z_Param_Out_QuestNodeIn,Z_Param_IsDialogTaskIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectReward::execBindQuestEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindQuestEvents_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectReward::execOnRewardSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestSlotIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_TaskSlotIn);
		P_GET_UBOOL(Z_Param_IsDialogIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnRewardSelected_Implementation(Z_Param_QuestSlotIn,Z_Param_TaskSlotIn,Z_Param_IsDialogIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectReward::execOnRewardSelectedCondition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnRewardSelectedCondition_Implementation();
		P_NATIVE_END;
	}
	struct BaseQuestTask_SelectReward_eventGetTaskName_Parms
	{
		FString ReturnValue;
	};
	struct BaseQuestTask_SelectReward_eventGetTaskShortDescription_Parms
	{
		FQuestTaskPayload PayloadIn;
		TArray<FString> CustomPayloadDataIn;
		FString ReturnValue;
	};
	struct BaseQuestTask_SelectReward_eventOnRewardSelected_Parms
	{
		int32 QuestSlotIn;
		int32 TaskSlotIn;
		bool IsDialogIn;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestTask_SelectReward_eventOnRewardSelected_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct BaseQuestTask_SelectReward_eventOnRewardSelectedCondition_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestTask_SelectReward_eventOnRewardSelectedCondition_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct BaseQuestTask_SelectReward_eventTaskRewardGiver_Parms
	{
		FQuestTaskPayload PayloadIn;
		FNPCQuestDefRep RewardGiverOut;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestTask_SelectReward_eventTaskRewardGiver_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct BaseQuestTask_SelectReward_eventTaskShouldAnnounce_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestTask_SelectReward_eventTaskShouldAnnounce_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct BaseQuestTask_SelectReward_eventTaskShouldShowInUI_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestTask_SelectReward_eventTaskShouldShowInUI_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct BaseQuestTask_SelectReward_eventTaskShowsOnlyOnceInSummary_Parms
	{
		FQuestTaskPayload PayloadIn;
		FString StringID;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestTask_SelectReward_eventTaskShowsOnlyOnceInSummary_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UBaseQuestTask_SelectReward_BindQuestEvents = FName(TEXT("BindQuestEvents"));
	void UBaseQuestTask_SelectReward::BindQuestEvents()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectReward_BindQuestEvents),NULL);
	}
	static FName NAME_UBaseQuestTask_SelectReward_GetTaskName = FName(TEXT("GetTaskName"));
	FString UBaseQuestTask_SelectReward::GetTaskName() const
	{
		BaseQuestTask_SelectReward_eventGetTaskName_Parms Parms;
		const_cast<UBaseQuestTask_SelectReward*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectReward_GetTaskName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestTask_SelectReward_GetTaskShortDescription = FName(TEXT("GetTaskShortDescription"));
	FString UBaseQuestTask_SelectReward::GetTaskShortDescription(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn) const
	{
		BaseQuestTask_SelectReward_eventGetTaskShortDescription_Parms Parms;
		Parms.PayloadIn=PayloadIn;
		Parms.CustomPayloadDataIn=CustomPayloadDataIn;
		const_cast<UBaseQuestTask_SelectReward*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectReward_GetTaskShortDescription),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestTask_SelectReward_OnRewardSelected = FName(TEXT("OnRewardSelected"));
	bool UBaseQuestTask_SelectReward::OnRewardSelected(int32 QuestSlotIn, int32 TaskSlotIn, bool IsDialogIn)
	{
		BaseQuestTask_SelectReward_eventOnRewardSelected_Parms Parms;
		Parms.QuestSlotIn=QuestSlotIn;
		Parms.TaskSlotIn=TaskSlotIn;
		Parms.IsDialogIn=IsDialogIn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectReward_OnRewardSelected),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestTask_SelectReward_OnRewardSelectedCondition = FName(TEXT("OnRewardSelectedCondition"));
	bool UBaseQuestTask_SelectReward::OnRewardSelectedCondition()
	{
		BaseQuestTask_SelectReward_eventOnRewardSelectedCondition_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectReward_OnRewardSelectedCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestTask_SelectReward_TaskRewardGiver = FName(TEXT("TaskRewardGiver"));
	bool UBaseQuestTask_SelectReward::TaskRewardGiver(FQuestTaskPayload const& PayloadIn, FNPCQuestDefRep& RewardGiverOut) const
	{
		BaseQuestTask_SelectReward_eventTaskRewardGiver_Parms Parms;
		Parms.PayloadIn=PayloadIn;
		Parms.RewardGiverOut=RewardGiverOut;
		const_cast<UBaseQuestTask_SelectReward*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectReward_TaskRewardGiver),&Parms);
		RewardGiverOut=Parms.RewardGiverOut;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestTask_SelectReward_TaskShouldAnnounce = FName(TEXT("TaskShouldAnnounce"));
	bool UBaseQuestTask_SelectReward::TaskShouldAnnounce() const
	{
		BaseQuestTask_SelectReward_eventTaskShouldAnnounce_Parms Parms;
		const_cast<UBaseQuestTask_SelectReward*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectReward_TaskShouldAnnounce),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestTask_SelectReward_TaskShouldShowInUI = FName(TEXT("TaskShouldShowInUI"));
	bool UBaseQuestTask_SelectReward::TaskShouldShowInUI() const
	{
		BaseQuestTask_SelectReward_eventTaskShouldShowInUI_Parms Parms;
		const_cast<UBaseQuestTask_SelectReward*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectReward_TaskShouldShowInUI),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary = FName(TEXT("TaskShowsOnlyOnceInSummary"));
	bool UBaseQuestTask_SelectReward::TaskShowsOnlyOnceInSummary(FQuestTaskPayload const& PayloadIn, FString& StringID) const
	{
		BaseQuestTask_SelectReward_eventTaskShowsOnlyOnceInSummary_Parms Parms;
		Parms.PayloadIn=PayloadIn;
		Parms.StringID=StringID;
		const_cast<UBaseQuestTask_SelectReward*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary),&Parms);
		StringID=Parms.StringID;
		return !!Parms.ReturnValue;
	}
	void UBaseQuestTask_SelectReward::StaticRegisterNativesUBaseQuestTask_SelectReward()
	{
		UClass* Class = UBaseQuestTask_SelectReward::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindQuestEvents", &UBaseQuestTask_SelectReward::execBindQuestEvents },
			{ "GetTaskName", &UBaseQuestTask_SelectReward::execGetTaskName },
			{ "GetTaskShortDescription", &UBaseQuestTask_SelectReward::execGetTaskShortDescription },
			{ "HandleRewardSelection", &UBaseQuestTask_SelectReward::execHandleRewardSelection },
			{ "OnRewardSelected", &UBaseQuestTask_SelectReward::execOnRewardSelected },
			{ "OnRewardSelectedCondition", &UBaseQuestTask_SelectReward::execOnRewardSelectedCondition },
			{ "TaskRewardGiver", &UBaseQuestTask_SelectReward::execTaskRewardGiver },
			{ "TaskShouldAnnounce", &UBaseQuestTask_SelectReward::execTaskShouldAnnounce },
			{ "TaskShouldShowInUI", &UBaseQuestTask_SelectReward::execTaskShouldShowInUI },
			{ "TaskShowsOnlyOnceInSummary", &UBaseQuestTask_SelectReward::execTaskShowsOnlyOnceInSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectReward_BindQuestEvents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_BindQuestEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task Reward" },
		{ "Comment", "/**\n\x09*\x09""Called to bind to event dispatchers to handle all the logic.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "Called to bind to event dispatchers to handle all the logic." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_BindQuestEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectReward, nullptr, "BindQuestEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_BindQuestEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_BindQuestEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectReward_BindQuestEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectReward_BindQuestEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventGetTaskName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get task name for visual purposes*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "Get task name for visual purposes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectReward, nullptr, "GetTaskName", nullptr, nullptr, sizeof(BaseQuestTask_SelectReward_eventGetTaskName_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventGetTaskShortDescription_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_Inner = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventGetTaskShortDescription_Parms, CustomPayloadDataIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventGetTaskShortDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_CustomPayloadDataIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get task short description*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "Get task short description" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectReward, nullptr, "GetTaskShortDescription", nullptr, nullptr, sizeof(BaseQuestTask_SelectReward_eventGetTaskShortDescription_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics
	{
		struct BaseQuestTask_SelectReward_eventHandleRewardSelection_Parms
		{
			FQuestNode QuestNodeIn;
			bool IsDialogTaskIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestNodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestNodeIn;
		static void NewProp_IsDialogTaskIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogTaskIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::NewProp_QuestNodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::NewProp_QuestNodeIn = { "QuestNodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventHandleRewardSelection_Parms, QuestNodeIn), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::NewProp_QuestNodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::NewProp_QuestNodeIn_MetaData)) }; // 2631386162
	void Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::NewProp_IsDialogTaskIn_SetBit(void* Obj)
	{
		((BaseQuestTask_SelectReward_eventHandleRewardSelection_Parms*)Obj)->IsDialogTaskIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::NewProp_IsDialogTaskIn = { "IsDialogTaskIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_SelectReward_eventHandleRewardSelection_Parms), &Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::NewProp_IsDialogTaskIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::NewProp_QuestNodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::NewProp_IsDialogTaskIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*This handles the give reward the override and the task end if the reward given is succesful*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "This handles the give reward the override and the task end if the reward given is succesful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectReward, nullptr, "HandleRewardSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::BaseQuestTask_SelectReward_eventHandleRewardSelection_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestSlotIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TaskSlotIn;
		static void NewProp_IsDialogIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_QuestSlotIn = { "QuestSlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventOnRewardSelected_Parms, QuestSlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_TaskSlotIn = { "TaskSlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventOnRewardSelected_Parms, TaskSlotIn), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_IsDialogIn_SetBit(void* Obj)
	{
		((BaseQuestTask_SelectReward_eventOnRewardSelected_Parms*)Obj)->IsDialogIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_IsDialogIn = { "IsDialogIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_SelectReward_eventOnRewardSelected_Parms), &Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_IsDialogIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestTask_SelectReward_eventOnRewardSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_SelectReward_eventOnRewardSelected_Parms), &Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_QuestSlotIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_TaskSlotIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_IsDialogIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task Reward" },
		{ "Comment", "/**\n\x09*\x09Overrideable function that is called when the player selects a reward.\n\x09*\x09You should use this function to give the reward to the player.\n\x09*\x09If the reward give fails, you should return a false so the task can provide the player with the selection again.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "Overrideable function that is called when the player selects a reward.\nYou should use this function to give the reward to the player.\nIf the reward give fails, you should return a false so the task can provide the player with the selection again." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectReward, nullptr, "OnRewardSelected", nullptr, nullptr, sizeof(BaseQuestTask_SelectReward_eventOnRewardSelected_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestTask_SelectReward_eventOnRewardSelectedCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_SelectReward_eventOnRewardSelectedCondition_Parms), &Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task Reward" },
		{ "Comment", "/**\n\x09*\x09""Condition to check before calling the UI for showind rewards.\n\x09*\x09Provides extra control.\n\x09*\x09This is called before \"OnRewardSelected\". \n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "Condition to check before calling the UI for showind rewards.\nProvides extra control.\nThis is called before \"OnRewardSelected\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectReward, nullptr, "OnRewardSelectedCondition", nullptr, nullptr, sizeof(BaseQuestTask_SelectReward_eventOnRewardSelectedCondition_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RewardGiverOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventTaskRewardGiver_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_RewardGiverOut = { "RewardGiverOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventTaskRewardGiver_Parms, RewardGiverOut), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	void Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestTask_SelectReward_eventTaskRewardGiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_SelectReward_eventTaskRewardGiver_Parms), &Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_RewardGiverOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Rewards Interface" },
		{ "Comment", "/**\n\x09*\x09""Determines if the task has a reward giver and if found, returns the definition.\n\x09*\x09""By default the reward tasks use stringA of payload for the NPCDef.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "Determines if the task has a reward giver and if found, returns the definition.\nBy default the reward tasks use stringA of payload for the NPCDef." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectReward, nullptr, "TaskRewardGiver", nullptr, nullptr, sizeof(BaseQuestTask_SelectReward_eventTaskRewardGiver_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestTask_SelectReward_eventTaskShouldAnnounce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_SelectReward_eventTaskShouldAnnounce_Parms), &Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get announce UI configuration*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "Get announce UI configuration" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectReward, nullptr, "TaskShouldAnnounce", nullptr, nullptr, sizeof(BaseQuestTask_SelectReward_eventTaskShouldAnnounce_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestTask_SelectReward_eventTaskShouldShowInUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_SelectReward_eventTaskShouldShowInUI_Parms), &Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/*Get if the task should be shown in UI or not*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "Get if the task should be shown in UI or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectReward, nullptr, "TaskShouldShowInUI", nullptr, nullptr, sizeof(BaseQuestTask_SelectReward_eventTaskShouldShowInUI_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventTaskShowsOnlyOnceInSummary_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_StringID = { "StringID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectReward_eventTaskShowsOnlyOnceInSummary_Parms, StringID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestTask_SelectReward_eventTaskShowsOnlyOnceInSummary_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_SelectReward_eventTaskShowsOnlyOnceInSummary_Parms), &Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_StringID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task" },
		{ "Comment", "/**\n\x09*\x09""Determines if the task should show only once in summary even if there are many of it active at the same time.\n\x09*\x09Used in choose reward.\n\x09*\x09The string ID helps identify the task type. Should be unique per each task. For Example: ItemReward.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "Determines if the task should show only once in summary even if there are many of it active at the same time.\nUsed in choose reward.\nThe string ID helps identify the task type. Should be unique per each task. For Example: ItemReward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectReward, nullptr, "TaskShowsOnlyOnceInSummary", nullptr, nullptr, sizeof(BaseQuestTask_SelectReward_eventTaskShowsOnlyOnceInSummary_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseQuestTask_SelectReward);
	UClass* Z_Construct_UClass_UBaseQuestTask_SelectReward_NoRegister()
	{
		return UBaseQuestTask_SelectReward::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectReward_BindQuestEvents, "BindQuestEvents" }, // 1576128726
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskName, "GetTaskName" }, // 923448633
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectReward_GetTaskShortDescription, "GetTaskShortDescription" }, // 327583342
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectReward_HandleRewardSelection, "HandleRewardSelection" }, // 1558175577
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelected, "OnRewardSelected" }, // 316034672
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectReward_OnRewardSelectedCondition, "OnRewardSelectedCondition" }, // 3956891262
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskRewardGiver, "TaskRewardGiver" }, // 1220693307
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldAnnounce, "TaskShouldAnnounce" }, // 1221968078
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShouldShowInUI, "TaskShouldShowInUI" }, // 1159840003
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectReward_TaskShowsOnlyOnceInSummary, "TaskShowsOnlyOnceInSummary" }, // 4230300401
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is the basic object for any reward task for quests. \n */" },
		{ "DisplayName", "BaseSelectRewardTask" },
		{ "IncludePath", "TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "This is the basic object for any reward task for quests." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::NewProp_QuestNode_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09This is the quest node on creation. \n\x09*\x09This has to be calculated on activate and never modified. \n\x09*\x09Used to check if this is the correct task since quest slot is insufficient when multirewards\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectReward.h" },
		{ "ToolTip", "This is the quest node on creation.\nThis has to be calculated on activate and never modified.\nUsed to check if this is the correct task since quest slot is insufficient when multirewards" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::NewProp_QuestNode = { "QuestNode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestTask_SelectReward, QuestNode), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::NewProp_QuestNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::NewProp_QuestNode_MetaData)) }; // 2631386162
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::NewProp_QuestNode,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UBaseQuestTask_SelectReward, IQuestTaskInterface), false },  // 3929601114
			{ Z_Construct_UClass_UQuestTaskRewardInterface_NoRegister, (int32)VTABLE_OFFSET(UBaseQuestTask_SelectReward, IQuestTaskRewardInterface), false },  // 1787775328
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuestTask_SelectReward>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::ClassParams = {
		&UBaseQuestTask_SelectReward::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuestTask_SelectReward()
	{
		if (!Z_Registration_Info_UClass_UBaseQuestTask_SelectReward.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuestTask_SelectReward.OuterSingleton, Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseQuestTask_SelectReward.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UBaseQuestTask_SelectReward>()
	{
		return UBaseQuestTask_SelectReward::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuestTask_SelectReward);
	UBaseQuestTask_SelectReward::~UBaseQuestTask_SelectReward() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseQuestTask_SelectReward, UBaseQuestTask_SelectReward::StaticClass, TEXT("UBaseQuestTask_SelectReward"), &Z_Registration_Info_UClass_UBaseQuestTask_SelectReward, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuestTask_SelectReward), 2796595429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_2285968478(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
