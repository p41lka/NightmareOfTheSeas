// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Quest/QuestsFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestsFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestRewardSlot_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestsFunctionLibrary();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestsFunctionLibrary_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestSystemSaveGame_NoRegister();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_EDialogType();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_EQuestSelectedType();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_EQuestTaskState();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_EQuestTaskType();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_ETalkTextMode();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_ETalkTextType();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialog();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialogRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDef();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDefRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestNode();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskID();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskLink();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSingleSentenceModeData();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTalkModeDef();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTalkTextInfo();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execAreAllTalkTextsOfType)
	{
		P_GET_TARRAY_REF(FSingleSentenceModeData,Z_Param_Out_SSDataIn);
		P_GET_ENUM(EDialogType,Z_Param_AllowedSSType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::AreAllTalkTextsOfType(Z_Param_Out_SSDataIn,EDialogType(Z_Param_AllowedSSType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execFilterTalkTextsForSingleSentence)
	{
		P_GET_TARRAY_REF(FTalkTextInfo,Z_Param_Out_ActiveTalkTextsIn);
		P_GET_TARRAY_REF(FSingleSentenceModeData,Z_Param_Out_SSDataIn);
		P_GET_ENUM_REF(ETalkTextMode,Z_Param_Out_AllowedMode);
		P_GET_TARRAY_REF(EQuestTaskState,Z_Param_Out_AllowedStates);
		P_GET_TARRAY_REF(ETalkTextType,Z_Param_Out_AllowedTypes);
		P_GET_TARRAY_REF(EDialogType,Z_Param_Out_AllowedSSTypes);
		P_GET_TARRAY_REF(FSingleSentenceModeData,Z_Param_Out_SSDataOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTalkTextInfo>*)Z_Param__Result=UQuestsFunctionLibrary::FilterTalkTextsForSingleSentence(Z_Param_Out_ActiveTalkTextsIn,Z_Param_Out_SSDataIn,(ETalkTextMode&)(Z_Param_Out_AllowedMode),Z_Param_Out_AllowedStates,Z_Param_Out_AllowedTypes,Z_Param_Out_AllowedSSTypes,Z_Param_Out_SSDataOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execDeleteAllQuestSaveGames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestsFunctionLibrary::DeleteAllQuestSaveGames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execDeleteQuestSaveGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveNameIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::DeleteQuestSaveGame(Z_Param_SaveNameIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetAllQuestSaveGameObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UQuestSystemSaveGame*>*)Z_Param__Result=UQuestsFunctionLibrary::GetAllQuestSaveGameObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetAllQuestSaveGameNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UQuestsFunctionLibrary::GetAllQuestSaveGameNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execIsNodeStartNode)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::IsNodeStartNode(Z_Param_Out_QuestIn,Z_Param_Out_NodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execAreAllRequiredSuperiorNodesOfNodeConditions)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::AreAllRequiredSuperiorNodesOfNodeConditions(Z_Param_Out_QuestIn,Z_Param_Out_NodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execAreAllSuperiorNodesOfNodeConditions)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::AreAllSuperiorNodesOfNodeConditions(Z_Param_Out_QuestIn,Z_Param_Out_NodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetNodeSuperiorLinksInQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskLink>*)Z_Param__Result=UQuestsFunctionLibrary::GetNodeSuperiorLinksInQuest(Z_Param_Out_QuestIn,Z_Param_Out_NodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetNodeInferiorLinksInQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskLink>*)Z_Param__Result=UQuestsFunctionLibrary::GetNodeInferiorLinksInQuest(Z_Param_Out_QuestIn,Z_Param_Out_NodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetNodeDisabledNodesInQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestsFunctionLibrary::GetNodeDisabledNodesInQuest(Z_Param_Out_QuestIn,Z_Param_Out_NodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetNodeSuperiorNodesInQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestsFunctionLibrary::GetNodeSuperiorNodesInQuest(Z_Param_Out_QuestIn,Z_Param_Out_NodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetNodeInferiorNodesInQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestsFunctionLibrary::GetNodeInferiorNodesInQuest(Z_Param_Out_QuestIn,Z_Param_Out_NodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execIsTaskIDValidInQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_TaskIDIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::IsTaskIDValidInQuest(Z_Param_Out_QuestIn,Z_Param_Out_TaskIDIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetQuestConversationsMap)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FQuestTaskID,int32>*)Z_Param__Result=UQuestsFunctionLibrary::GetQuestConversationsMap(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetAllTalkTasksOfConversation)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_TalkTaskSampleIn);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConversationIDOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestsFunctionLibrary::GetAllTalkTasksOfConversation(Z_Param_Out_QuestIn,Z_Param_TalkTaskSampleIn,Z_Param_Out_ConversationIDOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execTaskIsActivateConditionOnly)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_TaskSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::TaskIsActivateConditionOnly(Z_Param_Out_QuestIn,Z_Param_TaskSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetTaskRewardTags)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_TaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UQuestsFunctionLibrary::GetTaskRewardTags(Z_Param_Out_TaskIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetTaskRewardSlot)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_TaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UBaseQuestRewardSlot> *)Z_Param__Result=UQuestsFunctionLibrary::GetTaskRewardSlot(Z_Param_Out_TaskIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetTaskRewardLocation)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_TaskIn);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_LocationNameOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::GetTaskRewardLocation(Z_Param_Out_TaskIn,Z_Param_Out_LocationNameOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetTaskRewardGiver)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_TaskIn);
		P_GET_STRUCT_REF(FNPCQuestDefRep,Z_Param_Out_RewardGiverOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::GetTaskRewardGiver(Z_Param_Out_TaskIn,Z_Param_Out_RewardGiverOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetTaskShowsOnlyOnceInSummary)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_TaskIn);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StringIDOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::GetTaskShowsOnlyOnceInSummary(Z_Param_Out_TaskIn,Z_Param_Out_StringIDOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetNodeShouldShowInUI)
	{
		P_GET_ENUM(EQuestSelectedType,Z_Param_SelectType);
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestSlotIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_NodeIn);
		P_GET_UBOOL(Z_Param_IsDialogIn);
		P_GET_OBJECT(UQuestManager,Z_Param_QuestManagerRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::GetNodeShouldShowInUI(EQuestSelectedType(Z_Param_SelectType),Z_Param_QuestSlotIn,Z_Param_NodeIn,Z_Param_IsDialogIn,Z_Param_QuestManagerRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetTaskShouldShowInUI)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_TaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::GetTaskShouldShowInUI(Z_Param_Out_TaskIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetTaskShouldAnnounce)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_TaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::GetTaskShouldAnnounce(Z_Param_Out_TaskIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetTaskUIColor)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_TaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UQuestsFunctionLibrary::GetTaskUIColor(Z_Param_Out_TaskIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetTaskName)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_TaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestsFunctionLibrary::GetTaskName(Z_Param_Out_TaskIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetTaskShortDescription)
	{
		P_GET_STRUCT_REF(FQuestTask,Z_Param_Out_TaskIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestsFunctionLibrary::GetTaskShortDescription(Z_Param_Out_TaskIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetActiveTaskTimer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestSlotIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_QuesTaskIn);
		P_GET_UBOOL(Z_Param_IsDialogIn);
		P_GET_OBJECT(UQuestManager,Z_Param_QuestManagerRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuestsFunctionLibrary::GetActiveTaskTimer(Z_Param_QuestSlotIn,Z_Param_QuesTaskIn,Z_Param_IsDialogIn,Z_Param_QuestManagerRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetDTFromStringPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DTPathIN);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UQuestsFunctionLibrary::GetDTFromStringPath(Z_Param_DTPathIN);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetDTFromPath)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DTPathIN);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UQuestsFunctionLibrary::GetDTFromPath(Z_Param_DTPathIN);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetDTFromReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestDTName);
		P_GET_PROPERTY(FStrProperty,Z_Param_DTFolderPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UQuestsFunctionLibrary::GetDTFromReference(Z_Param_QuestDTName,Z_Param_DTFolderPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execNotEqualQuestNode)
	{
		P_GET_STRUCT(FQuestNode,Z_Param_A);
		P_GET_STRUCT(FQuestNode,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::NotEqualQuestNode(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execNotEqualNPCQuestDefRep)
	{
		P_GET_STRUCT(FNPCQuestDefRep,Z_Param_A);
		P_GET_STRUCT(FNPCQuestDefRep,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::NotEqualNPCQuestDefRep(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execNotEqualDialogRep)
	{
		P_GET_STRUCT(FDialogRep,Z_Param_A);
		P_GET_STRUCT(FDialogRep,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::NotEqualDialogRep(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execNotEqualQuestRep)
	{
		P_GET_STRUCT(FQuestRep,Z_Param_A);
		P_GET_STRUCT(FQuestRep,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::NotEqualQuestRep(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execNotEqualTalkTextInfo)
	{
		P_GET_STRUCT(FTalkTextInfo,Z_Param_A);
		P_GET_STRUCT(FTalkTextInfo,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::NotEqualTalkTextInfo(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execNotEqualTalkMode)
	{
		P_GET_STRUCT(FTalkModeDef,Z_Param_A);
		P_GET_STRUCT(FTalkModeDef,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::NotEqualTalkMode(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execNotEqualQuestTaskID)
	{
		P_GET_STRUCT(FQuestTaskID,Z_Param_A);
		P_GET_STRUCT(FQuestTaskID,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::NotEqualQuestTaskID(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execEqualQuestNode)
	{
		P_GET_STRUCT(FQuestNode,Z_Param_A);
		P_GET_STRUCT(FQuestNode,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::EqualQuestNode(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execEqualNPCQuestDefRep)
	{
		P_GET_STRUCT(FNPCQuestDefRep,Z_Param_A);
		P_GET_STRUCT(FNPCQuestDefRep,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::EqualNPCQuestDefRep(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execEqualDialogRep)
	{
		P_GET_STRUCT(FDialogRep,Z_Param_A);
		P_GET_STRUCT(FDialogRep,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::EqualDialogRep(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execEqualQuestRep)
	{
		P_GET_STRUCT(FQuestRep,Z_Param_A);
		P_GET_STRUCT(FQuestRep,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::EqualQuestRep(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execEqualTalkTextInfo)
	{
		P_GET_STRUCT(FTalkTextInfo,Z_Param_A);
		P_GET_STRUCT(FTalkTextInfo,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::EqualTalkTextInfo(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execEqualTalkMode)
	{
		P_GET_STRUCT(FTalkModeDef,Z_Param_A);
		P_GET_STRUCT(FTalkModeDef,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::EqualTalkMode(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execEqualQuestTaskID)
	{
		P_GET_STRUCT(FQuestTaskID,Z_Param_A);
		P_GET_STRUCT(FQuestTaskID,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestsFunctionLibrary::EqualQuestTaskID(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execGetNodesOfTypeInArray)
	{
		P_GET_ENUM(EQuestTaskType,Z_Param_TaskTypeToMatch);
		P_GET_TARRAY(FQuestTaskID,Z_Param_NodesArrayIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestsFunctionLibrary::GetNodesOfTypeInArray(EQuestTaskType(Z_Param_TaskTypeToMatch),Z_Param_NodesArrayIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execConvertLinkArrayToNodeArray)
	{
		P_GET_TARRAY(FQuestTaskLink,Z_Param_LinkArrayIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestsFunctionLibrary::ConvertLinkArrayToNodeArray(Z_Param_LinkArrayIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execRemoveTaskIDFromLinkArray)
	{
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_TaskIDIn);
		P_GET_TARRAY_REF(FQuestTaskLink,Z_Param_Out_LinksArrayIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskLink>*)Z_Param__Result=UQuestsFunctionLibrary::RemoveTaskIDFromLinkArray(Z_Param_Out_TaskIDIn,Z_Param_Out_LinksArrayIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execStringToQuestNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestNode*)Z_Param__Result=UQuestsFunctionLibrary::StringToQuestNode(Z_Param_StringIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execStringToTaskID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTaskID*)Z_Param__Result=UQuestsFunctionLibrary::StringToTaskID(Z_Param_StringIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execStringToNPCQuestDefRep)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNPCQuestDefRep*)Z_Param__Result=UQuestsFunctionLibrary::StringToNPCQuestDefRep(Z_Param_StringIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execStringToDialogRep)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialogRep*)Z_Param__Result=UQuestsFunctionLibrary::StringToDialogRep(Z_Param_StringIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execStringToQuestRep)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestRep*)Z_Param__Result=UQuestsFunctionLibrary::StringToQuestRep(Z_Param_StringIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execQuestNodeToString)
	{
		P_GET_STRUCT_REF(FQuestNode,Z_Param_Out_QuestNodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestsFunctionLibrary::QuestNodeToString(Z_Param_Out_QuestNodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execTaskIDToString)
	{
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_QuestTaskIDIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestsFunctionLibrary::TaskIDToString(Z_Param_Out_QuestTaskIDIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execNPCQuestDefRepToString)
	{
		P_GET_STRUCT_REF(FNPCQuestDefRep,Z_Param_Out_FNPCQuestDefIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestsFunctionLibrary::NPCQuestDefRepToString(Z_Param_Out_FNPCQuestDefIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execDialogRepToString)
	{
		P_GET_STRUCT_REF(FDialogRep,Z_Param_Out_DialogRepIN);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestsFunctionLibrary::DialogRepToString(Z_Param_Out_DialogRepIN);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execQuestRepToString)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestRepIN);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestsFunctionLibrary::QuestRepToString(Z_Param_Out_QuestRepIN);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execMakeStringReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DTNameIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_DTPathIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestsFunctionLibrary::MakeStringReference(Z_Param_DTNameIn,Z_Param_DTPathIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execNPCQuestDefRepToNPCQuestDef)
	{
		P_GET_STRUCT_REF(FNPCQuestDefRep,Z_Param_Out_FNPCQuestDefIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNPCQuestDef*)Z_Param__Result=UQuestsFunctionLibrary::NPCQuestDefRepToNPCQuestDef(Z_Param_Out_FNPCQuestDefIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execDialogRepToDialog)
	{
		P_GET_STRUCT_REF(FDialogRep,Z_Param_Out_DialogRepIN);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialog*)Z_Param__Result=UQuestsFunctionLibrary::DialogRepToDialog(Z_Param_Out_DialogRepIN);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestsFunctionLibrary::execQuestRepToQuest)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestRepIN);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuest*)Z_Param__Result=UQuestsFunctionLibrary::QuestRepToQuest(Z_Param_Out_QuestRepIN);
		P_NATIVE_END;
	}
	void UQuestsFunctionLibrary::StaticRegisterNativesUQuestsFunctionLibrary()
	{
		UClass* Class = UQuestsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreAllRequiredSuperiorNodesOfNodeConditions", &UQuestsFunctionLibrary::execAreAllRequiredSuperiorNodesOfNodeConditions },
			{ "AreAllSuperiorNodesOfNodeConditions", &UQuestsFunctionLibrary::execAreAllSuperiorNodesOfNodeConditions },
			{ "AreAllTalkTextsOfType", &UQuestsFunctionLibrary::execAreAllTalkTextsOfType },
			{ "ConvertLinkArrayToNodeArray", &UQuestsFunctionLibrary::execConvertLinkArrayToNodeArray },
			{ "DeleteAllQuestSaveGames", &UQuestsFunctionLibrary::execDeleteAllQuestSaveGames },
			{ "DeleteQuestSaveGame", &UQuestsFunctionLibrary::execDeleteQuestSaveGame },
			{ "DialogRepToDialog", &UQuestsFunctionLibrary::execDialogRepToDialog },
			{ "DialogRepToString", &UQuestsFunctionLibrary::execDialogRepToString },
			{ "EqualDialogRep", &UQuestsFunctionLibrary::execEqualDialogRep },
			{ "EqualNPCQuestDefRep", &UQuestsFunctionLibrary::execEqualNPCQuestDefRep },
			{ "EqualQuestNode", &UQuestsFunctionLibrary::execEqualQuestNode },
			{ "EqualQuestRep", &UQuestsFunctionLibrary::execEqualQuestRep },
			{ "EqualQuestTaskID", &UQuestsFunctionLibrary::execEqualQuestTaskID },
			{ "EqualTalkMode", &UQuestsFunctionLibrary::execEqualTalkMode },
			{ "EqualTalkTextInfo", &UQuestsFunctionLibrary::execEqualTalkTextInfo },
			{ "FilterTalkTextsForSingleSentence", &UQuestsFunctionLibrary::execFilterTalkTextsForSingleSentence },
			{ "GetActiveTaskTimer", &UQuestsFunctionLibrary::execGetActiveTaskTimer },
			{ "GetAllQuestSaveGameNames", &UQuestsFunctionLibrary::execGetAllQuestSaveGameNames },
			{ "GetAllQuestSaveGameObjects", &UQuestsFunctionLibrary::execGetAllQuestSaveGameObjects },
			{ "GetAllTalkTasksOfConversation", &UQuestsFunctionLibrary::execGetAllTalkTasksOfConversation },
			{ "GetDTFromPath", &UQuestsFunctionLibrary::execGetDTFromPath },
			{ "GetDTFromReference", &UQuestsFunctionLibrary::execGetDTFromReference },
			{ "GetDTFromStringPath", &UQuestsFunctionLibrary::execGetDTFromStringPath },
			{ "GetNodeDisabledNodesInQuest", &UQuestsFunctionLibrary::execGetNodeDisabledNodesInQuest },
			{ "GetNodeInferiorLinksInQuest", &UQuestsFunctionLibrary::execGetNodeInferiorLinksInQuest },
			{ "GetNodeInferiorNodesInQuest", &UQuestsFunctionLibrary::execGetNodeInferiorNodesInQuest },
			{ "GetNodeShouldShowInUI", &UQuestsFunctionLibrary::execGetNodeShouldShowInUI },
			{ "GetNodesOfTypeInArray", &UQuestsFunctionLibrary::execGetNodesOfTypeInArray },
			{ "GetNodeSuperiorLinksInQuest", &UQuestsFunctionLibrary::execGetNodeSuperiorLinksInQuest },
			{ "GetNodeSuperiorNodesInQuest", &UQuestsFunctionLibrary::execGetNodeSuperiorNodesInQuest },
			{ "GetQuestConversationsMap", &UQuestsFunctionLibrary::execGetQuestConversationsMap },
			{ "GetTaskName", &UQuestsFunctionLibrary::execGetTaskName },
			{ "GetTaskRewardGiver", &UQuestsFunctionLibrary::execGetTaskRewardGiver },
			{ "GetTaskRewardLocation", &UQuestsFunctionLibrary::execGetTaskRewardLocation },
			{ "GetTaskRewardSlot", &UQuestsFunctionLibrary::execGetTaskRewardSlot },
			{ "GetTaskRewardTags", &UQuestsFunctionLibrary::execGetTaskRewardTags },
			{ "GetTaskShortDescription", &UQuestsFunctionLibrary::execGetTaskShortDescription },
			{ "GetTaskShouldAnnounce", &UQuestsFunctionLibrary::execGetTaskShouldAnnounce },
			{ "GetTaskShouldShowInUI", &UQuestsFunctionLibrary::execGetTaskShouldShowInUI },
			{ "GetTaskShowsOnlyOnceInSummary", &UQuestsFunctionLibrary::execGetTaskShowsOnlyOnceInSummary },
			{ "GetTaskUIColor", &UQuestsFunctionLibrary::execGetTaskUIColor },
			{ "IsNodeStartNode", &UQuestsFunctionLibrary::execIsNodeStartNode },
			{ "IsTaskIDValidInQuest", &UQuestsFunctionLibrary::execIsTaskIDValidInQuest },
			{ "MakeStringReference", &UQuestsFunctionLibrary::execMakeStringReference },
			{ "NotEqualDialogRep", &UQuestsFunctionLibrary::execNotEqualDialogRep },
			{ "NotEqualNPCQuestDefRep", &UQuestsFunctionLibrary::execNotEqualNPCQuestDefRep },
			{ "NotEqualQuestNode", &UQuestsFunctionLibrary::execNotEqualQuestNode },
			{ "NotEqualQuestRep", &UQuestsFunctionLibrary::execNotEqualQuestRep },
			{ "NotEqualQuestTaskID", &UQuestsFunctionLibrary::execNotEqualQuestTaskID },
			{ "NotEqualTalkMode", &UQuestsFunctionLibrary::execNotEqualTalkMode },
			{ "NotEqualTalkTextInfo", &UQuestsFunctionLibrary::execNotEqualTalkTextInfo },
			{ "NPCQuestDefRepToNPCQuestDef", &UQuestsFunctionLibrary::execNPCQuestDefRepToNPCQuestDef },
			{ "NPCQuestDefRepToString", &UQuestsFunctionLibrary::execNPCQuestDefRepToString },
			{ "PayloadDataToStruct", &UQuestsFunctionLibrary::execPayloadDataToStruct },
			{ "QuestNodeToString", &UQuestsFunctionLibrary::execQuestNodeToString },
			{ "QuestRepToQuest", &UQuestsFunctionLibrary::execQuestRepToQuest },
			{ "QuestRepToString", &UQuestsFunctionLibrary::execQuestRepToString },
			{ "RemoveTaskIDFromLinkArray", &UQuestsFunctionLibrary::execRemoveTaskIDFromLinkArray },
			{ "StringToDialogRep", &UQuestsFunctionLibrary::execStringToDialogRep },
			{ "StringToNPCQuestDefRep", &UQuestsFunctionLibrary::execStringToNPCQuestDefRep },
			{ "StringToQuestNode", &UQuestsFunctionLibrary::execStringToQuestNode },
			{ "StringToQuestRep", &UQuestsFunctionLibrary::execStringToQuestRep },
			{ "StringToTaskID", &UQuestsFunctionLibrary::execStringToTaskID },
			{ "StructToPayloadData", &UQuestsFunctionLibrary::execStructToPayloadData },
			{ "TaskIDToString", &UQuestsFunctionLibrary::execTaskIDToString },
			{ "TaskIsActivateConditionOnly", &UQuestsFunctionLibrary::execTaskIsActivateConditionOnly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics
	{
		struct QuestsFunctionLibrary_eventAreAllRequiredSuperiorNodesOfNodeConditions_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventAreAllRequiredSuperiorNodesOfNodeConditions_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventAreAllRequiredSuperiorNodesOfNodeConditions_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventAreAllRequiredSuperiorNodesOfNodeConditions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventAreAllRequiredSuperiorNodesOfNodeConditions_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Determines if all REQUIRED superior nodes of a task are conditionals nodes, optional nodes are not considered. */" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Determines if all REQUIRED superior nodes of a task are conditionals nodes, optional nodes are not considered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "AreAllRequiredSuperiorNodesOfNodeConditions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::QuestsFunctionLibrary_eventAreAllRequiredSuperiorNodesOfNodeConditions_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics
	{
		struct QuestsFunctionLibrary_eventAreAllSuperiorNodesOfNodeConditions_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventAreAllSuperiorNodesOfNodeConditions_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventAreAllSuperiorNodesOfNodeConditions_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventAreAllSuperiorNodesOfNodeConditions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventAreAllSuperiorNodesOfNodeConditions_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Determines if all superior nodes of a task are conditionals nodes. */" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Determines if all superior nodes of a task are conditionals nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "AreAllSuperiorNodesOfNodeConditions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::QuestsFunctionLibrary_eventAreAllSuperiorNodesOfNodeConditions_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics
	{
		struct QuestsFunctionLibrary_eventAreAllTalkTextsOfType_Parms
		{
			TArray<FSingleSentenceModeData> SSDataIn;
			EDialogType AllowedSSType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SSDataIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SSDataIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SSDataIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedSSType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedSSType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_SSDataIn_Inner = { "SSDataIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSingleSentenceModeData, METADATA_PARAMS(nullptr, 0) }; // 169965353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_SSDataIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_SSDataIn = { "SSDataIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventAreAllTalkTextsOfType_Parms, SSDataIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_SSDataIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_SSDataIn_MetaData)) }; // 169965353
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_AllowedSSType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_AllowedSSType = { "AllowedSSType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventAreAllTalkTextsOfType_Parms, AllowedSSType), Z_Construct_UEnum_QuestEditor_EDialogType, METADATA_PARAMS(nullptr, 0) }; // 1002308137
	void Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventAreAllTalkTextsOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventAreAllTalkTextsOfType_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_SSDataIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_SSDataIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_AllowedSSType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_AllowedSSType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Single Sentence Mode" },
		{ "Comment", "/**\n\x09*\x09Given an array of talk texts SSdata determines if All matches the type.\n\x09*\x09@Param SSDataIn This is the custom payload data of all inferior nodes of talk text.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Given an array of talk texts SSdata determines if All matches the type.\n@Param SSDataIn This is the custom payload data of all inferior nodes of talk text." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "AreAllTalkTextsOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::QuestsFunctionLibrary_eventAreAllTalkTextsOfType_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics
	{
		struct QuestsFunctionLibrary_eventConvertLinkArrayToNodeArray_Parms
		{
			TArray<FQuestTaskLink> LinkArrayIn;
			TArray<FQuestTaskID> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkArrayIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkArrayIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkArrayIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_LinkArrayIn_Inner = { "LinkArrayIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskLink, METADATA_PARAMS(nullptr, 0) }; // 3937065984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_LinkArrayIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_LinkArrayIn = { "LinkArrayIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventConvertLinkArrayToNodeArray_Parms, LinkArrayIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_LinkArrayIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_LinkArrayIn_MetaData)) }; // 3937065984
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventConvertLinkArrayToNodeArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_LinkArrayIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_LinkArrayIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/**\n\x09*\x09Given a link array, returns the node array.\n\x09*\x09""Discards link type.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Given a link array, returns the node array.\nDiscards link type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "ConvertLinkArrayToNodeArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::QuestsFunctionLibrary_eventConvertLinkArrayToNodeArray_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteAllQuestSaveGames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteAllQuestSaveGames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Framework" },
		{ "Comment", "/**\n\x09*\x09""Destroys all save games objects of the Quest System for players.\n\x09*\x09This action is permanent.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Destroys all save games objects of the Quest System for players.\nThis action is permanent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteAllQuestSaveGames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "DeleteAllQuestSaveGames", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteAllQuestSaveGames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteAllQuestSaveGames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteAllQuestSaveGames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteAllQuestSaveGames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics
	{
		struct QuestsFunctionLibrary_eventDeleteQuestSaveGame_Parms
		{
			FString SaveNameIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveNameIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveNameIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::NewProp_SaveNameIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::NewProp_SaveNameIn = { "SaveNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventDeleteQuestSaveGame_Parms, SaveNameIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::NewProp_SaveNameIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::NewProp_SaveNameIn_MetaData)) };
	void Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventDeleteQuestSaveGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventDeleteQuestSaveGame_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::NewProp_SaveNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Framework" },
		{ "Comment", "/**\n\x09*\x09""Destroys a save game object of the Quest System of a player.\n\x09*\x09This action is permanent.\n\x09*\x09@Param SaveNameIn Player Save Name\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Destroys a save game object of the Quest System of a player.\nThis action is permanent.\n@Param SaveNameIn Player Save Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "DeleteQuestSaveGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::QuestsFunctionLibrary_eventDeleteQuestSaveGame_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics
	{
		struct QuestsFunctionLibrary_eventDialogRepToDialog_Parms
		{
			FDialogRep DialogRepIN;
			FDialog ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogRepIN_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogRepIN;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::NewProp_DialogRepIN_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::NewProp_DialogRepIN = { "DialogRepIN", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventDialogRepToDialog_Parms, DialogRepIN), Z_Construct_UScriptStruct_FDialogRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::NewProp_DialogRepIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::NewProp_DialogRepIN_MetaData)) }; // 266078582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventDialogRepToDialog_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialog, METADATA_PARAMS(nullptr, 0) }; // 1356337939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::NewProp_DialogRepIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Gets the dialog information from a datatable reference*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the dialog information from a datatable reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "DialogRepToDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::QuestsFunctionLibrary_eventDialogRepToDialog_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics
	{
		struct QuestsFunctionLibrary_eventDialogRepToString_Parms
		{
			FDialogRep DialogRepIN;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogRepIN_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogRepIN;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::NewProp_DialogRepIN_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::NewProp_DialogRepIN = { "DialogRepIN", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventDialogRepToString_Parms, DialogRepIN), Z_Construct_UScriptStruct_FDialogRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::NewProp_DialogRepIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::NewProp_DialogRepIN_MetaData)) }; // 266078582
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventDialogRepToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::NewProp_DialogRepIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Converts a Dialog rep struct to string*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Converts a Dialog rep struct to string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "DialogRepToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::QuestsFunctionLibrary_eventDialogRepToString_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics
	{
		struct QuestsFunctionLibrary_eventEqualDialogRep_Parms
		{
			FDialogRep A;
			FDialogRep B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualDialogRep_Parms, A), Z_Construct_UScriptStruct_FDialogRep, METADATA_PARAMS(nullptr, 0) }; // 266078582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualDialogRep_Parms, B), Z_Construct_UScriptStruct_FDialogRep, METADATA_PARAMS(nullptr, 0) }; // 266078582
	void Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventEqualDialogRep_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventEqualDialogRep_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal DialogRep" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "EqualDialogRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::QuestsFunctionLibrary_eventEqualDialogRep_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics
	{
		struct QuestsFunctionLibrary_eventEqualNPCQuestDefRep_Parms
		{
			FNPCQuestDefRep A;
			FNPCQuestDefRep B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualNPCQuestDefRep_Parms, A), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualNPCQuestDefRep_Parms, B), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	void Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventEqualNPCQuestDefRep_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventEqualNPCQuestDefRep_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal NPCQuestDefRep" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "EqualNPCQuestDefRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::QuestsFunctionLibrary_eventEqualNPCQuestDefRep_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics
	{
		struct QuestsFunctionLibrary_eventEqualQuestNode_Parms
		{
			FQuestNode A;
			FQuestNode B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualQuestNode_Parms, A), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(nullptr, 0) }; // 2631386162
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualQuestNode_Parms, B), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(nullptr, 0) }; // 2631386162
	void Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventEqualQuestNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventEqualQuestNode_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal QuestNode" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "EqualQuestNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::QuestsFunctionLibrary_eventEqualQuestNode_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics
	{
		struct QuestsFunctionLibrary_eventEqualQuestRep_Parms
		{
			FQuestRep A;
			FQuestRep B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualQuestRep_Parms, A), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualQuestRep_Parms, B), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	void Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventEqualQuestRep_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventEqualQuestRep_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal QuestRep" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "EqualQuestRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::QuestsFunctionLibrary_eventEqualQuestRep_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics
	{
		struct QuestsFunctionLibrary_eventEqualQuestTaskID_Parms
		{
			FQuestTaskID A;
			FQuestTaskID B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualQuestTaskID_Parms, A), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualQuestTaskID_Parms, B), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventEqualQuestTaskID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventEqualQuestTaskID_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "Comment", "//--------------------------------------Exposed equal-not equal\n" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal Quest Task" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "--------------------------------------Exposed equal-not equal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "EqualQuestTaskID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::QuestsFunctionLibrary_eventEqualQuestTaskID_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics
	{
		struct QuestsFunctionLibrary_eventEqualTalkMode_Parms
		{
			FTalkModeDef A;
			FTalkModeDef B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualTalkMode_Parms, A), Z_Construct_UScriptStruct_FTalkModeDef, METADATA_PARAMS(nullptr, 0) }; // 2653090243
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualTalkMode_Parms, B), Z_Construct_UScriptStruct_FTalkModeDef, METADATA_PARAMS(nullptr, 0) }; // 2653090243
	void Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventEqualTalkMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventEqualTalkMode_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal Talk Mode" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "EqualTalkMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::QuestsFunctionLibrary_eventEqualTalkMode_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics
	{
		struct QuestsFunctionLibrary_eventEqualTalkTextInfo_Parms
		{
			FTalkTextInfo A;
			FTalkTextInfo B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualTalkTextInfo_Parms, A), Z_Construct_UScriptStruct_FTalkTextInfo, METADATA_PARAMS(nullptr, 0) }; // 907379287
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventEqualTalkTextInfo_Parms, B), Z_Construct_UScriptStruct_FTalkTextInfo, METADATA_PARAMS(nullptr, 0) }; // 907379287
	void Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventEqualTalkTextInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventEqualTalkTextInfo_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal Talk Text Info" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "EqualTalkTextInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::QuestsFunctionLibrary_eventEqualTalkTextInfo_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics
	{
		struct QuestsFunctionLibrary_eventFilterTalkTextsForSingleSentence_Parms
		{
			TArray<FTalkTextInfo> ActiveTalkTextsIn;
			TArray<FSingleSentenceModeData> SSDataIn;
			ETalkTextMode AllowedMode;
			TArray<EQuestTaskState> AllowedStates;
			TArray<ETalkTextType> AllowedTypes;
			TArray<EDialogType> AllowedSSTypes;
			TArray<FSingleSentenceModeData> SSDataOut;
			TArray<FTalkTextInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveTalkTextsIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTalkTextsIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveTalkTextsIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SSDataIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SSDataIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SSDataIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedStates_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedStates;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedTypes_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedTypes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedSSTypes_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedSSTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedSSTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedSSTypes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SSDataOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SSDataOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ActiveTalkTextsIn_Inner = { "ActiveTalkTextsIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTalkTextInfo, METADATA_PARAMS(nullptr, 0) }; // 907379287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ActiveTalkTextsIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ActiveTalkTextsIn = { "ActiveTalkTextsIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventFilterTalkTextsForSingleSentence_Parms, ActiveTalkTextsIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ActiveTalkTextsIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ActiveTalkTextsIn_MetaData)) }; // 907379287
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataIn_Inner = { "SSDataIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSingleSentenceModeData, METADATA_PARAMS(nullptr, 0) }; // 169965353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataIn = { "SSDataIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventFilterTalkTextsForSingleSentence_Parms, SSDataIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataIn_MetaData)) }; // 169965353
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedMode = { "AllowedMode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventFilterTalkTextsForSingleSentence_Parms, AllowedMode), Z_Construct_UEnum_QuestEditor_ETalkTextMode, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedMode_MetaData)) }; // 395059072
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedStates_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedStates_Inner = { "AllowedStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_QuestEditor_EQuestTaskState, METADATA_PARAMS(nullptr, 0) }; // 3520366681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedStates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedStates = { "AllowedStates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventFilterTalkTextsForSingleSentence_Parms, AllowedStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedStates_MetaData)) }; // 3520366681
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedTypes_Inner = { "AllowedTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_QuestEditor_ETalkTextType, METADATA_PARAMS(nullptr, 0) }; // 2212476359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedTypes = { "AllowedTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventFilterTalkTextsForSingleSentence_Parms, AllowedTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedTypes_MetaData)) }; // 2212476359
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedSSTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedSSTypes_Inner = { "AllowedSSTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_QuestEditor_EDialogType, METADATA_PARAMS(nullptr, 0) }; // 1002308137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedSSTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedSSTypes = { "AllowedSSTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventFilterTalkTextsForSingleSentence_Parms, AllowedSSTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedSSTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedSSTypes_MetaData)) }; // 1002308137
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataOut_Inner = { "SSDataOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSingleSentenceModeData, METADATA_PARAMS(nullptr, 0) }; // 169965353
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataOut = { "SSDataOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventFilterTalkTextsForSingleSentence_Parms, SSDataOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 169965353
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTalkTextInfo, METADATA_PARAMS(nullptr, 0) }; // 907379287
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventFilterTalkTextsForSingleSentence_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 907379287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ActiveTalkTextsIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ActiveTalkTextsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedStates_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedTypes_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedSSTypes_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedSSTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_AllowedSSTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_SSDataOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Single Sentence Mode" },
		{ "Comment", "/**\n\x09*\x09Gets all talk texts of the array with the especified filters.\n\x09*\x09Used in Single sentence mode.\n\x09*\x09@Param ActiveTalkTextsIn Current active talk texts for this NPC. Provided as input to avoid extra calls.\n\x09*\x09@Param SSDataIn Correlated array for talk texts data. Provided as input to avoid extra calls.\n\x09* \x09@Param AllowedMode The talk text mode allowed, can be quest or dialog.\n\x09*\x09@Param AllowedStates All the states that the talktexts can have. If no state is specified means that this filter will not apply or that any is valid.\n\x09*\x09@Param AllowedTypes All the types that the talktexts can have. If no state is specified means that this filter will not apply or that any is valid.\n\x09*\x09@Param AllowedSSTypes All the Single sentence types that the talktexts can have. If no state is specified means that this filter will not apply or that any is valid.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets all talk texts of the array with the especified filters.\nUsed in Single sentence mode.\n@Param ActiveTalkTextsIn Current active talk texts for this NPC. Provided as input to avoid extra calls.\n@Param SSDataIn Correlated array for talk texts data. Provided as input to avoid extra calls.\n@Param AllowedMode The talk text mode allowed, can be quest or dialog.\n@Param AllowedStates All the states that the talktexts can have. If no state is specified means that this filter will not apply or that any is valid.\n@Param AllowedTypes All the types that the talktexts can have. If no state is specified means that this filter will not apply or that any is valid.\n@Param AllowedSSTypes All the Single sentence types that the talktexts can have. If no state is specified means that this filter will not apply or that any is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "FilterTalkTextsForSingleSentence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::QuestsFunctionLibrary_eventFilterTalkTextsForSingleSentence_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics
	{
		struct QuestsFunctionLibrary_eventGetActiveTaskTimer_Parms
		{
			int32 QuestSlotIn;
			int32 QuesTaskIn;
			bool IsDialogIn;
			UQuestManager* QuestManagerRef;
			float ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestSlotIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuesTaskIn;
		static void NewProp_IsDialogIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManagerRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerRef;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_QuestSlotIn = { "QuestSlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetActiveTaskTimer_Parms, QuestSlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_QuesTaskIn = { "QuesTaskIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetActiveTaskTimer_Parms, QuesTaskIn), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_IsDialogIn_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventGetActiveTaskTimer_Parms*)Obj)->IsDialogIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_IsDialogIn = { "IsDialogIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventGetActiveTaskTimer_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_IsDialogIn_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_QuestManagerRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_QuestManagerRef = { "QuestManagerRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetActiveTaskTimer_Parms, QuestManagerRef), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_QuestManagerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_QuestManagerRef_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetActiveTaskTimer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_QuestSlotIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_QuesTaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_IsDialogIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_QuestManagerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/*Gets the current value of the timer. Returns -1 is there is no active timer.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the current value of the timer. Returns -1 is there is no active timer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetActiveTaskTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::QuestsFunctionLibrary_eventGetActiveTaskTimer_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics
	{
		struct QuestsFunctionLibrary_eventGetAllQuestSaveGameNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetAllQuestSaveGameNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Framework" },
		{ "Comment", "/*Gets all save game names for quests in the game save folder.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets all save game names for quests in the game save folder." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetAllQuestSaveGameNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::QuestsFunctionLibrary_eventGetAllQuestSaveGameNames_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics
	{
		struct QuestsFunctionLibrary_eventGetAllQuestSaveGameObjects_Parms
		{
			TArray<UQuestSystemSaveGame*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UQuestSystemSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetAllQuestSaveGameObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Framework" },
		{ "Comment", "/*Gets all save game objects for quests in the game save folder.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets all save game objects for quests in the game save folder." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetAllQuestSaveGameObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::QuestsFunctionLibrary_eventGetAllQuestSaveGameObjects_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics
	{
		struct QuestsFunctionLibrary_eventGetAllTalkTasksOfConversation_Parms
		{
			FQuest QuestIn;
			int32 TalkTaskSampleIn;
			int32 ConversationIDOut;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TalkTaskSampleIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ConversationIDOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetAllTalkTasksOfConversation_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_TalkTaskSampleIn = { "TalkTaskSampleIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetAllTalkTasksOfConversation_Parms, TalkTaskSampleIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_ConversationIDOut = { "ConversationIDOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetAllTalkTasksOfConversation_Parms, ConversationIDOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetAllTalkTasksOfConversation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_TalkTaskSampleIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_ConversationIDOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "/**\n\x09*\x09""Finds all talktasks of a conversation that includes the task sample. The sample task can be any task of the conversation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Finds all talktasks of a conversation that includes the task sample. The sample task can be any task of the conversation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetAllTalkTasksOfConversation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::QuestsFunctionLibrary_eventGetAllTalkTasksOfConversation_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics
	{
		struct QuestsFunctionLibrary_eventGetDTFromPath_Parms
		{
			TSoftObjectPtr<UDataTable> DTPathIN;
			UDataTable* ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DTPathIN;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::NewProp_DTPathIN = { "DTPathIN", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetDTFromPath_Parms, DTPathIN), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetDTFromPath_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::NewProp_DTPathIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest DT" },
		{ "Comment", "/*Gets a datatable from a datatable TSoftObjectPtr path.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets a datatable from a datatable TSoftObjectPtr path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetDTFromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::QuestsFunctionLibrary_eventGetDTFromPath_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics
	{
		struct QuestsFunctionLibrary_eventGetDTFromReference_Parms
		{
			FString QuestDTName;
			FString DTFolderPath;
			UDataTable* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuestDTName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DTFolderPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::NewProp_QuestDTName = { "QuestDTName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetDTFromReference_Parms, QuestDTName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::NewProp_DTFolderPath = { "DTFolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetDTFromReference_Parms, DTFolderPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetDTFromReference_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::NewProp_QuestDTName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::NewProp_DTFolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest DT" },
		{ "Comment", "/*Gets a datatable from a datatable name and folder path.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets a datatable from a datatable name and folder path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetDTFromReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::QuestsFunctionLibrary_eventGetDTFromReference_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics
	{
		struct QuestsFunctionLibrary_eventGetDTFromStringPath_Parms
		{
			FString DTPathIN;
			UDataTable* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DTPathIN;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::NewProp_DTPathIN = { "DTPathIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetDTFromStringPath_Parms, DTPathIN), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetDTFromStringPath_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::NewProp_DTPathIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest DT" },
		{ "Comment", "/*Gets a datatable from a datatable string full path.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets a datatable from a datatable string full path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetDTFromStringPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::QuestsFunctionLibrary_eventGetDTFromStringPath_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics
	{
		struct QuestsFunctionLibrary_eventGetNodeDisabledNodesInQuest_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeDisabledNodesInQuest_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeDisabledNodesInQuest_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeDisabledNodesInQuest_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Gets the Disabled nodes of a particular node for a quest*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the Disabled nodes of a particular node for a quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetNodeDisabledNodesInQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::QuestsFunctionLibrary_eventGetNodeDisabledNodesInQuest_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics
	{
		struct QuestsFunctionLibrary_eventGetNodeInferiorLinksInQuest_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			TArray<FQuestTaskLink> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeInferiorLinksInQuest_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeInferiorLinksInQuest_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskLink, METADATA_PARAMS(nullptr, 0) }; // 3937065984
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeInferiorLinksInQuest_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3937065984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Gets the inferior Links of a particular node for a quest*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the inferior Links of a particular node for a quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetNodeInferiorLinksInQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::QuestsFunctionLibrary_eventGetNodeInferiorLinksInQuest_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics
	{
		struct QuestsFunctionLibrary_eventGetNodeInferiorNodesInQuest_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeInferiorNodesInQuest_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeInferiorNodesInQuest_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeInferiorNodesInQuest_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Gets the inferior nodes of a particular node for a quest*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the inferior nodes of a particular node for a quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetNodeInferiorNodesInQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::QuestsFunctionLibrary_eventGetNodeInferiorNodesInQuest_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics
	{
		struct QuestsFunctionLibrary_eventGetNodeShouldShowInUI_Parms
		{
			EQuestSelectedType SelectType;
			int32 QuestSlotIn;
			FQuestTaskID NodeIn;
			bool IsDialogIn;
			UQuestManager* QuestManagerRef;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestSlotIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static void NewProp_IsDialogIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManagerRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerRef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_SelectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_SelectType = { "SelectType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeShouldShowInUI_Parms, SelectType), Z_Construct_UEnum_QuestEditor_EQuestSelectedType, METADATA_PARAMS(nullptr, 0) }; // 1214583526
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_QuestSlotIn = { "QuestSlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeShouldShowInUI_Parms, QuestSlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeShouldShowInUI_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_IsDialogIn_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventGetNodeShouldShowInUI_Parms*)Obj)->IsDialogIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_IsDialogIn = { "IsDialogIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventGetNodeShouldShowInUI_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_IsDialogIn_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_QuestManagerRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_QuestManagerRef = { "QuestManagerRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeShouldShowInUI_Parms, QuestManagerRef), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_QuestManagerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_QuestManagerRef_MetaData)) };
	void Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventGetNodeShouldShowInUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventGetNodeShouldShowInUI_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_SelectType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_SelectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_QuestSlotIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_IsDialogIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_QuestManagerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/*Gets the task node UI visib config for ui.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the task node UI visib config for ui." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetNodeShouldShowInUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::QuestsFunctionLibrary_eventGetNodeShouldShowInUI_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics
	{
		struct QuestsFunctionLibrary_eventGetNodesOfTypeInArray_Parms
		{
			EQuestTaskType TaskTypeToMatch;
			TArray<FQuestTaskID> NodesArrayIn;
			TArray<FQuestTaskID> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TaskTypeToMatch_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskTypeToMatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesArrayIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesArrayIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesArrayIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_TaskTypeToMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_TaskTypeToMatch = { "TaskTypeToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodesOfTypeInArray_Parms, TaskTypeToMatch), Z_Construct_UEnum_QuestEditor_EQuestTaskType, METADATA_PARAMS(nullptr, 0) }; // 1742157387
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_NodesArrayIn_Inner = { "NodesArrayIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_NodesArrayIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_NodesArrayIn = { "NodesArrayIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodesOfTypeInArray_Parms, NodesArrayIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_NodesArrayIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_NodesArrayIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodesOfTypeInArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_TaskTypeToMatch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_TaskTypeToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_NodesArrayIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_NodesArrayIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/**\n\x09*\x09""Filter Array by type. Gets a new array with only the nodes that matches the selected type.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Filter Array by type. Gets a new array with only the nodes that matches the selected type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetNodesOfTypeInArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::QuestsFunctionLibrary_eventGetNodesOfTypeInArray_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics
	{
		struct QuestsFunctionLibrary_eventGetNodeSuperiorLinksInQuest_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			TArray<FQuestTaskLink> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeSuperiorLinksInQuest_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeSuperiorLinksInQuest_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskLink, METADATA_PARAMS(nullptr, 0) }; // 3937065984
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeSuperiorLinksInQuest_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3937065984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Gets the superior Links of a particular node for a quest*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the superior Links of a particular node for a quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetNodeSuperiorLinksInQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::QuestsFunctionLibrary_eventGetNodeSuperiorLinksInQuest_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics
	{
		struct QuestsFunctionLibrary_eventGetNodeSuperiorNodesInQuest_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeSuperiorNodesInQuest_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeSuperiorNodesInQuest_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetNodeSuperiorNodesInQuest_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Gets the superior nodes of a particular node for a quest*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the superior nodes of a particular node for a quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetNodeSuperiorNodesInQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::QuestsFunctionLibrary_eventGetNodeSuperiorNodesInQuest_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics
	{
		struct QuestsFunctionLibrary_eventGetQuestConversationsMap_Parms
		{
			FQuest QuestIn;
			TMap<FQuestTaskID,int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetQuestConversationsMap_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetQuestConversationsMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "/**\n\x09*\x09Gets all nodes and their conversation ID of a quest\n\x09*\x09@Param ReelevantNodesIn Nodes that matters, if they are all found the operation can be cancelled to save time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets all nodes and their conversation ID of a quest\n@Param ReelevantNodesIn Nodes that matters, if they are all found the operation can be cancelled to save time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetQuestConversationsMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::QuestsFunctionLibrary_eventGetQuestConversationsMap_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics
	{
		struct QuestsFunctionLibrary_eventGetTaskName_Parms
		{
			FQuestTask TaskIn;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::NewProp_TaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::NewProp_TaskIn = { "TaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskName_Parms, TaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::NewProp_TaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::NewProp_TaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::NewProp_TaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/*Gets task ID name from task object*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets task ID name from task object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetTaskName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::QuestsFunctionLibrary_eventGetTaskName_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics
	{
		struct QuestsFunctionLibrary_eventGetTaskRewardGiver_Parms
		{
			FQuestTask TaskIn;
			FNPCQuestDefRep RewardGiverOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RewardGiverOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_TaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_TaskIn = { "TaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskRewardGiver_Parms, TaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_TaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_TaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_RewardGiverOut = { "RewardGiverOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskRewardGiver_Parms, RewardGiverOut), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	void Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventGetTaskRewardGiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventGetTaskRewardGiver_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_TaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_RewardGiverOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/**\n\x09*\x09""Determines if the task has a reward giver and if found, returns the definition.\n\x09*\x09""By default the reward tasks use stringA of payload for the NPCDef.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Determines if the task has a reward giver and if found, returns the definition.\nBy default the reward tasks use stringA of payload for the NPCDef." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetTaskRewardGiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::QuestsFunctionLibrary_eventGetTaskRewardGiver_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics
	{
		struct QuestsFunctionLibrary_eventGetTaskRewardLocation_Parms
		{
			FQuestTask TaskIn;
			FString LocationNameOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationNameOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_TaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_TaskIn = { "TaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskRewardLocation_Parms, TaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_TaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_TaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_LocationNameOut = { "LocationNameOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskRewardLocation_Parms, LocationNameOut), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventGetTaskRewardLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventGetTaskRewardLocation_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_TaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_LocationNameOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/**\n\x09*\x09""Determines if the task has a reward location and if found, returns the location name.\n\x09*\x09""By default the reward tasks use stringA of payload for the Location.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Determines if the task has a reward location and if found, returns the location name.\nBy default the reward tasks use stringA of payload for the Location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetTaskRewardLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::QuestsFunctionLibrary_eventGetTaskRewardLocation_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics
	{
		struct QuestsFunctionLibrary_eventGetTaskRewardSlot_Parms
		{
			FQuestTask TaskIn;
			TSubclassOf<UBaseQuestRewardSlot>  ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIn;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::NewProp_TaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::NewProp_TaskIn = { "TaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskRewardSlot_Parms, TaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::NewProp_TaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::NewProp_TaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskRewardSlot_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseQuestRewardSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::NewProp_TaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/**\n\x09*\x09""Determines the task reward slot used in UI.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Determines the task reward slot used in UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetTaskRewardSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::QuestsFunctionLibrary_eventGetTaskRewardSlot_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics
	{
		struct QuestsFunctionLibrary_eventGetTaskRewardTags_Parms
		{
			FQuestTask TaskIn;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::NewProp_TaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::NewProp_TaskIn = { "TaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskRewardTags_Parms, TaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::NewProp_TaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::NewProp_TaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskRewardTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::NewProp_TaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/**\n\x09*\x09""Determines the task reward additional tags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Determines the task reward additional tags." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetTaskRewardTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::QuestsFunctionLibrary_eventGetTaskRewardTags_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics
	{
		struct QuestsFunctionLibrary_eventGetTaskShortDescription_Parms
		{
			FQuestTask TaskIn;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::NewProp_TaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::NewProp_TaskIn = { "TaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskShortDescription_Parms, TaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::NewProp_TaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::NewProp_TaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskShortDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::NewProp_TaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/*Gets task ID short description from task object*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets task ID short description from task object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetTaskShortDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::QuestsFunctionLibrary_eventGetTaskShortDescription_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics
	{
		struct QuestsFunctionLibrary_eventGetTaskShouldAnnounce_Parms
		{
			FQuestTask TaskIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::NewProp_TaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::NewProp_TaskIn = { "TaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskShouldAnnounce_Parms, TaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::NewProp_TaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::NewProp_TaskIn_MetaData)) }; // 3659381813
	void Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventGetTaskShouldAnnounce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventGetTaskShouldAnnounce_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::NewProp_TaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/*Gets the task announce config for ui.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the task announce config for ui." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetTaskShouldAnnounce", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::QuestsFunctionLibrary_eventGetTaskShouldAnnounce_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics
	{
		struct QuestsFunctionLibrary_eventGetTaskShouldShowInUI_Parms
		{
			FQuestTask TaskIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::NewProp_TaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::NewProp_TaskIn = { "TaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskShouldShowInUI_Parms, TaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::NewProp_TaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::NewProp_TaskIn_MetaData)) }; // 3659381813
	void Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventGetTaskShouldShowInUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventGetTaskShouldShowInUI_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::NewProp_TaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/*Gets the task UI visib config for ui.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the task UI visib config for ui." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetTaskShouldShowInUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::QuestsFunctionLibrary_eventGetTaskShouldShowInUI_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics
	{
		struct QuestsFunctionLibrary_eventGetTaskShowsOnlyOnceInSummary_Parms
		{
			FQuestTask TaskIn;
			FString StringIDOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIDOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_TaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_TaskIn = { "TaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskShowsOnlyOnceInSummary_Parms, TaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_TaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_TaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_StringIDOut = { "StringIDOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskShowsOnlyOnceInSummary_Parms, StringIDOut), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventGetTaskShowsOnlyOnceInSummary_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventGetTaskShowsOnlyOnceInSummary_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_TaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_StringIDOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/**\n\x09*\x09""Determines if the task should show only once in summary even if there are many of it active at the same time.\n\x09*\x09Used in choose reward.\n\x09*\x09The string ID helps identify the task type. Should be unique per each task. For Example: ItemReward or SpellReward.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Determines if the task should show only once in summary even if there are many of it active at the same time.\nUsed in choose reward.\nThe string ID helps identify the task type. Should be unique per each task. For Example: ItemReward or SpellReward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetTaskShowsOnlyOnceInSummary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::QuestsFunctionLibrary_eventGetTaskShowsOnlyOnceInSummary_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics
	{
		struct QuestsFunctionLibrary_eventGetTaskUIColor_Parms
		{
			FQuestTask TaskIn;
			FLinearColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::NewProp_TaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::NewProp_TaskIn = { "TaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskUIColor_Parms, TaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::NewProp_TaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::NewProp_TaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventGetTaskUIColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::NewProp_TaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Interface" },
		{ "Comment", "/*Gets the task ID color for ui.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the task ID color for ui." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "GetTaskUIColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::QuestsFunctionLibrary_eventGetTaskUIColor_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics
	{
		struct QuestsFunctionLibrary_eventIsNodeStartNode_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventIsNodeStartNode_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventIsNodeStartNode_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventIsNodeStartNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventIsNodeStartNode_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09If the node has no superior nodes is start node.\n\x09*\x09If all superior nodes of a node are conditionals nodes and also start nodes, the node is start node (Pseudo). \n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "If the node has no superior nodes is start node.\nIf all superior nodes of a node are conditionals nodes and also start nodes, the node is start node (Pseudo)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "IsNodeStartNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::QuestsFunctionLibrary_eventIsNodeStartNode_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics
	{
		struct QuestsFunctionLibrary_eventIsTaskIDValidInQuest_Parms
		{
			FQuest QuestIn;
			FQuestTaskID TaskIDIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIDIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventIsTaskIDValidInQuest_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_TaskIDIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_TaskIDIn = { "TaskIDIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventIsTaskIDValidInQuest_Parms, TaskIDIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_TaskIDIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_TaskIDIn_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventIsTaskIDValidInQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventIsTaskIDValidInQuest_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_TaskIDIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*Determines if a Task ID is for the Quest struct provided. */" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Determines if a Task ID is for the Quest struct provided." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "IsTaskIDValidInQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::QuestsFunctionLibrary_eventIsTaskIDValidInQuest_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics
	{
		struct QuestsFunctionLibrary_eventMakeStringReference_Parms
		{
			FString DTNameIn;
			FString DTPathIn;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DTNameIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DTNameIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DTPathIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DTPathIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_DTNameIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_DTNameIn = { "DTNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventMakeStringReference_Parms, DTNameIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_DTNameIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_DTNameIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_DTPathIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_DTPathIn = { "DTPathIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventMakeStringReference_Parms, DTPathIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_DTPathIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_DTPathIn_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventMakeStringReference_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_DTNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_DTPathIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Gets DT name and DT folder path and creates a full Path reference.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets DT name and DT folder path and creates a full Path reference." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "MakeStringReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::QuestsFunctionLibrary_eventMakeStringReference_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics
	{
		struct QuestsFunctionLibrary_eventNotEqualDialogRep_Parms
		{
			FDialogRep A;
			FDialogRep B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualDialogRep_Parms, A), Z_Construct_UScriptStruct_FDialogRep, METADATA_PARAMS(nullptr, 0) }; // 266078582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualDialogRep_Parms, B), Z_Construct_UScriptStruct_FDialogRep, METADATA_PARAMS(nullptr, 0) }; // 266078582
	void Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventNotEqualDialogRep_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventNotEqualDialogRep_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual DialogRep" },
		{ "Keywords", "!= Not equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "NotEqualDialogRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::QuestsFunctionLibrary_eventNotEqualDialogRep_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics
	{
		struct QuestsFunctionLibrary_eventNotEqualNPCQuestDefRep_Parms
		{
			FNPCQuestDefRep A;
			FNPCQuestDefRep B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualNPCQuestDefRep_Parms, A), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualNPCQuestDefRep_Parms, B), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	void Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventNotEqualNPCQuestDefRep_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventNotEqualNPCQuestDefRep_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual NPCQuestDefRep" },
		{ "Keywords", "!= Not equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "NotEqualNPCQuestDefRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::QuestsFunctionLibrary_eventNotEqualNPCQuestDefRep_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics
	{
		struct QuestsFunctionLibrary_eventNotEqualQuestNode_Parms
		{
			FQuestNode A;
			FQuestNode B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualQuestNode_Parms, A), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(nullptr, 0) }; // 2631386162
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualQuestNode_Parms, B), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(nullptr, 0) }; // 2631386162
	void Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventNotEqualQuestNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventNotEqualQuestNode_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual QuestNode" },
		{ "Keywords", "!= Not equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "NotEqualQuestNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::QuestsFunctionLibrary_eventNotEqualQuestNode_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics
	{
		struct QuestsFunctionLibrary_eventNotEqualQuestRep_Parms
		{
			FQuestRep A;
			FQuestRep B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualQuestRep_Parms, A), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualQuestRep_Parms, B), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	void Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventNotEqualQuestRep_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventNotEqualQuestRep_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual QuestRep" },
		{ "Keywords", "!= Not equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "NotEqualQuestRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::QuestsFunctionLibrary_eventNotEqualQuestRep_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics
	{
		struct QuestsFunctionLibrary_eventNotEqualQuestTaskID_Parms
		{
			FQuestTaskID A;
			FQuestTaskID B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualQuestTaskID_Parms, A), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualQuestTaskID_Parms, B), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventNotEqualQuestTaskID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventNotEqualQuestTaskID_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual Quest Task" },
		{ "Keywords", "!= Not equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "NotEqualQuestTaskID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::QuestsFunctionLibrary_eventNotEqualQuestTaskID_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics
	{
		struct QuestsFunctionLibrary_eventNotEqualTalkMode_Parms
		{
			FTalkModeDef A;
			FTalkModeDef B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualTalkMode_Parms, A), Z_Construct_UScriptStruct_FTalkModeDef, METADATA_PARAMS(nullptr, 0) }; // 2653090243
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualTalkMode_Parms, B), Z_Construct_UScriptStruct_FTalkModeDef, METADATA_PARAMS(nullptr, 0) }; // 2653090243
	void Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventNotEqualTalkMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventNotEqualTalkMode_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual Talk Mode" },
		{ "Keywords", "!= Not equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "NotEqualTalkMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::QuestsFunctionLibrary_eventNotEqualTalkMode_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics
	{
		struct QuestsFunctionLibrary_eventNotEqualTalkTextInfo_Parms
		{
			FTalkTextInfo A;
			FTalkTextInfo B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualTalkTextInfo_Parms, A), Z_Construct_UScriptStruct_FTalkTextInfo, METADATA_PARAMS(nullptr, 0) }; // 907379287
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNotEqualTalkTextInfo_Parms, B), Z_Construct_UScriptStruct_FTalkTextInfo, METADATA_PARAMS(nullptr, 0) }; // 907379287
	void Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventNotEqualTalkTextInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventNotEqualTalkTextInfo_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Operation" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual Talk Text Info" },
		{ "Keywords", "!= Not equal" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "NotEqualTalkTextInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::QuestsFunctionLibrary_eventNotEqualTalkTextInfo_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics
	{
		struct QuestsFunctionLibrary_eventNPCQuestDefRepToNPCQuestDef_Parms
		{
			FNPCQuestDefRep FNPCQuestDefIn;
			FNPCQuestDef ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FNPCQuestDefIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FNPCQuestDefIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::NewProp_FNPCQuestDefIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::NewProp_FNPCQuestDefIn = { "FNPCQuestDefIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNPCQuestDefRepToNPCQuestDef_Parms, FNPCQuestDefIn), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::NewProp_FNPCQuestDefIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::NewProp_FNPCQuestDefIn_MetaData)) }; // 3466971976
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNPCQuestDefRepToNPCQuestDef_Parms, ReturnValue), Z_Construct_UScriptStruct_FNPCQuestDef, METADATA_PARAMS(nullptr, 0) }; // 2955034993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::NewProp_FNPCQuestDefIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Gets the NPC information from a datatable reference*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the NPC information from a datatable reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "NPCQuestDefRepToNPCQuestDef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::QuestsFunctionLibrary_eventNPCQuestDefRepToNPCQuestDef_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics
	{
		struct QuestsFunctionLibrary_eventNPCQuestDefRepToString_Parms
		{
			FNPCQuestDefRep FNPCQuestDefIn;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FNPCQuestDefIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FNPCQuestDefIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::NewProp_FNPCQuestDefIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::NewProp_FNPCQuestDefIn = { "FNPCQuestDefIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNPCQuestDefRepToString_Parms, FNPCQuestDefIn), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::NewProp_FNPCQuestDefIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::NewProp_FNPCQuestDefIn_MetaData)) }; // 3466971976
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventNPCQuestDefRepToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::NewProp_FNPCQuestDefIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Converts a FNPCQuestDefRep struct to string*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Converts a FNPCQuestDefRep struct to string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "NPCQuestDefRepToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::QuestsFunctionLibrary_eventNPCQuestDefRepToString_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics
	{
		struct QuestsFunctionLibrary_eventPayloadDataToStruct_Parms
		{
			TFieldPath<FProperty> StructIn;
			FString PayloadDataIn;
		};
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_StructIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadDataIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadDataIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::NewProp_StructIn = { "StructIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventPayloadDataToStruct_Parms, StructIn), &FProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::NewProp_PayloadDataIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::NewProp_PayloadDataIn = { "PayloadDataIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventPayloadDataToStruct_Parms, PayloadDataIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::NewProp_PayloadDataIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::NewProp_PayloadDataIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::NewProp_StructIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::NewProp_PayloadDataIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Custom Payload" },
		{ "Comment", "/** \n\x09*\x09""Fills a structure with a Payload Data String\n\x09*\x09Make sure the StructIn variable is cleared before, to avoid carrying data over, specially in loops.\n\x09*/" },
		{ "CustomStructureParam", "StructIn" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Fills a structure with a Payload Data String\nMake sure the StructIn variable is cleared before, to avoid carrying data over, specially in loops." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "PayloadDataToStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::QuestsFunctionLibrary_eventPayloadDataToStruct_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics
	{
		struct QuestsFunctionLibrary_eventQuestNodeToString_Parms
		{
			FQuestNode QuestNodeIn;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestNodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestNodeIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::NewProp_QuestNodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::NewProp_QuestNodeIn = { "QuestNodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventQuestNodeToString_Parms, QuestNodeIn), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::NewProp_QuestNodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::NewProp_QuestNodeIn_MetaData)) }; // 2631386162
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventQuestNodeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::NewProp_QuestNodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Converts a Quest node struct to string*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Converts a Quest node struct to string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "QuestNodeToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::QuestsFunctionLibrary_eventQuestNodeToString_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics
	{
		struct QuestsFunctionLibrary_eventQuestRepToQuest_Parms
		{
			FQuestRep QuestRepIN;
			FQuest ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRepIN_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRepIN;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::NewProp_QuestRepIN_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::NewProp_QuestRepIN = { "QuestRepIN", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventQuestRepToQuest_Parms, QuestRepIN), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::NewProp_QuestRepIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::NewProp_QuestRepIN_MetaData)) }; // 2639361420
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventQuestRepToQuest_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::NewProp_QuestRepIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Gets the quest information from a datatable reference*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Gets the quest information from a datatable reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "QuestRepToQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::QuestsFunctionLibrary_eventQuestRepToQuest_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics
	{
		struct QuestsFunctionLibrary_eventQuestRepToString_Parms
		{
			FQuestRep QuestRepIN;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRepIN_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRepIN;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::NewProp_QuestRepIN_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::NewProp_QuestRepIN = { "QuestRepIN", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventQuestRepToString_Parms, QuestRepIN), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::NewProp_QuestRepIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::NewProp_QuestRepIN_MetaData)) }; // 2639361420
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventQuestRepToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::NewProp_QuestRepIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Converts a quest rep struct to string*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Converts a quest rep struct to string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "QuestRepToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::QuestsFunctionLibrary_eventQuestRepToString_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics
	{
		struct QuestsFunctionLibrary_eventRemoveTaskIDFromLinkArray_Parms
		{
			FQuestTaskID TaskIDIn;
			TArray<FQuestTaskLink> LinksArrayIn;
			TArray<FQuestTaskLink> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIDIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinksArrayIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinksArrayIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinksArrayIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_TaskIDIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_TaskIDIn = { "TaskIDIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventRemoveTaskIDFromLinkArray_Parms, TaskIDIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_TaskIDIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_TaskIDIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_LinksArrayIn_Inner = { "LinksArrayIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskLink, METADATA_PARAMS(nullptr, 0) }; // 3937065984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_LinksArrayIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_LinksArrayIn = { "LinksArrayIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventRemoveTaskIDFromLinkArray_Parms, LinksArrayIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_LinksArrayIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_LinksArrayIn_MetaData)) }; // 3937065984
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskLink, METADATA_PARAMS(nullptr, 0) }; // 3937065984
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventRemoveTaskIDFromLinkArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3937065984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_TaskIDIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_LinksArrayIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_LinksArrayIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/**\x09\n\x09*\x09Removes a TaskID from a Links Array and returns the new array.\n\x09*\x09""Does not care of link type.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Removes a TaskID from a Links Array and returns the new array.\nDoes not care of link type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "RemoveTaskIDFromLinkArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::QuestsFunctionLibrary_eventRemoveTaskIDFromLinkArray_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics
	{
		struct QuestsFunctionLibrary_eventStringToDialogRep_Parms
		{
			FString StringIn;
			FDialogRep ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::NewProp_StringIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::NewProp_StringIn = { "StringIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStringToDialogRep_Parms, StringIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::NewProp_StringIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::NewProp_StringIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStringToDialogRep_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogRep, METADATA_PARAMS(nullptr, 0) }; // 266078582
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::NewProp_StringIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Converts a string to Dialog rep struct*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Converts a string to Dialog rep struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "StringToDialogRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::QuestsFunctionLibrary_eventStringToDialogRep_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics
	{
		struct QuestsFunctionLibrary_eventStringToNPCQuestDefRep_Parms
		{
			FString StringIn;
			FNPCQuestDefRep ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::NewProp_StringIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::NewProp_StringIn = { "StringIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStringToNPCQuestDefRep_Parms, StringIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::NewProp_StringIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::NewProp_StringIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStringToNPCQuestDefRep_Parms, ReturnValue), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::NewProp_StringIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Converts a string to FNPCQuestDefRep struct*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Converts a string to FNPCQuestDefRep struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "StringToNPCQuestDefRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::QuestsFunctionLibrary_eventStringToNPCQuestDefRep_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics
	{
		struct QuestsFunctionLibrary_eventStringToQuestNode_Parms
		{
			FString StringIn;
			FQuestNode ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::NewProp_StringIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::NewProp_StringIn = { "StringIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStringToQuestNode_Parms, StringIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::NewProp_StringIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::NewProp_StringIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStringToQuestNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(nullptr, 0) }; // 2631386162
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::NewProp_StringIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Converts a string to QuestNode*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Converts a string to QuestNode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "StringToQuestNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::QuestsFunctionLibrary_eventStringToQuestNode_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics
	{
		struct QuestsFunctionLibrary_eventStringToQuestRep_Parms
		{
			FString StringIn;
			FQuestRep ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::NewProp_StringIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::NewProp_StringIn = { "StringIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStringToQuestRep_Parms, StringIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::NewProp_StringIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::NewProp_StringIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStringToQuestRep_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::NewProp_StringIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Converts a string to quest rep struc*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Converts a string to quest rep struc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "StringToQuestRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::QuestsFunctionLibrary_eventStringToQuestRep_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics
	{
		struct QuestsFunctionLibrary_eventStringToTaskID_Parms
		{
			FString StringIn;
			FQuestTaskID ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::NewProp_StringIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::NewProp_StringIn = { "StringIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStringToTaskID_Parms, StringIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::NewProp_StringIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::NewProp_StringIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStringToTaskID_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::NewProp_StringIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Converts a string to TaskID*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Converts a string to TaskID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "StringToTaskID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::QuestsFunctionLibrary_eventStringToTaskID_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics
	{
		struct QuestsFunctionLibrary_eventStructToPayloadData_Parms
		{
			TFieldPath<FProperty> StructIn;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_StructIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::NewProp_StructIn = { "StructIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStructToPayloadData_Parms, StructIn), &FProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventStructToPayloadData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::NewProp_StructIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Custom Payload" },
		{ "Comment", "/*Convert structure to Payload Data String.*/" },
		{ "CustomStructureParam", "StructIn" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Convert structure to Payload Data String." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "StructToPayloadData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::QuestsFunctionLibrary_eventStructToPayloadData_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics
	{
		struct QuestsFunctionLibrary_eventTaskIDToString_Parms
		{
			FQuestTaskID QuestTaskIDIn;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskIDIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTaskIDIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::NewProp_QuestTaskIDIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::NewProp_QuestTaskIDIn = { "QuestTaskIDIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventTaskIDToString_Parms, QuestTaskIDIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::NewProp_QuestTaskIDIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::NewProp_QuestTaskIDIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventTaskIDToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::NewProp_QuestTaskIDIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/*Converts a Quest task ID struct to string*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Converts a Quest task ID struct to string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "TaskIDToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::QuestsFunctionLibrary_eventTaskIDToString_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics
	{
		struct QuestsFunctionLibrary_eventTaskIsActivateConditionOnly_Parms
		{
			FQuest QuestIn;
			int32 TaskSlot;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TaskSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventTaskIsActivateConditionOnly_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_TaskSlot = { "TaskSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestsFunctionLibrary_eventTaskIsActivateConditionOnly_Parms, TaskSlot), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestsFunctionLibrary_eventTaskIsActivateConditionOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestsFunctionLibrary_eventTaskIsActivateConditionOnly_Parms), &Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_TaskSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09""Checks if a task is ActivateConditionOnly.\n\x09*\x09""Calling this function does not require object spawn.\n\x09*\x09(not exposed to bp)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
		{ "ToolTip", "Checks if a task is ActivateConditionOnly.\nCalling this function does not require object spawn.\n(not exposed to bp)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestsFunctionLibrary, nullptr, "TaskIsActivateConditionOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::QuestsFunctionLibrary_eventTaskIsActivateConditionOnly_Parms), Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestsFunctionLibrary);
	UClass* Z_Construct_UClass_UQuestsFunctionLibrary_NoRegister()
	{
		return UQuestsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UQuestsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllRequiredSuperiorNodesOfNodeConditions, "AreAllRequiredSuperiorNodesOfNodeConditions" }, // 3277004648
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllSuperiorNodesOfNodeConditions, "AreAllSuperiorNodesOfNodeConditions" }, // 4034629679
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_AreAllTalkTextsOfType, "AreAllTalkTextsOfType" }, // 216582048
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_ConvertLinkArrayToNodeArray, "ConvertLinkArrayToNodeArray" }, // 85989020
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteAllQuestSaveGames, "DeleteAllQuestSaveGames" }, // 4191401236
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_DeleteQuestSaveGame, "DeleteQuestSaveGame" }, // 2856847315
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToDialog, "DialogRepToDialog" }, // 2134077780
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_DialogRepToString, "DialogRepToString" }, // 2852062774
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualDialogRep, "EqualDialogRep" }, // 728345632
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualNPCQuestDefRep, "EqualNPCQuestDefRep" }, // 3515453306
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestNode, "EqualQuestNode" }, // 668092815
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestRep, "EqualQuestRep" }, // 2357519884
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualQuestTaskID, "EqualQuestTaskID" }, // 2351438836
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkMode, "EqualTalkMode" }, // 586943185
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_EqualTalkTextInfo, "EqualTalkTextInfo" }, // 3320806708
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_FilterTalkTextsForSingleSentence, "FilterTalkTextsForSingleSentence" }, // 1161783804
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetActiveTaskTimer, "GetActiveTaskTimer" }, // 3222085362
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameNames, "GetAllQuestSaveGameNames" }, // 3581116876
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllQuestSaveGameObjects, "GetAllQuestSaveGameObjects" }, // 2691456948
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetAllTalkTasksOfConversation, "GetAllTalkTasksOfConversation" }, // 2629927706
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromPath, "GetDTFromPath" }, // 3173260050
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromReference, "GetDTFromReference" }, // 2008241618
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetDTFromStringPath, "GetDTFromStringPath" }, // 3867805762
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeDisabledNodesInQuest, "GetNodeDisabledNodesInQuest" }, // 3671920252
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorLinksInQuest, "GetNodeInferiorLinksInQuest" }, // 92324623
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeInferiorNodesInQuest, "GetNodeInferiorNodesInQuest" }, // 3748701989
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeShouldShowInUI, "GetNodeShouldShowInUI" }, // 1075916756
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodesOfTypeInArray, "GetNodesOfTypeInArray" }, // 4000047325
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorLinksInQuest, "GetNodeSuperiorLinksInQuest" }, // 634459119
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetNodeSuperiorNodesInQuest, "GetNodeSuperiorNodesInQuest" }, // 3192613956
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetQuestConversationsMap, "GetQuestConversationsMap" }, // 2736391322
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskName, "GetTaskName" }, // 3414724317
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardGiver, "GetTaskRewardGiver" }, // 664002296
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardLocation, "GetTaskRewardLocation" }, // 3090304675
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardSlot, "GetTaskRewardSlot" }, // 1064590305
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskRewardTags, "GetTaskRewardTags" }, // 3872918209
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShortDescription, "GetTaskShortDescription" }, // 2274426085
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldAnnounce, "GetTaskShouldAnnounce" }, // 2475134141
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShouldShowInUI, "GetTaskShouldShowInUI" }, // 2452614155
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskShowsOnlyOnceInSummary, "GetTaskShowsOnlyOnceInSummary" }, // 1010601620
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_GetTaskUIColor, "GetTaskUIColor" }, // 1577333632
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_IsNodeStartNode, "IsNodeStartNode" }, // 1205882114
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_IsTaskIDValidInQuest, "IsTaskIDValidInQuest" }, // 2961598536
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_MakeStringReference, "MakeStringReference" }, // 2159866046
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualDialogRep, "NotEqualDialogRep" }, // 3051580170
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualNPCQuestDefRep, "NotEqualNPCQuestDefRep" }, // 2539192351
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestNode, "NotEqualQuestNode" }, // 292575681
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestRep, "NotEqualQuestRep" }, // 173140191
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualQuestTaskID, "NotEqualQuestTaskID" }, // 3476192020
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkMode, "NotEqualTalkMode" }, // 916772845
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_NotEqualTalkTextInfo, "NotEqualTalkTextInfo" }, // 2471001118
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToNPCQuestDef, "NPCQuestDefRepToNPCQuestDef" }, // 1156093187
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_NPCQuestDefRepToString, "NPCQuestDefRepToString" }, // 2049787164
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_PayloadDataToStruct, "PayloadDataToStruct" }, // 1189068229
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_QuestNodeToString, "QuestNodeToString" }, // 3733011196
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToQuest, "QuestRepToQuest" }, // 3491150794
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_QuestRepToString, "QuestRepToString" }, // 1755855009
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_RemoveTaskIDFromLinkArray, "RemoveTaskIDFromLinkArray" }, // 3150800936
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_StringToDialogRep, "StringToDialogRep" }, // 2131789864
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_StringToNPCQuestDefRep, "StringToNPCQuestDefRep" }, // 3605337438
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestNode, "StringToQuestNode" }, // 1337046411
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_StringToQuestRep, "StringToQuestRep" }, // 4231229779
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_StringToTaskID, "StringToTaskID" }, // 1225325581
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_StructToPayloadData, "StructToPayloadData" }, // 1511406892
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIDToString, "TaskIDToString" }, // 2245103425
		{ &Z_Construct_UFunction_UQuestsFunctionLibrary_TaskIsActivateConditionOnly, "TaskIsActivateConditionOnly" }, // 3385337216
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Quest/QuestsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Quest/QuestsFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestsFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestsFunctionLibrary_Statics::ClassParams = {
		&UQuestsFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestsFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestsFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestsFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UQuestsFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestsFunctionLibrary.OuterSingleton, Z_Construct_UClass_UQuestsFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestsFunctionLibrary.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UQuestsFunctionLibrary>()
	{
		return UQuestsFunctionLibrary::StaticClass();
	}
	UQuestsFunctionLibrary::UQuestsFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestsFunctionLibrary);
	UQuestsFunctionLibrary::~UQuestsFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestsFunctionLibrary, UQuestsFunctionLibrary::StaticClass, TEXT("UQuestsFunctionLibrary"), &Z_Registration_Info_UClass_UQuestsFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestsFunctionLibrary), 2014454176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_3712887632(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestsFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
