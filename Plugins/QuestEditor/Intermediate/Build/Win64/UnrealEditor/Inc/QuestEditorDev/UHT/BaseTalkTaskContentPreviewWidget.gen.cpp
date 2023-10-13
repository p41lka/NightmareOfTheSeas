// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/TalkTaskCustomization/BaseTalkTaskContentPreviewWidget.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTalkTaskContentPreviewWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTask();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskID();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestEditor_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UBaseTalkTaskContentPreviewWidget::execUpdateFromTask)
	{
		P_GET_STRUCT_REF(FQuestTalkTask,Z_Param_Out_QuestTalkTaskIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_TaslTaskIDIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFromTask(Z_Param_Out_QuestTalkTaskIn,Z_Param_Out_TaslTaskIDIn);
		P_NATIVE_END;
	}
	static FName NAME_UBaseTalkTaskContentPreviewWidget_UpdatePreviewWidget = FName(TEXT("UpdatePreviewWidget"));
	void UBaseTalkTaskContentPreviewWidget::UpdatePreviewWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseTalkTaskContentPreviewWidget_UpdatePreviewWidget),NULL);
	}
	void UBaseTalkTaskContentPreviewWidget::StaticRegisterNativesUBaseTalkTaskContentPreviewWidget()
	{
		UClass* Class = UBaseTalkTaskContentPreviewWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateFromTask", &UBaseTalkTaskContentPreviewWidget::execUpdateFromTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics
	{
		struct BaseTalkTaskContentPreviewWidget_eventUpdateFromTask_Parms
		{
			FQuestTalkTask QuestTalkTaskIn;
			FQuestTaskID TaslTaskIDIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTalkTaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTalkTaskIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaslTaskIDIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaslTaskIDIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::NewProp_QuestTalkTaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::NewProp_QuestTalkTaskIn = { "QuestTalkTaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTalkTaskContentPreviewWidget_eventUpdateFromTask_Parms, QuestTalkTaskIn), Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::NewProp_QuestTalkTaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::NewProp_QuestTalkTaskIn_MetaData)) }; // 1604935902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::NewProp_TaslTaskIDIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::NewProp_TaslTaskIDIn = { "TaslTaskIDIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTalkTaskContentPreviewWidget_eventUpdateFromTask_Parms, TaslTaskIDIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::NewProp_TaslTaskIDIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::NewProp_TaslTaskIDIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::NewProp_QuestTalkTaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::NewProp_TaslTaskIDIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/**\n\x09*\x09Main update event for the widget.\n\x09*\x09""Call to update title info and widget.\n\x09*\x09Updates Quest Task variable and calls update event.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskContentPreviewWidget.h" },
		{ "ToolTip", "Main update event for the widget.\nCall to update title info and widget.\nUpdates Quest Task variable and calls update event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget, nullptr, "UpdateFromTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::BaseTalkTaskContentPreviewWidget_eventUpdateFromTask_Parms), Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdatePreviewWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdatePreviewWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/**\n\x09*\x09Main update event for the widget.\n\x09*\x09""All the logic needed for updating this widget should be placed here.\n\x09*\x09""All preview widgets must override this function.\n\x09*\x09This function will be called by the editor automatically when needed.\n\x09*\x09QuestTask variable contains current data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskContentPreviewWidget.h" },
		{ "ToolTip", "Main update event for the widget.\nAll the logic needed for updating this widget should be placed here.\nAll preview widgets must override this function.\nThis function will be called by the editor automatically when needed.\nQuestTask variable contains current data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdatePreviewWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget, nullptr, "UpdatePreviewWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdatePreviewWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdatePreviewWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdatePreviewWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdatePreviewWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseTalkTaskContentPreviewWidget);
	UClass* Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_NoRegister()
	{
		return UBaseTalkTaskContentPreviewWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTaskID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTaskID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTalkTask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTalkTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestEditorReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestEditorReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdateFromTask, "UpdateFromTask" }, // 1377472252
		{ &Z_Construct_UFunction_UBaseTalkTaskContentPreviewWidget_UpdatePreviewWidget, "UpdatePreviewWidget" }, // 327830011
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Base preview widget, contains logic for talk task content preview slots.\n */" },
		{ "DisplayName", "TalkTaskContentPreview" },
		{ "IncludePath", "TalkTaskCustomization/BaseTalkTaskContentPreviewWidget.h" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskContentPreviewWidget.h" },
		{ "ToolTip", "Base preview widget, contains logic for talk task content preview slots." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_TalkTaskID_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*Quest talk task ID. Use to update widget.*/" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskContentPreviewWidget.h" },
		{ "ToolTip", "Quest talk task ID. Use to update widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_TalkTaskID = { "TalkTaskID", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskContentPreviewWidget, TalkTaskID), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_TalkTaskID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_TalkTaskID_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_QuestTalkTask_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*Quest talk task current info. Use to update widget.*/" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskContentPreviewWidget.h" },
		{ "ToolTip", "Quest talk task current info. Use to update widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_QuestTalkTask = { "QuestTalkTask", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskContentPreviewWidget, QuestTalkTask), Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_QuestTalkTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_QuestTalkTask_MetaData)) }; // 1604935902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_QuestEditorReference_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*Quest editor reference for calling events and getting datatable information.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskContentPreviewWidget.h" },
		{ "ToolTip", "Quest editor reference for calling events and getting datatable information." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_QuestEditorReference = { "QuestEditorReference", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskContentPreviewWidget, QuestEditorReference), Z_Construct_UClass_UBaseQuestEditor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_QuestEditorReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_QuestEditorReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_TalkTaskID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_QuestTalkTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::NewProp_QuestEditorReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTalkTaskContentPreviewWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::ClassParams = {
		&UBaseTalkTaskContentPreviewWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseTalkTaskContentPreviewWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTalkTaskContentPreviewWidget.OuterSingleton, Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseTalkTaskContentPreviewWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseTalkTaskContentPreviewWidget>()
	{
		return UBaseTalkTaskContentPreviewWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTalkTaskContentPreviewWidget);
	UBaseTalkTaskContentPreviewWidget::~UBaseTalkTaskContentPreviewWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskContentPreviewWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskContentPreviewWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget, UBaseTalkTaskContentPreviewWidget::StaticClass, TEXT("UBaseTalkTaskContentPreviewWidget"), &Z_Registration_Info_UClass_UBaseTalkTaskContentPreviewWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTalkTaskContentPreviewWidget), 4044280214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskContentPreviewWidget_h_166919886(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskContentPreviewWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskContentPreviewWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
