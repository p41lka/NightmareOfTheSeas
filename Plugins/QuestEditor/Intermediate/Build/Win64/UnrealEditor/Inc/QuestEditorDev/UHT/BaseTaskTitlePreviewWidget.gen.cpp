// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Preview/BaseTaskTitlePreviewWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTaskTitlePreviewWidget() {}
// Cross Module References
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBasePreviewWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTaskTitlePreviewWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTaskTitlePreviewWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	void UBaseTaskTitlePreviewWidget::StaticRegisterNativesUBaseTaskTitlePreviewWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseTaskTitlePreviewWidget);
	UClass* Z_Construct_UClass_UBaseTaskTitlePreviewWidget_NoRegister()
	{
		return UBaseTaskTitlePreviewWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTaskTitlePreviewWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTaskTitlePreviewWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePreviewWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTaskTitlePreviewWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Base widget that contains logic for all task title preview\n */" },
		{ "DisplayName", "TaskTitlePreview" },
		{ "IncludePath", "Preview/BaseTaskTitlePreviewWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Preview/BaseTaskTitlePreviewWidget.h" },
		{ "ToolTip", "Base widget that contains logic for all task title preview" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTaskTitlePreviewWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTaskTitlePreviewWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTaskTitlePreviewWidget_Statics::ClassParams = {
		&UBaseTaskTitlePreviewWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTaskTitlePreviewWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTaskTitlePreviewWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTaskTitlePreviewWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseTaskTitlePreviewWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTaskTitlePreviewWidget.OuterSingleton, Z_Construct_UClass_UBaseTaskTitlePreviewWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseTaskTitlePreviewWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseTaskTitlePreviewWidget>()
	{
		return UBaseTaskTitlePreviewWidget::StaticClass();
	}
	UBaseTaskTitlePreviewWidget::UBaseTaskTitlePreviewWidget() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTaskTitlePreviewWidget);
	UBaseTaskTitlePreviewWidget::~UBaseTaskTitlePreviewWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BaseTaskTitlePreviewWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BaseTaskTitlePreviewWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTaskTitlePreviewWidget, UBaseTaskTitlePreviewWidget::StaticClass, TEXT("UBaseTaskTitlePreviewWidget"), &Z_Registration_Info_UClass_UBaseTaskTitlePreviewWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTaskTitlePreviewWidget), 264092907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BaseTaskTitlePreviewWidget_h_3720944666(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BaseTaskTitlePreviewWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BaseTaskTitlePreviewWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
