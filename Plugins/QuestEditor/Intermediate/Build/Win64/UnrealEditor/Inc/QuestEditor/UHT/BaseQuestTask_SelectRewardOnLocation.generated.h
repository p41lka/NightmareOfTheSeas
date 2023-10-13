// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskSelectReward/BaseQuestTask_SelectRewardOnLocation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABaseQuestLocationActor;
class ACharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef QUESTEDITOR_BaseQuestTask_SelectRewardOnLocation_generated_h
#error "BaseQuestTask_SelectRewardOnLocation.generated.h already included, missing '#pragma once' in BaseQuestTask_SelectRewardOnLocation.h"
#endif
#define QUESTEDITOR_BaseQuestTask_SelectRewardOnLocation_generated_h

#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_SPARSE_DATA
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_RPC_WRAPPERS \
	virtual void OnLocationReachForReward_Implementation(ABaseQuestLocationActor* LocationIN); \
	virtual bool OnQuestLocationReachedCondition_Implementation(ABaseQuestLocationActor* QuestLocationActorIn); \
	virtual ACharacter* GetInteractingCharacter_Implementation(); \
 \
	DECLARE_FUNCTION(execBindOverlapCharacterDelegates); \
	DECLARE_FUNCTION(execOnOverlapEvent); \
	DECLARE_FUNCTION(execOnLocationReachForReward); \
	DECLARE_FUNCTION(execOnQuestLocationReachedCondition); \
	DECLARE_FUNCTION(execGetInteractingCharacter);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnLocationReachForReward_Implementation(ABaseQuestLocationActor* LocationIN); \
	virtual bool OnQuestLocationReachedCondition_Implementation(ABaseQuestLocationActor* QuestLocationActorIn); \
	virtual ACharacter* GetInteractingCharacter_Implementation(); \
 \
	DECLARE_FUNCTION(execBindOverlapCharacterDelegates); \
	DECLARE_FUNCTION(execOnOverlapEvent); \
	DECLARE_FUNCTION(execOnLocationReachForReward); \
	DECLARE_FUNCTION(execOnQuestLocationReachedCondition); \
	DECLARE_FUNCTION(execGetInteractingCharacter);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_ACCESSORS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_CALLBACK_WRAPPERS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseQuestTask_SelectRewardOnLocation(); \
	friend struct Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestTask_SelectRewardOnLocation, UBaseQuestTask_SelectReward, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestTask_SelectRewardOnLocation)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBaseQuestTask_SelectRewardOnLocation(); \
	friend struct Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestTask_SelectRewardOnLocation, UBaseQuestTask_SelectReward, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestTask_SelectRewardOnLocation)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseQuestTask_SelectRewardOnLocation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseQuestTask_SelectRewardOnLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestTask_SelectRewardOnLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestTask_SelectRewardOnLocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestTask_SelectRewardOnLocation(UBaseQuestTask_SelectRewardOnLocation&&); \
	NO_API UBaseQuestTask_SelectRewardOnLocation(const UBaseQuestTask_SelectRewardOnLocation&); \
public: \
	NO_API virtual ~UBaseQuestTask_SelectRewardOnLocation();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestTask_SelectRewardOnLocation(UBaseQuestTask_SelectRewardOnLocation&&); \
	NO_API UBaseQuestTask_SelectRewardOnLocation(const UBaseQuestTask_SelectRewardOnLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestTask_SelectRewardOnLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestTask_SelectRewardOnLocation); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseQuestTask_SelectRewardOnLocation) \
	NO_API virtual ~UBaseQuestTask_SelectRewardOnLocation();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_20_PROLOG
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_RPC_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_INCLASS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_INCLASS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UBaseQuestTask_SelectRewardOnLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
