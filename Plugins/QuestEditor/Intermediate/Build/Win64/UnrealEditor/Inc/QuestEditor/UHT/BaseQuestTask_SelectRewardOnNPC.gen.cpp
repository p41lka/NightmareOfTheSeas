// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskSelectReward/BaseQuestTask_SelectRewardOnNPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuestTask_SelectRewardOnNPC() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_SelectReward();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UBaseQuestTask_SelectRewardOnNPC::execOnNPCReachForReward)
	{
		P_GET_OBJECT(AActor,Z_Param_NPCIN);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNPCReachForReward_Implementation(Z_Param_NPCIN);
		P_NATIVE_END;
	}
	struct BaseQuestTask_SelectRewardOnNPC_eventOnNPCReachForReward_Parms
	{
		AActor* NPCIN;
	};
	static FName NAME_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward = FName(TEXT("OnNPCReachForReward"));
	void UBaseQuestTask_SelectRewardOnNPC::OnNPCReachForReward(AActor* NPCIN)
	{
		BaseQuestTask_SelectRewardOnNPC_eventOnNPCReachForReward_Parms Parms;
		Parms.NPCIN=NPCIN;
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward),&Parms);
	}
	void UBaseQuestTask_SelectRewardOnNPC::StaticRegisterNativesUBaseQuestTask_SelectRewardOnNPC()
	{
		UClass* Class = UBaseQuestTask_SelectRewardOnNPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNPCReachForReward", &UBaseQuestTask_SelectRewardOnNPC::execOnNPCReachForReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCIN;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics::NewProp_NPCIN = { "NPCIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectRewardOnNPC_eventOnNPCReachForReward_Parms, NPCIN), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics::NewProp_NPCIN,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task Reward" },
		{ "Comment", "/*Overrideable function that is called when the NPC is reached. Used in BindQuestEvents*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectRewardOnNPC.h" },
		{ "ToolTip", "Overrideable function that is called when the NPC is reached. Used in BindQuestEvents" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC, nullptr, "OnNPCReachForReward", nullptr, nullptr, sizeof(BaseQuestTask_SelectRewardOnNPC_eventOnNPCReachForReward_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseQuestTask_SelectRewardOnNPC);
	UClass* Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_NoRegister()
	{
		return UBaseQuestTask_SelectRewardOnNPC::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask_SelectReward,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnNPC_OnNPCReachForReward, "OnNPCReachForReward" }, // 2776133453
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is the basic object for any reward task on NPC reaching. StringA in payload is reserved for NPC. \n */" },
		{ "DisplayName", "NPCRewardTask" },
		{ "IncludePath", "TaskSelectReward/BaseQuestTask_SelectRewardOnNPC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectRewardOnNPC.h" },
		{ "ToolTip", "This is the basic object for any reward task on NPC reaching. StringA in payload is reserved for NPC." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuestTask_SelectRewardOnNPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_Statics::ClassParams = {
		&UBaseQuestTask_SelectRewardOnNPC::StaticClass,
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
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC()
	{
		if (!Z_Registration_Info_UClass_UBaseQuestTask_SelectRewardOnNPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuestTask_SelectRewardOnNPC.OuterSingleton, Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseQuestTask_SelectRewardOnNPC.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UBaseQuestTask_SelectRewardOnNPC>()
	{
		return UBaseQuestTask_SelectRewardOnNPC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuestTask_SelectRewardOnNPC);
	UBaseQuestTask_SelectRewardOnNPC::~UBaseQuestTask_SelectRewardOnNPC() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnNPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnNPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseQuestTask_SelectRewardOnNPC, UBaseQuestTask_SelectRewardOnNPC::StaticClass, TEXT("UBaseQuestTask_SelectRewardOnNPC"), &Z_Registration_Info_UClass_UBaseQuestTask_SelectRewardOnNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuestTask_SelectRewardOnNPC), 2022938992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnNPC_h_3168225398(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnNPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
