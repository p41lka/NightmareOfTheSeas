// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskLocation/BaseQuestLocationActor.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuestLocationActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	QUESTEDITOR_API UClass* Z_Construct_UClass_ABaseQuestLocationActor();
	QUESTEDITOR_API UClass* Z_Construct_UClass_ABaseQuestLocationActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(ABaseQuestLocationActor::execGetQuestLocationName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetQuestLocationName();
		P_NATIVE_END;
	}
	void ABaseQuestLocationActor::StaticRegisterNativesABaseQuestLocationActor()
	{
		UClass* Class = ABaseQuestLocationActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetQuestLocationName", &ABaseQuestLocationActor::execGetQuestLocationName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics
	{
		struct BaseQuestLocationActor_eventGetQuestLocationName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestLocationActor_eventGetQuestLocationName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC Start" },
		{ "Comment", "/**\n\x09*\x09Get the location name.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/BaseQuestLocationActor.h" },
		{ "ToolTip", "Get the location name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseQuestLocationActor, nullptr, "GetQuestLocationName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::BaseQuestLocationActor_eventGetQuestLocationName_Parms), Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseQuestLocationActor);
	UClass* Z_Construct_UClass_ABaseQuestLocationActor_NoRegister()
	{
		return ABaseQuestLocationActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseQuestLocationActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestLocationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuestLocationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestLocationTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestLocationTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseQuestLocationActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseQuestLocationActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseQuestLocationActor_GetQuestLocationName, "GetQuestLocationName" }, // 105048409
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseQuestLocationActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TaskLocation/BaseQuestLocationActor.h" },
		{ "ModuleRelativePath", "Public/TaskLocation/BaseQuestLocationActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseQuestLocationActor_Statics::NewProp_QuestLocationName_MetaData[] = {
		{ "Category", "Quest Location" },
		{ "Comment", "/**\n\x09*\x09Location name.\n\x09*\x09Will be used for tasks and also used to show the player in UI.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/BaseQuestLocationActor.h" },
		{ "ToolTip", "Location name.\nWill be used for tasks and also used to show the player in UI." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseQuestLocationActor_Statics::NewProp_QuestLocationName = { "QuestLocationName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseQuestLocationActor, QuestLocationName), METADATA_PARAMS(Z_Construct_UClass_ABaseQuestLocationActor_Statics::NewProp_QuestLocationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseQuestLocationActor_Statics::NewProp_QuestLocationName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseQuestLocationActor_Statics::NewProp_QuestLocationTags_MetaData[] = {
		{ "Category", "Quest Location" },
		{ "Comment", "/**\n\x09*\x09Location tags.\n\x09*\x09Will be used for tasks.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskLocation/BaseQuestLocationActor.h" },
		{ "ToolTip", "Location tags.\nWill be used for tasks." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseQuestLocationActor_Statics::NewProp_QuestLocationTags = { "QuestLocationTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseQuestLocationActor, QuestLocationTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ABaseQuestLocationActor_Statics::NewProp_QuestLocationTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseQuestLocationActor_Statics::NewProp_QuestLocationTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseQuestLocationActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseQuestLocationActor_Statics::NewProp_QuestLocationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseQuestLocationActor_Statics::NewProp_QuestLocationTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseQuestLocationActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseQuestLocationActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseQuestLocationActor_Statics::ClassParams = {
		&ABaseQuestLocationActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseQuestLocationActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseQuestLocationActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseQuestLocationActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseQuestLocationActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseQuestLocationActor()
	{
		if (!Z_Registration_Info_UClass_ABaseQuestLocationActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseQuestLocationActor.OuterSingleton, Z_Construct_UClass_ABaseQuestLocationActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseQuestLocationActor.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<ABaseQuestLocationActor>()
	{
		return ABaseQuestLocationActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseQuestLocationActor);
	ABaseQuestLocationActor::~ABaseQuestLocationActor() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestLocationActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestLocationActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseQuestLocationActor, ABaseQuestLocationActor::StaticClass, TEXT("ABaseQuestLocationActor"), &Z_Registration_Info_UClass_ABaseQuestLocationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseQuestLocationActor), 35933821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestLocationActor_h_1647500923(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestLocationActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestLocationActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
