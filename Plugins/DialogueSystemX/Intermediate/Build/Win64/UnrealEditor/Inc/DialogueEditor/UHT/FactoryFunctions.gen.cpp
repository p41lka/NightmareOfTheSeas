// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/FactoryFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryFunctions() {}
// Cross Module References
	DIALOGUEEDITOR_API UClass* Z_Construct_UClass_UFactoryFunctions();
	DIALOGUEEDITOR_API UClass* Z_Construct_UClass_UFactoryFunctions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
	UPackage* Z_Construct_UPackage__Script_DialogueEditor();
// End Cross Module References
	void UFactoryFunctions::StaticRegisterNativesUFactoryFunctions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactoryFunctions);
	UClass* Z_Construct_UClass_UFactoryFunctions_NoRegister()
	{
		return UFactoryFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UFactoryFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFactoryFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactoryFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FactoryFunctions.h" },
		{ "ModuleRelativePath", "Private/Factories/FactoryFunctions.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFactoryFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactoryFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactoryFunctions_Statics::ClassParams = {
		&UFactoryFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFactoryFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFactoryFunctions()
	{
		if (!Z_Registration_Info_UClass_UFactoryFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactoryFunctions.OuterSingleton, Z_Construct_UClass_UFactoryFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFactoryFunctions.OuterSingleton;
	}
	template<> DIALOGUEEDITOR_API UClass* StaticClass<UFactoryFunctions>()
	{
		return UFactoryFunctions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFactoryFunctions);
	UFactoryFunctions::~UFactoryFunctions() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueEditor_Private_Factories_FactoryFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueEditor_Private_Factories_FactoryFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFactoryFunctions, UFactoryFunctions::StaticClass, TEXT("UFactoryFunctions"), &Z_Registration_Info_UClass_UFactoryFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactoryFunctions), 4138328899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueEditor_Private_Factories_FactoryFunctions_h_867716201(TEXT("/Script/DialogueEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueEditor_Private_Factories_FactoryFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueEditor_Private_Factories_FactoryFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
