// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Task/BaseTaskBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTaskBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseNPCRewardTaskBlueprint();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseNPCRewardTaskBlueprint_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseTaskBlueprint();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseTaskBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	void UBaseTaskBlueprint::StaticRegisterNativesUBaseTaskBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseTaskBlueprint);
	UClass* Z_Construct_UClass_UBaseTaskBlueprint_NoRegister()
	{
		return UBaseTaskBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTaskBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTaskBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTaskBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint for editing BaseQuestTask Objects\n * This is the basic object for any task for quests. \n * The execution logic must always end with a call to the EndTask Function unless is Activate Condition Only.\n */" },
		{ "IncludePath", "Task/BaseTaskBlueprint.h" },
		{ "ModuleRelativePath", "Public/Task/BaseTaskBlueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Blueprint for editing BaseQuestTask Objects\nThis is the basic object for any task for quests.\nThe execution logic must always end with a call to the EndTask Function unless is Activate Condition Only." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTaskBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTaskBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTaskBlueprint_Statics::ClassParams = {
		&UBaseTaskBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTaskBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTaskBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTaskBlueprint()
	{
		if (!Z_Registration_Info_UClass_UBaseTaskBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTaskBlueprint.OuterSingleton, Z_Construct_UClass_UBaseTaskBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseTaskBlueprint.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UBaseTaskBlueprint>()
	{
		return UBaseTaskBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTaskBlueprint);
	UBaseTaskBlueprint::~UBaseTaskBlueprint() {}
	void UBaseNPCRewardTaskBlueprint::StaticRegisterNativesUBaseNPCRewardTaskBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseNPCRewardTaskBlueprint);
	UClass* Z_Construct_UClass_UBaseNPCRewardTaskBlueprint_NoRegister()
	{
		return UBaseNPCRewardTaskBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UBaseNPCRewardTaskBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseNPCRewardTaskBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseNPCRewardTaskBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint for editing BaseQuestTask_SelectRewardOnNPC Objects\n * This is the basic object for any NPC reward task for quests.\n * StringA on the payload should always be the NPC, and a NPC selector must be used in this field for the task info.\n */" },
		{ "IncludePath", "Task/BaseTaskBlueprint.h" },
		{ "ModuleRelativePath", "Public/Task/BaseTaskBlueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Blueprint for editing BaseQuestTask_SelectRewardOnNPC Objects\nThis is the basic object for any NPC reward task for quests.\nStringA on the payload should always be the NPC, and a NPC selector must be used in this field for the task info." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseNPCRewardTaskBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseNPCRewardTaskBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseNPCRewardTaskBlueprint_Statics::ClassParams = {
		&UBaseNPCRewardTaskBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseNPCRewardTaskBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseNPCRewardTaskBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseNPCRewardTaskBlueprint()
	{
		if (!Z_Registration_Info_UClass_UBaseNPCRewardTaskBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseNPCRewardTaskBlueprint.OuterSingleton, Z_Construct_UClass_UBaseNPCRewardTaskBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseNPCRewardTaskBlueprint.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UBaseNPCRewardTaskBlueprint>()
	{
		return UBaseNPCRewardTaskBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseNPCRewardTaskBlueprint);
	UBaseNPCRewardTaskBlueprint::~UBaseNPCRewardTaskBlueprint() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseTaskBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseTaskBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTaskBlueprint, UBaseTaskBlueprint::StaticClass, TEXT("UBaseTaskBlueprint"), &Z_Registration_Info_UClass_UBaseTaskBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTaskBlueprint), 3466681731U) },
		{ Z_Construct_UClass_UBaseNPCRewardTaskBlueprint, UBaseNPCRewardTaskBlueprint::StaticClass, TEXT("UBaseNPCRewardTaskBlueprint"), &Z_Registration_Info_UClass_UBaseNPCRewardTaskBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseNPCRewardTaskBlueprint), 1227236567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseTaskBlueprint_h_2973416242(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseTaskBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseTaskBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
