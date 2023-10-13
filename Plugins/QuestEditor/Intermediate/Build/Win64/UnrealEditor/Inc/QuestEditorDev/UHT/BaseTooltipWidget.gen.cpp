// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Tooltip/BaseTooltipWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTooltipWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTooltipWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTooltipWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	void UBaseTooltipWidget::StaticRegisterNativesUBaseTooltipWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseTooltipWidget);
	UClass* Z_Construct_UClass_UBaseTooltipWidget_NoRegister()
	{
		return UBaseTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Base tooltip  widget for display all tooltip content widgets.\n */" },
		{ "IncludePath", "Tooltip/BaseTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/Tooltip/BaseTooltipWidget.h" },
		{ "ToolTip", "Base tooltip  widget for display all tooltip content widgets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTooltipWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTooltipWidget_Statics::ClassParams = {
		&UBaseTooltipWidget::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTooltipWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseTooltipWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTooltipWidget.OuterSingleton, Z_Construct_UClass_UBaseTooltipWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseTooltipWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseTooltipWidget>()
	{
		return UBaseTooltipWidget::StaticClass();
	}
	UBaseTooltipWidget::UBaseTooltipWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTooltipWidget);
	UBaseTooltipWidget::~UBaseTooltipWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Tooltip_BaseTooltipWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Tooltip_BaseTooltipWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTooltipWidget, UBaseTooltipWidget::StaticClass, TEXT("UBaseTooltipWidget"), &Z_Registration_Info_UClass_UBaseTooltipWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTooltipWidget), 2714505250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Tooltip_BaseTooltipWidget_h_2356299846(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Tooltip_BaseTooltipWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Tooltip_BaseTooltipWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
