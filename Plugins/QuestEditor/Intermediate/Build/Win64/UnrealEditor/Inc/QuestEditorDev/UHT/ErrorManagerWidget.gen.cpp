// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Errors/ErrorManagerWidget.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
#include "QuestEditorDev/Public/QuestEditor/QuestTypesDev.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrorManagerWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTask();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UErrorManagerWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UErrorManagerWidget_NoRegister();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskEditorInfo();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UErrorManagerWidget::execGetAllTalkErrors)
	{
		P_GET_STRUCT_REF(FQuestTalkTask,Z_Param_Out_QuestTaskIn);
		P_GET_STRUCT_REF(FQuestTalkTaskEditorInfo,Z_Param_Out_TalkTaskInfoIn);
		P_GET_UBOOL(Z_Param_IsDialogIn);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ErrorOut);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ErrorColorOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllTalkErrors(Z_Param_Out_QuestTaskIn,Z_Param_Out_TalkTaskInfoIn,Z_Param_IsDialogIn,Z_Param_Out_ErrorOut,Z_Param_Out_ErrorColorOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UErrorManagerWidget::execGetAllErrors)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_QuestTaskIn);
		P_GET_STRUCT_REF(FQuestTaskEditorInfo,Z_Param_Out_TaskInfoIn);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ErrorOut);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ErrorColorOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllErrors(Z_Param_Out_QuestTaskIn,Z_Param_Out_TaskInfoIn,Z_Param_Out_ErrorOut,Z_Param_Out_ErrorColorOut);
		P_NATIVE_END;
	}
	void UErrorManagerWidget::StaticRegisterNativesUErrorManagerWidget()
	{
		UClass* Class = UErrorManagerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllErrors", &UErrorManagerWidget::execGetAllErrors },
			{ "GetAllTalkErrors", &UErrorManagerWidget::execGetAllTalkErrors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics
	{
		struct ErrorManagerWidget_eventGetAllErrors_Parms
		{
			FQuestTask QuestTaskIn;
			FQuestTaskEditorInfo TaskInfoIn;
			TArray<FString> ErrorOut;
			TArray<FLinearColor> ErrorColorOut;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTaskIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskInfoIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskInfoIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ErrorOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorColorOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ErrorColorOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_QuestTaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_QuestTaskIn = { "QuestTaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ErrorManagerWidget_eventGetAllErrors_Parms, QuestTaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_QuestTaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_QuestTaskIn_MetaData)) }; // 3659381813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_TaskInfoIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_TaskInfoIn = { "TaskInfoIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ErrorManagerWidget_eventGetAllErrors_Parms, TaskInfoIn), Z_Construct_UScriptStruct_FQuestTaskEditorInfo, METADATA_PARAMS(Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_TaskInfoIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_TaskInfoIn_MetaData)) }; // 3394797982
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_ErrorOut_Inner = { "ErrorOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_ErrorOut = { "ErrorOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ErrorManagerWidget_eventGetAllErrors_Parms, ErrorOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_ErrorColorOut_Inner = { "ErrorColorOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_ErrorColorOut = { "ErrorColorOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ErrorManagerWidget_eventGetAllErrors_Parms, ErrorColorOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_QuestTaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_TaskInfoIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_ErrorOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_ErrorOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_ErrorColorOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::NewProp_ErrorColorOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Error" },
		{ "Comment", "/**\n\x09*\x09Gets all error for this task.\n\x09*\x09This function will call each of the error objects and execute their error functions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Errors/ErrorManagerWidget.h" },
		{ "ToolTip", "Gets all error for this task.\nThis function will call each of the error objects and execute their error functions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UErrorManagerWidget, nullptr, "GetAllErrors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::ErrorManagerWidget_eventGetAllErrors_Parms), Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics
	{
		struct ErrorManagerWidget_eventGetAllTalkErrors_Parms
		{
			FQuestTalkTask QuestTaskIn;
			FQuestTalkTaskEditorInfo TalkTaskInfoIn;
			bool IsDialogIn;
			TArray<FString> ErrorOut;
			TArray<FLinearColor> ErrorColorOut;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTaskIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTaskInfoIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTaskInfoIn;
		static void NewProp_IsDialogIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ErrorOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorColorOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ErrorColorOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_QuestTaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_QuestTaskIn = { "QuestTaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ErrorManagerWidget_eventGetAllTalkErrors_Parms, QuestTaskIn), Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_QuestTaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_QuestTaskIn_MetaData)) }; // 1604935902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_TalkTaskInfoIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_TalkTaskInfoIn = { "TalkTaskInfoIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ErrorManagerWidget_eventGetAllTalkErrors_Parms, TalkTaskInfoIn), Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo, METADATA_PARAMS(Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_TalkTaskInfoIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_TalkTaskInfoIn_MetaData)) }; // 1054139793
	void Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_IsDialogIn_SetBit(void* Obj)
	{
		((ErrorManagerWidget_eventGetAllTalkErrors_Parms*)Obj)->IsDialogIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_IsDialogIn = { "IsDialogIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ErrorManagerWidget_eventGetAllTalkErrors_Parms), &Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_IsDialogIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_ErrorOut_Inner = { "ErrorOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_ErrorOut = { "ErrorOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ErrorManagerWidget_eventGetAllTalkErrors_Parms, ErrorOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_ErrorColorOut_Inner = { "ErrorColorOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_ErrorColorOut = { "ErrorColorOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ErrorManagerWidget_eventGetAllTalkErrors_Parms, ErrorColorOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_QuestTaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_TalkTaskInfoIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_IsDialogIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_ErrorOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_ErrorOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_ErrorColorOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::NewProp_ErrorColorOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Error" },
		{ "Comment", "/**\n\x09*\x09Gets all error for this talk task.\n\x09*\x09This function will call each of the error objects and execute their error functions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Errors/ErrorManagerWidget.h" },
		{ "ToolTip", "Gets all error for this talk task.\nThis function will call each of the error objects and execute their error functions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UErrorManagerWidget, nullptr, "GetAllTalkErrors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::ErrorManagerWidget_eventGetAllTalkErrors_Parms), Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UErrorManagerWidget);
	UClass* Z_Construct_UClass_UErrorManagerWidget_NoRegister()
	{
		return UErrorManagerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UErrorManagerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UErrorManagerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UErrorManagerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UErrorManagerWidget_GetAllErrors, "GetAllErrors" }, // 4177484957
		{ &Z_Construct_UFunction_UErrorManagerWidget_GetAllTalkErrors, "GetAllTalkErrors" }, // 2316093250
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UErrorManagerWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Errors/ErrorManagerWidget.h" },
		{ "ModuleRelativePath", "Public/Errors/ErrorManagerWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UErrorManagerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UErrorManagerWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UErrorManagerWidget_Statics::ClassParams = {
		&UErrorManagerWidget::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UErrorManagerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UErrorManagerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UErrorManagerWidget()
	{
		if (!Z_Registration_Info_UClass_UErrorManagerWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UErrorManagerWidget.OuterSingleton, Z_Construct_UClass_UErrorManagerWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UErrorManagerWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UErrorManagerWidget>()
	{
		return UErrorManagerWidget::StaticClass();
	}
	UErrorManagerWidget::UErrorManagerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UErrorManagerWidget);
	UErrorManagerWidget::~UErrorManagerWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_ErrorManagerWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_ErrorManagerWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UErrorManagerWidget, UErrorManagerWidget::StaticClass, TEXT("UErrorManagerWidget"), &Z_Registration_Info_UClass_UErrorManagerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UErrorManagerWidget), 2498158131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_ErrorManagerWidget_h_2173471622(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_ErrorManagerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_ErrorManagerWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
