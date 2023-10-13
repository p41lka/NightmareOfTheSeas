// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Task/Task_RemoveQuestFromCompleted.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_RemoveQuestFromCompleted() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_RemoveQuestFromCompleted();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_RemoveQuestFromCompleted_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	void UTask_RemoveQuestFromCompleted::StaticRegisterNativesUTask_RemoveQuestFromCompleted()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_RemoveQuestFromCompleted);
	UClass* Z_Construct_UClass_UTask_RemoveQuestFromCompleted_NoRegister()
	{
		return UTask_RemoveQuestFromCompleted::StaticClass();
	}
	struct Z_Construct_UClass_UTask_RemoveQuestFromCompleted_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_RemoveQuestFromCompleted_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_RemoveQuestFromCompleted_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Task that reset nodes that are connected between the specified nodes. This task must be used carefully.\n */" },
		{ "IncludePath", "Task/Task_RemoveQuestFromCompleted.h" },
		{ "ModuleRelativePath", "Public/Task/Task_RemoveQuestFromCompleted.h" },
		{ "ToolTip", "Task that reset nodes that are connected between the specified nodes. This task must be used carefully." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTask_RemoveQuestFromCompleted_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UTask_RemoveQuestFromCompleted, IQuestTaskInterface), false },  // 3929601114
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_RemoveQuestFromCompleted_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_RemoveQuestFromCompleted>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_RemoveQuestFromCompleted_Statics::ClassParams = {
		&UTask_RemoveQuestFromCompleted::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTask_RemoveQuestFromCompleted_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_RemoveQuestFromCompleted_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_RemoveQuestFromCompleted()
	{
		if (!Z_Registration_Info_UClass_UTask_RemoveQuestFromCompleted.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_RemoveQuestFromCompleted.OuterSingleton, Z_Construct_UClass_UTask_RemoveQuestFromCompleted_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_RemoveQuestFromCompleted.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_RemoveQuestFromCompleted>()
	{
		return UTask_RemoveQuestFromCompleted::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_RemoveQuestFromCompleted);
	UTask_RemoveQuestFromCompleted::~UTask_RemoveQuestFromCompleted() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_RemoveQuestFromCompleted_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_RemoveQuestFromCompleted_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_RemoveQuestFromCompleted, UTask_RemoveQuestFromCompleted::StaticClass, TEXT("UTask_RemoveQuestFromCompleted"), &Z_Registration_Info_UClass_UTask_RemoveQuestFromCompleted, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_RemoveQuestFromCompleted), 1455222619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_RemoveQuestFromCompleted_h_514448247(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_RemoveQuestFromCompleted_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_RemoveQuestFromCompleted_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
