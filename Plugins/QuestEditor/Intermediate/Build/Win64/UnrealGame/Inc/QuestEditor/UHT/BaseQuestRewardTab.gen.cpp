// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskSelectReward/BaseQuestRewardTab.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuestRewardTab() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestRewardTab();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestRewardTab_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDefRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestNode();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRewardTabSlotInfo();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UBaseQuestRewardTab::execUpdateTabWithRetriggerData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTabWithRetriggerData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestRewardTab::execOnRewardSelectedUpdate)
	{
		P_GET_STRUCT_REF(FQuestNode,Z_Param_Out_QuestNodeIn);
		P_GET_UBOOL(Z_Param_IsDialogTaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardSelectedUpdate(Z_Param_Out_QuestNodeIn,Z_Param_IsDialogTaskIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestRewardTab::execOnRewardActivateUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardActivateUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestRewardTab::execOnRewardActivateBind)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestSlotIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_TaskSlotIn);
		P_GET_UBOOL(Z_Param_IsDialogTaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardActivateBind(Z_Param_QuestSlotIn,Z_Param_TaskSlotIn,Z_Param_IsDialogTaskIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestRewardTab::execGetQuestManagerReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestManager**)Z_Param__Result=P_THIS->GetQuestManagerReference_Implementation();
		P_NATIVE_END;
	}
	struct BaseQuestRewardTab_eventGetQuestManagerReference_Parms
	{
		UQuestManager* ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestRewardTab_eventGetQuestManagerReference_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct BaseQuestRewardTab_eventUpdateRewardTab_Parms
	{
		TArray<FRewardTabSlotInfo> SlotsData;
	};
	static FName NAME_UBaseQuestRewardTab_GetQuestManagerReference = FName(TEXT("GetQuestManagerReference"));
	UQuestManager* UBaseQuestRewardTab::GetQuestManagerReference()
	{
		BaseQuestRewardTab_eventGetQuestManagerReference_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestRewardTab_GetQuestManagerReference),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestRewardTab_UpdateRewardTab = FName(TEXT("UpdateRewardTab"));
	void UBaseQuestRewardTab::UpdateRewardTab(TArray<FRewardTabSlotInfo> const& SlotsData)
	{
		BaseQuestRewardTab_eventUpdateRewardTab_Parms Parms;
		Parms.SlotsData=SlotsData;
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestRewardTab_UpdateRewardTab),&Parms);
	}
	void UBaseQuestRewardTab::StaticRegisterNativesUBaseQuestRewardTab()
	{
		UClass* Class = UBaseQuestRewardTab::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetQuestManagerReference", &UBaseQuestRewardTab::execGetQuestManagerReference },
			{ "OnRewardActivateBind", &UBaseQuestRewardTab::execOnRewardActivateBind },
			{ "OnRewardActivateUpdate", &UBaseQuestRewardTab::execOnRewardActivateUpdate },
			{ "OnRewardSelectedUpdate", &UBaseQuestRewardTab::execOnRewardSelectedUpdate },
			{ "UpdateTabWithRetriggerData", &UBaseQuestRewardTab::execUpdateTabWithRetriggerData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestRewardTab_eventGetQuestManagerReference_Parms, ReturnValue), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reward Slot Tab" },
		{ "Comment", "/**\n\x09\x09*\x09Overrideable function to get the quest manager reference.\n\x09\x09*\x09""By default considers the manager is in the player state. If you implemented this differently you will need to override it and provide a valid QuestManager reference.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "Overrideable function to get the quest manager reference.\nBy default considers the manager is in the player state. If you implemented this differently you will need to override it and provide a valid QuestManager reference." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestRewardTab, nullptr, "GetQuestManagerReference", nullptr, nullptr, sizeof(BaseQuestRewardTab_eventGetQuestManagerReference_Parms), Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics
	{
		struct BaseQuestRewardTab_eventOnRewardActivateBind_Parms
		{
			int32 QuestSlotIn;
			int32 TaskSlotIn;
			bool IsDialogTaskIn;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestSlotIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TaskSlotIn;
		static void NewProp_IsDialogTaskIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogTaskIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::NewProp_QuestSlotIn = { "QuestSlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestRewardTab_eventOnRewardActivateBind_Parms, QuestSlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::NewProp_TaskSlotIn = { "TaskSlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestRewardTab_eventOnRewardActivateBind_Parms, TaskSlotIn), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::NewProp_IsDialogTaskIn_SetBit(void* Obj)
	{
		((BaseQuestRewardTab_eventOnRewardActivateBind_Parms*)Obj)->IsDialogTaskIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::NewProp_IsDialogTaskIn = { "IsDialogTaskIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestRewardTab_eventOnRewardActivateBind_Parms), &Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::NewProp_IsDialogTaskIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::NewProp_QuestSlotIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::NewProp_TaskSlotIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::NewProp_IsDialogTaskIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Function to bind to on reward activated and detect if needs to update the widget*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "Function to bind to on reward activated and detect if needs to update the widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestRewardTab, nullptr, "OnRewardActivateBind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::BaseQuestRewardTab_eventOnRewardActivateBind_Parms), Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Function called when a update is needed, after a rewardactivation timer succeds.*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "Function called when a update is needed, after a rewardactivation timer succeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestRewardTab, nullptr, "OnRewardActivateUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics
	{
		struct BaseQuestRewardTab_eventOnRewardSelectedUpdate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::NewProp_QuestNodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::NewProp_QuestNodeIn = { "QuestNodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestRewardTab_eventOnRewardSelectedUpdate_Parms, QuestNodeIn), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::NewProp_QuestNodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::NewProp_QuestNodeIn_MetaData)) }; // 2631386162
	void Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::NewProp_IsDialogTaskIn_SetBit(void* Obj)
	{
		((BaseQuestRewardTab_eventOnRewardSelectedUpdate_Parms*)Obj)->IsDialogTaskIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::NewProp_IsDialogTaskIn = { "IsDialogTaskIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestRewardTab_eventOnRewardSelectedUpdate_Parms), &Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::NewProp_IsDialogTaskIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::NewProp_QuestNodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::NewProp_IsDialogTaskIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09*\x09""Function called when a reward is selected.\n\x09\x09*\x09Handles the tab retrigger mostly.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "Function called when a reward is selected.\nHandles the tab retrigger mostly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestRewardTab, nullptr, "OnRewardSelectedUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::BaseQuestRewardTab_eventOnRewardSelectedUpdate_Parms), Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotsData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::NewProp_SlotsData_Inner = { "SlotsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRewardTabSlotInfo, METADATA_PARAMS(nullptr, 0) }; // 2505220435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::NewProp_SlotsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::NewProp_SlotsData = { "SlotsData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestRewardTab_eventUpdateRewardTab_Parms, SlotsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::NewProp_SlotsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::NewProp_SlotsData_MetaData)) }; // 2505220435
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::NewProp_SlotsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::NewProp_SlotsData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reward Slot Tab" },
		{ "Comment", "/**\n\x09\x09*\x09Main update event for the widget.\n\x09\x09*\x09""All the logic needed for updating this widget should be placed here.\n\x09\x09*\x09""All Rewards Tab Widgets must override this function.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "Main update event for the widget.\nAll the logic needed for updating this widget should be placed here.\nAll Rewards Tab Widgets must override this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestRewardTab, nullptr, "UpdateRewardTab", nullptr, nullptr, sizeof(BaseQuestRewardTab_eventUpdateRewardTab_Parms), Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestRewardTab_UpdateTabWithRetriggerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardTab_UpdateTabWithRetriggerData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09*\x09""For updating the tab when retriggered.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "For updating the tab when retriggered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestRewardTab_UpdateTabWithRetriggerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestRewardTab, nullptr, "UpdateTabWithRetriggerData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardTab_UpdateTabWithRetriggerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardTab_UpdateTabWithRetriggerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestRewardTab_UpdateTabWithRetriggerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestRewardTab_UpdateTabWithRetriggerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseQuestRewardTab);
	UClass* Z_Construct_UClass_UBaseQuestRewardTab_NoRegister()
	{
		return UBaseQuestRewardTab::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuestRewardTab_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateTimer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivatedTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatedTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivatedTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Retrigger_IsNPCReward_MetaData[];
#endif
		static void NewProp_Retrigger_IsNPCReward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Retrigger_IsNPCReward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Retrigger_LocationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Retrigger_LocationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Retrigger_NPCDef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Retrigger_NPCDef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuestRewardTab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseQuestRewardTab_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseQuestRewardTab_GetQuestManagerReference, "GetQuestManagerReference" }, // 2779350507
		{ &Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateBind, "OnRewardActivateBind" }, // 993767622
		{ &Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardActivateUpdate, "OnRewardActivateUpdate" }, // 1587985889
		{ &Z_Construct_UFunction_UBaseQuestRewardTab_OnRewardSelectedUpdate, "OnRewardSelectedUpdate" }, // 3274039145
		{ &Z_Construct_UFunction_UBaseQuestRewardTab_UpdateRewardTab, "UpdateRewardTab" }, // 956067948
		{ &Z_Construct_UFunction_UBaseQuestRewardTab_UpdateTabWithRetriggerData, "UpdateTabWithRetriggerData" }, // 3028700524
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardTab_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Base widget to show and select rewards.\n */" },
		{ "DisplayName", "Reward Tab" },
		{ "IncludePath", "TaskSelectReward/BaseQuestRewardTab.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "Base widget to show and select rewards." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_UpdateTimer_MetaData[] = {
		{ "Comment", "/*Update timer for activation of rewards retriggering*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "Update timer for activation of rewards retriggering" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_UpdateTimer = { "UpdateTimer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestRewardTab, UpdateTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_UpdateTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_UpdateTimer_MetaData)) }; // 3633724737
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_ActivatedTasks_Inner = { "ActivatedTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRewardTabSlotInfo, METADATA_PARAMS(nullptr, 0) }; // 2505220435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_ActivatedTasks_MetaData[] = {
		{ "Comment", "/**\n\x09\x09*\x09Track all the reward tasks that activate in the current timer.\n\x09\x09*\x09This can be from NPC or location and must be analized in the quest manager to determine wich ones show in UI.\n\x09\x09*\x09I dont care about object reference here.\n\x09\x09*\x09""Cleared when the tab is updated.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "Track all the reward tasks that activate in the current timer.\nThis can be from NPC or location and must be analized in the quest manager to determine wich ones show in UI.\nI dont care about object reference here.\nCleared when the tab is updated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_ActivatedTasks = { "ActivatedTasks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestRewardTab, ActivatedTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_ActivatedTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_ActivatedTasks_MetaData)) }; // 2505220435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_IsNPCReward_MetaData[] = {
		{ "Comment", "/*Retrigger value of mode. For now there is only two so a bool is enough. Should convert to enum if more modes are needed*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "Retrigger value of mode. For now there is only two so a bool is enough. Should convert to enum if more modes are needed" },
	};
#endif
	void Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_IsNPCReward_SetBit(void* Obj)
	{
		((UBaseQuestRewardTab*)Obj)->Retrigger_IsNPCReward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_IsNPCReward = { "Retrigger_IsNPCReward", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseQuestRewardTab), &Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_IsNPCReward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_IsNPCReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_IsNPCReward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_LocationName_MetaData[] = {
		{ "Comment", "/*Location name in case is a location mode*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "Location name in case is a location mode" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_LocationName = { "Retrigger_LocationName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestRewardTab, Retrigger_LocationName), METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_LocationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_LocationName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_NPCDef_MetaData[] = {
		{ "Comment", "/*NPC def in case is a NPC mode*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardTab.h" },
		{ "ToolTip", "NPC def in case is a NPC mode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_NPCDef = { "Retrigger_NPCDef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestRewardTab, Retrigger_NPCDef), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_NPCDef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_NPCDef_MetaData)) }; // 3466971976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseQuestRewardTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_UpdateTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_ActivatedTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_ActivatedTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_IsNPCReward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_LocationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardTab_Statics::NewProp_Retrigger_NPCDef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuestRewardTab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuestRewardTab>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuestRewardTab_Statics::ClassParams = {
		&UBaseQuestRewardTab::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseQuestRewardTab_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardTab_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardTab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardTab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuestRewardTab()
	{
		if (!Z_Registration_Info_UClass_UBaseQuestRewardTab.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuestRewardTab.OuterSingleton, Z_Construct_UClass_UBaseQuestRewardTab_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseQuestRewardTab.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UBaseQuestRewardTab>()
	{
		return UBaseQuestRewardTab::StaticClass();
	}
	UBaseQuestRewardTab::UBaseQuestRewardTab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuestRewardTab);
	UBaseQuestRewardTab::~UBaseQuestRewardTab() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseQuestRewardTab, UBaseQuestRewardTab::StaticClass, TEXT("UBaseQuestRewardTab"), &Z_Registration_Info_UClass_UBaseQuestRewardTab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuestRewardTab), 2006467771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_2750635354(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
