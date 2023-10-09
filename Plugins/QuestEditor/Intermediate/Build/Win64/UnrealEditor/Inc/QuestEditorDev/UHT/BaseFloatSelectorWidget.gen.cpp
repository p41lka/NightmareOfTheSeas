// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Selectors/BaseFloatSelectorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFloatSelectorWidget() {}
// Cross Module References
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseFloatSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseFloatSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseSelectorWidget();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UBaseFloatSelectorWidget::execSelectorCommitValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSelectorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitValue(Z_Param_NewSelectorValue);
		P_NATIVE_END;
	}
	void UBaseFloatSelectorWidget::StaticRegisterNativesUBaseFloatSelectorWidget()
	{
		UClass* Class = UBaseFloatSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectorCommitValue", &UBaseFloatSelectorWidget::execSelectorCommitValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics
	{
		struct BaseFloatSelectorWidget_eventSelectorCommitValue_Parms
		{
			float NewSelectorValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSelectorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue = { "NewSelectorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFloatSelectorWidget_eventSelectorCommitValue_Parms, NewSelectorValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector value commit function.\n\x09*\x09Must be called when the selected variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseFloatSelectorWidget.h" },
		{ "ToolTip", "Selector value commit function.\nMust be called when the selected variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFloatSelectorWidget, nullptr, "SelectorCommitValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::BaseFloatSelectorWidget_eventSelectorCommitValue_Parms), Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFloatSelectorWidget);
	UClass* Z_Construct_UClass_UBaseFloatSelectorWidget_NoRegister()
	{
		return UBaseFloatSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFloatSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFloatSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSelectorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseFloatSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseFloatSelectorWidget_SelectorCommitValue, "SelectorCommitValue" }, // 3959584673
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFloatSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Base widget that contains logic for all float payload selectors\n */" },
		{ "DisplayName", "FloatSelector" },
		{ "IncludePath", "Selectors/BaseFloatSelectorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Selectors/BaseFloatSelectorWidget.h" },
		{ "ToolTip", "Base widget that contains logic for all float payload selectors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFloatSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFloatSelectorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFloatSelectorWidget_Statics::ClassParams = {
		&UBaseFloatSelectorWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseFloatSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFloatSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFloatSelectorWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseFloatSelectorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFloatSelectorWidget.OuterSingleton, Z_Construct_UClass_UBaseFloatSelectorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseFloatSelectorWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseFloatSelectorWidget>()
	{
		return UBaseFloatSelectorWidget::StaticClass();
	}
	UBaseFloatSelectorWidget::UBaseFloatSelectorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFloatSelectorWidget);
	UBaseFloatSelectorWidget::~UBaseFloatSelectorWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseFloatSelectorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseFloatSelectorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFloatSelectorWidget, UBaseFloatSelectorWidget::StaticClass, TEXT("UBaseFloatSelectorWidget"), &Z_Registration_Info_UClass_UBaseFloatSelectorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFloatSelectorWidget), 484534687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseFloatSelectorWidget_h_879066644(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseFloatSelectorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseFloatSelectorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
