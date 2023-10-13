// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Npc/NPCManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDataTableRowHandle;
struct FNPCQuestDefRep;
struct FQuest;
struct FQuestRep;
#ifdef QUESTEDITOR_NPCManager_generated_h
#error "NPCManager.generated.h already included, missing '#pragma once' in NPCManager.h"
#endif
#define QUESTEDITOR_NPCManager_generated_h

#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_14_DELEGATE \
QUESTEDITOR_API void FNoParamsDelegateNPCManager_DelegateWrapper(const FMulticastScriptDelegate& NoParamsDelegateNPCManager);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_SPARSE_DATA
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_RPC_WRAPPERS \
	virtual bool ROS_StartNPCManager_Validate(FDataTableRowHandle const& ); \
	virtual void ROS_StartNPCManager_Implementation(FDataTableRowHandle const& NPCIn); \
 \
	DECLARE_FUNCTION(execGetNPCName); \
	DECLARE_FUNCTION(execGetNPCQuestDefRep); \
	DECLARE_FUNCTION(execGetNPCDialogsRep); \
	DECLARE_FUNCTION(execGetNPCDialogs); \
	DECLARE_FUNCTION(execGetNPCQuestsRep); \
	DECLARE_FUNCTION(execGetNPCQuests); \
	DECLARE_FUNCTION(execSetManagerNPC); \
	DECLARE_FUNCTION(execStartManagerFromDef); \
	DECLARE_FUNCTION(execOnRep_NPCDef); \
	DECLARE_FUNCTION(execROS_StartNPCManager);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ROS_StartNPCManager_Validate(FDataTableRowHandle const& ); \
	virtual void ROS_StartNPCManager_Implementation(FDataTableRowHandle const& NPCIn); \
 \
	DECLARE_FUNCTION(execGetNPCName); \
	DECLARE_FUNCTION(execGetNPCQuestDefRep); \
	DECLARE_FUNCTION(execGetNPCDialogsRep); \
	DECLARE_FUNCTION(execGetNPCDialogs); \
	DECLARE_FUNCTION(execGetNPCQuestsRep); \
	DECLARE_FUNCTION(execGetNPCQuests); \
	DECLARE_FUNCTION(execSetManagerNPC); \
	DECLARE_FUNCTION(execStartManagerFromDef); \
	DECLARE_FUNCTION(execOnRep_NPCDef); \
	DECLARE_FUNCTION(execROS_StartNPCManager);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_ACCESSORS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_CALLBACK_WRAPPERS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNPCManager, NO_API)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCManager(); \
	friend struct Z_Construct_UClass_UNPCManager_Statics; \
public: \
	DECLARE_CLASS(UNPCManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UNPCManager) \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NPCQuestDefRep=NETFIELD_REP_START, \
		NETFIELD_REP_END=NPCQuestDefRep	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUNPCManager(); \
	friend struct Z_Construct_UClass_UNPCManager_Statics; \
public: \
	DECLARE_CLASS(UNPCManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UNPCManager) \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NPCQuestDefRep=NETFIELD_REP_START, \
		NETFIELD_REP_END=NPCQuestDefRep	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNPCManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNPCManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNPCManager(UNPCManager&&); \
	NO_API UNPCManager(const UNPCManager&); \
public: \
	NO_API virtual ~UNPCManager();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNPCManager(UNPCManager&&); \
	NO_API UNPCManager(const UNPCManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNPCManager) \
	NO_API virtual ~UNPCManager();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_19_PROLOG
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_RPC_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_INCLASS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UNPCManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
