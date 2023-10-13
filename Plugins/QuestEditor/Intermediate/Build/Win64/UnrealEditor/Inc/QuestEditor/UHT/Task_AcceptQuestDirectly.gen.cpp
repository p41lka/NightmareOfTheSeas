// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Task/Task_AcceptQuestDirectly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_AcceptQuestDirectly() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_AcceptQuestDirectly();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_AcceptQuestDirectly_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	void UTask_AcceptQuestDirectly::StaticRegisterNativesUTask_AcceptQuestDirectly()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_AcceptQuestDirectly);
	UClass* Z_Construct_UClass_UTask_AcceptQuestDirectly_NoRegister()
	{
		return UTask_AcceptQuestDirectly::StaticClass();
	}
	struct Z_Construct_UClass_UTask_AcceptQuestDirectly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_AcceptQuestDirectly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_AcceptQuestDirectly_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Task that reset nodes that are connected between the specified nodes. This task must be used carefully.\n */" },
		{ "IncludePath", "Task/Task_AcceptQuestDirectly.h" },
		{ "ModuleRelativePath", "Public/Task/Task_AcceptQuestDirectly.h" },
		{ "ToolTip", "Task that reset nodes that are connected between the specified nodes. This task must be used carefully." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTask_AcceptQuestDirectly_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UTask_AcceptQuestDirectly, IQuestTaskInterface), false },  // 3929601114
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_AcceptQuestDirectly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_AcceptQuestDirectly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_AcceptQuestDirectly_Statics::ClassParams = {
		&UTask_AcceptQuestDirectly::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTask_AcceptQuestDirectly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_AcceptQuestDirectly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_AcceptQuestDirectly()
	{
		if (!Z_Registration_Info_UClass_UTask_AcceptQuestDirectly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_AcceptQuestDirectly.OuterSingleton, Z_Construct_UClass_UTask_AcceptQuestDirectly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_AcceptQuestDirectly.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_AcceptQuestDirectly>()
	{
		return UTask_AcceptQuestDirectly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_AcceptQuestDirectly);
	UTask_AcceptQuestDirectly::~UTask_AcceptQuestDirectly() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_AcceptQuestDirectly_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_AcceptQuestDirectly_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_AcceptQuestDirectly, UTask_AcceptQuestDirectly::StaticClass, TEXT("UTask_AcceptQuestDirectly"), &Z_Registration_Info_UClass_UTask_AcceptQuestDirectly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_AcceptQuestDirectly), 3096302647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_AcceptQuestDirectly_h_4199710371(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_AcceptQuestDirectly_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_AcceptQuestDirectly_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
