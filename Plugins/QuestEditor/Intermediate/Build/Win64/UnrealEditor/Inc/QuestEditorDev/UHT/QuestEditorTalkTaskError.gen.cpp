// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/ErrorsTalk/QuestEditorTalkTaskError.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorTalkTaskError() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTask();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTalkTaskError();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTalkTaskError_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UQuestEditorTalkTaskError::execGetErrorFromTask)
	{
		P_GET_STRUCT_REF(FQuestTalkTask,Z_Param_Out_QuestTaskIn);
		P_GET_UBOOL(Z_Param_IsDialogIn);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorTextOut);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ErrorColorOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetErrorFromTask_Implementation(Z_Param_Out_QuestTaskIn,Z_Param_IsDialogIn,Z_Param_Out_ErrorTextOut,Z_Param_Out_ErrorColorOut);
		P_NATIVE_END;
	}
	struct QuestEditorTalkTaskError_eventGetErrorFromTask_Parms
	{
		FQuestTalkTask QuestTaskIn;
		bool IsDialogIn;
		FString ErrorTextOut;
		FLinearColor ErrorColorOut;
	};
	static FName NAME_UQuestEditorTalkTaskError_GetErrorFromTask = FName(TEXT("GetErrorFromTask"));
	void UQuestEditorTalkTaskError::GetErrorFromTask(FQuestTalkTask const& QuestTaskIn, bool IsDialogIn, FString& ErrorTextOut, FLinearColor& ErrorColorOut) const
	{
		QuestEditorTalkTaskError_eventGetErrorFromTask_Parms Parms;
		Parms.QuestTaskIn=QuestTaskIn;
		Parms.IsDialogIn=IsDialogIn ? true : false;
		Parms.ErrorTextOut=ErrorTextOut;
		Parms.ErrorColorOut=ErrorColorOut;
		const_cast<UQuestEditorTalkTaskError*>(this)->ProcessEvent(FindFunctionChecked(NAME_UQuestEditorTalkTaskError_GetErrorFromTask),&Parms);
		ErrorTextOut=Parms.ErrorTextOut;
		ErrorColorOut=Parms.ErrorColorOut;
	}
	void UQuestEditorTalkTaskError::StaticRegisterNativesUQuestEditorTalkTaskError()
	{
		UClass* Class = UQuestEditorTalkTaskError::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetErrorFromTask", &UQuestEditorTalkTaskError::execGetErrorFromTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTaskIn;
		static void NewProp_IsDialogIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorTextOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorColorOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_QuestTaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_QuestTaskIn = { "QuestTaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorTalkTaskError_eventGetErrorFromTask_Parms, QuestTaskIn), Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_QuestTaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_QuestTaskIn_MetaData)) }; // 1604935902
	void Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_IsDialogIn_SetBit(void* Obj)
	{
		((QuestEditorTalkTaskError_eventGetErrorFromTask_Parms*)Obj)->IsDialogIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_IsDialogIn = { "IsDialogIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorTalkTaskError_eventGetErrorFromTask_Parms), &Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_IsDialogIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_ErrorTextOut = { "ErrorTextOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorTalkTaskError_eventGetErrorFromTask_Parms, ErrorTextOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_ErrorColorOut = { "ErrorColorOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorTalkTaskError_eventGetErrorFromTask_Parms, ErrorColorOut), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_QuestTaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_IsDialogIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_ErrorTextOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::NewProp_ErrorColorOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Error" },
		{ "Comment", "/**\n\x09*\x09Overrideable function with the logic to determine errors from Talk Task.\n\x09*\x09If returns null string it will not show the error.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ErrorsTalk/QuestEditorTalkTaskError.h" },
		{ "ToolTip", "Overrideable function with the logic to determine errors from Talk Task.\nIf returns null string it will not show the error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorTalkTaskError, nullptr, "GetErrorFromTask", nullptr, nullptr, sizeof(QuestEditorTalkTaskError_eventGetErrorFromTask_Parms), Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorTalkTaskError);
	UClass* Z_Construct_UClass_UQuestEditorTalkTaskError_NoRegister()
	{
		return UQuestEditorTalkTaskError::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorTalkTaskError_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorTalkTaskError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestEditorTalkTaskError_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestEditorTalkTaskError_GetErrorFromTask, "GetErrorFromTask" }, // 2131835999
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorTalkTaskError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Base object to analize talk tasks for errors inside the quest editor.\n */" },
		{ "DisplayName", "Talk Task Error" },
		{ "IncludePath", "ErrorsTalk/QuestEditorTalkTaskError.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ErrorsTalk/QuestEditorTalkTaskError.h" },
		{ "ToolTip", "Base object to analize talk tasks for errors inside the quest editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorTalkTaskError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorTalkTaskError>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorTalkTaskError_Statics::ClassParams = {
		&UQuestEditorTalkTaskError::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestEditorTalkTaskError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorTalkTaskError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEditorTalkTaskError()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorTalkTaskError.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorTalkTaskError.OuterSingleton, Z_Construct_UClass_UQuestEditorTalkTaskError_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorTalkTaskError.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UQuestEditorTalkTaskError>()
	{
		return UQuestEditorTalkTaskError::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorTalkTaskError);
	UQuestEditorTalkTaskError::~UQuestEditorTalkTaskError() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_ErrorsTalk_QuestEditorTalkTaskError_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_ErrorsTalk_QuestEditorTalkTaskError_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorTalkTaskError, UQuestEditorTalkTaskError::StaticClass, TEXT("UQuestEditorTalkTaskError"), &Z_Registration_Info_UClass_UQuestEditorTalkTaskError, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorTalkTaskError), 1488417574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_ErrorsTalk_QuestEditorTalkTaskError_h_3162159702(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_ErrorsTalk_QuestEditorTalkTaskError_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_ErrorsTalk_QuestEditorTalkTaskError_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
