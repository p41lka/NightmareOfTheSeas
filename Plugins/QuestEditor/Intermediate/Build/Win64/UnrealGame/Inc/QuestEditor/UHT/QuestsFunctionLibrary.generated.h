// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Quest/QuestsFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class FProperty;
class UBaseQuestRewardSlot;
class UDataTable;
class UQuestManager;
class UQuestSystemSaveGame;
enum class EDialogType : uint8;
enum class EQuestSelectedType : uint8;
enum class EQuestTaskState : uint8;
enum class EQuestTaskType : uint8;
enum class ETalkTextMode : uint8;
enum class ETalkTextType : uint8;
struct FDialog;
struct FDialogRep;
struct FGameplayTagContainer;
struct FLinearColor;
struct FNPCQuestDef;
struct FNPCQuestDefRep;
struct FQuest;
struct FQuestNode;
struct FQuestRep;
struct FQuestTask;
struct FQuestTaskID;
struct FQuestTaskID; 
struct FQuestTaskLink;
struct FSingleSentenceModeData;
struct FTalkModeDef;
struct FTalkTextInfo;
#ifdef QUESTEDITOR_QuestsFunctionLibrary_generated_h
#error "QuestsFunctionLibrary.generated.h already included, missing '#pragma once' in QuestsFunctionLibrary.h"
#endif
#define QUESTEDITOR_QuestsFunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAreAllTalkTextsOfType); \
	DECLARE_FUNCTION(execFilterTalkTextsForSingleSentence); \
	DECLARE_FUNCTION(execDeleteAllQuestSaveGames); \
	DECLARE_FUNCTION(execDeleteQuestSaveGame); \
	DECLARE_FUNCTION(execGetAllQuestSaveGameObjects); \
	DECLARE_FUNCTION(execGetAllQuestSaveGameNames); \
	DECLARE_FUNCTION(execIsNodeStartNode); \
	DECLARE_FUNCTION(execAreAllRequiredSuperiorNodesOfNodeConditions); \
	DECLARE_FUNCTION(execAreAllSuperiorNodesOfNodeConditions); \
	DECLARE_FUNCTION(execGetNodeSuperiorLinksInQuest); \
	DECLARE_FUNCTION(execGetNodeInferiorLinksInQuest); \
	DECLARE_FUNCTION(execGetNodeDisabledNodesInQuest); \
	DECLARE_FUNCTION(execGetNodeSuperiorNodesInQuest); \
	DECLARE_FUNCTION(execGetNodeInferiorNodesInQuest); \
	DECLARE_FUNCTION(execIsTaskIDValidInQuest); \
	DECLARE_FUNCTION(execGetQuestConversationsMap); \
	DECLARE_FUNCTION(execGetAllTalkTasksOfConversation); \
	DECLARE_FUNCTION(execTaskIsActivateConditionOnly); \
	DECLARE_FUNCTION(execGetTaskRewardTags); \
	DECLARE_FUNCTION(execGetTaskRewardSlot); \
	DECLARE_FUNCTION(execGetTaskRewardLocation); \
	DECLARE_FUNCTION(execGetTaskRewardGiver); \
	DECLARE_FUNCTION(execGetTaskShowsOnlyOnceInSummary); \
	DECLARE_FUNCTION(execGetNodeShouldShowInUI); \
	DECLARE_FUNCTION(execGetTaskShouldShowInUI); \
	DECLARE_FUNCTION(execGetTaskShouldAnnounce); \
	DECLARE_FUNCTION(execGetTaskUIColor); \
	DECLARE_FUNCTION(execGetTaskName); \
	DECLARE_FUNCTION(execGetTaskShortDescription); \
	DECLARE_FUNCTION(execGetActiveTaskTimer); \
	DECLARE_FUNCTION(execGetDTFromStringPath); \
	DECLARE_FUNCTION(execGetDTFromPath); \
	DECLARE_FUNCTION(execGetDTFromReference); \
	DECLARE_FUNCTION(execNotEqualQuestNode); \
	DECLARE_FUNCTION(execNotEqualNPCQuestDefRep); \
	DECLARE_FUNCTION(execNotEqualDialogRep); \
	DECLARE_FUNCTION(execNotEqualQuestRep); \
	DECLARE_FUNCTION(execNotEqualTalkTextInfo); \
	DECLARE_FUNCTION(execNotEqualTalkMode); \
	DECLARE_FUNCTION(execNotEqualQuestTaskID); \
	DECLARE_FUNCTION(execEqualQuestNode); \
	DECLARE_FUNCTION(execEqualNPCQuestDefRep); \
	DECLARE_FUNCTION(execEqualDialogRep); \
	DECLARE_FUNCTION(execEqualQuestRep); \
	DECLARE_FUNCTION(execEqualTalkTextInfo); \
	DECLARE_FUNCTION(execEqualTalkMode); \
	DECLARE_FUNCTION(execEqualQuestTaskID); \
	DECLARE_FUNCTION(execGetNodesOfTypeInArray); \
	DECLARE_FUNCTION(execConvertLinkArrayToNodeArray); \
	DECLARE_FUNCTION(execRemoveTaskIDFromLinkArray); \
	DECLARE_FUNCTION(execStringToQuestNode); \
	DECLARE_FUNCTION(execStringToTaskID); \
	DECLARE_FUNCTION(execStringToNPCQuestDefRep); \
	DECLARE_FUNCTION(execStringToDialogRep); \
	DECLARE_FUNCTION(execStringToQuestRep); \
	DECLARE_FUNCTION(execQuestNodeToString); \
	DECLARE_FUNCTION(execTaskIDToString); \
	DECLARE_FUNCTION(execNPCQuestDefRepToString); \
	DECLARE_FUNCTION(execDialogRepToString); \
	DECLARE_FUNCTION(execQuestRepToString); \
	DECLARE_FUNCTION(execMakeStringReference); \
	DECLARE_FUNCTION(execNPCQuestDefRepToNPCQuestDef); \
	DECLARE_FUNCTION(execDialogRepToDialog); \
	DECLARE_FUNCTION(execQuestRepToQuest);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAreAllTalkTextsOfType); \
	DECLARE_FUNCTION(execFilterTalkTextsForSingleSentence); \
	DECLARE_FUNCTION(execDeleteAllQuestSaveGames); \
	DECLARE_FUNCTION(execDeleteQuestSaveGame); \
	DECLARE_FUNCTION(execGetAllQuestSaveGameObjects); \
	DECLARE_FUNCTION(execGetAllQuestSaveGameNames); \
	DECLARE_FUNCTION(execIsNodeStartNode); \
	DECLARE_FUNCTION(execAreAllRequiredSuperiorNodesOfNodeConditions); \
	DECLARE_FUNCTION(execAreAllSuperiorNodesOfNodeConditions); \
	DECLARE_FUNCTION(execGetNodeSuperiorLinksInQuest); \
	DECLARE_FUNCTION(execGetNodeInferiorLinksInQuest); \
	DECLARE_FUNCTION(execGetNodeDisabledNodesInQuest); \
	DECLARE_FUNCTION(execGetNodeSuperiorNodesInQuest); \
	DECLARE_FUNCTION(execGetNodeInferiorNodesInQuest); \
	DECLARE_FUNCTION(execIsTaskIDValidInQuest); \
	DECLARE_FUNCTION(execGetQuestConversationsMap); \
	DECLARE_FUNCTION(execGetAllTalkTasksOfConversation); \
	DECLARE_FUNCTION(execTaskIsActivateConditionOnly); \
	DECLARE_FUNCTION(execGetTaskRewardTags); \
	DECLARE_FUNCTION(execGetTaskRewardSlot); \
	DECLARE_FUNCTION(execGetTaskRewardLocation); \
	DECLARE_FUNCTION(execGetTaskRewardGiver); \
	DECLARE_FUNCTION(execGetTaskShowsOnlyOnceInSummary); \
	DECLARE_FUNCTION(execGetNodeShouldShowInUI); \
	DECLARE_FUNCTION(execGetTaskShouldShowInUI); \
	DECLARE_FUNCTION(execGetTaskShouldAnnounce); \
	DECLARE_FUNCTION(execGetTaskUIColor); \
	DECLARE_FUNCTION(execGetTaskName); \
	DECLARE_FUNCTION(execGetTaskShortDescription); \
	DECLARE_FUNCTION(execGetActiveTaskTimer); \
	DECLARE_FUNCTION(execGetDTFromStringPath); \
	DECLARE_FUNCTION(execGetDTFromPath); \
	DECLARE_FUNCTION(execGetDTFromReference); \
	DECLARE_FUNCTION(execNotEqualQuestNode); \
	DECLARE_FUNCTION(execNotEqualNPCQuestDefRep); \
	DECLARE_FUNCTION(execNotEqualDialogRep); \
	DECLARE_FUNCTION(execNotEqualQuestRep); \
	DECLARE_FUNCTION(execNotEqualTalkTextInfo); \
	DECLARE_FUNCTION(execNotEqualTalkMode); \
	DECLARE_FUNCTION(execNotEqualQuestTaskID); \
	DECLARE_FUNCTION(execEqualQuestNode); \
	DECLARE_FUNCTION(execEqualNPCQuestDefRep); \
	DECLARE_FUNCTION(execEqualDialogRep); \
	DECLARE_FUNCTION(execEqualQuestRep); \
	DECLARE_FUNCTION(execEqualTalkTextInfo); \
	DECLARE_FUNCTION(execEqualTalkMode); \
	DECLARE_FUNCTION(execEqualQuestTaskID); \
	DECLARE_FUNCTION(execGetNodesOfTypeInArray); \
	DECLARE_FUNCTION(execConvertLinkArrayToNodeArray); \
	DECLARE_FUNCTION(execRemoveTaskIDFromLinkArray); \
	DECLARE_FUNCTION(execStringToQuestNode); \
	DECLARE_FUNCTION(execStringToTaskID); \
	DECLARE_FUNCTION(execStringToNPCQuestDefRep); \
	DECLARE_FUNCTION(execStringToDialogRep); \
	DECLARE_FUNCTION(execStringToQuestRep); \
	DECLARE_FUNCTION(execQuestNodeToString); \
	DECLARE_FUNCTION(execTaskIDToString); \
	DECLARE_FUNCTION(execNPCQuestDefRepToString); \
	DECLARE_FUNCTION(execDialogRepToString); \
	DECLARE_FUNCTION(execQuestRepToString); \
	DECLARE_FUNCTION(execMakeStringReference); \
	DECLARE_FUNCTION(execNPCQuestDefRepToNPCQuestDef); \
	DECLARE_FUNCTION(execDialogRepToDialog); \
	DECLARE_FUNCTION(execQuestRepToQuest);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestsFunctionLibrary(); \
	friend struct Z_Construct_UClass_UQuestsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuestsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UQuestsFunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUQuestsFunctionLibrary(); \
	friend struct Z_Construct_UClass_UQuestsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuestsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UQuestsFunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestsFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestsFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestsFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestsFunctionLibrary(UQuestsFunctionLibrary&&); \
	NO_API UQuestsFunctionLibrary(const UQuestsFunctionLibrary&); \
public: \
	NO_API virtual ~UQuestsFunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestsFunctionLibrary(UQuestsFunctionLibrary&&); \
	NO_API UQuestsFunctionLibrary(const UQuestsFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestsFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestsFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestsFunctionLibrary) \
	NO_API virtual ~UQuestsFunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UQuestsFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
