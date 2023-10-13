// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Selectors/BaseStringSelectorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStringSelectorWidget() {}
// Cross Module References
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseStringSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseStringSelectorWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UBaseStringSelectorWidget::execSelectorCommitValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewSelectorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitValue(Z_Param_NewSelectorValue);
		P_NATIVE_END;
	}
	void UBaseStringSelectorWidget::StaticRegisterNativesUBaseStringSelectorWidget()
	{
		UClass* Class = UBaseStringSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectorCommitValue", &UBaseStringSelectorWidget::execSelectorCommitValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics
	{
		struct BaseStringSelectorWidget_eventSelectorCommitValue_Parms
		{
			FString NewSelectorValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewSelectorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue = { "NewSelectorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseStringSelectorWidget_eventSelectorCommitValue_Parms, NewSelectorValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector value commit function.\n\x09*\x09Must be called when the selected variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseStringSelectorWidget.h" },
		{ "ToolTip", "Selector value commit function.\nMust be called when the selected variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseStringSelectorWidget, nullptr, "SelectorCommitValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::BaseStringSelectorWidget_eventSelectorCommitValue_Parms), Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseStringSelectorWidget);
	UClass* Z_Construct_UClass_UBaseStringSelectorWidget_NoRegister()
	{
		return UBaseStringSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseStringSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseStringSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSelectorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseStringSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseStringSelectorWidget_SelectorCommitValue, "SelectorCommitValue" }, // 143923947
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStringSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09This is the basic widget for making a custom string selector widget for the quest editor\n */" },
		{ "DisplayName", "StringSelector" },
		{ "IncludePath", "Selectors/BaseStringSelectorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Selectors/BaseStringSelectorWidget.h" },
		{ "ToolTip", "This is the basic widget for making a custom string selector widget for the quest editor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseStringSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseStringSelectorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseStringSelectorWidget_Statics::ClassParams = {
		&UBaseStringSelectorWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseStringSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStringSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseStringSelectorWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseStringSelectorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseStringSelectorWidget.OuterSingleton, Z_Construct_UClass_UBaseStringSelectorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseStringSelectorWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseStringSelectorWidget>()
	{
		return UBaseStringSelectorWidget::StaticClass();
	}
	UBaseStringSelectorWidget::UBaseStringSelectorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseStringSelectorWidget);
	UBaseStringSelectorWidget::~UBaseStringSelectorWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseStringSelectorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseStringSelectorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseStringSelectorWidget, UBaseStringSelectorWidget::StaticClass, TEXT("UBaseStringSelectorWidget"), &Z_Registration_Info_UClass_UBaseStringSelectorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseStringSelectorWidget), 2765499305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseStringSelectorWidget_h_2250538982(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseStringSelectorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseStringSelectorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
