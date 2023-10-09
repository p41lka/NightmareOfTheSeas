// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Factory/QuestFactory_QuestEditorWidgets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestFactory_QuestEditorWidgets() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestFactory_QuestEditorWidgets();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	void UQuestFactory_QuestEditorWidgets::StaticRegisterNativesUQuestFactory_QuestEditorWidgets()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestFactory_QuestEditorWidgets);
	UClass* Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_NoRegister()
	{
		return UQuestFactory_QuestEditorWidgets::StaticClass();
	}
	struct Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///----------------------------------------------------------------------\n//-------------------------------Game widget factory\n//----------------------------------------------------------------------\n" },
		{ "IncludePath", "Factory/QuestFactory_QuestEditorWidgets.h" },
		{ "ModuleRelativePath", "Public/Factory/QuestFactory_QuestEditorWidgets.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "//----------------------------------------------------------------------\n//-------------------------------Game widget factory\n//----------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::NewProp_BlueprintType_MetaData[] = {
		{ "Category", "EditorWidgetBlueprintFactory" },
		{ "Comment", "// The type of blueprint that will be created\n" },
		{ "ModuleRelativePath", "Public/Factory/QuestFactory_QuestEditorWidgets.h" },
		{ "ToolTip", "The type of blueprint that will be created" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestFactory_QuestEditorWidgets, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::NewProp_BlueprintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::NewProp_BlueprintType_MetaData)) }; // 594944057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "EditorWidgetBlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Public/Factory/QuestFactory_QuestEditorWidgets.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestFactory_QuestEditorWidgets, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::NewProp_BlueprintType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestFactory_QuestEditorWidgets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::ClassParams = {
		&UQuestFactory_QuestEditorWidgets::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestFactory_QuestEditorWidgets()
	{
		if (!Z_Registration_Info_UClass_UQuestFactory_QuestEditorWidgets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestFactory_QuestEditorWidgets.OuterSingleton, Z_Construct_UClass_UQuestFactory_QuestEditorWidgets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestFactory_QuestEditorWidgets.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UQuestFactory_QuestEditorWidgets>()
	{
		return UQuestFactory_QuestEditorWidgets::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestFactory_QuestEditorWidgets);
	UQuestFactory_QuestEditorWidgets::~UQuestFactory_QuestEditorWidgets() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Factory_QuestFactory_QuestEditorWidgets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Factory_QuestFactory_QuestEditorWidgets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestFactory_QuestEditorWidgets, UQuestFactory_QuestEditorWidgets::StaticClass, TEXT("UQuestFactory_QuestEditorWidgets"), &Z_Registration_Info_UClass_UQuestFactory_QuestEditorWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestFactory_QuestEditorWidgets), 1069076546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Factory_QuestFactory_QuestEditorWidgets_h_618087489(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Factory_QuestFactory_QuestEditorWidgets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Factory_QuestFactory_QuestEditorWidgets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
