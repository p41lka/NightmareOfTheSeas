// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Selectors/BaseVectorSelectorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseVectorSelectorWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseVectorSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseVectorSelectorWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UBaseVectorSelectorWidget::execSelectorCommitValue)
	{
		P_GET_STRUCT(FVector,Z_Param_NewSelectorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitValue(Z_Param_NewSelectorValue);
		P_NATIVE_END;
	}
	void UBaseVectorSelectorWidget::StaticRegisterNativesUBaseVectorSelectorWidget()
	{
		UClass* Class = UBaseVectorSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectorCommitValue", &UBaseVectorSelectorWidget::execSelectorCommitValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics
	{
		struct BaseVectorSelectorWidget_eventSelectorCommitValue_Parms
		{
			FVector NewSelectorValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSelectorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue = { "NewSelectorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseVectorSelectorWidget_eventSelectorCommitValue_Parms, NewSelectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector value commit function.\n\x09*\x09Must be called when the selected variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseVectorSelectorWidget.h" },
		{ "ToolTip", "Selector value commit function.\nMust be called when the selected variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseVectorSelectorWidget, nullptr, "SelectorCommitValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::BaseVectorSelectorWidget_eventSelectorCommitValue_Parms), Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseVectorSelectorWidget);
	UClass* Z_Construct_UClass_UBaseVectorSelectorWidget_NoRegister()
	{
		return UBaseVectorSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseVectorSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseVectorSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSelectorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseVectorSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseVectorSelectorWidget_SelectorCommitValue, "SelectorCommitValue" }, // 3969019224
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseVectorSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base widget that contains logic for all vector payload selectors\n */" },
		{ "DisplayName", "VectorSelector" },
		{ "IncludePath", "Selectors/BaseVectorSelectorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Selectors/BaseVectorSelectorWidget.h" },
		{ "ToolTip", "Base widget that contains logic for all vector payload selectors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseVectorSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseVectorSelectorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseVectorSelectorWidget_Statics::ClassParams = {
		&UBaseVectorSelectorWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseVectorSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVectorSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseVectorSelectorWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseVectorSelectorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseVectorSelectorWidget.OuterSingleton, Z_Construct_UClass_UBaseVectorSelectorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseVectorSelectorWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseVectorSelectorWidget>()
	{
		return UBaseVectorSelectorWidget::StaticClass();
	}
	UBaseVectorSelectorWidget::UBaseVectorSelectorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseVectorSelectorWidget);
	UBaseVectorSelectorWidget::~UBaseVectorSelectorWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseVectorSelectorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseVectorSelectorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseVectorSelectorWidget, UBaseVectorSelectorWidget::StaticClass, TEXT("UBaseVectorSelectorWidget"), &Z_Registration_Info_UClass_UBaseVectorSelectorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseVectorSelectorWidget), 1923968427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseVectorSelectorWidget_h_2474856946(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseVectorSelectorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseVectorSelectorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
