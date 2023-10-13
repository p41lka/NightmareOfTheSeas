// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/CustomPayload/CustomPayloadManagerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPayloadManagerWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UCustomPayloadManagerWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UCustomPayloadManagerWidget_NoRegister();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventCustomPayloadDataChanged_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventCustomPayloadDataChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventCustomPayloadDataChanged_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//----------------------------------------------DISPATCHERS DEFINITION\n" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadManagerWidget.h" },
		{ "ToolTip", "----------------------------------------------DISPATCHERS DEFINITION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "CustomPayloadDataChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::_Script_QuestEditorDev_eventCustomPayloadDataChanged_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCustomPayloadDataChanged_DelegateWrapper(const FMulticastScriptDelegate& CustomPayloadDataChanged, const FString& NewValue, int32 Slot)
{
	struct _Script_QuestEditorDev_eventCustomPayloadDataChanged_Parms
	{
		FString NewValue;
		int32 Slot;
	};
	_Script_QuestEditorDev_eventCustomPayloadDataChanged_Parms Parms;
	Parms.NewValue=NewValue;
	Parms.Slot=Slot;
	CustomPayloadDataChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCustomPayloadManagerWidget::execSelectedDataCallback)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewValueIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectedDataCallback(Z_Param_NewValueIn,Z_Param_SlotIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomPayloadManagerWidget::execHandleWidgetSelectorsStart)
	{
		P_GET_TARRAY(UWidget*,Z_Param_SelectorWidgets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleWidgetSelectorsStart(Z_Param_SelectorWidgets);
		P_NATIVE_END;
	}
	void UCustomPayloadManagerWidget::StaticRegisterNativesUCustomPayloadManagerWidget()
	{
		UClass* Class = UCustomPayloadManagerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleWidgetSelectorsStart", &UCustomPayloadManagerWidget::execHandleWidgetSelectorsStart },
			{ "SelectedDataCallback", &UCustomPayloadManagerWidget::execSelectedDataCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics
	{
		struct CustomPayloadManagerWidget_eventHandleWidgetSelectorsStart_Parms
		{
			TArray<UWidget*> SelectorWidgets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectorWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectorWidgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets_Inner = { "SelectorWidgets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets = { "SelectorWidgets", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomPayloadManagerWidget_eventHandleWidgetSelectorsStart_Parms, SelectorWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Handles all logic for selectors after spawn.\n\x09*\x09""Dispatches all events for custom payload change.\n\x09*\x09Must be called after selector widgets are spawned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadManagerWidget.h" },
		{ "ToolTip", "Handles all logic for selectors after spawn.\nDispatches all events for custom payload change.\nMust be called after selector widgets are spawned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPayloadManagerWidget, nullptr, "HandleWidgetSelectorsStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::CustomPayloadManagerWidget_eventHandleWidgetSelectorsStart_Parms), Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics
	{
		struct CustomPayloadManagerWidget_eventSelectedDataCallback_Parms
		{
			FString NewValueIn;
			int32 SlotIn;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewValueIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::NewProp_NewValueIn = { "NewValueIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomPayloadManagerWidget_eventSelectedDataCallback_Parms, NewValueIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::NewProp_SlotIn = { "SlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomPayloadManagerWidget_eventSelectedDataCallback_Parms, SlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::NewProp_NewValueIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::NewProp_SlotIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Callback for data change*/" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadManagerWidget.h" },
		{ "ToolTip", "Callback for data change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPayloadManagerWidget, nullptr, "SelectedDataCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::CustomPayloadManagerWidget_eventSelectedDataCallback_Parms), Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomPayloadManagerWidget);
	UClass* Z_Construct_UClass_UCustomPayloadManagerWidget_NoRegister()
	{
		return UCustomPayloadManagerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCustomPayloadManagerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadDataChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CustomPayloadDataChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomPayloadManagerWidget_HandleWidgetSelectorsStart, "HandleWidgetSelectorsStart" }, // 3247453652
		{ &Z_Construct_UFunction_UCustomPayloadManagerWidget_SelectedDataCallback, "SelectedDataCallback" }, // 1449583780
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Manager for all custom payload widgets\n */" },
		{ "IncludePath", "CustomPayload/CustomPayloadManagerWidget.h" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadManagerWidget.h" },
		{ "ToolTip", "Manager for all custom payload widgets" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::NewProp_CustomPayloadDataChanged_MetaData[] = {
		{ "Category", "Payload Update" },
		{ "Comment", "/*Called when Payload StringB value changes*/" },
		{ "ModuleRelativePath", "Public/CustomPayload/CustomPayloadManagerWidget.h" },
		{ "ToolTip", "Called when Payload StringB value changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::NewProp_CustomPayloadDataChanged = { "CustomPayloadDataChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomPayloadManagerWidget, CustomPayloadDataChanged), Z_Construct_UDelegateFunction_QuestEditorDev_CustomPayloadDataChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::NewProp_CustomPayloadDataChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::NewProp_CustomPayloadDataChanged_MetaData)) }; // 160363158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::NewProp_CustomPayloadDataChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomPayloadManagerWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::ClassParams = {
		&UCustomPayloadManagerWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomPayloadManagerWidget()
	{
		if (!Z_Registration_Info_UClass_UCustomPayloadManagerWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomPayloadManagerWidget.OuterSingleton, Z_Construct_UClass_UCustomPayloadManagerWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomPayloadManagerWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UCustomPayloadManagerWidget>()
	{
		return UCustomPayloadManagerWidget::StaticClass();
	}
	UCustomPayloadManagerWidget::UCustomPayloadManagerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomPayloadManagerWidget);
	UCustomPayloadManagerWidget::~UCustomPayloadManagerWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_CustomPayload_CustomPayloadManagerWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_CustomPayload_CustomPayloadManagerWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomPayloadManagerWidget, UCustomPayloadManagerWidget::StaticClass, TEXT("UCustomPayloadManagerWidget"), &Z_Registration_Info_UClass_UCustomPayloadManagerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomPayloadManagerWidget), 3309376122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_CustomPayload_CustomPayloadManagerWidget_h_2919099104(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_CustomPayload_CustomPayloadManagerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_CustomPayload_CustomPayloadManagerWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
