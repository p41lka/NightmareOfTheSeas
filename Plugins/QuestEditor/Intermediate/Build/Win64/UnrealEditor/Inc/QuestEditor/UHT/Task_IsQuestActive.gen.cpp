// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Task/Task_IsQuestActive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_IsQuestActive() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_IsQuestActive();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_IsQuestActive_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	void UTask_IsQuestActive::StaticRegisterNativesUTask_IsQuestActive()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_IsQuestActive);
	UClass* Z_Construct_UClass_UTask_IsQuestActive_NoRegister()
	{
		return UTask_IsQuestActive::StaticClass();
	}
	struct Z_Construct_UClass_UTask_IsQuestActive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_IsQuestActive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_IsQuestActive_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Condition Task to check if a Quest is already completed.\n */" },
		{ "IncludePath", "Task/Task_IsQuestActive.h" },
		{ "ModuleRelativePath", "Public/Task/Task_IsQuestActive.h" },
		{ "ToolTip", "Condition Task to check if a Quest is already completed." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTask_IsQuestActive_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UTask_IsQuestActive, IQuestTaskInterface), false },  // 3929601114
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_IsQuestActive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_IsQuestActive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_IsQuestActive_Statics::ClassParams = {
		&UTask_IsQuestActive::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTask_IsQuestActive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_IsQuestActive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_IsQuestActive()
	{
		if (!Z_Registration_Info_UClass_UTask_IsQuestActive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_IsQuestActive.OuterSingleton, Z_Construct_UClass_UTask_IsQuestActive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_IsQuestActive.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_IsQuestActive>()
	{
		return UTask_IsQuestActive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_IsQuestActive);
	UTask_IsQuestActive::~UTask_IsQuestActive() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_IsQuestActive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_IsQuestActive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_IsQuestActive, UTask_IsQuestActive::StaticClass, TEXT("UTask_IsQuestActive"), &Z_Registration_Info_UClass_UTask_IsQuestActive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_IsQuestActive), 2767814612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_IsQuestActive_h_905471564(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_IsQuestActive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_IsQuestActive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
