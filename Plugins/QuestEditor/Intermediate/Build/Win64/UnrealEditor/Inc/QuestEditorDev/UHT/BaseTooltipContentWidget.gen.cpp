// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Tooltip/BaseTooltipContentWidget.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTooltipContentWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskPayload();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestEditor_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTooltipContentWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTooltipContentWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UBaseTooltipContentWidget::execUpdateFromPayload)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFromPayload(Z_Param_Out_PayloadIn);
		P_NATIVE_END;
	}
	static FName NAME_UBaseTooltipContentWidget_UpdateTooltipWidget = FName(TEXT("UpdateTooltipWidget"));
	void UBaseTooltipContentWidget::UpdateTooltipWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseTooltipContentWidget_UpdateTooltipWidget),NULL);
	}
	void UBaseTooltipContentWidget::StaticRegisterNativesUBaseTooltipContentWidget()
	{
		UClass* Class = UBaseTooltipContentWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateFromPayload", &UBaseTooltipContentWidget::execUpdateFromPayload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics
	{
		struct BaseTooltipContentWidget_eventUpdateFromPayload_Parms
		{
			FQuestTaskPayload PayloadIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTooltipContentWidget_eventUpdateFromPayload_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::NewProp_PayloadIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/**\n\x09*\x09Main update event for the widget.\n\x09*\x09""Call to update title info and widget.\n\x09*\x09Updates Quest Task variable and calls update event.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tooltip/BaseTooltipContentWidget.h" },
		{ "ToolTip", "Main update event for the widget.\nCall to update title info and widget.\nUpdates Quest Task variable and calls update event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTooltipContentWidget, nullptr, "UpdateFromPayload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::BaseTooltipContentWidget_eventUpdateFromPayload_Parms), Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateTooltipWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateTooltipWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/**\n\x09*\x09Main update event for the widget.\n\x09*\x09""All the logic needed for updating this widget should be placed here.\n\x09*\x09""All tooltip content widgets must override this function.\n\x09*\x09This function will be called by the editor automatically when needed.\n\x09*\x09Payload variable contains current data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tooltip/BaseTooltipContentWidget.h" },
		{ "ToolTip", "Main update event for the widget.\nAll the logic needed for updating this widget should be placed here.\nAll tooltip content widgets must override this function.\nThis function will be called by the editor automatically when needed.\nPayload variable contains current data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateTooltipWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTooltipContentWidget, nullptr, "UpdateTooltipWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateTooltipWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateTooltipWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateTooltipWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateTooltipWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseTooltipContentWidget);
	UClass* Z_Construct_UClass_UBaseTooltipContentWidget_NoRegister()
	{
		return UBaseTooltipContentWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTooltipContentWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestEditorReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestEditorReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTooltipContentWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseTooltipContentWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateFromPayload, "UpdateFromPayload" }, // 2347628891
		{ &Z_Construct_UFunction_UBaseTooltipContentWidget_UpdateTooltipWidget, "UpdateTooltipWidget" }, // 1529740385
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTooltipContentWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Base widget for populating the tooltip inside the quest editor.\n * \n * \n *\x09Uses a payload to update.\n */" },
		{ "DisplayName", "TooltipContent" },
		{ "IncludePath", "Tooltip/BaseTooltipContentWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tooltip/BaseTooltipContentWidget.h" },
		{ "ToolTip", "Base widget for populating the tooltip inside the quest editor.\n\n\nUses a payload to update." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTooltipContentWidget_Statics::NewProp_Payload_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*QuestTask info for updating the tooltip.*/" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Tooltip/BaseTooltipContentWidget.h" },
		{ "ToolTip", "QuestTask info for updating the tooltip." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseTooltipContentWidget_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTooltipContentWidget, Payload), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UClass_UBaseTooltipContentWidget_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipContentWidget_Statics::NewProp_Payload_MetaData)) }; // 4258527549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTooltipContentWidget_Statics::NewProp_QuestEditorReference_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*Quest editor reference for calling events and getting datatable information.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tooltip/BaseTooltipContentWidget.h" },
		{ "ToolTip", "Quest editor reference for calling events and getting datatable information." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTooltipContentWidget_Statics::NewProp_QuestEditorReference = { "QuestEditorReference", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTooltipContentWidget, QuestEditorReference), Z_Construct_UClass_UBaseQuestEditor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTooltipContentWidget_Statics::NewProp_QuestEditorReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipContentWidget_Statics::NewProp_QuestEditorReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTooltipContentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTooltipContentWidget_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTooltipContentWidget_Statics::NewProp_QuestEditorReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTooltipContentWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTooltipContentWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTooltipContentWidget_Statics::ClassParams = {
		&UBaseTooltipContentWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseTooltipContentWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipContentWidget_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTooltipContentWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipContentWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTooltipContentWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseTooltipContentWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTooltipContentWidget.OuterSingleton, Z_Construct_UClass_UBaseTooltipContentWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseTooltipContentWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseTooltipContentWidget>()
	{
		return UBaseTooltipContentWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTooltipContentWidget);
	UBaseTooltipContentWidget::~UBaseTooltipContentWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Tooltip_BaseTooltipContentWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Tooltip_BaseTooltipContentWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTooltipContentWidget, UBaseTooltipContentWidget::StaticClass, TEXT("UBaseTooltipContentWidget"), &Z_Registration_Info_UClass_UBaseTooltipContentWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTooltipContentWidget), 1690878434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Tooltip_BaseTooltipContentWidget_h_328270610(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Tooltip_BaseTooltipContentWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Tooltip_BaseTooltipContentWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
