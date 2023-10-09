// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Quest/QuestManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBaseQuestTask;
enum class EDialogType : uint8;
enum class ENodeConnectorType : uint8;
enum class EQuestSelectedType : uint8;
enum class EQuestTaskState : uint8;
enum class EQuestTaskType : uint8;
enum class EQuestTaskTypeSelection : uint8;
enum class ETalkTextMode : uint8;
struct FCompletedQuestTrack;
struct FDialogTrack;
struct FNPCQuestDefRep;
struct FQuest;
struct FQuestFailTrack;
struct FQuestNode;
struct FQuestNodeID;
struct FQuestObjectTrack;
struct FQuestRep;
struct FQuestTalkTask;
struct FQuestTask;
struct FQuestTaskID;
struct FQuestTaskPayload;
struct FQuestTrack;
struct FRewardTabSlotInfo;
struct FSingleSentenceModeData;
struct FTalkTaskTrack;
struct FTalkTextInfo;
struct FTaskTrack;
struct FTimespan;
#ifdef QUESTEDITOR_QuestManager_generated_h
#error "QuestManager.generated.h already included, missing '#pragma once' in QuestManager.h"
#endif
#define QUESTEDITOR_QuestManager_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_13_DELEGATE \
QUESTEDITOR_API void FNoParamsDelegateQuest_DelegateWrapper(const FMulticastScriptDelegate& NoParamsDelegateQuest);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_16_DELEGATE \
QUESTEDITOR_API void FQuestCompleted_DelegateWrapper(const FMulticastScriptDelegate& QuestCompleted, FQuest const& Quest, int32 CompletedSlot);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_17_DELEGATE \
QUESTEDITOR_API void FQuestSignature_DelegateWrapper(const FMulticastScriptDelegate& QuestSignature, int32 QuestSlot, FQuest const& Quest);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_21_DELEGATE \
QUESTEDITOR_API void FSelectedQuest_DelegateWrapper(const FMulticastScriptDelegate& SelectedQuest, int32 NewSelectedQuest);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_22_DELEGATE \
QUESTEDITOR_API void FSelectedQuestCompChanged_DelegateWrapper(const FMulticastScriptDelegate& SelectedQuestCompChanged, int32 NewSelectedQuestCompleted);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_25_DELEGATE \
QUESTEDITOR_API void FQuestTaskSignature_DelegateWrapper(const FMulticastScriptDelegate& QuestTaskSignature, int32 QuestSlot, int32 TaskSlot, FQuestTask const& Task);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_28_DELEGATE \
QUESTEDITOR_API void FQuestTalkTaskSignature_DelegateWrapper(const FMulticastScriptDelegate& QuestTalkTaskSignature, int32 QuestSlot, int32 TalkTaskSlot, FQuestTalkTask const& TalkTask);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_30_DELEGATE \
QUESTEDITOR_API void FQTaskUpdated_DelegateWrapper(const FMulticastScriptDelegate& QTaskUpdated, int32 QuestSlot, FQuestTaskID const& TaskID, bool IsDialog);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_31_DELEGATE \
QUESTEDITOR_API void FTalkConversation_DelegateWrapper(const FMulticastScriptDelegate& TalkConversation, int32 QuestSlot, int32 ConversationID, bool IsDialog, FQuestTalkTask const& ConversationTalkTask);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_34_DELEGATE \
QUESTEDITOR_API void FQTaskUpdatedState_DelegateWrapper(const FMulticastScriptDelegate& QTaskUpdatedState, int32 QuestSlot, FQuestTaskID const& TaskID, bool IsDialog, EQuestTaskState NewState);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_37_DELEGATE \
QUESTEDITOR_API void FDialogReaded_DelegateWrapper(const FMulticastScriptDelegate& DialogReaded, int32 DialogOut, AActor* NPCOut, FTalkTextInfo const& TalkTextInfo);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_38_DELEGATE \
QUESTEDITOR_API void FActiveTalkTextChanged_DelegateWrapper(const FMulticastScriptDelegate& ActiveTalkTextChanged, FTalkTextInfo const& TalkTextInfo);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_41_DELEGATE \
QUESTEDITOR_API void FQM_Message_DelegateWrapper(const FMulticastScriptDelegate& QM_Message, const FText& Message);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_44_DELEGATE \
QUESTEDITOR_API void FNewDialogTrackAdded_DelegateWrapper(const FMulticastScriptDelegate& NewDialogTrackAdded, FDialogTrack const& NewDialogTrack);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_45_DELEGATE \
QUESTEDITOR_API void FDialogTrackUpdated_DelegateWrapper(const FMulticastScriptDelegate& DialogTrackUpdated, TArray<FDialogTrack> const& DialogTrack);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_48_DELEGATE \
QUESTEDITOR_API void FNPCReached_DelegateWrapper(const FMulticastScriptDelegate& NPCReached, AActor* NPC);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_51_DELEGATE \
QUESTEDITOR_API void FQRewardSelectSignature_DelegateWrapper(const FMulticastScriptDelegate& QRewardSelectSignature, FQuestNode const& QuestNode, bool IsDialog);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_52_DELEGATE \
QUESTEDITOR_API void FQRewardActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& QRewardActivatedSignature, int32 QuestSlotIn, int32 TaskSlotIn, bool IsDialog);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_54_DELEGATE \
QUESTEDITOR_API void FQRewardCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& QRewardCompletedSignature, FQuestTask const& QuestTask, bool IsDialog);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_RPC_WRAPPERS \
	virtual bool ROS_PlayerSelectReward_Validate(FQuestNode const& , bool ); \
	virtual void ROS_PlayerSelectReward_Implementation(FQuestNode const& QuestNodeIn, bool IsDialogIn); \
	virtual bool ROS_RemoveCompletedQuestRep_Validate(FQuestRep const& ); \
	virtual void ROS_RemoveCompletedQuestRep_Implementation(FQuestRep const& QuestRepIn); \
	virtual bool ROS_RemoveCompletedQuestSlot_Validate(int32 ); \
	virtual void ROS_RemoveCompletedQuestSlot_Implementation(int32 QuestSlotIn); \
	virtual void Client_AcceptQuestFromStartActor_Implementation(FQuestRep const& QuestRepIn); \
	virtual bool ROS_AcceptQuestDirectly_Validate(FQuestRep const& , bool ); \
	virtual void ROS_AcceptQuestDirectly_Implementation(FQuestRep const& QuestRepIn, bool IsDialogIn); \
	virtual bool ROS_AbandonQuest_Validate(int32 ); \
	virtual void ROS_AbandonQuest_Implementation(int32 QuestSelected); \
	virtual bool ROS_CompleteQuestTalkTask_Validate(int32 , int32 , AActor* ); \
	virtual void ROS_CompleteQuestTalkTask_Implementation(int32 QuestSlotIn, int32 TaskIDIn, AActor* NPC); \
	virtual bool ROS_AcceptQuestFromTalk_Validate(AActor* , int32 , int32 ); \
	virtual void ROS_AcceptQuestFromTalk_Implementation(AActor* NPC, int32 QuestSlotIn, int32 TalkTaskIDIn); \
	virtual bool ROS_NPCReached_Validate(AActor* ); \
	virtual void ROS_NPCReached_Implementation(AActor* NPC); \
	virtual bool ROS_LoadFromSaveGame_Validate(const FString& ); \
	virtual void ROS_LoadFromSaveGame_Implementation(const FString& PlayerSaveNameIN); \
	virtual void Client_StartQuestManager_Implementation(TArray<FQuestRep> const& QuestInventoryIN, TArray<FCompletedQuestTrack> const& QuestCompletedIN, TArray<FQuestTrack> const& QuestTrackIN, TArray<FQuestFailTrack> const& QuestFailTrackIN, TArray<FQuestRep> const& DialogInventoryIN, TArray<FCompletedQuestTrack> const& DialogCompletedIN, TArray<FQuestFailTrack> const& DialogFailTrackIN, TArray<FQuestTrack> const& DialogTrackIN); \
	virtual bool ROS_StartQuestManager_Validate(TArray<FQuestRep> const& , TArray<FCompletedQuestTrack> const& , TArray<FQuestFailTrack> const& , TArray<FQuestTrack> const& , TArray<FQuestRep> const& , TArray<FCompletedQuestTrack> const& , TArray<FQuestFailTrack> const& , TArray<FQuestTrack> const& ); \
	virtual void ROS_StartQuestManager_Implementation(TArray<FQuestRep> const& QuestInventoryIN, TArray<FCompletedQuestTrack> const& QuestCompletedIN, TArray<FQuestFailTrack> const& QuestFailTrackIN, TArray<FQuestTrack> const& QuestTrackIN, TArray<FQuestRep> const& DialogInventoryIN, TArray<FCompletedQuestTrack> const& DialogCompletedIN, TArray<FQuestFailTrack> const& DialogFailTrackIN, TArray<FQuestTrack> const& DialogTrackIN); \
 \
	DECLARE_FUNCTION(execGetCurrentNPC); \
	DECLARE_FUNCTION(execFindActiveTalkTextIndex); \
	DECLARE_FUNCTION(execGetActiveTalkText); \
	DECLARE_FUNCTION(execSetActiveTalkText); \
	DECLARE_FUNCTION(execGetQuestTracks); \
	DECLARE_FUNCTION(execGetCompletedQuestsTrack); \
	DECLARE_FUNCTION(execGetSelectedQuestsSlot); \
	DECLARE_FUNCTION(execGetSelectedQuestsTrack); \
	DECLARE_FUNCTION(execGetSelectedQuests); \
	DECLARE_FUNCTION(execGetQuestTrackInSlot); \
	DECLARE_FUNCTION(execGetQuestsInSlot); \
	DECLARE_FUNCTION(execGetDialogsRepInventory); \
	DECLARE_FUNCTION(execGetQuestsRepInventory); \
	DECLARE_FUNCTION(execGetQuestsInventory); \
	DECLARE_FUNCTION(execSetSelectedQuestCompleted); \
	DECLARE_FUNCTION(execSetSelectedQuest); \
	DECLARE_FUNCTION(execConvertQuestsInventoryRep); \
	DECLARE_FUNCTION(execGetPreActiveTalkTasksSlotsFromTrack); \
	DECLARE_FUNCTION(execGetPreActiveTasksSlotsFromTrack); \
	DECLARE_FUNCTION(execPreActivateAllInitialTalkTasks); \
	DECLARE_FUNCTION(execPreActivateTask); \
	DECLARE_FUNCTION(execActivateTalkTaskFromPreActiveTrack); \
	DECLARE_FUNCTION(execRemoveTaskIDFromPreActiveTrack); \
	DECLARE_FUNCTION(execAddTaskIDToPreActiveTrack); \
	DECLARE_FUNCTION(execHasQuestFailTimeSpanWithArrays); \
	DECLARE_FUNCTION(execHasQuestFailTimeSpan); \
	DECLARE_FUNCTION(execIsQuestFailedWithArrays); \
	DECLARE_FUNCTION(execIsQuestFailed); \
	DECLARE_FUNCTION(execGetQuestFailtrackIndex); \
	DECLARE_FUNCTION(execRemoveQuestFromFailTrackWithArrays); \
	DECLARE_FUNCTION(execRemoveQuestFromFailTrack); \
	DECLARE_FUNCTION(execAddQuestToFailtrack); \
	DECLARE_FUNCTION(execHandleQuestFailTrackOnAccept); \
	DECLARE_FUNCTION(execGetActiveTasksSlotsFromTrack); \
	DECLARE_FUNCTION(execGetActiveTasksSlotsFromTrackWithArrays); \
	DECLARE_FUNCTION(execIsNodeTheOperationHandler); \
	DECLARE_FUNCTION(execIsAnyNodeHandlingOperation); \
	DECLARE_FUNCTION(execNodeStopHandlingOperation); \
	DECLARE_FUNCTION(execNodeStartHandlingOperation); \
	DECLARE_FUNCTION(execRemoveTaskIDFromActiveTrack); \
	DECLARE_FUNCTION(execAddTaskIDToActiveTrack); \
	DECLARE_FUNCTION(execAddQuestTrack); \
	DECLARE_FUNCTION(execLoadQuestsTrack); \
	DECLARE_FUNCTION(execGetNPCLastCommitedTalkTextForSSD); \
	DECLARE_FUNCTION(execGetTalkTextsFilteredForSSD); \
	DECLARE_FUNCTION(execGetTalkTextsLowerQuestSlot); \
	DECLARE_FUNCTION(execGetSingleSentencePriorityTalkTexts); \
	DECLARE_FUNCTION(execGetSingleSentencePriorityTalkTextsForMode); \
	DECLARE_FUNCTION(execGetTalkTextNodes); \
	DECLARE_FUNCTION(execCheckConversationStartAndEnd); \
	DECLARE_FUNCTION(execGetAllConversationsInTalkNodeArray); \
	DECLARE_FUNCTION(execGetTalkTasksInheritedShortDescription); \
	DECLARE_FUNCTION(execAreTalkTasksConnected); \
	DECLARE_FUNCTION(execGetAllActiveTalkTasksShortDesc); \
	DECLARE_FUNCTION(execPred_TalkToNPC); \
	DECLARE_FUNCTION(execAreTalkTextsExactlyEqual); \
	DECLARE_FUNCTION(execIsTalkTextsInfoValid); \
	DECLARE_FUNCTION(execGetTalkTextInfoForTalkTask); \
	DECLARE_FUNCTION(execGetTalkTextsInfo); \
	DECLARE_FUNCTION(execGetTalkTextsInfoWithArrays); \
	DECLARE_FUNCTION(execGetActiveTalkTextsOfQuest); \
	DECLARE_FUNCTION(execGetAcceptQuestTalkTextsOfNPC); \
	DECLARE_FUNCTION(execGetPreActiveTalkTextsOfQuest); \
	DECLARE_FUNCTION(execGetCompletedTalkTasksForNPC); \
	DECLARE_FUNCTION(execGetActiveTalkTasksForNPC); \
	DECLARE_FUNCTION(execResetNPCDialogsWithArray); \
	DECLARE_FUNCTION(execResetNPCDialogsFromDef); \
	DECLARE_FUNCTION(execResetNPCDialogs); \
	DECLARE_FUNCTION(execResetNPCDialogsFromTask); \
	DECLARE_FUNCTION(execRemoveNPCDefFromDialogTrack); \
	DECLARE_FUNCTION(execRemoveNPCFromDialogTrack); \
	DECLARE_FUNCTION(execCommitFirstNPCDialog); \
	DECLARE_FUNCTION(execReachedNPC); \
	DECLARE_FUNCTION(execGetTalkTaskTrack); \
	DECLARE_FUNCTION(execGetTalkTask); \
	DECLARE_FUNCTION(execFindReadedTalkTasks); \
	DECLARE_FUNCTION(execFindTalkTextSlotOfTask); \
	DECLARE_FUNCTION(execGetTaskObject); \
	DECLARE_FUNCTION(execGetTaskTrack); \
	DECLARE_FUNCTION(execGetTask); \
	DECLARE_FUNCTION(execHandleTaskEnd_ResetTrackToNodeWithArrays); \
	DECLARE_FUNCTION(execHandleTaskEnd_ResetTrackToNode); \
	DECLARE_FUNCTION(execHandleTaskEndWithArrays); \
	DECLARE_FUNCTION(execHandleTaskEnd); \
	DECLARE_FUNCTION(execGetActiveTasksOfClass); \
	DECLARE_FUNCTION(execGetTaskInitialPayload); \
	DECLARE_FUNCTION(execGetTaskCurrentPayload); \
	DECLARE_FUNCTION(execSetTaskCurrentPayload); \
	DECLARE_FUNCTION(execReduceAllQuestSlotsObjectsAfterRemove); \
	DECLARE_FUNCTION(execReduceQuestSlotForTaskObjectsAfterRemove); \
	DECLARE_FUNCTION(execGenerateEmptyObjectsTrackForQuest); \
	DECLARE_FUNCTION(execGenerateEmptyObjectsTrack); \
	DECLARE_FUNCTION(execDestroyAllRemainingBaseTasksObjects); \
	DECLARE_FUNCTION(execDestroyAllRemainingBaseTasksObjectsForQuest); \
	DECLARE_FUNCTION(execHandleBaseTaskDestroy); \
	DECLARE_FUNCTION(execHandleAllTasksSave); \
	DECLARE_FUNCTION(execHandleBaseTaskSave); \
	DECLARE_FUNCTION(execHandleBaseTaskSpawn); \
	DECLARE_FUNCTION(execUpdateAmmountTaskTrack); \
	DECLARE_FUNCTION(execGetValidQuestSlotAfterNodeExecution); \
	DECLARE_FUNCTION(execIsQuestSlotAfterNodeExecutionValid); \
	DECLARE_FUNCTION(execCorrectQuestSlotForNodeExecution); \
	DECLARE_FUNCTION(execCompleteNode); \
	DECLARE_FUNCTION(execIsNodeExclusive); \
	DECLARE_FUNCTION(execGetTasksExclusivelyLinkedToNode); \
	DECLARE_FUNCTION(execGetAllNotLockedNodesBetweenNodes); \
	DECLARE_FUNCTION(execLockNodesInBetweenNodesWithArrays); \
	DECLARE_FUNCTION(execLockNodesInBetweenNodes); \
	DECLARE_FUNCTION(execSingleNodeLock); \
	DECLARE_FUNCTION(execMultipleNodesFail); \
	DECLARE_FUNCTION(execSingleNodeFail); \
	DECLARE_FUNCTION(execFailNode); \
	DECLARE_FUNCTION(execDeactivateSingleNode); \
	DECLARE_FUNCTION(execDeactivateNodes); \
	DECLARE_FUNCTION(execAttempToActivateInferiorNodes); \
	DECLARE_FUNCTION(execGetCompletedTasksIDsByCompletionOrder); \
	DECLARE_FUNCTION(execGetCompletedTasksIDsByActivationOrder); \
	DECLARE_FUNCTION(execGetStartingTasksThatCanActivate); \
	DECLARE_FUNCTION(execGetPseudoStartingTalkTasksSlots); \
	DECLARE_FUNCTION(execGetStartingTalkTasksSlots); \
	DECLARE_FUNCTION(execGetStartingTasksSlots); \
	DECLARE_FUNCTION(execGetTasksAmountByState); \
	DECLARE_FUNCTION(execGetLastCompletedTalkTask); \
	DECLARE_FUNCTION(execGetCurrentCompletionOrder); \
	DECLARE_FUNCTION(execGetCurrentActivationOrder); \
	DECLARE_FUNCTION(execActivateNodeID); \
	DECLARE_FUNCTION(execSetNodeCompletionOrderInTrack); \
	DECLARE_FUNCTION(execSetNodeActivationOrderInTrack); \
	DECLARE_FUNCTION(execSetNodeStateInTrack); \
	DECLARE_FUNCTION(execResetNodeTrack); \
	DECLARE_FUNCTION(execGetNodeStateInTrackWithArrays); \
	DECLARE_FUNCTION(execGetNodeStateInTrack); \
	DECLARE_FUNCTION(execTaskActivateConditionCheck); \
	DECLARE_FUNCTION(execTalkNodeCanPseudoActivate); \
	DECLARE_FUNCTION(execNodeHasLinksToActivate); \
	DECLARE_FUNCTION(execNodeCanReActivate); \
	DECLARE_FUNCTION(execNodeCanActivate); \
	DECLARE_FUNCTION(execGetTaskIDsInvolvingNPCTalk); \
	DECLARE_FUNCTION(execGetQuestsSlotsInvolvingNPCTalk); \
	DECLARE_FUNCTION(execGetTalkTextsInfoForQuestSlot); \
	DECLARE_FUNCTION(execGetNPCActiveQuestSlots); \
	DECLARE_FUNCTION(execGetNPCAvailableQuests); \
	DECLARE_FUNCTION(execNPCGivesQuest); \
	DECLARE_FUNCTION(execGetQuestTaskCustomPayloadDataByIndex); \
	DECLARE_FUNCTION(execGetQuestTaskCustomPayloadData); \
	DECLARE_FUNCTION(execGetQuestTotalScore); \
	DECLARE_FUNCTION(execGetQuestScore); \
	DECLARE_FUNCTION(execGetQuestTaskScoreFromObjectTrack); \
	DECLARE_FUNCTION(execGetQuestTaskScore); \
	DECLARE_FUNCTION(execGetQuestTalkTaskScore); \
	DECLARE_FUNCTION(execGetCompletedQuestBySlot); \
	DECLARE_FUNCTION(execGetNodeStateFromTrackStruct); \
	DECLARE_FUNCTION(execGetQuestTrackForQuest); \
	DECLARE_FUNCTION(execGetActiveQuestTrackForQuest); \
	DECLARE_FUNCTION(execGetCompletedQuestTrackForQuest); \
	DECLARE_FUNCTION(execGetNodeStateInCompletedTrack); \
	DECLARE_FUNCTION(execGetNodeStateInActiveTrack); \
	DECLARE_FUNCTION(execIsTaskPreActive); \
	DECLARE_FUNCTION(execGetTalkTasksByState); \
	DECLARE_FUNCTION(execGetTasksByState); \
	DECLARE_FUNCTION(execGetTasksSlotsByState); \
	DECLARE_FUNCTION(execGetQuestState); \
	DECLARE_FUNCTION(execIsQuestCompletedWithEndingWithArrays); \
	DECLARE_FUNCTION(execIsQuestCompletedWithEnding); \
	DECLARE_FUNCTION(execIsQuestCompletedWithArrays); \
	DECLARE_FUNCTION(execIsQuestCompleted); \
	DECLARE_FUNCTION(execIsQuestInProgressWithArrays); \
	DECLARE_FUNCTION(execIsQuestInProgress); \
	DECLARE_FUNCTION(execIsTaskIDValid); \
	DECLARE_FUNCTION(execPred_RemoveCompletedQuestRep); \
	DECLARE_FUNCTION(execPred_RemoveCompletedQuestSlot); \
	DECLARE_FUNCTION(execRemoveCompletedQuestRep); \
	DECLARE_FUNCTION(execRemoveCompletedQuestSlot); \
	DECLARE_FUNCTION(execForceActiveNodesFailWithExceptionWithArrays); \
	DECLARE_FUNCTION(execForceActiveNodesFailWithException); \
	DECLARE_FUNCTION(execForceQuestFail); \
	DECLARE_FUNCTION(execQuestShouldFail); \
	DECLARE_FUNCTION(execHandleQuestFail); \
	DECLARE_FUNCTION(execAddQuestToInvFromTalk); \
	DECLARE_FUNCTION(execAddQuestToInvWithArrays); \
	DECLARE_FUNCTION(execAddQuestToInv); \
	DECLARE_FUNCTION(execCompleteQuestTalkTaskWithArrays); \
	DECLARE_FUNCTION(execCompleteQuestTalkTask); \
	DECLARE_FUNCTION(execRemoveQuestSlot); \
	DECLARE_FUNCTION(execPred_AcceptQuestDirectly); \
	DECLARE_FUNCTION(execAcceptQuestDirectly); \
	DECLARE_FUNCTION(execPred_AbandonQuestBySlot); \
	DECLARE_FUNCTION(execPred_AbandonSelectedQuest); \
	DECLARE_FUNCTION(execAbandonQuest); \
	DECLARE_FUNCTION(execAbandonQuestRep); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execAcceptQuestFromTalkWithArrays); \
	DECLARE_FUNCTION(execAcceptQuestFromTalk); \
	DECLARE_FUNCTION(execCanAcceptQuestWithArrays); \
	DECLARE_FUNCTION(execCanAcceptQuest); \
	DECLARE_FUNCTION(execGetRewardNodeData); \
	DECLARE_FUNCTION(execGetCurrentRewardsUIData); \
	DECLARE_FUNCTION(execGetRetriggerRewardsUIDataWithArrays); \
	DECLARE_FUNCTION(execGetRetriggerRewardsUIData); \
	DECLARE_FUNCTION(execPred_PlayerSelectReward); \
	DECLARE_FUNCTION(execPlayerHandledRewardSuccesfully); \
	DECLARE_FUNCTION(execPlayerSelectReward); \
	DECLARE_FUNCTION(execRewardTaskActivated); \
	DECLARE_FUNCTION(execQM_SaveRepToSaveGame); \
	DECLARE_FUNCTION(execQM_SaveNoRepToSaveGame); \
	DECLARE_FUNCTION(execQM_SaveToSaveGame); \
	DECLARE_FUNCTION(execQM_LoadFromSaveGame); \
	DECLARE_FUNCTION(execSaveQuestData); \
	DECLARE_FUNCTION(execQM_SetSaveGameName); \
	DECLARE_FUNCTION(execEndQuestManager); \
	DECLARE_FUNCTION(execStartQuestManagerVariables); \
	DECLARE_FUNCTION(execHandleQuestDTLoading); \
	DECLARE_FUNCTION(execOnRep_QuestsFailTrack); \
	DECLARE_FUNCTION(execOnRep_QuestsTrack); \
	DECLARE_FUNCTION(execOnRep_CompletedQuestsTrack); \
	DECLARE_FUNCTION(execOnRep_QuestInventory); \
	DECLARE_FUNCTION(execROS_PlayerSelectReward); \
	DECLARE_FUNCTION(execROS_RemoveCompletedQuestRep); \
	DECLARE_FUNCTION(execROS_RemoveCompletedQuestSlot); \
	DECLARE_FUNCTION(execClient_AcceptQuestFromStartActor); \
	DECLARE_FUNCTION(execROS_AcceptQuestDirectly); \
	DECLARE_FUNCTION(execROS_AbandonQuest); \
	DECLARE_FUNCTION(execROS_CompleteQuestTalkTask); \
	DECLARE_FUNCTION(execROS_AcceptQuestFromTalk); \
	DECLARE_FUNCTION(execROS_NPCReached); \
	DECLARE_FUNCTION(execROS_LoadFromSaveGame); \
	DECLARE_FUNCTION(execClient_StartQuestManager); \
	DECLARE_FUNCTION(execROS_StartQuestManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ROS_PlayerSelectReward_Validate(FQuestNode const& , bool ); \
	virtual void ROS_PlayerSelectReward_Implementation(FQuestNode const& QuestNodeIn, bool IsDialogIn); \
	virtual bool ROS_RemoveCompletedQuestRep_Validate(FQuestRep const& ); \
	virtual void ROS_RemoveCompletedQuestRep_Implementation(FQuestRep const& QuestRepIn); \
	virtual bool ROS_RemoveCompletedQuestSlot_Validate(int32 ); \
	virtual void ROS_RemoveCompletedQuestSlot_Implementation(int32 QuestSlotIn); \
	virtual void Client_AcceptQuestFromStartActor_Implementation(FQuestRep const& QuestRepIn); \
	virtual bool ROS_AcceptQuestDirectly_Validate(FQuestRep const& , bool ); \
	virtual void ROS_AcceptQuestDirectly_Implementation(FQuestRep const& QuestRepIn, bool IsDialogIn); \
	virtual bool ROS_AbandonQuest_Validate(int32 ); \
	virtual void ROS_AbandonQuest_Implementation(int32 QuestSelected); \
	virtual bool ROS_CompleteQuestTalkTask_Validate(int32 , int32 , AActor* ); \
	virtual void ROS_CompleteQuestTalkTask_Implementation(int32 QuestSlotIn, int32 TaskIDIn, AActor* NPC); \
	virtual bool ROS_AcceptQuestFromTalk_Validate(AActor* , int32 , int32 ); \
	virtual void ROS_AcceptQuestFromTalk_Implementation(AActor* NPC, int32 QuestSlotIn, int32 TalkTaskIDIn); \
	virtual bool ROS_NPCReached_Validate(AActor* ); \
	virtual void ROS_NPCReached_Implementation(AActor* NPC); \
	virtual bool ROS_LoadFromSaveGame_Validate(const FString& ); \
	virtual void ROS_LoadFromSaveGame_Implementation(const FString& PlayerSaveNameIN); \
	virtual void Client_StartQuestManager_Implementation(TArray<FQuestRep> const& QuestInventoryIN, TArray<FCompletedQuestTrack> const& QuestCompletedIN, TArray<FQuestTrack> const& QuestTrackIN, TArray<FQuestFailTrack> const& QuestFailTrackIN, TArray<FQuestRep> const& DialogInventoryIN, TArray<FCompletedQuestTrack> const& DialogCompletedIN, TArray<FQuestFailTrack> const& DialogFailTrackIN, TArray<FQuestTrack> const& DialogTrackIN); \
	virtual bool ROS_StartQuestManager_Validate(TArray<FQuestRep> const& , TArray<FCompletedQuestTrack> const& , TArray<FQuestFailTrack> const& , TArray<FQuestTrack> const& , TArray<FQuestRep> const& , TArray<FCompletedQuestTrack> const& , TArray<FQuestFailTrack> const& , TArray<FQuestTrack> const& ); \
	virtual void ROS_StartQuestManager_Implementation(TArray<FQuestRep> const& QuestInventoryIN, TArray<FCompletedQuestTrack> const& QuestCompletedIN, TArray<FQuestFailTrack> const& QuestFailTrackIN, TArray<FQuestTrack> const& QuestTrackIN, TArray<FQuestRep> const& DialogInventoryIN, TArray<FCompletedQuestTrack> const& DialogCompletedIN, TArray<FQuestFailTrack> const& DialogFailTrackIN, TArray<FQuestTrack> const& DialogTrackIN); \
 \
	DECLARE_FUNCTION(execGetCurrentNPC); \
	DECLARE_FUNCTION(execFindActiveTalkTextIndex); \
	DECLARE_FUNCTION(execGetActiveTalkText); \
	DECLARE_FUNCTION(execSetActiveTalkText); \
	DECLARE_FUNCTION(execGetQuestTracks); \
	DECLARE_FUNCTION(execGetCompletedQuestsTrack); \
	DECLARE_FUNCTION(execGetSelectedQuestsSlot); \
	DECLARE_FUNCTION(execGetSelectedQuestsTrack); \
	DECLARE_FUNCTION(execGetSelectedQuests); \
	DECLARE_FUNCTION(execGetQuestTrackInSlot); \
	DECLARE_FUNCTION(execGetQuestsInSlot); \
	DECLARE_FUNCTION(execGetDialogsRepInventory); \
	DECLARE_FUNCTION(execGetQuestsRepInventory); \
	DECLARE_FUNCTION(execGetQuestsInventory); \
	DECLARE_FUNCTION(execSetSelectedQuestCompleted); \
	DECLARE_FUNCTION(execSetSelectedQuest); \
	DECLARE_FUNCTION(execConvertQuestsInventoryRep); \
	DECLARE_FUNCTION(execGetPreActiveTalkTasksSlotsFromTrack); \
	DECLARE_FUNCTION(execGetPreActiveTasksSlotsFromTrack); \
	DECLARE_FUNCTION(execPreActivateAllInitialTalkTasks); \
	DECLARE_FUNCTION(execPreActivateTask); \
	DECLARE_FUNCTION(execActivateTalkTaskFromPreActiveTrack); \
	DECLARE_FUNCTION(execRemoveTaskIDFromPreActiveTrack); \
	DECLARE_FUNCTION(execAddTaskIDToPreActiveTrack); \
	DECLARE_FUNCTION(execHasQuestFailTimeSpanWithArrays); \
	DECLARE_FUNCTION(execHasQuestFailTimeSpan); \
	DECLARE_FUNCTION(execIsQuestFailedWithArrays); \
	DECLARE_FUNCTION(execIsQuestFailed); \
	DECLARE_FUNCTION(execGetQuestFailtrackIndex); \
	DECLARE_FUNCTION(execRemoveQuestFromFailTrackWithArrays); \
	DECLARE_FUNCTION(execRemoveQuestFromFailTrack); \
	DECLARE_FUNCTION(execAddQuestToFailtrack); \
	DECLARE_FUNCTION(execHandleQuestFailTrackOnAccept); \
	DECLARE_FUNCTION(execGetActiveTasksSlotsFromTrack); \
	DECLARE_FUNCTION(execGetActiveTasksSlotsFromTrackWithArrays); \
	DECLARE_FUNCTION(execIsNodeTheOperationHandler); \
	DECLARE_FUNCTION(execIsAnyNodeHandlingOperation); \
	DECLARE_FUNCTION(execNodeStopHandlingOperation); \
	DECLARE_FUNCTION(execNodeStartHandlingOperation); \
	DECLARE_FUNCTION(execRemoveTaskIDFromActiveTrack); \
	DECLARE_FUNCTION(execAddTaskIDToActiveTrack); \
	DECLARE_FUNCTION(execAddQuestTrack); \
	DECLARE_FUNCTION(execLoadQuestsTrack); \
	DECLARE_FUNCTION(execGetNPCLastCommitedTalkTextForSSD); \
	DECLARE_FUNCTION(execGetTalkTextsFilteredForSSD); \
	DECLARE_FUNCTION(execGetTalkTextsLowerQuestSlot); \
	DECLARE_FUNCTION(execGetSingleSentencePriorityTalkTexts); \
	DECLARE_FUNCTION(execGetSingleSentencePriorityTalkTextsForMode); \
	DECLARE_FUNCTION(execGetTalkTextNodes); \
	DECLARE_FUNCTION(execCheckConversationStartAndEnd); \
	DECLARE_FUNCTION(execGetAllConversationsInTalkNodeArray); \
	DECLARE_FUNCTION(execGetTalkTasksInheritedShortDescription); \
	DECLARE_FUNCTION(execAreTalkTasksConnected); \
	DECLARE_FUNCTION(execGetAllActiveTalkTasksShortDesc); \
	DECLARE_FUNCTION(execPred_TalkToNPC); \
	DECLARE_FUNCTION(execAreTalkTextsExactlyEqual); \
	DECLARE_FUNCTION(execIsTalkTextsInfoValid); \
	DECLARE_FUNCTION(execGetTalkTextInfoForTalkTask); \
	DECLARE_FUNCTION(execGetTalkTextsInfo); \
	DECLARE_FUNCTION(execGetTalkTextsInfoWithArrays); \
	DECLARE_FUNCTION(execGetActiveTalkTextsOfQuest); \
	DECLARE_FUNCTION(execGetAcceptQuestTalkTextsOfNPC); \
	DECLARE_FUNCTION(execGetPreActiveTalkTextsOfQuest); \
	DECLARE_FUNCTION(execGetCompletedTalkTasksForNPC); \
	DECLARE_FUNCTION(execGetActiveTalkTasksForNPC); \
	DECLARE_FUNCTION(execResetNPCDialogsWithArray); \
	DECLARE_FUNCTION(execResetNPCDialogsFromDef); \
	DECLARE_FUNCTION(execResetNPCDialogs); \
	DECLARE_FUNCTION(execResetNPCDialogsFromTask); \
	DECLARE_FUNCTION(execRemoveNPCDefFromDialogTrack); \
	DECLARE_FUNCTION(execRemoveNPCFromDialogTrack); \
	DECLARE_FUNCTION(execCommitFirstNPCDialog); \
	DECLARE_FUNCTION(execReachedNPC); \
	DECLARE_FUNCTION(execGetTalkTaskTrack); \
	DECLARE_FUNCTION(execGetTalkTask); \
	DECLARE_FUNCTION(execFindReadedTalkTasks); \
	DECLARE_FUNCTION(execFindTalkTextSlotOfTask); \
	DECLARE_FUNCTION(execGetTaskObject); \
	DECLARE_FUNCTION(execGetTaskTrack); \
	DECLARE_FUNCTION(execGetTask); \
	DECLARE_FUNCTION(execHandleTaskEnd_ResetTrackToNodeWithArrays); \
	DECLARE_FUNCTION(execHandleTaskEnd_ResetTrackToNode); \
	DECLARE_FUNCTION(execHandleTaskEndWithArrays); \
	DECLARE_FUNCTION(execHandleTaskEnd); \
	DECLARE_FUNCTION(execGetActiveTasksOfClass); \
	DECLARE_FUNCTION(execGetTaskInitialPayload); \
	DECLARE_FUNCTION(execGetTaskCurrentPayload); \
	DECLARE_FUNCTION(execSetTaskCurrentPayload); \
	DECLARE_FUNCTION(execReduceAllQuestSlotsObjectsAfterRemove); \
	DECLARE_FUNCTION(execReduceQuestSlotForTaskObjectsAfterRemove); \
	DECLARE_FUNCTION(execGenerateEmptyObjectsTrackForQuest); \
	DECLARE_FUNCTION(execGenerateEmptyObjectsTrack); \
	DECLARE_FUNCTION(execDestroyAllRemainingBaseTasksObjects); \
	DECLARE_FUNCTION(execDestroyAllRemainingBaseTasksObjectsForQuest); \
	DECLARE_FUNCTION(execHandleBaseTaskDestroy); \
	DECLARE_FUNCTION(execHandleAllTasksSave); \
	DECLARE_FUNCTION(execHandleBaseTaskSave); \
	DECLARE_FUNCTION(execHandleBaseTaskSpawn); \
	DECLARE_FUNCTION(execUpdateAmmountTaskTrack); \
	DECLARE_FUNCTION(execGetValidQuestSlotAfterNodeExecution); \
	DECLARE_FUNCTION(execIsQuestSlotAfterNodeExecutionValid); \
	DECLARE_FUNCTION(execCorrectQuestSlotForNodeExecution); \
	DECLARE_FUNCTION(execCompleteNode); \
	DECLARE_FUNCTION(execIsNodeExclusive); \
	DECLARE_FUNCTION(execGetTasksExclusivelyLinkedToNode); \
	DECLARE_FUNCTION(execGetAllNotLockedNodesBetweenNodes); \
	DECLARE_FUNCTION(execLockNodesInBetweenNodesWithArrays); \
	DECLARE_FUNCTION(execLockNodesInBetweenNodes); \
	DECLARE_FUNCTION(execSingleNodeLock); \
	DECLARE_FUNCTION(execMultipleNodesFail); \
	DECLARE_FUNCTION(execSingleNodeFail); \
	DECLARE_FUNCTION(execFailNode); \
	DECLARE_FUNCTION(execDeactivateSingleNode); \
	DECLARE_FUNCTION(execDeactivateNodes); \
	DECLARE_FUNCTION(execAttempToActivateInferiorNodes); \
	DECLARE_FUNCTION(execGetCompletedTasksIDsByCompletionOrder); \
	DECLARE_FUNCTION(execGetCompletedTasksIDsByActivationOrder); \
	DECLARE_FUNCTION(execGetStartingTasksThatCanActivate); \
	DECLARE_FUNCTION(execGetPseudoStartingTalkTasksSlots); \
	DECLARE_FUNCTION(execGetStartingTalkTasksSlots); \
	DECLARE_FUNCTION(execGetStartingTasksSlots); \
	DECLARE_FUNCTION(execGetTasksAmountByState); \
	DECLARE_FUNCTION(execGetLastCompletedTalkTask); \
	DECLARE_FUNCTION(execGetCurrentCompletionOrder); \
	DECLARE_FUNCTION(execGetCurrentActivationOrder); \
	DECLARE_FUNCTION(execActivateNodeID); \
	DECLARE_FUNCTION(execSetNodeCompletionOrderInTrack); \
	DECLARE_FUNCTION(execSetNodeActivationOrderInTrack); \
	DECLARE_FUNCTION(execSetNodeStateInTrack); \
	DECLARE_FUNCTION(execResetNodeTrack); \
	DECLARE_FUNCTION(execGetNodeStateInTrackWithArrays); \
	DECLARE_FUNCTION(execGetNodeStateInTrack); \
	DECLARE_FUNCTION(execTaskActivateConditionCheck); \
	DECLARE_FUNCTION(execTalkNodeCanPseudoActivate); \
	DECLARE_FUNCTION(execNodeHasLinksToActivate); \
	DECLARE_FUNCTION(execNodeCanReActivate); \
	DECLARE_FUNCTION(execNodeCanActivate); \
	DECLARE_FUNCTION(execGetTaskIDsInvolvingNPCTalk); \
	DECLARE_FUNCTION(execGetQuestsSlotsInvolvingNPCTalk); \
	DECLARE_FUNCTION(execGetTalkTextsInfoForQuestSlot); \
	DECLARE_FUNCTION(execGetNPCActiveQuestSlots); \
	DECLARE_FUNCTION(execGetNPCAvailableQuests); \
	DECLARE_FUNCTION(execNPCGivesQuest); \
	DECLARE_FUNCTION(execGetQuestTaskCustomPayloadDataByIndex); \
	DECLARE_FUNCTION(execGetQuestTaskCustomPayloadData); \
	DECLARE_FUNCTION(execGetQuestTotalScore); \
	DECLARE_FUNCTION(execGetQuestScore); \
	DECLARE_FUNCTION(execGetQuestTaskScoreFromObjectTrack); \
	DECLARE_FUNCTION(execGetQuestTaskScore); \
	DECLARE_FUNCTION(execGetQuestTalkTaskScore); \
	DECLARE_FUNCTION(execGetCompletedQuestBySlot); \
	DECLARE_FUNCTION(execGetNodeStateFromTrackStruct); \
	DECLARE_FUNCTION(execGetQuestTrackForQuest); \
	DECLARE_FUNCTION(execGetActiveQuestTrackForQuest); \
	DECLARE_FUNCTION(execGetCompletedQuestTrackForQuest); \
	DECLARE_FUNCTION(execGetNodeStateInCompletedTrack); \
	DECLARE_FUNCTION(execGetNodeStateInActiveTrack); \
	DECLARE_FUNCTION(execIsTaskPreActive); \
	DECLARE_FUNCTION(execGetTalkTasksByState); \
	DECLARE_FUNCTION(execGetTasksByState); \
	DECLARE_FUNCTION(execGetTasksSlotsByState); \
	DECLARE_FUNCTION(execGetQuestState); \
	DECLARE_FUNCTION(execIsQuestCompletedWithEndingWithArrays); \
	DECLARE_FUNCTION(execIsQuestCompletedWithEnding); \
	DECLARE_FUNCTION(execIsQuestCompletedWithArrays); \
	DECLARE_FUNCTION(execIsQuestCompleted); \
	DECLARE_FUNCTION(execIsQuestInProgressWithArrays); \
	DECLARE_FUNCTION(execIsQuestInProgress); \
	DECLARE_FUNCTION(execIsTaskIDValid); \
	DECLARE_FUNCTION(execPred_RemoveCompletedQuestRep); \
	DECLARE_FUNCTION(execPred_RemoveCompletedQuestSlot); \
	DECLARE_FUNCTION(execRemoveCompletedQuestRep); \
	DECLARE_FUNCTION(execRemoveCompletedQuestSlot); \
	DECLARE_FUNCTION(execForceActiveNodesFailWithExceptionWithArrays); \
	DECLARE_FUNCTION(execForceActiveNodesFailWithException); \
	DECLARE_FUNCTION(execForceQuestFail); \
	DECLARE_FUNCTION(execQuestShouldFail); \
	DECLARE_FUNCTION(execHandleQuestFail); \
	DECLARE_FUNCTION(execAddQuestToInvFromTalk); \
	DECLARE_FUNCTION(execAddQuestToInvWithArrays); \
	DECLARE_FUNCTION(execAddQuestToInv); \
	DECLARE_FUNCTION(execCompleteQuestTalkTaskWithArrays); \
	DECLARE_FUNCTION(execCompleteQuestTalkTask); \
	DECLARE_FUNCTION(execRemoveQuestSlot); \
	DECLARE_FUNCTION(execPred_AcceptQuestDirectly); \
	DECLARE_FUNCTION(execAcceptQuestDirectly); \
	DECLARE_FUNCTION(execPred_AbandonQuestBySlot); \
	DECLARE_FUNCTION(execPred_AbandonSelectedQuest); \
	DECLARE_FUNCTION(execAbandonQuest); \
	DECLARE_FUNCTION(execAbandonQuestRep); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execAcceptQuestFromTalkWithArrays); \
	DECLARE_FUNCTION(execAcceptQuestFromTalk); \
	DECLARE_FUNCTION(execCanAcceptQuestWithArrays); \
	DECLARE_FUNCTION(execCanAcceptQuest); \
	DECLARE_FUNCTION(execGetRewardNodeData); \
	DECLARE_FUNCTION(execGetCurrentRewardsUIData); \
	DECLARE_FUNCTION(execGetRetriggerRewardsUIDataWithArrays); \
	DECLARE_FUNCTION(execGetRetriggerRewardsUIData); \
	DECLARE_FUNCTION(execPred_PlayerSelectReward); \
	DECLARE_FUNCTION(execPlayerHandledRewardSuccesfully); \
	DECLARE_FUNCTION(execPlayerSelectReward); \
	DECLARE_FUNCTION(execRewardTaskActivated); \
	DECLARE_FUNCTION(execQM_SaveRepToSaveGame); \
	DECLARE_FUNCTION(execQM_SaveNoRepToSaveGame); \
	DECLARE_FUNCTION(execQM_SaveToSaveGame); \
	DECLARE_FUNCTION(execQM_LoadFromSaveGame); \
	DECLARE_FUNCTION(execSaveQuestData); \
	DECLARE_FUNCTION(execQM_SetSaveGameName); \
	DECLARE_FUNCTION(execEndQuestManager); \
	DECLARE_FUNCTION(execStartQuestManagerVariables); \
	DECLARE_FUNCTION(execHandleQuestDTLoading); \
	DECLARE_FUNCTION(execOnRep_QuestsFailTrack); \
	DECLARE_FUNCTION(execOnRep_QuestsTrack); \
	DECLARE_FUNCTION(execOnRep_CompletedQuestsTrack); \
	DECLARE_FUNCTION(execOnRep_QuestInventory); \
	DECLARE_FUNCTION(execROS_PlayerSelectReward); \
	DECLARE_FUNCTION(execROS_RemoveCompletedQuestRep); \
	DECLARE_FUNCTION(execROS_RemoveCompletedQuestSlot); \
	DECLARE_FUNCTION(execClient_AcceptQuestFromStartActor); \
	DECLARE_FUNCTION(execROS_AcceptQuestDirectly); \
	DECLARE_FUNCTION(execROS_AbandonQuest); \
	DECLARE_FUNCTION(execROS_CompleteQuestTalkTask); \
	DECLARE_FUNCTION(execROS_AcceptQuestFromTalk); \
	DECLARE_FUNCTION(execROS_NPCReached); \
	DECLARE_FUNCTION(execROS_LoadFromSaveGame); \
	DECLARE_FUNCTION(execClient_StartQuestManager); \
	DECLARE_FUNCTION(execROS_StartQuestManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestManager(); \
	friend struct Z_Construct_UClass_UQuestManager_Statics; \
public: \
	DECLARE_CLASS(UQuestManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UQuestManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		QuestInventory=NETFIELD_REP_START, \
		CompletedQuestsTrack, \
		QuestsTrack, \
		QuestsFailTrack, \
		NETFIELD_REP_END=QuestsFailTrack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUQuestManager(); \
	friend struct Z_Construct_UClass_UQuestManager_Statics; \
public: \
	DECLARE_CLASS(UQuestManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UQuestManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		QuestInventory=NETFIELD_REP_START, \
		CompletedQuestsTrack, \
		QuestsTrack, \
		QuestsFailTrack, \
		NETFIELD_REP_END=QuestsFailTrack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestManager(UQuestManager&&); \
	NO_API UQuestManager(const UQuestManager&); \
public: \
	NO_API virtual ~UQuestManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestManager(UQuestManager&&); \
	NO_API UQuestManager(const UQuestManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestManager) \
	NO_API virtual ~UQuestManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_57_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UQuestManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
