// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Task/Task_IsQuestFailed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_IsQuestFailed() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_IsQuestFailed();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_IsQuestFailed_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	void UTask_IsQuestFailed::StaticRegisterNativesUTask_IsQuestFailed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_IsQuestFailed);
	UClass* Z_Construct_UClass_UTask_IsQuestFailed_NoRegister()
	{
		return UTask_IsQuestFailed::StaticClass();
	}
	struct Z_Construct_UClass_UTask_IsQuestFailed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_IsQuestFailed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_IsQuestFailed_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Condition Task to check if a Quest is already completed.\n */" },
		{ "IncludePath", "Task/Task_IsQuestFailed.h" },
		{ "ModuleRelativePath", "Public/Task/Task_IsQuestFailed.h" },
		{ "ToolTip", "Condition Task to check if a Quest is already completed." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTask_IsQuestFailed_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UTask_IsQuestFailed, IQuestTaskInterface), false },  // 3929601114
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_IsQuestFailed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_IsQuestFailed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_IsQuestFailed_Statics::ClassParams = {
		&UTask_IsQuestFailed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTask_IsQuestFailed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_IsQuestFailed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_IsQuestFailed()
	{
		if (!Z_Registration_Info_UClass_UTask_IsQuestFailed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_IsQuestFailed.OuterSingleton, Z_Construct_UClass_UTask_IsQuestFailed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_IsQuestFailed.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_IsQuestFailed>()
	{
		return UTask_IsQuestFailed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_IsQuestFailed);
	UTask_IsQuestFailed::~UTask_IsQuestFailed() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_IsQuestFailed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_IsQuestFailed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_IsQuestFailed, UTask_IsQuestFailed::StaticClass, TEXT("UTask_IsQuestFailed"), &Z_Registration_Info_UClass_UTask_IsQuestFailed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_IsQuestFailed), 892650785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_IsQuestFailed_h_2121341759(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_IsQuestFailed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_IsQuestFailed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
