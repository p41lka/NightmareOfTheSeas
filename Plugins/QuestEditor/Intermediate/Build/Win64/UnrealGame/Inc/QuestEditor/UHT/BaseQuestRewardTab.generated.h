// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskSelectReward/BaseQuestRewardTab.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestManager;
struct FQuestNode;
struct FRewardTabSlotInfo;
#ifdef QUESTEDITOR_BaseQuestRewardTab_generated_h
#error "BaseQuestRewardTab.generated.h already included, missing '#pragma once' in BaseQuestRewardTab.h"
#endif
#define QUESTEDITOR_BaseQuestRewardTab_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_RPC_WRAPPERS \
	virtual UQuestManager* GetQuestManagerReference_Implementation(); \
 \
	DECLARE_FUNCTION(execUpdateTabWithRetriggerData); \
	DECLARE_FUNCTION(execOnRewardSelectedUpdate); \
	DECLARE_FUNCTION(execOnRewardActivateUpdate); \
	DECLARE_FUNCTION(execOnRewardActivateBind); \
	DECLARE_FUNCTION(execGetQuestManagerReference);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UQuestManager* GetQuestManagerReference_Implementation(); \
 \
	DECLARE_FUNCTION(execUpdateTabWithRetriggerData); \
	DECLARE_FUNCTION(execOnRewardSelectedUpdate); \
	DECLARE_FUNCTION(execOnRewardActivateUpdate); \
	DECLARE_FUNCTION(execOnRewardActivateBind); \
	DECLARE_FUNCTION(execGetQuestManagerReference);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseQuestRewardTab(); \
	friend struct Z_Construct_UClass_UBaseQuestRewardTab_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestRewardTab, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestRewardTab)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBaseQuestRewardTab(); \
	friend struct Z_Construct_UClass_UBaseQuestRewardTab_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestRewardTab, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestRewardTab)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseQuestRewardTab(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseQuestRewardTab) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestRewardTab); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestRewardTab); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestRewardTab(UBaseQuestRewardTab&&); \
	NO_API UBaseQuestRewardTab(const UBaseQuestRewardTab&); \
public: \
	NO_API virtual ~UBaseQuestRewardTab();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseQuestRewardTab(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestRewardTab(UBaseQuestRewardTab&&); \
	NO_API UBaseQuestRewardTab(const UBaseQuestRewardTab&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestRewardTab); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestRewardTab); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseQuestRewardTab) \
	NO_API virtual ~UBaseQuestRewardTab();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UBaseQuestRewardTab>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestRewardTab_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
