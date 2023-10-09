// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskSelectReward/BaseQuestTask_SelectReward.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNPCQuestDefRep;
struct FQuestNode;
struct FQuestTaskPayload;
#ifdef QUESTEDITOR_BaseQuestTask_SelectReward_generated_h
#error "BaseQuestTask_SelectReward.generated.h already included, missing '#pragma once' in BaseQuestTask_SelectReward.h"
#endif
#define QUESTEDITOR_BaseQuestTask_SelectReward_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_RPC_WRAPPERS \
	virtual bool TaskRewardGiver_Implementation(FQuestTaskPayload const& PayloadIn, FNPCQuestDefRep& RewardGiverOut) const; \
	virtual bool TaskShowsOnlyOnceInSummary_Implementation(FQuestTaskPayload const& PayloadIn, FString& StringID) const; \
	virtual FString GetTaskName_Implementation() const; \
	virtual FString GetTaskShortDescription_Implementation(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn) const; \
	virtual bool TaskShouldShowInUI_Implementation() const; \
	virtual bool TaskShouldAnnounce_Implementation() const; \
	virtual void BindQuestEvents_Implementation(); \
	virtual bool OnRewardSelected_Implementation(int32 QuestSlotIn, int32 TaskSlotIn, bool IsDialogIn); \
	virtual bool OnRewardSelectedCondition_Implementation(); \
 \
	DECLARE_FUNCTION(execTaskRewardGiver); \
	DECLARE_FUNCTION(execTaskShowsOnlyOnceInSummary); \
	DECLARE_FUNCTION(execGetTaskName); \
	DECLARE_FUNCTION(execGetTaskShortDescription); \
	DECLARE_FUNCTION(execTaskShouldShowInUI); \
	DECLARE_FUNCTION(execTaskShouldAnnounce); \
	DECLARE_FUNCTION(execHandleRewardSelection); \
	DECLARE_FUNCTION(execBindQuestEvents); \
	DECLARE_FUNCTION(execOnRewardSelected); \
	DECLARE_FUNCTION(execOnRewardSelectedCondition);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BindQuestEvents_Implementation(); \
	virtual bool OnRewardSelected_Implementation(int32 QuestSlotIn, int32 TaskSlotIn, bool IsDialogIn); \
	virtual bool OnRewardSelectedCondition_Implementation(); \
 \
	DECLARE_FUNCTION(execTaskRewardGiver); \
	DECLARE_FUNCTION(execTaskShowsOnlyOnceInSummary); \
	DECLARE_FUNCTION(execGetTaskName); \
	DECLARE_FUNCTION(execGetTaskShortDescription); \
	DECLARE_FUNCTION(execTaskShouldShowInUI); \
	DECLARE_FUNCTION(execTaskShouldAnnounce); \
	DECLARE_FUNCTION(execHandleRewardSelection); \
	DECLARE_FUNCTION(execBindQuestEvents); \
	DECLARE_FUNCTION(execOnRewardSelected); \
	DECLARE_FUNCTION(execOnRewardSelectedCondition);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseQuestTask_SelectReward(); \
	friend struct Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestTask_SelectReward, UBaseQuestTask, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestTask_SelectReward) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseQuestTask_SelectReward*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBaseQuestTask_SelectReward(); \
	friend struct Z_Construct_UClass_UBaseQuestTask_SelectReward_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestTask_SelectReward, UBaseQuestTask, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestTask_SelectReward) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseQuestTask_SelectReward*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseQuestTask_SelectReward(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseQuestTask_SelectReward) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestTask_SelectReward); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestTask_SelectReward); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestTask_SelectReward(UBaseQuestTask_SelectReward&&); \
	NO_API UBaseQuestTask_SelectReward(const UBaseQuestTask_SelectReward&); \
public: \
	NO_API virtual ~UBaseQuestTask_SelectReward();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestTask_SelectReward(UBaseQuestTask_SelectReward&&); \
	NO_API UBaseQuestTask_SelectReward(const UBaseQuestTask_SelectReward&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestTask_SelectReward); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestTask_SelectReward); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseQuestTask_SelectReward) \
	NO_API virtual ~UBaseQuestTask_SelectReward();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_22_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UBaseQuestTask_SelectReward>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectReward_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
