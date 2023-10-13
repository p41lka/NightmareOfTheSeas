// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Task/Task_ResetTrackBetweenNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_ResetTrackBetweenNodes() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_ResetTrackBetweenNodes();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_ResetTrackBetweenNodes_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	void UTask_ResetTrackBetweenNodes::StaticRegisterNativesUTask_ResetTrackBetweenNodes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_ResetTrackBetweenNodes);
	UClass* Z_Construct_UClass_UTask_ResetTrackBetweenNodes_NoRegister()
	{
		return UTask_ResetTrackBetweenNodes::StaticClass();
	}
	struct Z_Construct_UClass_UTask_ResetTrackBetweenNodes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_ResetTrackBetweenNodes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_ResetTrackBetweenNodes_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Task that reset nodes that are connected between the specified nodes. This task must be used carefully.\n */" },
		{ "IncludePath", "Task/Task_ResetTrackBetweenNodes.h" },
		{ "ModuleRelativePath", "Public/Task/Task_ResetTrackBetweenNodes.h" },
		{ "ToolTip", "Task that reset nodes that are connected between the specified nodes. This task must be used carefully." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTask_ResetTrackBetweenNodes_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UTask_ResetTrackBetweenNodes, IQuestTaskInterface), false },  // 3929601114
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_ResetTrackBetweenNodes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_ResetTrackBetweenNodes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_ResetTrackBetweenNodes_Statics::ClassParams = {
		&UTask_ResetTrackBetweenNodes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTask_ResetTrackBetweenNodes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_ResetTrackBetweenNodes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_ResetTrackBetweenNodes()
	{
		if (!Z_Registration_Info_UClass_UTask_ResetTrackBetweenNodes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_ResetTrackBetweenNodes.OuterSingleton, Z_Construct_UClass_UTask_ResetTrackBetweenNodes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_ResetTrackBetweenNodes.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_ResetTrackBetweenNodes>()
	{
		return UTask_ResetTrackBetweenNodes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_ResetTrackBetweenNodes);
	UTask_ResetTrackBetweenNodes::~UTask_ResetTrackBetweenNodes() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_ResetTrackBetweenNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_ResetTrackBetweenNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_ResetTrackBetweenNodes, UTask_ResetTrackBetweenNodes::StaticClass, TEXT("UTask_ResetTrackBetweenNodes"), &Z_Registration_Info_UClass_UTask_ResetTrackBetweenNodes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_ResetTrackBetweenNodes), 1744597459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_ResetTrackBetweenNodes_h_271341827(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_ResetTrackBetweenNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_ResetTrackBetweenNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
