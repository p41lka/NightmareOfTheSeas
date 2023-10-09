// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Objects/DialogueFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DIALOGUESX_API UClass* Z_Construct_UClass_UDialogueFunctions();
	DIALOGUESX_API UClass* Z_Construct_UClass_UDialogueFunctions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DialogueSx();
// End Cross Module References
	DEFINE_FUNCTION(UDialogueFunctions::execCallAllFunctions)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_FunctionNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallAllFunctions(Z_Param_Out_FunctionNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueFunctions::execCallFunctionByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallFunctionByName(Z_Param_Name);
		P_NATIVE_END;
	}
	void UDialogueFunctions::StaticRegisterNativesUDialogueFunctions()
	{
		UClass* Class = UDialogueFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallAllFunctions", &UDialogueFunctions::execCallAllFunctions },
			{ "CallFunctionByName", &UDialogueFunctions::execCallFunctionByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics
	{
		struct DialogueFunctions_eventCallAllFunctions_Parms
		{
			TArray<FString> FunctionNames;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::NewProp_FunctionNames_Inner = { "FunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::NewProp_FunctionNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::NewProp_FunctionNames = { "FunctionNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueFunctions_eventCallAllFunctions_Parms, FunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::NewProp_FunctionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::NewProp_FunctionNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::NewProp_FunctionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::NewProp_FunctionNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/Objects/DialogueFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueFunctions, nullptr, "CallAllFunctions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::DialogueFunctions_eventCallAllFunctions_Parms), Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics
	{
		struct DialogueFunctions_eventCallFunctionByName_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueFunctions_eventCallFunctionByName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/Objects/DialogueFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueFunctions, nullptr, "CallFunctionByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::DialogueFunctions_eventCallFunctionByName_Parms), Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueFunctions);
	UClass* Z_Construct_UClass_UDialogueFunctions_NoRegister()
	{
		return UDialogueFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSx,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueFunctions_CallAllFunctions, "CallAllFunctions" }, // 3496932564
		{ &Z_Construct_UFunction_UDialogueFunctions_CallFunctionByName, "CallFunctionByName" }, // 1744206993
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Objects/DialogueFunctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Objects/DialogueFunctions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueFunctions_Statics::NewProp_ContextObject_MetaData[] = {
		{ "Category", "Functions" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Objects/DialogueFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueFunctions_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueFunctions, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueFunctions_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueFunctions_Statics::NewProp_ContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueFunctions_Statics::NewProp_ContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueFunctions_Statics::ClassParams = {
		&UDialogueFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueFunctions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueFunctions_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueFunctions()
	{
		if (!Z_Registration_Info_UClass_UDialogueFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueFunctions.OuterSingleton, Z_Construct_UClass_UDialogueFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueFunctions.OuterSingleton;
	}
	template<> DIALOGUESX_API UClass* StaticClass<UDialogueFunctions>()
	{
		return UDialogueFunctions::StaticClass();
	}
	UDialogueFunctions::UDialogueFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueFunctions);
	UDialogueFunctions::~UDialogueFunctions() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Objects_DialogueFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Objects_DialogueFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueFunctions, UDialogueFunctions::StaticClass, TEXT("UDialogueFunctions"), &Z_Registration_Info_UClass_UDialogueFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueFunctions), 2354408695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Objects_DialogueFunctions_h_3721823943(TEXT("/Script/DialogueSx"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Objects_DialogueFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Objects_DialogueFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
