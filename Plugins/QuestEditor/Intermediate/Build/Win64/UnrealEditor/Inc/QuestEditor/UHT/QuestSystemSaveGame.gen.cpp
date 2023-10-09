// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Quest/QuestSystemSaveGame.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSystemSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestSystemSaveGame();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestSystemSaveGame_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCompletedQuestTrack();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestFailTrack();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTrack();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	void UQuestSystemSaveGame::StaticRegisterNativesUQuestSystemSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestSystemSaveGame);
	UClass* Z_Construct_UClass_UQuestSystemSaveGame_NoRegister()
	{
		return UQuestSystemSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UQuestSystemSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestInventorySaved_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestInventorySaved_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestInventorySaved;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedQuestsTrackSaved_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedQuestsTrackSaved_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompletedQuestsTrackSaved;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestsTrackSaved_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestsTrackSaved_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestsTrackSaved;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestsFailTrackSaved_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestsFailTrackSaved_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestsFailTrackSaved;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogsInventorySaved_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogsInventorySaved_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogsInventorySaved;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedDialogsTrackSaved_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedDialogsTrackSaved_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompletedDialogsTrackSaved;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogsTrackSaved_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogsTrackSaved_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogsTrackSaved;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogsFailTrackSaved_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogsFailTrackSaved_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogsFailTrackSaved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestSystemSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSystemSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Quest/QuestSystemSaveGame.h" },
		{ "ModuleRelativePath", "Public/Quest/QuestSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestInventorySaved_Inner = { "QuestInventorySaved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestInventorySaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest/QuestSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestInventorySaved = { "QuestInventorySaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSystemSaveGame, QuestInventorySaved), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestInventorySaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestInventorySaved_MetaData)) }; // 2639361420
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedQuestsTrackSaved_Inner = { "CompletedQuestsTrackSaved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCompletedQuestTrack, METADATA_PARAMS(nullptr, 0) }; // 2064038991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedQuestsTrackSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest/QuestSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedQuestsTrackSaved = { "CompletedQuestsTrackSaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSystemSaveGame, CompletedQuestsTrackSaved), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedQuestsTrackSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedQuestsTrackSaved_MetaData)) }; // 2064038991
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsTrackSaved_Inner = { "QuestsTrackSaved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTrack, METADATA_PARAMS(nullptr, 0) }; // 2823668651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsTrackSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest/QuestSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsTrackSaved = { "QuestsTrackSaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSystemSaveGame, QuestsTrackSaved), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsTrackSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsTrackSaved_MetaData)) }; // 2823668651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsFailTrackSaved_Inner = { "QuestsFailTrackSaved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestFailTrack, METADATA_PARAMS(nullptr, 0) }; // 3734998214
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsFailTrackSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest/QuestSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsFailTrackSaved = { "QuestsFailTrackSaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSystemSaveGame, QuestsFailTrackSaved), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsFailTrackSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsFailTrackSaved_MetaData)) }; // 3734998214
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsInventorySaved_Inner = { "DialogsInventorySaved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsInventorySaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest/QuestSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsInventorySaved = { "DialogsInventorySaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSystemSaveGame, DialogsInventorySaved), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsInventorySaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsInventorySaved_MetaData)) }; // 2639361420
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedDialogsTrackSaved_Inner = { "CompletedDialogsTrackSaved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCompletedQuestTrack, METADATA_PARAMS(nullptr, 0) }; // 2064038991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedDialogsTrackSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest/QuestSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedDialogsTrackSaved = { "CompletedDialogsTrackSaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSystemSaveGame, CompletedDialogsTrackSaved), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedDialogsTrackSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedDialogsTrackSaved_MetaData)) }; // 2064038991
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsTrackSaved_Inner = { "DialogsTrackSaved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTrack, METADATA_PARAMS(nullptr, 0) }; // 2823668651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsTrackSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest/QuestSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsTrackSaved = { "DialogsTrackSaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSystemSaveGame, DialogsTrackSaved), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsTrackSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsTrackSaved_MetaData)) }; // 2823668651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsFailTrackSaved_Inner = { "DialogsFailTrackSaved", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestFailTrack, METADATA_PARAMS(nullptr, 0) }; // 3734998214
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsFailTrackSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest/QuestSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsFailTrackSaved = { "DialogsFailTrackSaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSystemSaveGame, DialogsFailTrackSaved), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsFailTrackSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsFailTrackSaved_MetaData)) }; // 3734998214
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestSystemSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestInventorySaved_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestInventorySaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedQuestsTrackSaved_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedQuestsTrackSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsTrackSaved_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsTrackSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsFailTrackSaved_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_QuestsFailTrackSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsInventorySaved_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsInventorySaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedDialogsTrackSaved_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_CompletedDialogsTrackSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsTrackSaved_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsTrackSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsFailTrackSaved_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSystemSaveGame_Statics::NewProp_DialogsFailTrackSaved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestSystemSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestSystemSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestSystemSaveGame_Statics::ClassParams = {
		&UQuestSystemSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestSystemSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSystemSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestSystemSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSystemSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestSystemSaveGame()
	{
		if (!Z_Registration_Info_UClass_UQuestSystemSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestSystemSaveGame.OuterSingleton, Z_Construct_UClass_UQuestSystemSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestSystemSaveGame.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UQuestSystemSaveGame>()
	{
		return UQuestSystemSaveGame::StaticClass();
	}
	UQuestSystemSaveGame::UQuestSystemSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestSystemSaveGame);
	UQuestSystemSaveGame::~UQuestSystemSaveGame() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestSystemSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestSystemSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestSystemSaveGame, UQuestSystemSaveGame::StaticClass, TEXT("UQuestSystemSaveGame"), &Z_Registration_Info_UClass_UQuestSystemSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestSystemSaveGame), 661770413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestSystemSaveGame_h_3581690167(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestSystemSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestSystemSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
