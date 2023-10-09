// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskDialogs/Task_RemoveDialogFromCompleted.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_RemoveDialogFromCompleted() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_RemoveDialogFromCompleted();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_RemoveDialogFromCompleted_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	void UTask_RemoveDialogFromCompleted::StaticRegisterNativesUTask_RemoveDialogFromCompleted()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_RemoveDialogFromCompleted);
	UClass* Z_Construct_UClass_UTask_RemoveDialogFromCompleted_NoRegister()
	{
		return UTask_RemoveDialogFromCompleted::StaticClass();
	}
	struct Z_Construct_UClass_UTask_RemoveDialogFromCompleted_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_RemoveDialogFromCompleted_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_RemoveDialogFromCompleted_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Task that reset nodes that are connected between the specified nodes. This task must be used carefully.\n */" },
		{ "IncludePath", "TaskDialogs/Task_RemoveDialogFromCompleted.h" },
		{ "ModuleRelativePath", "Public/TaskDialogs/Task_RemoveDialogFromCompleted.h" },
		{ "ToolTip", "Task that reset nodes that are connected between the specified nodes. This task must be used carefully." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTask_RemoveDialogFromCompleted_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UTask_RemoveDialogFromCompleted, IQuestTaskInterface), false },  // 3929601114
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_RemoveDialogFromCompleted_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_RemoveDialogFromCompleted>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_RemoveDialogFromCompleted_Statics::ClassParams = {
		&UTask_RemoveDialogFromCompleted::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTask_RemoveDialogFromCompleted_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_RemoveDialogFromCompleted_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_RemoveDialogFromCompleted()
	{
		if (!Z_Registration_Info_UClass_UTask_RemoveDialogFromCompleted.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_RemoveDialogFromCompleted.OuterSingleton, Z_Construct_UClass_UTask_RemoveDialogFromCompleted_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_RemoveDialogFromCompleted.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_RemoveDialogFromCompleted>()
	{
		return UTask_RemoveDialogFromCompleted::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_RemoveDialogFromCompleted);
	UTask_RemoveDialogFromCompleted::~UTask_RemoveDialogFromCompleted() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskDialogs_Task_RemoveDialogFromCompleted_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskDialogs_Task_RemoveDialogFromCompleted_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_RemoveDialogFromCompleted, UTask_RemoveDialogFromCompleted::StaticClass, TEXT("UTask_RemoveDialogFromCompleted"), &Z_Registration_Info_UClass_UTask_RemoveDialogFromCompleted, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_RemoveDialogFromCompleted), 2737311392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskDialogs_Task_RemoveDialogFromCompleted_h_732229170(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskDialogs_Task_RemoveDialogFromCompleted_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskDialogs_Task_RemoveDialogFromCompleted_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
