// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskSelectReward/QuestTaskRewardInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseQuestRewardSlot;
struct FGameplayTagContainer;
struct FNPCQuestDefRep;
struct FQuestTaskPayload;
#ifdef QUESTEDITOR_QuestTaskRewardInterface_generated_h
#error "QuestTaskRewardInterface.generated.h already included, missing '#pragma once' in QuestTaskRewardInterface.h"
#endif
#define QUESTEDITOR_QuestTaskRewardInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_RPC_WRAPPERS \
	virtual FGameplayTagContainer TaskRewardTags_Implementation() const { return FGameplayTagContainer(); }; \
	virtual TSubclassOf<UBaseQuestRewardSlot>  TaskRewardSlot_Implementation() const { return NULL; }; \
	virtual bool TaskRewardLocation_Implementation(FQuestTaskPayload const& PayloadIn, FString& LocationNameOut) const { return false; }; \
	virtual bool TaskRewardGiver_Implementation(FQuestTaskPayload const& PayloadIn, FNPCQuestDefRep& RewardGiverOut) const { return false; }; \
	virtual bool TaskShowsOnlyOnceInSummary_Implementation(FQuestTaskPayload const& PayloadIn, FString& StringID) const { return false; }; \
 \
	DECLARE_FUNCTION(execTaskRewardTags); \
	DECLARE_FUNCTION(execTaskRewardSlot); \
	DECLARE_FUNCTION(execTaskRewardLocation); \
	DECLARE_FUNCTION(execTaskRewardGiver); \
	DECLARE_FUNCTION(execTaskShowsOnlyOnceInSummary);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FGameplayTagContainer TaskRewardTags_Implementation() const { return FGameplayTagContainer(); }; \
	virtual TSubclassOf<UBaseQuestRewardSlot>  TaskRewardSlot_Implementation() const { return NULL; }; \
	virtual bool TaskRewardLocation_Implementation(FQuestTaskPayload const& PayloadIn, FString& LocationNameOut) const { return false; }; \
	virtual bool TaskRewardGiver_Implementation(FQuestTaskPayload const& PayloadIn, FNPCQuestDefRep& RewardGiverOut) const { return false; }; \
	virtual bool TaskShowsOnlyOnceInSummary_Implementation(FQuestTaskPayload const& PayloadIn, FString& StringID) const { return false; }; \
 \
	DECLARE_FUNCTION(execTaskRewardTags); \
	DECLARE_FUNCTION(execTaskRewardSlot); \
	DECLARE_FUNCTION(execTaskRewardLocation); \
	DECLARE_FUNCTION(execTaskRewardGiver); \
	DECLARE_FUNCTION(execTaskShowsOnlyOnceInSummary);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTEDITOR_API UQuestTaskRewardInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestTaskRewardInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTEDITOR_API, UQuestTaskRewardInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestTaskRewardInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTEDITOR_API UQuestTaskRewardInterface(UQuestTaskRewardInterface&&); \
	QUESTEDITOR_API UQuestTaskRewardInterface(const UQuestTaskRewardInterface&); \
public: \
	QUESTEDITOR_API virtual ~UQuestTaskRewardInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTEDITOR_API UQuestTaskRewardInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTEDITOR_API UQuestTaskRewardInterface(UQuestTaskRewardInterface&&); \
	QUESTEDITOR_API UQuestTaskRewardInterface(const UQuestTaskRewardInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTEDITOR_API, UQuestTaskRewardInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestTaskRewardInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestTaskRewardInterface) \
	QUESTEDITOR_API virtual ~UQuestTaskRewardInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUQuestTaskRewardInterface(); \
	friend struct Z_Construct_UClass_UQuestTaskRewardInterface_Statics; \
public: \
	DECLARE_CLASS(UQuestTaskRewardInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/QuestEditor"), QUESTEDITOR_API) \
	DECLARE_SERIALIZER(UQuestTaskRewardInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IQuestTaskRewardInterface() {} \
public: \
	typedef UQuestTaskRewardInterface UClassType; \
	typedef IQuestTaskRewardInterface ThisClass; \
	static bool Execute_TaskRewardGiver(const UObject* O, FQuestTaskPayload const& PayloadIn, FNPCQuestDefRep& RewardGiverOut); \
	static bool Execute_TaskRewardLocation(const UObject* O, FQuestTaskPayload const& PayloadIn, FString& LocationNameOut); \
	static TSubclassOf<UBaseQuestRewardSlot>  Execute_TaskRewardSlot(const UObject* O); \
	static FGameplayTagContainer Execute_TaskRewardTags(const UObject* O); \
	static bool Execute_TaskShowsOnlyOnceInSummary(const UObject* O, FQuestTaskPayload const& PayloadIn, FString& StringID); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IQuestTaskRewardInterface() {} \
public: \
	typedef UQuestTaskRewardInterface UClassType; \
	typedef IQuestTaskRewardInterface ThisClass; \
	static bool Execute_TaskRewardGiver(const UObject* O, FQuestTaskPayload const& PayloadIn, FNPCQuestDefRep& RewardGiverOut); \
	static bool Execute_TaskRewardLocation(const UObject* O, FQuestTaskPayload const& PayloadIn, FString& LocationNameOut); \
	static TSubclassOf<UBaseQuestRewardSlot>  Execute_TaskRewardSlot(const UObject* O); \
	static FGameplayTagContainer Execute_TaskRewardTags(const UObject* O); \
	static bool Execute_TaskShowsOnlyOnceInSummary(const UObject* O, FQuestTaskPayload const& PayloadIn, FString& StringID); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UQuestTaskRewardInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
