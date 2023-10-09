// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Preview/BasePreviewWidget.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
#include "QuestEditorDev/Public/QuestEditor/QuestTypesDev.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePreviewWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskID();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBasePreviewWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBasePreviewWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestEditor_NoRegister();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskEditorInfo();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UBasePreviewWidget::execGetTaskInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTaskEditorInfo*)Z_Param__Result=P_THIS->GetTaskInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePreviewWidget::execUpdateFromTask)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_QuestTaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFromTask(Z_Param_Out_QuestTaskIn);
		P_NATIVE_END;
	}
	static FName NAME_UBasePreviewWidget_UpdatePreviewWidget = FName(TEXT("UpdatePreviewWidget"));
	void UBasePreviewWidget::UpdatePreviewWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBasePreviewWidget_UpdatePreviewWidget),NULL);
	}
	void UBasePreviewWidget::StaticRegisterNativesUBasePreviewWidget()
	{
		UClass* Class = UBasePreviewWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTaskInfo", &UBasePreviewWidget::execGetTaskInfo },
			{ "UpdateFromTask", &UBasePreviewWidget::execUpdateFromTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics
	{
		struct BasePreviewWidget_eventGetTaskInfo_Parms
		{
			FQuestTaskEditorInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePreviewWidget_eventGetTaskInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTaskEditorInfo, METADATA_PARAMS(nullptr, 0) }; // 3394797982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview Slot" },
		{ "Comment", "/**\n\x09*\x09Gets current task information for quest editor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Preview/BasePreviewWidget.h" },
		{ "ToolTip", "Gets current task information for quest editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePreviewWidget, nullptr, "GetTaskInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::BasePreviewWidget_eventGetTaskInfo_Parms), Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics
	{
		struct BasePreviewWidget_eventUpdateFromTask_Parms
		{
			FQuestTask QuestTaskIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTaskIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn = { "QuestTaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePreviewWidget_eventUpdateFromTask_Parms, QuestTaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/**\n\x09*\x09Main update event for the widget.\n\x09*\x09""Call to update title info and widget.\n\x09*\x09Updates Quest Task variable and calls update event.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Preview/BasePreviewWidget.h" },
		{ "ToolTip", "Main update event for the widget.\nCall to update title info and widget.\nUpdates Quest Task variable and calls update event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePreviewWidget, nullptr, "UpdateFromTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::BasePreviewWidget_eventUpdateFromTask_Parms), Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePreviewWidget_UpdatePreviewWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePreviewWidget_UpdatePreviewWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/**\n\x09*\x09Main update event for the widget.\n\x09*\x09""All the logic needed for updating this widget should be placed here.\n\x09*\x09""All preview widgets must override this function.\n\x09*\x09This function will be called by the editor automatically when needed.\n\x09*\x09QuestTask variable contains current data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Preview/BasePreviewWidget.h" },
		{ "ToolTip", "Main update event for the widget.\nAll the logic needed for updating this widget should be placed here.\nAll preview widgets must override this function.\nThis function will be called by the editor automatically when needed.\nQuestTask variable contains current data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePreviewWidget_UpdatePreviewWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePreviewWidget, nullptr, "UpdatePreviewWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePreviewWidget_UpdatePreviewWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePreviewWidget_UpdatePreviewWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePreviewWidget_UpdatePreviewWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePreviewWidget_UpdatePreviewWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasePreviewWidget);
	UClass* Z_Construct_UClass_UBasePreviewWidget_NoRegister()
	{
		return UBasePreviewWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBasePreviewWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestEditorReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestEditorReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePreviewWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBasePreviewWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasePreviewWidget_GetTaskInfo, "GetTaskInfo" }, // 3195475988
		{ &Z_Construct_UFunction_UBasePreviewWidget_UpdateFromTask, "UpdateFromTask" }, // 2288671809
		{ &Z_Construct_UFunction_UBasePreviewWidget_UpdatePreviewWidget, "UpdatePreviewWidget" }, // 2933822249
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePreviewWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Base preview widget, contains shared logic for title and content preview slots.\n */" },
		{ "IncludePath", "Preview/BasePreviewWidget.h" },
		{ "ModuleRelativePath", "Public/Preview/BasePreviewWidget.h" },
		{ "ToolTip", "Base preview widget, contains shared logic for title and content preview slots." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_TaskID_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*Quest task ID. Use to update widget.*/" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Preview/BasePreviewWidget.h" },
		{ "ToolTip", "Quest task ID. Use to update widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_TaskID = { "TaskID", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePreviewWidget, TaskID), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_TaskID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_TaskID_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_QuestTask_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*Quest task current info. Use to update widget.*/" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Preview/BasePreviewWidget.h" },
		{ "ToolTip", "Quest task current info. Use to update widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_QuestTask = { "QuestTask", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePreviewWidget, QuestTask), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_QuestTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_QuestTask_MetaData)) }; // 3659381813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_QuestEditorReference_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*Quest editor reference for calling events and getting datatable information.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Preview/BasePreviewWidget.h" },
		{ "ToolTip", "Quest editor reference for calling events and getting datatable information." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_QuestEditorReference = { "QuestEditorReference", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePreviewWidget, QuestEditorReference), Z_Construct_UClass_UBaseQuestEditor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_QuestEditorReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_QuestEditorReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePreviewWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_TaskID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_QuestTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePreviewWidget_Statics::NewProp_QuestEditorReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePreviewWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePreviewWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasePreviewWidget_Statics::ClassParams = {
		&UBasePreviewWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBasePreviewWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasePreviewWidget_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBasePreviewWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePreviewWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePreviewWidget()
	{
		if (!Z_Registration_Info_UClass_UBasePreviewWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasePreviewWidget.OuterSingleton, Z_Construct_UClass_UBasePreviewWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasePreviewWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBasePreviewWidget>()
	{
		return UBasePreviewWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePreviewWidget);
	UBasePreviewWidget::~UBasePreviewWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BasePreviewWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BasePreviewWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasePreviewWidget, UBasePreviewWidget::StaticClass, TEXT("UBasePreviewWidget"), &Z_Registration_Info_UClass_UBasePreviewWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasePreviewWidget), 2945045005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BasePreviewWidget_h_4227922554(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BasePreviewWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Preview_BasePreviewWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
