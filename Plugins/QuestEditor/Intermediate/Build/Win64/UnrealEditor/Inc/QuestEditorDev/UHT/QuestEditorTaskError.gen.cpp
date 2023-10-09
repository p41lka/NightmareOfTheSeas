// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Errors/QuestEditorTaskError.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
#include "QuestEditorDev/Public/QuestEditor/QuestTypesDev.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorTaskError() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTaskError();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTaskError_NoRegister();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskEditorInfo();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UQuestEditorTaskError::execGetErrorFromTask)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_QuestTaskIn);
		P_GET_STRUCT_REF(FQuestTaskEditorInfo,Z_Param_Out_TaskInfoIn);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorTextOut);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ErrorColorOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetErrorFromTask_Implementation(Z_Param_Out_QuestTaskIn,Z_Param_Out_TaskInfoIn,Z_Param_Out_ErrorTextOut,Z_Param_Out_ErrorColorOut);
		P_NATIVE_END;
	}
	struct QuestEditorTaskError_eventGetErrorFromTask_Parms
	{
		FQuestTask QuestTaskIn;
		FQuestTaskEditorInfo TaskInfoIn;
		FString ErrorTextOut;
		FLinearColor ErrorColorOut;
	};
	static FName NAME_UQuestEditorTaskError_GetErrorFromTask = FName(TEXT("GetErrorFromTask"));
	void UQuestEditorTaskError::GetErrorFromTask(FQuestTask const& QuestTaskIn, FQuestTaskEditorInfo const& TaskInfoIn, FString& ErrorTextOut, FLinearColor& ErrorColorOut) const
	{
		QuestEditorTaskError_eventGetErrorFromTask_Parms Parms;
		Parms.QuestTaskIn=QuestTaskIn;
		Parms.TaskInfoIn=TaskInfoIn;
		Parms.ErrorTextOut=ErrorTextOut;
		Parms.ErrorColorOut=ErrorColorOut;
		const_cast<UQuestEditorTaskError*>(this)->ProcessEvent(FindFunctionChecked(NAME_UQuestEditorTaskError_GetErrorFromTask),&Parms);
		ErrorTextOut=Parms.ErrorTextOut;
		ErrorColorOut=Parms.ErrorColorOut;
	}
	void UQuestEditorTaskError::StaticRegisterNativesUQuestEditorTaskError()
	{
		UClass* Class = UQuestEditorTaskError::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetErrorFromTask", &UQuestEditorTaskError::execGetErrorFromTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTaskIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskInfoIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskInfoIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorTextOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorColorOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_QuestTaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_QuestTaskIn = { "QuestTaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorTaskError_eventGetErrorFromTask_Parms, QuestTaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_QuestTaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_QuestTaskIn_MetaData)) }; // 3659381813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_TaskInfoIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_TaskInfoIn = { "TaskInfoIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorTaskError_eventGetErrorFromTask_Parms, TaskInfoIn), Z_Construct_UScriptStruct_FQuestTaskEditorInfo, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_TaskInfoIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_TaskInfoIn_MetaData)) }; // 3394797982
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_ErrorTextOut = { "ErrorTextOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorTaskError_eventGetErrorFromTask_Parms, ErrorTextOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_ErrorColorOut = { "ErrorColorOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorTaskError_eventGetErrorFromTask_Parms, ErrorColorOut), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_QuestTaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_TaskInfoIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_ErrorTextOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::NewProp_ErrorColorOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Error" },
		{ "Comment", "/**\n\x09*\x09Overrideable function with the logic to determine errors from Task.\n\x09*\x09If returns null string it will not show the error.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Errors/QuestEditorTaskError.h" },
		{ "ToolTip", "Overrideable function with the logic to determine errors from Task.\nIf returns null string it will not show the error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorTaskError, nullptr, "GetErrorFromTask", nullptr, nullptr, sizeof(QuestEditorTaskError_eventGetErrorFromTask_Parms), Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorTaskError);
	UClass* Z_Construct_UClass_UQuestEditorTaskError_NoRegister()
	{
		return UQuestEditorTaskError::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorTaskError_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorTaskError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestEditorTaskError_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestEditorTaskError_GetErrorFromTask, "GetErrorFromTask" }, // 2744452451
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorTaskError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Base object to analize tasks for errors inside the quest editor.\n */" },
		{ "DisplayName", "Task Error" },
		{ "IncludePath", "Errors/QuestEditorTaskError.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Errors/QuestEditorTaskError.h" },
		{ "ToolTip", "Base object to analize tasks for errors inside the quest editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorTaskError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorTaskError>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorTaskError_Statics::ClassParams = {
		&UQuestEditorTaskError::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEditorTaskError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorTaskError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEditorTaskError()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorTaskError.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorTaskError.OuterSingleton, Z_Construct_UClass_UQuestEditorTaskError_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorTaskError.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UQuestEditorTaskError>()
	{
		return UQuestEditorTaskError::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorTaskError);
	UQuestEditorTaskError::~UQuestEditorTaskError() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_QuestEditorTaskError_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_QuestEditorTaskError_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorTaskError, UQuestEditorTaskError::StaticClass, TEXT("UQuestEditorTaskError"), &Z_Registration_Info_UClass_UQuestEditorTaskError, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorTaskError), 2386509294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_QuestEditorTaskError_h_1255664061(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_QuestEditorTaskError_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_QuestEditorTaskError_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
