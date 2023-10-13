// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Task/Task_OnQuestAccepted.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_OnQuestAccepted() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_OnQuestAccepted();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_OnQuestAccepted_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UTask_OnQuestAccepted::execOnQuestEventCallback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestSlotIn);
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestEventCallback(Z_Param_QuestSlotIn,Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTask_OnQuestAccepted::execBindToQuestEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToQuestEvent();
		P_NATIVE_END;
	}
	void UTask_OnQuestAccepted::StaticRegisterNativesUTask_OnQuestAccepted()
	{
		UClass* Class = UTask_OnQuestAccepted::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToQuestEvent", &UTask_OnQuestAccepted::execBindToQuestEvent },
			{ "OnQuestEventCallback", &UTask_OnQuestAccepted::execOnQuestEventCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTask_OnQuestAccepted_BindToQuestEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_OnQuestAccepted_BindToQuestEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Binds to the event and waits untill it happens*/" },
		{ "ModuleRelativePath", "Public/Task/Task_OnQuestAccepted.h" },
		{ "ToolTip", "Binds to the event and waits untill it happens" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_OnQuestAccepted_BindToQuestEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_OnQuestAccepted, nullptr, "BindToQuestEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_OnQuestAccepted_BindToQuestEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_OnQuestAccepted_BindToQuestEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_OnQuestAccepted_BindToQuestEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_OnQuestAccepted_BindToQuestEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics
	{
		struct Task_OnQuestAccepted_eventOnQuestEventCallback_Parms
		{
			int32 QuestSlotIn;
			FQuest QuestIn;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestSlotIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::NewProp_QuestSlotIn = { "QuestSlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_OnQuestAccepted_eventOnQuestEventCallback_Parms, QuestSlotIn), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_OnQuestAccepted_eventOnQuestEventCallback_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::NewProp_QuestSlotIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::NewProp_QuestIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Execute when the event triggers*/" },
		{ "ModuleRelativePath", "Public/Task/Task_OnQuestAccepted.h" },
		{ "ToolTip", "Execute when the event triggers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_OnQuestAccepted, nullptr, "OnQuestEventCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::Task_OnQuestAccepted_eventOnQuestEventCallback_Parms), Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_OnQuestAccepted);
	UClass* Z_Construct_UClass_UTask_OnQuestAccepted_NoRegister()
	{
		return UTask_OnQuestAccepted::StaticClass();
	}
	struct Z_Construct_UClass_UTask_OnQuestAccepted_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_OnQuestAccepted_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTask_OnQuestAccepted_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTask_OnQuestAccepted_BindToQuestEvent, "BindToQuestEvent" }, // 588959341
		{ &Z_Construct_UFunction_UTask_OnQuestAccepted_OnQuestEventCallback, "OnQuestEventCallback" }, // 539393337
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_OnQuestAccepted_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Task that reset nodes that are connected with the specified node. This task must be used carefully.\n */" },
		{ "IncludePath", "Task/Task_OnQuestAccepted.h" },
		{ "ModuleRelativePath", "Public/Task/Task_OnQuestAccepted.h" },
		{ "ToolTip", "Task that reset nodes that are connected with the specified node. This task must be used carefully." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTask_OnQuestAccepted_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UTask_OnQuestAccepted, IQuestTaskInterface), false },  // 3929601114
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_OnQuestAccepted_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_OnQuestAccepted>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_OnQuestAccepted_Statics::ClassParams = {
		&UTask_OnQuestAccepted::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTask_OnQuestAccepted_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_OnQuestAccepted_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_OnQuestAccepted()
	{
		if (!Z_Registration_Info_UClass_UTask_OnQuestAccepted.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_OnQuestAccepted.OuterSingleton, Z_Construct_UClass_UTask_OnQuestAccepted_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_OnQuestAccepted.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_OnQuestAccepted>()
	{
		return UTask_OnQuestAccepted::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_OnQuestAccepted);
	UTask_OnQuestAccepted::~UTask_OnQuestAccepted() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_OnQuestAccepted_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_OnQuestAccepted_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_OnQuestAccepted, UTask_OnQuestAccepted::StaticClass, TEXT("UTask_OnQuestAccepted"), &Z_Registration_Info_UClass_UTask_OnQuestAccepted, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_OnQuestAccepted), 2705906959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_OnQuestAccepted_h_1250985412(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_OnQuestAccepted_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_OnQuestAccepted_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
