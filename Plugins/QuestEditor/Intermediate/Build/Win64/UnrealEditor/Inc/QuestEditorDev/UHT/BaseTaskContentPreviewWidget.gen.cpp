// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Preview/BaseTaskContentPreviewWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTaskContentPreviewWidget() {}
// Cross Module References
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBasePreviewWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTaskContentPreviewWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTaskContentPreviewWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	void UBaseTaskContentPreviewWidget::StaticRegisterNativesUBaseTaskContentPreviewWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseTaskContentPreviewWidget);
	UClass* Z_Construct_UClass_UBaseTaskContentPreviewWidget_NoRegister()
	{
		return UBaseTaskContentPreviewWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTaskContentPreviewWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTaskContentPreviewWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePreviewWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTaskContentPreviewWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Base widget that contains logic for all content task preview \n */" },
		{ "DisplayName", "TaskContentPreview" },
		{ "IncludePath", "Preview/BaseTaskContentPreviewWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Preview/BaseTaskContentPreviewWidget.h" },
		{ "ToolTip", "Base widget that contains logic for all content task preview" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTaskContentPreviewWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTaskContentPreviewWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTaskContentPreviewWidget_Statics::ClassParams = {
		&UBaseTaskContentPreviewWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseTaskContentPreviewWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTaskContentPreviewWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTaskContentPreviewWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseTaskContentPreviewWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTaskContentPreviewWidget.OuterSingleton, Z_Construct_UClass_UBaseTaskContentPreviewWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseTaskContentPreviewWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseTaskContentPreviewWidget>()
	{
		return UBaseTaskContentPreviewWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTaskContentPreviewWidget);
	UBaseTaskContentPreviewWidget::~UBaseTaskContentPreviewWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BaseTaskContentPreviewWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BaseTaskContentPreviewWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTaskContentPreviewWidget, UBaseTaskContentPreviewWidget::StaticClass, TEXT("UBaseTaskContentPreviewWidget"), &Z_Registration_Info_UClass_UBaseTaskContentPreviewWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTaskContentPreviewWidget), 289734561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BaseTaskContentPreviewWidget_h_2110036075(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BaseTaskContentPreviewWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BaseTaskContentPreviewWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
