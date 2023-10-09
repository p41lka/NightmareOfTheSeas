// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Selectors/BaseObjectClassSelectorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseObjectClassSelectorWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseObjectClassSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseObjectClassSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseSelectorWidget();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UBaseObjectClassSelectorWidget::execSelectorCommitValue)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UObject> ,Z_Param_NewSelectorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitValue(Z_Param_NewSelectorValue);
		P_NATIVE_END;
	}
	void UBaseObjectClassSelectorWidget::StaticRegisterNativesUBaseObjectClassSelectorWidget()
	{
		UClass* Class = UBaseObjectClassSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectorCommitValue", &UBaseObjectClassSelectorWidget::execSelectorCommitValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics
	{
		struct BaseObjectClassSelectorWidget_eventSelectorCommitValue_Parms
		{
			TSoftClassPtr<UObject>  NewSelectorValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NewSelectorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue = { "NewSelectorValue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseObjectClassSelectorWidget_eventSelectorCommitValue_Parms, NewSelectorValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector value commit function.\n\x09*\x09Must be called when the selected variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseObjectClassSelectorWidget.h" },
		{ "ToolTip", "Selector value commit function.\nMust be called when the selected variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseObjectClassSelectorWidget, nullptr, "SelectorCommitValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::BaseObjectClassSelectorWidget_eventSelectorCommitValue_Parms), Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseObjectClassSelectorWidget);
	UClass* Z_Construct_UClass_UBaseObjectClassSelectorWidget_NoRegister()
	{
		return UBaseObjectClassSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseObjectClassSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseObjectClassSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSelectorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseObjectClassSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseObjectClassSelectorWidget_SelectorCommitValue, "SelectorCommitValue" }, // 3176381185
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseObjectClassSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base widget that contains logic for all object class payload selectors\n */" },
		{ "DisplayName", "ObjectClassSelector" },
		{ "IncludePath", "Selectors/BaseObjectClassSelectorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Selectors/BaseObjectClassSelectorWidget.h" },
		{ "ToolTip", "Base widget that contains logic for all object class payload selectors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseObjectClassSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseObjectClassSelectorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseObjectClassSelectorWidget_Statics::ClassParams = {
		&UBaseObjectClassSelectorWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseObjectClassSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseObjectClassSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseObjectClassSelectorWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseObjectClassSelectorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseObjectClassSelectorWidget.OuterSingleton, Z_Construct_UClass_UBaseObjectClassSelectorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseObjectClassSelectorWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseObjectClassSelectorWidget>()
	{
		return UBaseObjectClassSelectorWidget::StaticClass();
	}
	UBaseObjectClassSelectorWidget::UBaseObjectClassSelectorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseObjectClassSelectorWidget);
	UBaseObjectClassSelectorWidget::~UBaseObjectClassSelectorWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseObjectClassSelectorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseObjectClassSelectorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseObjectClassSelectorWidget, UBaseObjectClassSelectorWidget::StaticClass, TEXT("UBaseObjectClassSelectorWidget"), &Z_Registration_Info_UClass_UBaseObjectClassSelectorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseObjectClassSelectorWidget), 2484019459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseObjectClassSelectorWidget_h_1087933526(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseObjectClassSelectorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseObjectClassSelectorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
