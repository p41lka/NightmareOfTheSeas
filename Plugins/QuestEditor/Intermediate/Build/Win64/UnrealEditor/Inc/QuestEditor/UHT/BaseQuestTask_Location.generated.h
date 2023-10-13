// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskLocation/BaseQuestTask_Location.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABaseQuestLocationActor;
class ACharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef QUESTEDITOR_BaseQuestTask_Location_generated_h
#error "BaseQuestTask_Location.generated.h already included, missing '#pragma once' in BaseQuestTask_Location.h"
#endif
#define QUESTEDITOR_BaseQuestTask_Location_generated_h

#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_SPARSE_DATA
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_RPC_WRAPPERS \
	virtual bool OnQuestLocationReachedCondition_Implementation(ABaseQuestLocationActor* QuestLocationActorIn); \
	virtual ACharacter* GetInteractingCharacter_Implementation(); \
 \
	DECLARE_FUNCTION(execBindOverlapCharacterDelegates); \
	DECLARE_FUNCTION(execOnOverlapEvent); \
	DECLARE_FUNCTION(execOnQuestLocationReachedCondition); \
	DECLARE_FUNCTION(execGetInteractingCharacter);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool OnQuestLocationReachedCondition_Implementation(ABaseQuestLocationActor* QuestLocationActorIn); \
	virtual ACharacter* GetInteractingCharacter_Implementation(); \
 \
	DECLARE_FUNCTION(execBindOverlapCharacterDelegates); \
	DECLARE_FUNCTION(execOnOverlapEvent); \
	DECLARE_FUNCTION(execOnQuestLocationReachedCondition); \
	DECLARE_FUNCTION(execGetInteractingCharacter);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_ACCESSORS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_CALLBACK_WRAPPERS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseQuestTask_Location(); \
	friend struct Z_Construct_UClass_UBaseQuestTask_Location_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestTask_Location, UBaseQuestTask, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestTask_Location) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseQuestTask_Location*>(this); }


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUBaseQuestTask_Location(); \
	friend struct Z_Construct_UClass_UBaseQuestTask_Location_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestTask_Location, UBaseQuestTask, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestTask_Location) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseQuestTask_Location*>(this); }


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseQuestTask_Location(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseQuestTask_Location) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestTask_Location); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestTask_Location); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestTask_Location(UBaseQuestTask_Location&&); \
	NO_API UBaseQuestTask_Location(const UBaseQuestTask_Location&); \
public: \
	NO_API virtual ~UBaseQuestTask_Location();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestTask_Location(UBaseQuestTask_Location&&); \
	NO_API UBaseQuestTask_Location(const UBaseQuestTask_Location&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestTask_Location); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestTask_Location); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseQuestTask_Location) \
	NO_API virtual ~UBaseQuestTask_Location();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_21_PROLOG
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_RPC_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_INCLASS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_INCLASS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UBaseQuestTask_Location>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskLocation_BaseQuestTask_Location_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
