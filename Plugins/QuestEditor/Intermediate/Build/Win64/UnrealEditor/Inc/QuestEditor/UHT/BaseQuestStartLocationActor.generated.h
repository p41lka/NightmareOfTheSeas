// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Npc/BaseQuestStartLocationActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class UQuestManager;
struct FHitResult;
#ifdef QUESTEDITOR_BaseQuestStartLocationActor_generated_h
#error "BaseQuestStartLocationActor.generated.h already included, missing '#pragma once' in BaseQuestStartLocationActor.h"
#endif
#define QUESTEDITOR_BaseQuestStartLocationActor_generated_h

#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_SPARSE_DATA
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_RPC_WRAPPERS \
	virtual UQuestManager* GetQuestManagerReference_Implementation(AActor* OverlappingActor); \
	virtual bool OnOverlapCondition_Implementation(AActor* OtherActor); \
	virtual void OnOverlapActorEvent_Implementation(AActor* OtherActor); \
 \
	DECLARE_FUNCTION(execGetQuestManagerReference); \
	DECLARE_FUNCTION(execOnOverlapCondition); \
	DECLARE_FUNCTION(execOnOverlapActorEvent); \
	DECLARE_FUNCTION(execOnBeginOverlap_LocationSphere);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UQuestManager* GetQuestManagerReference_Implementation(AActor* OverlappingActor); \
	virtual bool OnOverlapCondition_Implementation(AActor* OtherActor); \
	virtual void OnOverlapActorEvent_Implementation(AActor* OtherActor); \
 \
	DECLARE_FUNCTION(execGetQuestManagerReference); \
	DECLARE_FUNCTION(execOnOverlapCondition); \
	DECLARE_FUNCTION(execOnOverlapActorEvent); \
	DECLARE_FUNCTION(execOnBeginOverlap_LocationSphere);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_ACCESSORS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_CALLBACK_WRAPPERS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseQuestStartLocationActor(); \
	friend struct Z_Construct_UClass_ABaseQuestStartLocationActor_Statics; \
public: \
	DECLARE_CLASS(ABaseQuestStartLocationActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(ABaseQuestStartLocationActor)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_INCLASS \
private: \
	static void StaticRegisterNativesABaseQuestStartLocationActor(); \
	friend struct Z_Construct_UClass_ABaseQuestStartLocationActor_Statics; \
public: \
	DECLARE_CLASS(ABaseQuestStartLocationActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(ABaseQuestStartLocationActor)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseQuestStartLocationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseQuestStartLocationActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseQuestStartLocationActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseQuestStartLocationActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseQuestStartLocationActor(ABaseQuestStartLocationActor&&); \
	NO_API ABaseQuestStartLocationActor(const ABaseQuestStartLocationActor&); \
public: \
	NO_API virtual ~ABaseQuestStartLocationActor();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseQuestStartLocationActor(ABaseQuestStartLocationActor&&); \
	NO_API ABaseQuestStartLocationActor(const ABaseQuestStartLocationActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseQuestStartLocationActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseQuestStartLocationActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseQuestStartLocationActor) \
	NO_API virtual ~ABaseQuestStartLocationActor();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_20_PROLOG
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_RPC_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_INCLASS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_INCLASS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class ABaseQuestStartLocationActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
