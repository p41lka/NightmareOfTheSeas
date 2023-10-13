// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/CustomPayload/CustomPayloadSelectorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPayloadSelectorWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UCustomPayloadSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UCustomPayloadSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventStructDataCommited_Parms
		{
			FString NewValue;
			int32 Slot;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventStructDataCommited_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventStructDataCommited_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------DISPATCHERS DEFINITIONS-----------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadSelectorWidget.h" },
		{ "ToolTip", "------------------------------------------DISPATCHERS DEFINITIONS-----------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "StructDataCommited__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::_Script_QuestEditorDev_eventStructDataCommited_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FStructDataCommited_DelegateWrapper(const FMulticastScriptDelegate& StructDataCommited, const FString& NewValue, int32 Slot)
{
	struct _Script_QuestEditorDev_eventStructDataCommited_Parms
	{
		FString NewValue;
		int32 Slot;
	};
	_Script_QuestEditorDev_eventStructDataCommited_Parms Parms;
	Parms.NewValue=NewValue;
	Parms.Slot=Slot;
	StructDataCommited.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct CustomPayloadSelectorWidget_eventUpdateFromData_Parms
	{
		FString CustomData;
	};
	static FName NAME_UCustomPayloadSelectorWidget_UpdateFromData = FName(TEXT("UpdateFromData"));
	void UCustomPayloadSelectorWidget::UpdateFromData(const FString& CustomData)
	{
		CustomPayloadSelectorWidget_eventUpdateFromData_Parms Parms;
		Parms.CustomData=CustomData;
		ProcessEvent(FindFunctionChecked(NAME_UCustomPayloadSelectorWidget_UpdateFromData),&Parms);
	}
	void UCustomPayloadSelectorWidget::StaticRegisterNativesUCustomPayloadSelectorWidget()
	{
		UClass* Class = UCustomPayloadSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectorCommitValue", &UCustomPayloadSelectorWidget::execSelectorCommitValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics
	{
		struct CustomPayloadSelectorWidget_eventSelectorCommitValue_Parms
		{
			TFieldPath<FProperty> NewSelectorValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSelectorValue_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_NewSelectorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue = { "NewSelectorValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomPayloadSelectorWidget_eventSelectorCommitValue_Parms, NewSelectorValue), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::NewProp_NewSelectorValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector value commit function.\n\x09*\x09Must be called when the selected variable changes.\n\x09*/" },
		{ "CustomStructureParam", "NewSelectorValue" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadSelectorWidget.h" },
		{ "ToolTip", "Selector value commit function.\nMust be called when the selected variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPayloadSelectorWidget, nullptr, "SelectorCommitValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::CustomPayloadSelectorWidget_eventSelectorCommitValue_Parms), Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomPayloadSelectorWidget_eventUpdateFromData_Parms, CustomData), METADATA_PARAMS(Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::NewProp_CustomData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::NewProp_CustomData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Main update event for the selector.\n\x09*\x09""All the logic needed for updating this widget should be placed here.\n\x09*\x09""All selectors must override this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadSelectorWidget.h" },
		{ "ToolTip", "Main update event for the selector.\nAll the logic needed for updating this widget should be placed here.\nAll selectors must override this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPayloadSelectorWidget, nullptr, "UpdateFromData", nullptr, nullptr, sizeof(CustomPayloadSelectorWidget_eventUpdateFromData_Parms), Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomPayloadSelectorWidget);
	UClass* Z_Construct_UClass_UCustomPayloadSelectorWidget_NoRegister()
	{
		return UCustomPayloadSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStructDataCommited_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStructDataCommited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorSlot_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectorSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomPayloadSelectorWidget_SelectorCommitValue, "SelectorCommitValue" }, // 2522255725
		{ &Z_Construct_UFunction_UCustomPayloadSelectorWidget_UpdateFromData, "UpdateFromData" }, // 312922426
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09\x09""Base widget that contains logic for all custom payload selectors\n */" },
		{ "DisplayName", "CustomPayloadSelector" },
		{ "IncludePath", "CustomPayload/CustomPayloadSelectorWidget.h" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadSelectorWidget.h" },
		{ "ToolTip", "Base widget that contains logic for all custom payload selectors" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::NewProp_OnStructDataCommited_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when a selector commits float value*/" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadSelectorWidget.h" },
		{ "ToolTip", "Called when a selector commits float value" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::NewProp_OnStructDataCommited = { "OnStructDataCommited", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomPayloadSelectorWidget, OnStructDataCommited), Z_Construct_UDelegateFunction_QuestEditorDev_StructDataCommited__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::NewProp_OnStructDataCommited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::NewProp_OnStructDataCommited_MetaData)) }; // 534005789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::NewProp_SelectorSlot_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Indicates the index on the payload.\n\x09*/" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadSelectorWidget.h" },
		{ "ToolTip", "Indicates the index on the payload." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::NewProp_SelectorSlot = { "SelectorSlot", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomPayloadSelectorWidget, SelectorSlot), METADATA_PARAMS(Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::NewProp_SelectorSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::NewProp_SelectorSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::NewProp_OnStructDataCommited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::NewProp_SelectorSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomPayloadSelectorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::ClassParams = {
		&UCustomPayloadSelectorWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomPayloadSelectorWidget()
	{
		if (!Z_Registration_Info_UClass_UCustomPayloadSelectorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomPayloadSelectorWidget.OuterSingleton, Z_Construct_UClass_UCustomPayloadSelectorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomPayloadSelectorWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UCustomPayloadSelectorWidget>()
	{
		return UCustomPayloadSelectorWidget::StaticClass();
	}
	UCustomPayloadSelectorWidget::UCustomPayloadSelectorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomPayloadSelectorWidget);
	UCustomPayloadSelectorWidget::~UCustomPayloadSelectorWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_CustomPayload_CustomPayloadSelectorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_CustomPayload_CustomPayloadSelectorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomPayloadSelectorWidget, UCustomPayloadSelectorWidget::StaticClass, TEXT("UCustomPayloadSelectorWidget"), &Z_Registration_Info_UClass_UCustomPayloadSelectorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomPayloadSelectorWidget), 3039726459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_CustomPayload_CustomPayloadSelectorWidget_h_902704134(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_CustomPayload_CustomPayloadSelectorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_CustomPayload_CustomPayloadSelectorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
