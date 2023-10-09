// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskSelectReward/BaseQuestRewardSlot.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuestRewardSlot() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestRewardSlot();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestRewardSlot_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UBaseQuestRewardSlot::execSelectSlotReward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSlotReward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestRewardSlot::execUpdateFromTask)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_QuestTaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFromTask(Z_Param_Out_QuestTaskIn);
		P_NATIVE_END;
	}
	static FName NAME_UBaseQuestRewardSlot_UpdateRewardSlot = FName(TEXT("UpdateRewardSlot"));
	void UBaseQuestRewardSlot::UpdateRewardSlot()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestRewardSlot_UpdateRewardSlot),NULL);
	}
	void UBaseQuestRewardSlot::StaticRegisterNativesUBaseQuestRewardSlot()
	{
		UClass* Class = UBaseQuestRewardSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectSlotReward", &UBaseQuestRewardSlot::execSelectSlotReward },
			{ "UpdateFromTask", &UBaseQuestRewardSlot::execUpdateFromTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseQuestRewardSlot_SelectSlotReward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardSlot_SelectSlotReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reward Slot Widget" },
		{ "Comment", "/**\n\x09\x09*\x09""Call to select the reward for this slot, for example, when clicking a button.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardSlot.h" },
		{ "ToolTip", "Call to select the reward for this slot, for example, when clicking a button." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestRewardSlot_SelectSlotReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestRewardSlot, nullptr, "SelectSlotReward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardSlot_SelectSlotReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardSlot_SelectSlotReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestRewardSlot_SelectSlotReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestRewardSlot_SelectSlotReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics
	{
		struct BaseQuestRewardSlot_eventUpdateFromTask_Parms
		{
			FQuestTask QuestTaskIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTaskIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::NewProp_QuestTaskIn = { "QuestTaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestRewardSlot_eventUpdateFromTask_Parms, QuestTaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::NewProp_QuestTaskIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reward Slot Widget" },
		{ "Comment", "/**\n\x09\x09*\x09Main update event for the widget.\n\x09\x09*\x09""Call to update all the widget content.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardSlot.h" },
		{ "ToolTip", "Main update event for the widget.\nCall to update all the widget content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestRewardSlot, nullptr, "UpdateFromTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::BaseQuestRewardSlot_eventUpdateFromTask_Parms), Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateRewardSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateRewardSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reward Slot Widget" },
		{ "Comment", "/**\n\x09\x09*\x09Main update event for the widget.\n\x09\x09*\x09""All the logic needed for updating this widget should be placed here.\n\x09\x09*\x09""All Reward Slot Widget must override this function.\n\x09\x09*\x09This function will be called by the reward tab.\n\x09\x09*\x09QuestTask variable contains current data.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardSlot.h" },
		{ "ToolTip", "Main update event for the widget.\nAll the logic needed for updating this widget should be placed here.\nAll Reward Slot Widget must override this function.\nThis function will be called by the reward tab.\nQuestTask variable contains current data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateRewardSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestRewardSlot, nullptr, "UpdateRewardSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateRewardSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateRewardSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateRewardSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateRewardSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseQuestRewardSlot);
	UClass* Z_Construct_UClass_UBaseQuestRewardSlot_NoRegister()
	{
		return UBaseQuestRewardSlot::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuestRewardSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestSlot_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskSlot_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TaskSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDialogTask_MetaData[];
#endif
		static void NewProp_IsDialogTask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManagerReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuestRewardSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseQuestRewardSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseQuestRewardSlot_SelectSlotReward, "SelectSlotReward" }, // 2434351060
		{ &Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateFromTask, "UpdateFromTask" }, // 1939722306
		{ &Z_Construct_UFunction_UBaseQuestRewardSlot_UpdateRewardSlot, "UpdateRewardSlot" }, // 38949877
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09\n *  Base widget to show and select rewards.\n */" },
		{ "DisplayName", "Reward Slot" },
		{ "IncludePath", "TaskSelectReward/BaseQuestRewardSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardSlot.h" },
		{ "ToolTip", "Base widget to show and select rewards." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestSlot_MetaData[] = {
		{ "Category", "Reward Slot Widget" },
		{ "Comment", "/*Quest slot of the task in the quest manager.*/" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardSlot.h" },
		{ "ToolTip", "Quest slot of the task in the quest manager." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestSlot = { "QuestSlot", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestRewardSlot, QuestSlot), METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_TaskSlot_MetaData[] = {
		{ "Category", "Reward Slot Widget" },
		{ "Comment", "/*Task slot inside the quest. Task ID*/" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardSlot.h" },
		{ "ToolTip", "Task slot inside the quest. Task ID" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_TaskSlot = { "TaskSlot", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestRewardSlot, TaskSlot), METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_TaskSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_TaskSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_IsDialogTask_MetaData[] = {
		{ "Category", "Reward Slot Widget" },
		{ "Comment", "/*If the task is a dialog or quest task. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardSlot.h" },
		{ "ToolTip", "If the task is a dialog or quest task." },
	};
#endif
	void Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_IsDialogTask_SetBit(void* Obj)
	{
		((UBaseQuestRewardSlot*)Obj)->IsDialogTask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_IsDialogTask = { "IsDialogTask", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseQuestRewardSlot), &Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_IsDialogTask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_IsDialogTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_IsDialogTask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestTask_MetaData[] = {
		{ "Category", "Reward Slot Widget" },
		{ "Comment", "/*Quest task current info. Use to update widget.*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardSlot.h" },
		{ "ToolTip", "Quest task current info. Use to update widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestTask = { "QuestTask", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestRewardSlot, QuestTask), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestTask_MetaData)) }; // 3659381813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestManagerReference_MetaData[] = {
		{ "Category", "Reward Slot Widget" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestRewardSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestManagerReference = { "QuestManagerReference", nullptr, (EPropertyFlags)0x001100000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestRewardSlot, QuestManagerReference), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestManagerReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestManagerReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseQuestRewardSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_TaskSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_IsDialogTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestRewardSlot_Statics::NewProp_QuestManagerReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuestRewardSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuestRewardSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuestRewardSlot_Statics::ClassParams = {
		&UBaseQuestRewardSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseQuestRewardSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestRewardSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuestRewardSlot()
	{
		if (!Z_Registration_Info_UClass_UBaseQuestRewardSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuestRewardSlot.OuterSingleton, Z_Construct_UClass_UBaseQuestRewardSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseQuestRewardSlot.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UBaseQuestRewardSlot>()
	{
		return UBaseQuestRewardSlot::StaticClass();
	}
	UBaseQuestRewardSlot::UBaseQuestRewardSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuestRewardSlot);
	UBaseQuestRewardSlot::~UBaseQuestRewardSlot() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseQuestRewardSlot, UBaseQuestRewardSlot::StaticClass, TEXT("UBaseQuestRewardSlot"), &Z_Registration_Info_UClass_UBaseQuestRewardSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuestRewardSlot), 2656017243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardSlot_h_3661473272(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
