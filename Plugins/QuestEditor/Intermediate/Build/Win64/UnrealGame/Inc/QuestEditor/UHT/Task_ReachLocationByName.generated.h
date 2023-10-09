// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskLocation/Task_ReachLocationByName.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQuestTaskPayload;
#ifdef QUESTEDITOR_Task_ReachLocationByName_generated_h
#error "Task_ReachLocationByName.generated.h already included, missing '#pragma once' in Task_ReachLocationByName.h"
#endif
#define QUESTEDITOR_Task_ReachLocationByName_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_RPC_WRAPPERS \
	virtual FString GetTaskName_Implementation() const; \
	virtual FString GetTaskShortDescription_Implementation(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn) const; \
	virtual bool TaskShouldShowInUI_Implementation() const; \
	virtual bool TaskShouldAnnounce_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetTaskName); \
	DECLARE_FUNCTION(execGetTaskShortDescription); \
	DECLARE_FUNCTION(execTaskShouldShowInUI); \
	DECLARE_FUNCTION(execTaskShouldAnnounce);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTaskName); \
	DECLARE_FUNCTION(execGetTaskShortDescription); \
	DECLARE_FUNCTION(execTaskShouldShowInUI); \
	DECLARE_FUNCTION(execTaskShouldAnnounce);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTask_ReachLocationByName(); \
	friend struct Z_Construct_UClass_UTask_ReachLocationByName_Statics; \
public: \
	DECLARE_CLASS(UTask_ReachLocationByName, UBaseQuestTask_Location, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UTask_ReachLocationByName)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTask_ReachLocationByName(); \
	friend struct Z_Construct_UClass_UTask_ReachLocationByName_Statics; \
public: \
	DECLARE_CLASS(UTask_ReachLocationByName, UBaseQuestTask_Location, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UTask_ReachLocationByName)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTask_ReachLocationByName(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTask_ReachLocationByName) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTask_ReachLocationByName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTask_ReachLocationByName); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTask_ReachLocationByName(UTask_ReachLocationByName&&); \
	NO_API UTask_ReachLocationByName(const UTask_ReachLocationByName&); \
public: \
	NO_API virtual ~UTask_ReachLocationByName();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTask_ReachLocationByName(UTask_ReachLocationByName&&); \
	NO_API UTask_ReachLocationByName(const UTask_ReachLocationByName&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTask_ReachLocationByName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTask_ReachLocationByName); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTask_ReachLocationByName) \
	NO_API virtual ~UTask_ReachLocationByName();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_20_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UTask_ReachLocationByName>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_Task_ReachLocationByName_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
