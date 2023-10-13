// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Factory/QuestEditorWidgetBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorWidgetBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestGameWidgetBlueprint();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestGameWidgetBlueprint_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTaskErrorBlueprint();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTaskErrorBlueprint_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	void UQuestEditorTaskErrorBlueprint::StaticRegisterNativesUQuestEditorTaskErrorBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorTaskErrorBlueprint);
	UClass* Z_Construct_UClass_UQuestEditorTaskErrorBlueprint_NoRegister()
	{
		return UQuestEditorTaskErrorBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorTaskErrorBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorTaskErrorBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorTaskErrorBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Base object to analize payloads for errors inside the quest editor.\n */" },
		{ "IncludePath", "Factory/QuestEditorWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Public/Factory/QuestEditorWidgetBlueprint.h" },
		{ "ToolTip", "Base object to analize payloads for errors inside the quest editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorTaskErrorBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorTaskErrorBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorTaskErrorBlueprint_Statics::ClassParams = {
		&UQuestEditorTaskErrorBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestEditorTaskErrorBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorTaskErrorBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEditorTaskErrorBlueprint()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorTaskErrorBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorTaskErrorBlueprint.OuterSingleton, Z_Construct_UClass_UQuestEditorTaskErrorBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorTaskErrorBlueprint.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UQuestEditorTaskErrorBlueprint>()
	{
		return UQuestEditorTaskErrorBlueprint::StaticClass();
	}
	UQuestEditorTaskErrorBlueprint::UQuestEditorTaskErrorBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorTaskErrorBlueprint);
	UQuestEditorTaskErrorBlueprint::~UQuestEditorTaskErrorBlueprint() {}
	void UQuestEditorTalkTaskErrorBlueprint::StaticRegisterNativesUQuestEditorTalkTaskErrorBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorTalkTaskErrorBlueprint);
	UClass* Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint_NoRegister()
	{
		return UQuestEditorTalkTaskErrorBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Base object to analize talk tasks for errors inside the quest editor.\n */" },
		{ "IncludePath", "Factory/QuestEditorWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Public/Factory/QuestEditorWidgetBlueprint.h" },
		{ "ToolTip", "Base object to analize talk tasks for errors inside the quest editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorTalkTaskErrorBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint_Statics::ClassParams = {
		&UQuestEditorTalkTaskErrorBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorTalkTaskErrorBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorTalkTaskErrorBlueprint.OuterSingleton, Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorTalkTaskErrorBlueprint.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UQuestEditorTalkTaskErrorBlueprint>()
	{
		return UQuestEditorTalkTaskErrorBlueprint::StaticClass();
	}
	UQuestEditorTalkTaskErrorBlueprint::UQuestEditorTalkTaskErrorBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorTalkTaskErrorBlueprint);
	UQuestEditorTalkTaskErrorBlueprint::~UQuestEditorTalkTaskErrorBlueprint() {}
	void UBaseQuestGameWidgetBlueprint::StaticRegisterNativesUBaseQuestGameWidgetBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseQuestGameWidgetBlueprint);
	UClass* Z_Construct_UClass_UBaseQuestGameWidgetBlueprint_NoRegister()
	{
		return UBaseQuestGameWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuestGameWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuestGameWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestGameWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *   Base widget for in game blueprints.\n */" },
		{ "IncludePath", "Factory/QuestEditorWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Public/Factory/QuestEditorWidgetBlueprint.h" },
		{ "ToolTip", "Base widget for in game blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuestGameWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuestGameWidgetBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuestGameWidgetBlueprint_Statics::ClassParams = {
		&UBaseQuestGameWidgetBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuestGameWidgetBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestGameWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuestGameWidgetBlueprint()
	{
		if (!Z_Registration_Info_UClass_UBaseQuestGameWidgetBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuestGameWidgetBlueprint.OuterSingleton, Z_Construct_UClass_UBaseQuestGameWidgetBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseQuestGameWidgetBlueprint.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseQuestGameWidgetBlueprint>()
	{
		return UBaseQuestGameWidgetBlueprint::StaticClass();
	}
	UBaseQuestGameWidgetBlueprint::UBaseQuestGameWidgetBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuestGameWidgetBlueprint);
	UBaseQuestGameWidgetBlueprint::~UBaseQuestGameWidgetBlueprint() {}
	void UBaseQuestEditorWidgetBlueprint::StaticRegisterNativesUBaseQuestEditorWidgetBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseQuestEditorWidgetBlueprint);
	UClass* Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint_NoRegister()
	{
		return UBaseQuestEditorWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *   Base widget for Quest Editor blueprints.\n */" },
		{ "IncludePath", "Factory/QuestEditorWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Public/Factory/QuestEditorWidgetBlueprint.h" },
		{ "ToolTip", "Base widget for Quest Editor blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuestEditorWidgetBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint_Statics::ClassParams = {
		&UBaseQuestEditorWidgetBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint()
	{
		if (!Z_Registration_Info_UClass_UBaseQuestEditorWidgetBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuestEditorWidgetBlueprint.OuterSingleton, Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseQuestEditorWidgetBlueprint.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseQuestEditorWidgetBlueprint>()
	{
		return UBaseQuestEditorWidgetBlueprint::StaticClass();
	}
	UBaseQuestEditorWidgetBlueprint::UBaseQuestEditorWidgetBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuestEditorWidgetBlueprint);
	UBaseQuestEditorWidgetBlueprint::~UBaseQuestEditorWidgetBlueprint() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Factory_QuestEditorWidgetBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Factory_QuestEditorWidgetBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorTaskErrorBlueprint, UQuestEditorTaskErrorBlueprint::StaticClass, TEXT("UQuestEditorTaskErrorBlueprint"), &Z_Registration_Info_UClass_UQuestEditorTaskErrorBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorTaskErrorBlueprint), 2922470122U) },
		{ Z_Construct_UClass_UQuestEditorTalkTaskErrorBlueprint, UQuestEditorTalkTaskErrorBlueprint::StaticClass, TEXT("UQuestEditorTalkTaskErrorBlueprint"), &Z_Registration_Info_UClass_UQuestEditorTalkTaskErrorBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorTalkTaskErrorBlueprint), 3997989679U) },
		{ Z_Construct_UClass_UBaseQuestGameWidgetBlueprint, UBaseQuestGameWidgetBlueprint::StaticClass, TEXT("UBaseQuestGameWidgetBlueprint"), &Z_Registration_Info_UClass_UBaseQuestGameWidgetBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuestGameWidgetBlueprint), 1121737275U) },
		{ Z_Construct_UClass_UBaseQuestEditorWidgetBlueprint, UBaseQuestEditorWidgetBlueprint::StaticClass, TEXT("UBaseQuestEditorWidgetBlueprint"), &Z_Registration_Info_UClass_UBaseQuestEditorWidgetBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuestEditorWidgetBlueprint), 2234363944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Factory_QuestEditorWidgetBlueprint_h_3497252984(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Factory_QuestEditorWidgetBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Factory_QuestEditorWidgetBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
