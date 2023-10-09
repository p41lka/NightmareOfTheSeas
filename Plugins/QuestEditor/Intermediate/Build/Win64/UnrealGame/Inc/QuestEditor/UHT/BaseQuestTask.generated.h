// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Task/BaseQuestTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UQuestManager;
struct FQuestTaskPayload;
#ifdef QUESTEDITOR_BaseQuestTask_generated_h
#error "BaseQuestTask.generated.h already included, missing '#pragma once' in BaseQuestTask.h"
#endif
#define QUESTEDITOR_BaseQuestTask_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_RPC_WRAPPERS \
	virtual int32 GetTaskScore_Implementation(); \
	virtual bool ActivateCondition_Implementation(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn, const UQuestManager* QuestManagerIn) const; \
	virtual void OnQuestTaskDestroyed_Implementation(); \
	virtual void OnQuestTaskFailed_Implementation(); \
	virtual void OnQuestTaskDisabled_Implementation(); \
	virtual void OnQuestTaskCompleted_Implementation(); \
	virtual void OnQuestTaskSaved_Implementation(); \
	virtual void OnQuestTaskLoaded_Implementation(); \
	virtual void OnQuestTaskActivated_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCustomPayloadDataByIndex); \
	DECLARE_FUNCTION(execGetCustomPayloadData); \
	DECLARE_FUNCTION(execEndQuestTask); \
	DECLARE_FUNCTION(execGetTaskScore); \
	DECLARE_FUNCTION(execActivateCondition); \
	DECLARE_FUNCTION(execOnQuestTaskDestroyed); \
	DECLARE_FUNCTION(execOnQuestTaskFailed); \
	DECLARE_FUNCTION(execOnQuestTaskDisabled); \
	DECLARE_FUNCTION(execOnQuestTaskCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskSaved); \
	DECLARE_FUNCTION(execOnQuestTaskLoaded); \
	DECLARE_FUNCTION(execOnQuestTaskActivated); \
	DECLARE_FUNCTION(execReduceQuestSlot); \
	DECLARE_FUNCTION(execGetTaskActivationCondition); \
	DECLARE_FUNCTION(execGetTaskConditionOnlyStatus); \
	DECLARE_FUNCTION(execGetParticularTaskScore); \
	DECLARE_FUNCTION(execDestroyQuestTask); \
	DECLARE_FUNCTION(execFailQuestTask); \
	DECLARE_FUNCTION(execDisableQuestTask); \
	DECLARE_FUNCTION(execCompleteQuestTask); \
	DECLARE_FUNCTION(execSaveQuestTask); \
	DECLARE_FUNCTION(execLoadQuestTask); \
	DECLARE_FUNCTION(execStartQuestTask);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 GetTaskScore_Implementation(); \
	virtual bool ActivateCondition_Implementation(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn, const UQuestManager* QuestManagerIn) const; \
	virtual void OnQuestTaskDestroyed_Implementation(); \
	virtual void OnQuestTaskFailed_Implementation(); \
	virtual void OnQuestTaskDisabled_Implementation(); \
	virtual void OnQuestTaskCompleted_Implementation(); \
	virtual void OnQuestTaskSaved_Implementation(); \
	virtual void OnQuestTaskLoaded_Implementation(); \
	virtual void OnQuestTaskActivated_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCustomPayloadDataByIndex); \
	DECLARE_FUNCTION(execGetCustomPayloadData); \
	DECLARE_FUNCTION(execEndQuestTask); \
	DECLARE_FUNCTION(execGetTaskScore); \
	DECLARE_FUNCTION(execActivateCondition); \
	DECLARE_FUNCTION(execOnQuestTaskDestroyed); \
	DECLARE_FUNCTION(execOnQuestTaskFailed); \
	DECLARE_FUNCTION(execOnQuestTaskDisabled); \
	DECLARE_FUNCTION(execOnQuestTaskCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskSaved); \
	DECLARE_FUNCTION(execOnQuestTaskLoaded); \
	DECLARE_FUNCTION(execOnQuestTaskActivated); \
	DECLARE_FUNCTION(execReduceQuestSlot); \
	DECLARE_FUNCTION(execGetTaskActivationCondition); \
	DECLARE_FUNCTION(execGetTaskConditionOnlyStatus); \
	DECLARE_FUNCTION(execGetParticularTaskScore); \
	DECLARE_FUNCTION(execDestroyQuestTask); \
	DECLARE_FUNCTION(execFailQuestTask); \
	DECLARE_FUNCTION(execDisableQuestTask); \
	DECLARE_FUNCTION(execCompleteQuestTask); \
	DECLARE_FUNCTION(execSaveQuestTask); \
	DECLARE_FUNCTION(execLoadQuestTask); \
	DECLARE_FUNCTION(execStartQuestTask);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseQuestTask(); \
	friend struct Z_Construct_UClass_UBaseQuestTask_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestTask)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBaseQuestTask(); \
	friend struct Z_Construct_UClass_UBaseQuestTask_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestTask)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseQuestTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseQuestTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestTask(UBaseQuestTask&&); \
	NO_API UBaseQuestTask(const UBaseQuestTask&); \
public: \
	NO_API virtual ~UBaseQuestTask();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestTask(UBaseQuestTask&&); \
	NO_API UBaseQuestTask(const UBaseQuestTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestTask); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseQuestTask) \
	NO_API virtual ~UBaseQuestTask();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UBaseQuestTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
