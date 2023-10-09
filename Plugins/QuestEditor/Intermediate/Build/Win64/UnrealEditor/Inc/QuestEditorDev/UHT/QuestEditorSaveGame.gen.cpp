// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/QuestEditor/QuestEditorSaveGame.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorSaveGame();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorSaveGame_NoRegister();
	QUESTEDITORDEV_API UEnum* Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	void UQuestEditorSaveGame::StaticRegisterNativesUQuestEditorSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorSaveGame);
	UClass* Z_Construct_UClass_UQuestEditorSaveGame_NoRegister()
	{
		return UQuestEditorSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentEditorMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEditorMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentEditorMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndoQuestIndexSaved_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UndoQuestIndexSaved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndoDialogIndexSaved_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UndoDialogIndexSaved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportScaleSaved_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewportScaleSaved;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousQuests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousQuests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousQuests;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndoHistoryQuests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndoHistoryQuests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UndoHistoryQuests;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousDialogs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousDialogs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousDialogs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndoHistoryDialogs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndoHistoryDialogs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UndoHistoryDialogs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09\x09Savegame object for the Quest Editor.\n */" },
		{ "IncludePath", "QuestEditor/QuestEditorSaveGame.h" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorSaveGame.h" },
		{ "ToolTip", "Savegame object for the Quest Editor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_CurrentEditorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_CurrentEditorMode_MetaData[] = {
		{ "Comment", "//------------------------------------------Quest editor save game variables\n" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorSaveGame.h" },
		{ "ToolTip", "------------------------------------------Quest editor save game variables" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_CurrentEditorMode = { "CurrentEditorMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSaveGame, CurrentEditorMode), Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_CurrentEditorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_CurrentEditorMode_MetaData)) }; // 3075556338
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoQuestIndexSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoQuestIndexSaved = { "UndoQuestIndexSaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSaveGame, UndoQuestIndexSaved), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoQuestIndexSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoQuestIndexSaved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoDialogIndexSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoDialogIndexSaved = { "UndoDialogIndexSaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSaveGame, UndoDialogIndexSaved), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoDialogIndexSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoDialogIndexSaved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_ViewportScaleSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_ViewportScaleSaved = { "ViewportScaleSaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSaveGame, ViewportScaleSaved), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_ViewportScaleSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_ViewportScaleSaved_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousQuests_Inner = { "PreviousQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousQuests_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousQuests = { "PreviousQuests", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSaveGame, PreviousQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousQuests_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryQuests_Inner = { "UndoHistoryQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryQuests_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryQuests = { "UndoHistoryQuests", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSaveGame, UndoHistoryQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryQuests_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousDialogs_Inner = { "PreviousDialogs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousDialogs_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousDialogs = { "PreviousDialogs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSaveGame, PreviousDialogs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousDialogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousDialogs_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryDialogs_Inner = { "UndoHistoryDialogs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryDialogs_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryDialogs = { "UndoHistoryDialogs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSaveGame, UndoHistoryDialogs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryDialogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryDialogs_MetaData)) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestEditorSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_CurrentEditorMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_CurrentEditorMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoQuestIndexSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoDialogIndexSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_ViewportScaleSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousQuests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousQuests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryQuests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryQuests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousDialogs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_PreviousDialogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryDialogs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSaveGame_Statics::NewProp_UndoHistoryDialogs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorSaveGame_Statics::ClassParams = {
		&UQuestEditorSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestEditorSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEditorSaveGame()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorSaveGame.OuterSingleton, Z_Construct_UClass_UQuestEditorSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorSaveGame.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UQuestEditorSaveGame>()
	{
		return UQuestEditorSaveGame::StaticClass();
	}
	UQuestEditorSaveGame::UQuestEditorSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorSaveGame);
	UQuestEditorSaveGame::~UQuestEditorSaveGame() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorSaveGame, UQuestEditorSaveGame::StaticClass, TEXT("UQuestEditorSaveGame"), &Z_Registration_Info_UClass_UQuestEditorSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorSaveGame), 3204853390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorSaveGame_h_3852546726(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
