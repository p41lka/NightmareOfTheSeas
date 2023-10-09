// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/DialogueLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DIALOGUESX_API UClass* Z_Construct_UClass_UDialogueLibrary();
	DIALOGUESX_API UClass* Z_Construct_UClass_UDialogueLibrary_NoRegister();
	DIALOGUESX_API UEnum* Z_Construct_UEnum_DialogueSx_EResult();
	UPackage* Z_Construct_UPackage__Script_DialogueSx();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResult;
	static UEnum* EResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DialogueSx_EResult, (UObject*)Z_Construct_UPackage__Script_DialogueSx(), TEXT("EResult"));
		}
		return Z_Registration_Info_UEnum_EResult.OuterSingleton;
	}
	template<> DIALOGUESX_API UEnum* StaticEnum<EResult>()
	{
		return EResult_StaticEnum();
	}
	struct Z_Construct_UEnum_DialogueSx_EResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DialogueSx_EResult_Statics::Enumerators[] = {
		{ "EResult::None", (int64)EResult::None },
		{ "EResult::Continue", (int64)EResult::Continue },
		{ "EResult::Main", (int64)EResult::Main },
		{ "EResult::NPC", (int64)EResult::NPC },
		{ "EResult::Player", (int64)EResult::Player },
		{ "EResult::If", (int64)EResult::If },
		{ "EResult::Commands", (int64)EResult::Commands },
		{ "EResult::Branch", (int64)EResult::Branch },
		{ "EResult::Random", (int64)EResult::Random },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DialogueSx_EResult_Statics::Enum_MetaDataParams[] = {
		{ "Branch.Name", "EResult::Branch" },
		{ "Commands.Name", "EResult::Commands" },
		{ "Continue.Name", "EResult::Continue" },
		{ "If.Name", "EResult::If" },
		{ "Main.Name", "EResult::Main" },
		{ "ModuleRelativePath", "Public/Data/DialogueLibrary.h" },
		{ "None.Name", "EResult::None" },
		{ "NPC.Name", "EResult::NPC" },
		{ "Player.Name", "EResult::Player" },
		{ "Random.Name", "EResult::Random" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DialogueSx_EResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DialogueSx,
		nullptr,
		"EResult",
		"EResult",
		Z_Construct_UEnum_DialogueSx_EResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DialogueSx_EResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DialogueSx_EResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DialogueSx_EResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DialogueSx_EResult()
	{
		if (!Z_Registration_Info_UEnum_EResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResult.InnerSingleton, Z_Construct_UEnum_DialogueSx_EResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EResult.InnerSingleton;
	}
	void UDialogueLibrary::StaticRegisterNativesUDialogueLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueLibrary);
	UClass* Z_Construct_UClass_UDialogueLibrary_NoRegister()
	{
		return UDialogueLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSx,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Data/DialogueLibrary.h" },
		{ "ModuleRelativePath", "Public/Data/DialogueLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueLibrary_Statics::ClassParams = {
		&UDialogueLibrary::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueLibrary()
	{
		if (!Z_Registration_Info_UClass_UDialogueLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueLibrary.OuterSingleton, Z_Construct_UClass_UDialogueLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueLibrary.OuterSingleton;
	}
	template<> DIALOGUESX_API UClass* StaticClass<UDialogueLibrary>()
	{
		return UDialogueLibrary::StaticClass();
	}
	UDialogueLibrary::UDialogueLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueLibrary);
	UDialogueLibrary::~UDialogueLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueLibrary_h_Statics::EnumInfo[] = {
		{ EResult_StaticEnum, TEXT("EResult"), &Z_Registration_Info_UEnum_EResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 491013043U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueLibrary, UDialogueLibrary::StaticClass, TEXT("UDialogueLibrary"), &Z_Registration_Info_UClass_UDialogueLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueLibrary), 1876926430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueLibrary_h_1563184246(TEXT("/Script/DialogueSx"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
