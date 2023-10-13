// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Selectors/BaseTagSelectorWidget.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTagSelectorWidget() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTagSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTagSelectorWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UBaseTagSelectorWidget::execSelectorCommitValue)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_NewSelectorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitValue(Z_Param_NewSelectorValue);
		P_NATIVE_END;
	}
	void UBaseTagSelectorWidget::StaticRegisterNativesUBaseTagSelectorWidget()
	{
		UClass* Class = UBaseTagSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectorCommitValue", &UBaseTagSelectorWidget::execSelectorCommitValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics
	{
		struct BaseTagSelectorWidget_eventSelectorCommitValue_Parms
		{
			FGameplayTagContainer NewSelectorValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSelectorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue = { "NewSelectorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTagSelectorWidget_eventSelectorCommitValue_Parms, NewSelectorValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector value commit function.\n\x09*\x09Must be called when the selected variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseTagSelectorWidget.h" },
		{ "ToolTip", "Selector value commit function.\nMust be called when the selected variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTagSelectorWidget, nullptr, "SelectorCommitValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::BaseTagSelectorWidget_eventSelectorCommitValue_Parms), Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseTagSelectorWidget);
	UClass* Z_Construct_UClass_UBaseTagSelectorWidget_NoRegister()
	{
		return UBaseTagSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTagSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTagSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSelectorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseTagSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseTagSelectorWidget_SelectorCommitValue, "SelectorCommitValue" }, // 4183241590
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTagSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Base widget that contains logic for all tag payload selectors\n */" },
		{ "DisplayName", "TagSelector" },
		{ "IncludePath", "Selectors/BaseTagSelectorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Selectors/BaseTagSelectorWidget.h" },
		{ "ToolTip", "Base widget that contains logic for all tag payload selectors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTagSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTagSelectorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTagSelectorWidget_Statics::ClassParams = {
		&UBaseTagSelectorWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseTagSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTagSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTagSelectorWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseTagSelectorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTagSelectorWidget.OuterSingleton, Z_Construct_UClass_UBaseTagSelectorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseTagSelectorWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseTagSelectorWidget>()
	{
		return UBaseTagSelectorWidget::StaticClass();
	}
	UBaseTagSelectorWidget::UBaseTagSelectorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTagSelectorWidget);
	UBaseTagSelectorWidget::~UBaseTagSelectorWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseTagSelectorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseTagSelectorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTagSelectorWidget, UBaseTagSelectorWidget::StaticClass, TEXT("UBaseTagSelectorWidget"), &Z_Registration_Info_UClass_UBaseTagSelectorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTagSelectorWidget), 83529502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseTagSelectorWidget_h_423034290(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseTagSelectorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseTagSelectorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
