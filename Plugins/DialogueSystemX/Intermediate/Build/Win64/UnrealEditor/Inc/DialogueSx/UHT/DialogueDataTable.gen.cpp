// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/DialogueDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueDataTable() {}
// Cross Module References
	DIALOGUESX_API UClass* Z_Construct_UClass_UDialogueDataTable();
	DIALOGUESX_API UClass* Z_Construct_UClass_UDialogueDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	UPackage* Z_Construct_UPackage__Script_DialogueSx();
// End Cross Module References
	void UDialogueDataTable::StaticRegisterNativesUDialogueDataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueDataTable);
	UClass* Z_Construct_UClass_UDialogueDataTable_NoRegister()
	{
		return UDialogueDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSx,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueDataTable_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/DialogueDataTable.h" },
		{ "ModuleRelativePath", "Public/Data/DialogueDataTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueDataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueDataTable_Statics::ClassParams = {
		&UDialogueDataTable::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueDataTable()
	{
		if (!Z_Registration_Info_UClass_UDialogueDataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueDataTable.OuterSingleton, Z_Construct_UClass_UDialogueDataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueDataTable.OuterSingleton;
	}
	template<> DIALOGUESX_API UClass* StaticClass<UDialogueDataTable>()
	{
		return UDialogueDataTable::StaticClass();
	}
	UDialogueDataTable::UDialogueDataTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueDataTable);
	UDialogueDataTable::~UDialogueDataTable() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueDataTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueDataTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueDataTable, UDialogueDataTable::StaticClass, TEXT("UDialogueDataTable"), &Z_Registration_Info_UClass_UDialogueDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueDataTable), 3398253992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueDataTable_h_4148109576(TEXT("/Script/DialogueSx"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_DialogueDataTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
