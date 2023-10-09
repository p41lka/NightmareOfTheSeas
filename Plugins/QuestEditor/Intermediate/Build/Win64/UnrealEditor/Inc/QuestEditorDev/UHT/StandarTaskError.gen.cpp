// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Errors/StandarTaskError.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandarTaskError() {}
// Cross Module References
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTaskError();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UStandarTaskError();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UStandarTaskError_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	void UStandarTaskError::StaticRegisterNativesUStandarTaskError()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStandarTaskError);
	UClass* Z_Construct_UClass_UStandarTaskError_NoRegister()
	{
		return UStandarTaskError::StaticClass();
	}
	struct Z_Construct_UClass_UStandarTaskError_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStandarTaskError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEditorTaskError,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStandarTaskError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09\x09Standar error list function. Detects if a selector does not have its property set correctly.\n */" },
		{ "IncludePath", "Errors/StandarTaskError.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Errors/StandarTaskError.h" },
		{ "ToolTip", "Standar error list function. Detects if a selector does not have its property set correctly." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStandarTaskError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandarTaskError>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStandarTaskError_Statics::ClassParams = {
		&UStandarTaskError::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStandarTaskError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStandarTaskError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStandarTaskError()
	{
		if (!Z_Registration_Info_UClass_UStandarTaskError.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStandarTaskError.OuterSingleton, Z_Construct_UClass_UStandarTaskError_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStandarTaskError.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UStandarTaskError>()
	{
		return UStandarTaskError::StaticClass();
	}
	UStandarTaskError::UStandarTaskError() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStandarTaskError);
	UStandarTaskError::~UStandarTaskError() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_StandarTaskError_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_StandarTaskError_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStandarTaskError, UStandarTaskError::StaticClass, TEXT("UStandarTaskError"), &Z_Registration_Info_UClass_UStandarTaskError, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStandarTaskError), 1198284664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_StandarTaskError_h_1842742633(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_StandarTaskError_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Errors_StandarTaskError_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
