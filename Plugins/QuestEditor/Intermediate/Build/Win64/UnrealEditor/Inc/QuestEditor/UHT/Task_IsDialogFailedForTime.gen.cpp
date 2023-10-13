// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskDialogs/Task_IsDialogFailedForTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_IsDialogFailedForTime() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_IsDialogFailedForTime();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_IsDialogFailedForTime_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	void UTask_IsDialogFailedForTime::StaticRegisterNativesUTask_IsDialogFailedForTime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_IsDialogFailedForTime);
	UClass* Z_Construct_UClass_UTask_IsDialogFailedForTime_NoRegister()
	{
		return UTask_IsDialogFailedForTime::StaticClass();
	}
	struct Z_Construct_UClass_UTask_IsDialogFailedForTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_IsDialogFailedForTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_IsDialogFailedForTime_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Condition Task to check if a Quest is already completed.\n */" },
		{ "IncludePath", "TaskDialogs/Task_IsDialogFailedForTime.h" },
		{ "ModuleRelativePath", "Public/TaskDialogs/Task_IsDialogFailedForTime.h" },
		{ "ToolTip", "Condition Task to check if a Quest is already completed." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTask_IsDialogFailedForTime_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UTask_IsDialogFailedForTime, IQuestTaskInterface), false },  // 3929601114
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_IsDialogFailedForTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_IsDialogFailedForTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_IsDialogFailedForTime_Statics::ClassParams = {
		&UTask_IsDialogFailedForTime::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTask_IsDialogFailedForTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_IsDialogFailedForTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_IsDialogFailedForTime()
	{
		if (!Z_Registration_Info_UClass_UTask_IsDialogFailedForTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_IsDialogFailedForTime.OuterSingleton, Z_Construct_UClass_UTask_IsDialogFailedForTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_IsDialogFailedForTime.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_IsDialogFailedForTime>()
	{
		return UTask_IsDialogFailedForTime::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_IsDialogFailedForTime);
	UTask_IsDialogFailedForTime::~UTask_IsDialogFailedForTime() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskDialogs_Task_IsDialogFailedForTime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskDialogs_Task_IsDialogFailedForTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_IsDialogFailedForTime, UTask_IsDialogFailedForTime::StaticClass, TEXT("UTask_IsDialogFailedForTime"), &Z_Registration_Info_UClass_UTask_IsDialogFailedForTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_IsDialogFailedForTime), 954675034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskDialogs_Task_IsDialogFailedForTime_h_4205818278(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskDialogs_Task_IsDialogFailedForTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskDialogs_Task_IsDialogFailedForTime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
