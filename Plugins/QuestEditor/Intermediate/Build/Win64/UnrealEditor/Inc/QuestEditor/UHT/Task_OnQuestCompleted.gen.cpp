// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Task/Task_OnQuestCompleted.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_OnQuestCompleted() {}
// Cross Module References
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskInterface_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_OnQuestCompleted();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UTask_OnQuestCompleted_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UTask_OnQuestCompleted::execOnQuestEventCallback)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_CompletedSlotIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestEventCallback(Z_Param_Out_QuestIn,Z_Param_CompletedSlotIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTask_OnQuestCompleted::execBindToQuestEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToQuestEvent();
		P_NATIVE_END;
	}
	void UTask_OnQuestCompleted::StaticRegisterNativesUTask_OnQuestCompleted()
	{
		UClass* Class = UTask_OnQuestCompleted::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToQuestEvent", &UTask_OnQuestCompleted::execBindToQuestEvent },
			{ "OnQuestEventCallback", &UTask_OnQuestCompleted::execOnQuestEventCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTask_OnQuestCompleted_BindToQuestEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_OnQuestCompleted_BindToQuestEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Binds to the event and waits untill it happens*/" },
		{ "ModuleRelativePath", "Public/Task/Task_OnQuestCompleted.h" },
		{ "ToolTip", "Binds to the event and waits untill it happens" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_OnQuestCompleted_BindToQuestEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_OnQuestCompleted, nullptr, "BindToQuestEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_OnQuestCompleted_BindToQuestEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_OnQuestCompleted_BindToQuestEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_OnQuestCompleted_BindToQuestEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_OnQuestCompleted_BindToQuestEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics
	{
		struct Task_OnQuestCompleted_eventOnQuestEventCallback_Parms
		{
			FQuest QuestIn;
			int32 CompletedSlotIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CompletedSlotIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_OnQuestCompleted_eventOnQuestEventCallback_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::NewProp_CompletedSlotIn = { "CompletedSlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Task_OnQuestCompleted_eventOnQuestEventCallback_Parms, CompletedSlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::NewProp_CompletedSlotIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Execute when the event triggers*/" },
		{ "ModuleRelativePath", "Public/Task/Task_OnQuestCompleted.h" },
		{ "ToolTip", "Execute when the event triggers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTask_OnQuestCompleted, nullptr, "OnQuestEventCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::Task_OnQuestCompleted_eventOnQuestEventCallback_Parms), Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTask_OnQuestCompleted);
	UClass* Z_Construct_UClass_UTask_OnQuestCompleted_NoRegister()
	{
		return UTask_OnQuestCompleted::StaticClass();
	}
	struct Z_Construct_UClass_UTask_OnQuestCompleted_Statics
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
	UObject* (*const Z_Construct_UClass_UTask_OnQuestCompleted_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTask_OnQuestCompleted_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTask_OnQuestCompleted_BindToQuestEvent, "BindToQuestEvent" }, // 3248793784
		{ &Z_Construct_UFunction_UTask_OnQuestCompleted_OnQuestEventCallback, "OnQuestEventCallback" }, // 1138508758
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_OnQuestCompleted_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Task that reset nodes that are connected with the specified node. This task must be used carefully.\n */" },
		{ "IncludePath", "Task/Task_OnQuestCompleted.h" },
		{ "ModuleRelativePath", "Public/Task/Task_OnQuestCompleted.h" },
		{ "ToolTip", "Task that reset nodes that are connected with the specified node. This task must be used carefully." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTask_OnQuestCompleted_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UTask_OnQuestCompleted, IQuestTaskInterface), false },  // 3929601114
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_OnQuestCompleted_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_OnQuestCompleted>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTask_OnQuestCompleted_Statics::ClassParams = {
		&UTask_OnQuestCompleted::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTask_OnQuestCompleted_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_OnQuestCompleted_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_OnQuestCompleted()
	{
		if (!Z_Registration_Info_UClass_UTask_OnQuestCompleted.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTask_OnQuestCompleted.OuterSingleton, Z_Construct_UClass_UTask_OnQuestCompleted_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTask_OnQuestCompleted.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UTask_OnQuestCompleted>()
	{
		return UTask_OnQuestCompleted::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_OnQuestCompleted);
	UTask_OnQuestCompleted::~UTask_OnQuestCompleted() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_OnQuestCompleted_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_OnQuestCompleted_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTask_OnQuestCompleted, UTask_OnQuestCompleted::StaticClass, TEXT("UTask_OnQuestCompleted"), &Z_Registration_Info_UClass_UTask_OnQuestCompleted, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTask_OnQuestCompleted), 1333830883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_OnQuestCompleted_h_119426272(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_OnQuestCompleted_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_Task_OnQuestCompleted_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
