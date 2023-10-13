// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestEditor/QuestEditorDevFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseQuestEditor;
class UBaseQuestTask;
class UDataTable;
class UObject;
class UQuestEditorSettings;
class UScriptStruct;
class UWidget;
class UWorld;
enum class ENodeConnectorType : uint8;
enum class ENodeLinkType : uint8;
enum class ENodeSelectionType : uint8;
enum class EQuestKeyBindAction : uint8;
enum class EQuestTaskType : uint8;
struct FDialog;
struct FDialogRep;
struct FInputChord;
struct FLinearColor;
struct FNPCQuestDef;
struct FNPCQuestDefRep;
struct FQuest;
struct FQuestEditorKeyBind;
struct FQuestNode;
struct FQuestRep;
struct FQuestTalkTask;
struct FQuestTask;
struct FQuestTaskEditorInfo;
struct FQuestTaskID;
struct FQuestTaskLink;
#ifdef QUESTEDITORDEV_QuestEditorDevFunctionLibrary_generated_h
#error "QuestEditorDevFunctionLibrary.generated.h already included, missing '#pragma once' in QuestEditorDevFunctionLibrary.h"
#endif
#define QUESTEDITORDEV_QuestEditorDevFunctionLibrary_generated_h

#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_SPARSE_DATA
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuestRequiresDirectStartNode); \
	DECLARE_FUNCTION(execCollapseXTiers); \
	DECLARE_FUNCTION(execFilterRepeatedNodesInHierarchy); \
	DECLARE_FUNCTION(execSetAllNodePositionsInHierarchy); \
	DECLARE_FUNCTION(execIsNodeNearPositionInHierarchy); \
	DECLARE_FUNCTION(execGetHierarchyAdjustOffset); \
	DECLARE_FUNCTION(execAdjustAllTierPositionsToAvoidOverlap); \
	DECLARE_FUNCTION(execAdjustNodePositionsToAvoidOverlapInTier); \
	DECLARE_FUNCTION(execAdjustNodePairPositionsToAvoidOverlap); \
	DECLARE_FUNCTION(execGetNodesInTierOverlappingPosition); \
	DECLARE_FUNCTION(execGetNodesAverageXPositionInHierarchy); \
	DECLARE_FUNCTION(execGetNodesIDsByTierInHierarchy); \
	DECLARE_FUNCTION(execGetSuperiorNodesOfNodeWithImmediateHierarchyTier); \
	DECLARE_FUNCTION(execGetInferiorNodesOfNodeWithImmediateHierarchyTier); \
	DECLARE_FUNCTION(execAdjustAllNodePositionsInTierByConnectedNodesInHierarchy); \
	DECLARE_FUNCTION(execSetNodePositionByTierInHierarchy); \
	DECLARE_FUNCTION(execGetMinHierarchyYTier); \
	DECLARE_FUNCTION(execGetMaxHierarchyYTier); \
	DECLARE_FUNCTION(execGetMaxAmountOfNodesInHierarchyTiers); \
	DECLARE_FUNCTION(execGetAmountOfNodesInHierarchyTier); \
	DECLARE_FUNCTION(execGetQuestHierarchy); \
	DECLARE_FUNCTION(execPropagateQuestsInHierarchy); \
	DECLARE_FUNCTION(execAddInitialHierarchyOfQuest); \
	DECLARE_FUNCTION(execAddHierarchyOfNodeToQuest); \
	DECLARE_FUNCTION(execCreateDirectStartHierarchyTask); \
	DECLARE_FUNCTION(execConvertQuestRepToHierarchyTask); \
	DECLARE_FUNCTION(execConditionalTaskIsLinkedToQuest); \
	DECLARE_FUNCTION(execAreGroupOfNodesConectedToQuest); \
	DECLARE_FUNCTION(execGetLinkTypeBetweenConnectedQuests); \
	DECLARE_FUNCTION(execGetAllInferiorQuestsOfQuestRep); \
	DECLARE_FUNCTION(execGetAllSuperiorQuestsOfQuest); \
	DECLARE_FUNCTION(execGetQuestsGameWorld); \
	DECLARE_FUNCTION(execGetAllQuestsInDTForNPC); \
	DECLARE_FUNCTION(execNPCCanGiveQuest); \
	DECLARE_FUNCTION(execGetStartingPseudoTalkTaskForNPC); \
	DECLARE_FUNCTION(execGetStartingTalkTaskForNPC); \
	DECLARE_FUNCTION(execGetInitialPseudoTasksOfQuest); \
	DECLARE_FUNCTION(execGetQuestStartNPCs); \
	DECLARE_FUNCTION(execGetQuestPseudoStartNodes); \
	DECLARE_FUNCTION(execGetQuestNonConditionalStartNodes); \
	DECLARE_FUNCTION(execGetNodeGridTier); \
	DECLARE_FUNCTION(execGetAllNodesOfSameTaskType); \
	DECLARE_FUNCTION(execAreNodeArraysEqual); \
	DECLARE_FUNCTION(execSortNodesByEditorPositiong); \
	DECLARE_FUNCTION(execGetQuestEndNodes); \
	DECLARE_FUNCTION(execGetQuestStartNodes); \
	DECLARE_FUNCTION(execGetNodePosition); \
	DECLARE_FUNCTION(execGetPositionValue); \
	DECLARE_FUNCTION(execConvertCenterPositionToQEPosition); \
	DECLARE_FUNCTION(execGetNodeCenterPosition); \
	DECLARE_FUNCTION(execUpdateAllConversationsIDs); \
	DECLARE_FUNCTION(execSwapNodeConnections); \
	DECLARE_FUNCTION(execCanNodeStartSwapConnection); \
	DECLARE_FUNCTION(execGetAllNodesDisablesConnections); \
	DECLARE_FUNCTION(execGetAllSelectedNodesConnections); \
	DECLARE_FUNCTION(execGetAllNodesConnections); \
	DECLARE_FUNCTION(execGetNodeDisableConnections); \
	DECLARE_FUNCTION(execGetNodeConnections); \
	DECLARE_FUNCTION(execFindNodeIDInNodeArray); \
	DECLARE_FUNCTION(execChangeLinkTypeBetweenNodes); \
	DECLARE_FUNCTION(execAreNodesLinked); \
	DECLARE_FUNCTION(execCanLinkWithDisableNode); \
	DECLARE_FUNCTION(execCanLinkNodes); \
	DECLARE_FUNCTION(execCreateNewLinkBetweenNodes); \
	DECLARE_FUNCTION(execBreakAllConnectionOfNodeToConnector); \
	DECLARE_FUNCTION(execBreakAllConnectionOfNode); \
	DECLARE_FUNCTION(execBreakNodesConnection); \
	DECLARE_FUNCTION(execAddTaskOfType); \
	DECLARE_FUNCTION(execClearAllConnections); \
	DECLARE_FUNCTION(execSortIDArrayDecreasing); \
	DECLARE_FUNCTION(execRemoveMultipleTasksByID); \
	DECLARE_FUNCTION(execRemoveTaskByID); \
	DECLARE_FUNCTION(execGetDisablerNodesOfNode); \
	DECLARE_FUNCTION(execGetDisabledNodesOfNode); \
	DECLARE_FUNCTION(execDestroyDisableLinkBetweenNodes); \
	DECLARE_FUNCTION(execCreateDisableLinkBetweenNodes); \
	DECLARE_FUNCTION(execAreQuestTasksMissingIDs); \
	DECLARE_FUNCTION(execSetAllUniqueIDsInQuest); \
	DECLARE_FUNCTION(execIsDialogUniqueIDValid); \
	DECLARE_FUNCTION(execIsQuestUniqueIDValid); \
	DECLARE_FUNCTION(execGetDialogMaxUniqueIDInDT); \
	DECLARE_FUNCTION(execGetQuestMaxUniqueIDInDT); \
	DECLARE_FUNCTION(execGetTaskMaxUniqueID); \
	DECLARE_FUNCTION(execGenerateDialogLocalizationKeys); \
	DECLARE_FUNCTION(execGenerateQuestLocalizationKeys); \
	DECLARE_FUNCTION(execHandleDialogUniqueID); \
	DECLARE_FUNCTION(execHandleQuestUniqueID); \
	DECLARE_FUNCTION(execAddDialogRowToDT); \
	DECLARE_FUNCTION(execAddQuestRowToDT); \
	DECLARE_FUNCTION(execAddNPCInfoRowToDT); \
	DECLARE_FUNCTION(execAddDialogsToNPC); \
	DECLARE_FUNCTION(execAddQuestToNPC); \
	DECLARE_FUNCTION(execSaveNPCRowToDT); \
	DECLARE_FUNCTION(execSaveDialogRowToDT); \
	DECLARE_FUNCTION(execSaveQuestRowToDT); \
	DECLARE_FUNCTION(execConvertDialogsToQuest); \
	DECLARE_FUNCTION(execGetTasksFromIDArray); \
	DECLARE_FUNCTION(execGetTalkTasksFromIDArray); \
	DECLARE_FUNCTION(execGetRepresentingTalkTask); \
	DECLARE_FUNCTION(execGetRepresentingTask); \
	DECLARE_FUNCTION(execGetSelectionType); \
	DECLARE_FUNCTION(execSeparateTasksByType); \
	DECLARE_FUNCTION(execTruncateStringToLen); \
	DECLARE_FUNCTION(execGetTaskIDSeparatedStrings); \
	DECLARE_FUNCTION(execGetQuestNodeSeparatedStrings); \
	DECLARE_FUNCTION(execGetTaskIDVisualString); \
	DECLARE_FUNCTION(execGetQuestNodeVisualString); \
	DECLARE_FUNCTION(execIsWidgetFullyVisible); \
	DECLARE_FUNCTION(execIsQuestInDatatables); \
	DECLARE_FUNCTION(execFindNPCInDatatables); \
	DECLARE_FUNCTION(execFindDialogInDatatables); \
	DECLARE_FUNCTION(execFindQuestInDatatables); \
	DECLARE_FUNCTION(execPrintQuestEditorDevLog); \
	DECLARE_FUNCTION(execIsDTofStructType); \
	DECLARE_FUNCTION(execGetTaskQuestEditorInfo); \
	DECLARE_FUNCTION(execFindAllDatatablesOfStruct); \
	DECLARE_FUNCTION(execFindQuestEditorReference); \
	DECLARE_FUNCTION(execGetNPCsThatCanStartQuest); \
	DECLARE_FUNCTION(execCanPerformKBAction); \
	DECLARE_FUNCTION(execGetActionForKey); \
	DECLARE_FUNCTION(execGetDefaultQuestEditorKeybinds); \
	DECLARE_FUNCTION(execGetDefaultKeybindForAction); \
	DECLARE_FUNCTION(execGetSettings_LineThickness); \
	DECLARE_FUNCTION(execGetSettings_ArrowSize); \
	DECLARE_FUNCTION(execGetSettings_PreviousVersion); \
	DECLARE_FUNCTION(execGetSettings_ZoomSensitivity); \
	DECLARE_FUNCTION(execGetSettings_ArrowsSensitivity); \
	DECLARE_FUNCTION(execGetSettings_DetailsPanelSize); \
	DECLARE_FUNCTION(execGetSettings_TalkTaskBGColor); \
	DECLARE_FUNCTION(execGetSettings_TaskBGColor); \
	DECLARE_FUNCTION(execGetQuestEditorSettings);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuestRequiresDirectStartNode); \
	DECLARE_FUNCTION(execCollapseXTiers); \
	DECLARE_FUNCTION(execFilterRepeatedNodesInHierarchy); \
	DECLARE_FUNCTION(execSetAllNodePositionsInHierarchy); \
	DECLARE_FUNCTION(execIsNodeNearPositionInHierarchy); \
	DECLARE_FUNCTION(execGetHierarchyAdjustOffset); \
	DECLARE_FUNCTION(execAdjustAllTierPositionsToAvoidOverlap); \
	DECLARE_FUNCTION(execAdjustNodePositionsToAvoidOverlapInTier); \
	DECLARE_FUNCTION(execAdjustNodePairPositionsToAvoidOverlap); \
	DECLARE_FUNCTION(execGetNodesInTierOverlappingPosition); \
	DECLARE_FUNCTION(execGetNodesAverageXPositionInHierarchy); \
	DECLARE_FUNCTION(execGetNodesIDsByTierInHierarchy); \
	DECLARE_FUNCTION(execGetSuperiorNodesOfNodeWithImmediateHierarchyTier); \
	DECLARE_FUNCTION(execGetInferiorNodesOfNodeWithImmediateHierarchyTier); \
	DECLARE_FUNCTION(execAdjustAllNodePositionsInTierByConnectedNodesInHierarchy); \
	DECLARE_FUNCTION(execSetNodePositionByTierInHierarchy); \
	DECLARE_FUNCTION(execGetMinHierarchyYTier); \
	DECLARE_FUNCTION(execGetMaxHierarchyYTier); \
	DECLARE_FUNCTION(execGetMaxAmountOfNodesInHierarchyTiers); \
	DECLARE_FUNCTION(execGetAmountOfNodesInHierarchyTier); \
	DECLARE_FUNCTION(execGetQuestHierarchy); \
	DECLARE_FUNCTION(execPropagateQuestsInHierarchy); \
	DECLARE_FUNCTION(execAddInitialHierarchyOfQuest); \
	DECLARE_FUNCTION(execAddHierarchyOfNodeToQuest); \
	DECLARE_FUNCTION(execCreateDirectStartHierarchyTask); \
	DECLARE_FUNCTION(execConvertQuestRepToHierarchyTask); \
	DECLARE_FUNCTION(execConditionalTaskIsLinkedToQuest); \
	DECLARE_FUNCTION(execAreGroupOfNodesConectedToQuest); \
	DECLARE_FUNCTION(execGetLinkTypeBetweenConnectedQuests); \
	DECLARE_FUNCTION(execGetAllInferiorQuestsOfQuestRep); \
	DECLARE_FUNCTION(execGetAllSuperiorQuestsOfQuest); \
	DECLARE_FUNCTION(execGetQuestsGameWorld); \
	DECLARE_FUNCTION(execGetAllQuestsInDTForNPC); \
	DECLARE_FUNCTION(execNPCCanGiveQuest); \
	DECLARE_FUNCTION(execGetStartingPseudoTalkTaskForNPC); \
	DECLARE_FUNCTION(execGetStartingTalkTaskForNPC); \
	DECLARE_FUNCTION(execGetInitialPseudoTasksOfQuest); \
	DECLARE_FUNCTION(execGetQuestStartNPCs); \
	DECLARE_FUNCTION(execGetQuestPseudoStartNodes); \
	DECLARE_FUNCTION(execGetQuestNonConditionalStartNodes); \
	DECLARE_FUNCTION(execGetNodeGridTier); \
	DECLARE_FUNCTION(execGetAllNodesOfSameTaskType); \
	DECLARE_FUNCTION(execAreNodeArraysEqual); \
	DECLARE_FUNCTION(execSortNodesByEditorPositiong); \
	DECLARE_FUNCTION(execGetQuestEndNodes); \
	DECLARE_FUNCTION(execGetQuestStartNodes); \
	DECLARE_FUNCTION(execGetNodePosition); \
	DECLARE_FUNCTION(execGetPositionValue); \
	DECLARE_FUNCTION(execConvertCenterPositionToQEPosition); \
	DECLARE_FUNCTION(execGetNodeCenterPosition); \
	DECLARE_FUNCTION(execUpdateAllConversationsIDs); \
	DECLARE_FUNCTION(execSwapNodeConnections); \
	DECLARE_FUNCTION(execCanNodeStartSwapConnection); \
	DECLARE_FUNCTION(execGetAllNodesDisablesConnections); \
	DECLARE_FUNCTION(execGetAllSelectedNodesConnections); \
	DECLARE_FUNCTION(execGetAllNodesConnections); \
	DECLARE_FUNCTION(execGetNodeDisableConnections); \
	DECLARE_FUNCTION(execGetNodeConnections); \
	DECLARE_FUNCTION(execFindNodeIDInNodeArray); \
	DECLARE_FUNCTION(execChangeLinkTypeBetweenNodes); \
	DECLARE_FUNCTION(execAreNodesLinked); \
	DECLARE_FUNCTION(execCanLinkWithDisableNode); \
	DECLARE_FUNCTION(execCanLinkNodes); \
	DECLARE_FUNCTION(execCreateNewLinkBetweenNodes); \
	DECLARE_FUNCTION(execBreakAllConnectionOfNodeToConnector); \
	DECLARE_FUNCTION(execBreakAllConnectionOfNode); \
	DECLARE_FUNCTION(execBreakNodesConnection); \
	DECLARE_FUNCTION(execAddTaskOfType); \
	DECLARE_FUNCTION(execClearAllConnections); \
	DECLARE_FUNCTION(execSortIDArrayDecreasing); \
	DECLARE_FUNCTION(execRemoveMultipleTasksByID); \
	DECLARE_FUNCTION(execRemoveTaskByID); \
	DECLARE_FUNCTION(execGetDisablerNodesOfNode); \
	DECLARE_FUNCTION(execGetDisabledNodesOfNode); \
	DECLARE_FUNCTION(execDestroyDisableLinkBetweenNodes); \
	DECLARE_FUNCTION(execCreateDisableLinkBetweenNodes); \
	DECLARE_FUNCTION(execAreQuestTasksMissingIDs); \
	DECLARE_FUNCTION(execSetAllUniqueIDsInQuest); \
	DECLARE_FUNCTION(execIsDialogUniqueIDValid); \
	DECLARE_FUNCTION(execIsQuestUniqueIDValid); \
	DECLARE_FUNCTION(execGetDialogMaxUniqueIDInDT); \
	DECLARE_FUNCTION(execGetQuestMaxUniqueIDInDT); \
	DECLARE_FUNCTION(execGetTaskMaxUniqueID); \
	DECLARE_FUNCTION(execGenerateDialogLocalizationKeys); \
	DECLARE_FUNCTION(execGenerateQuestLocalizationKeys); \
	DECLARE_FUNCTION(execHandleDialogUniqueID); \
	DECLARE_FUNCTION(execHandleQuestUniqueID); \
	DECLARE_FUNCTION(execAddDialogRowToDT); \
	DECLARE_FUNCTION(execAddQuestRowToDT); \
	DECLARE_FUNCTION(execAddNPCInfoRowToDT); \
	DECLARE_FUNCTION(execAddDialogsToNPC); \
	DECLARE_FUNCTION(execAddQuestToNPC); \
	DECLARE_FUNCTION(execSaveNPCRowToDT); \
	DECLARE_FUNCTION(execSaveDialogRowToDT); \
	DECLARE_FUNCTION(execSaveQuestRowToDT); \
	DECLARE_FUNCTION(execConvertDialogsToQuest); \
	DECLARE_FUNCTION(execGetTasksFromIDArray); \
	DECLARE_FUNCTION(execGetTalkTasksFromIDArray); \
	DECLARE_FUNCTION(execGetRepresentingTalkTask); \
	DECLARE_FUNCTION(execGetRepresentingTask); \
	DECLARE_FUNCTION(execGetSelectionType); \
	DECLARE_FUNCTION(execSeparateTasksByType); \
	DECLARE_FUNCTION(execTruncateStringToLen); \
	DECLARE_FUNCTION(execGetTaskIDSeparatedStrings); \
	DECLARE_FUNCTION(execGetQuestNodeSeparatedStrings); \
	DECLARE_FUNCTION(execGetTaskIDVisualString); \
	DECLARE_FUNCTION(execGetQuestNodeVisualString); \
	DECLARE_FUNCTION(execIsWidgetFullyVisible); \
	DECLARE_FUNCTION(execIsQuestInDatatables); \
	DECLARE_FUNCTION(execFindNPCInDatatables); \
	DECLARE_FUNCTION(execFindDialogInDatatables); \
	DECLARE_FUNCTION(execFindQuestInDatatables); \
	DECLARE_FUNCTION(execPrintQuestEditorDevLog); \
	DECLARE_FUNCTION(execIsDTofStructType); \
	DECLARE_FUNCTION(execGetTaskQuestEditorInfo); \
	DECLARE_FUNCTION(execFindAllDatatablesOfStruct); \
	DECLARE_FUNCTION(execFindQuestEditorReference); \
	DECLARE_FUNCTION(execGetNPCsThatCanStartQuest); \
	DECLARE_FUNCTION(execCanPerformKBAction); \
	DECLARE_FUNCTION(execGetActionForKey); \
	DECLARE_FUNCTION(execGetDefaultQuestEditorKeybinds); \
	DECLARE_FUNCTION(execGetDefaultKeybindForAction); \
	DECLARE_FUNCTION(execGetSettings_LineThickness); \
	DECLARE_FUNCTION(execGetSettings_ArrowSize); \
	DECLARE_FUNCTION(execGetSettings_PreviousVersion); \
	DECLARE_FUNCTION(execGetSettings_ZoomSensitivity); \
	DECLARE_FUNCTION(execGetSettings_ArrowsSensitivity); \
	DECLARE_FUNCTION(execGetSettings_DetailsPanelSize); \
	DECLARE_FUNCTION(execGetSettings_TalkTaskBGColor); \
	DECLARE_FUNCTION(execGetSettings_TaskBGColor); \
	DECLARE_FUNCTION(execGetQuestEditorSettings);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_ACCESSORS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestEditorDevFunctionLibrary(); \
	friend struct Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuestEditorDevFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestEditorDev"), NO_API) \
	DECLARE_SERIALIZER(UQuestEditorDevFunctionLibrary)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUQuestEditorDevFunctionLibrary(); \
	friend struct Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuestEditorDevFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestEditorDev"), NO_API) \
	DECLARE_SERIALIZER(UQuestEditorDevFunctionLibrary)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestEditorDevFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestEditorDevFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEditorDevFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEditorDevFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestEditorDevFunctionLibrary(UQuestEditorDevFunctionLibrary&&); \
	NO_API UQuestEditorDevFunctionLibrary(const UQuestEditorDevFunctionLibrary&); \
public: \
	NO_API virtual ~UQuestEditorDevFunctionLibrary();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestEditorDevFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestEditorDevFunctionLibrary(UQuestEditorDevFunctionLibrary&&); \
	NO_API UQuestEditorDevFunctionLibrary(const UQuestEditorDevFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEditorDevFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEditorDevFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestEditorDevFunctionLibrary) \
	NO_API virtual ~UQuestEditorDevFunctionLibrary();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_18_PROLOG
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_RPC_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_INCLASS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITORDEV_API UClass* StaticClass<class UQuestEditorDevFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
