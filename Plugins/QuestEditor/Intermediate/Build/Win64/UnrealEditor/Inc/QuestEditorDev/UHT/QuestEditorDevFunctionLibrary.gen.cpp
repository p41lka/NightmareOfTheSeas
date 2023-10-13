// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/QuestEditor/QuestEditorDevFunctionLibrary.h"
#include "Framework/Commands/InputChord.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
#include "QuestEditorDev/Public/QuestEditor/QuestTypesDev.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorDevFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_NoRegister();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_ENodeConnectorType();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_ENodeLinkType();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_EQuestTaskType();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialog();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialogRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDef();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDefRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestNode();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTask();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskID();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskLink();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestEditor_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorDevFunctionLibrary();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorDevFunctionLibrary_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorSettings_NoRegister();
	QUESTEDITORDEV_API UEnum* Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType();
	QUESTEDITORDEV_API UEnum* Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEditorKeyBind();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskEditorInfo();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execQuestRequiresDirectStartNode)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::QuestRequiresDirectStartNode(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execCollapseXTiers)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::CollapseXTiers(Z_Param_Out_HierarchyQuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execFilterRepeatedNodesInHierarchy)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::FilterRepeatedNodesInHierarchy(Z_Param_Out_HierarchyQuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execSetAllNodePositionsInHierarchy)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::SetAllNodePositionsInHierarchy(Z_Param_Out_HierarchyQuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execIsNodeNearPositionInHierarchy)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_PositionXIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_TierIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::IsNodeNearPositionInHierarchy(Z_Param_Out_HierarchyQuestIn,Z_Param_PositionXIn,Z_Param_TierIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetHierarchyAdjustOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetHierarchyAdjustOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAdjustAllTierPositionsToAvoidOverlap)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::AdjustAllTierPositionsToAvoidOverlap(Z_Param_Out_HierarchyQuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAdjustNodePositionsToAvoidOverlapInTier)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_TierIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::AdjustNodePositionsToAvoidOverlapInTier(Z_Param_Out_HierarchyQuestIn,Z_Param_TierIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAdjustNodePairPositionsToAvoidOverlap)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_TARRAY(int32,Z_Param_NodePairIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::AdjustNodePairPositionsToAvoidOverlap(Z_Param_Out_HierarchyQuestIn,Z_Param_NodePairIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetNodesInTierOverlappingPosition)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_TierIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetNodesInTierOverlappingPosition(Z_Param_Out_HierarchyQuestIn,Z_Param_TierIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetNodesAverageXPositionInHierarchy)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_TARRAY(int32,Z_Param_NodesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetNodesAverageXPositionInHierarchy(Z_Param_Out_HierarchyQuestIn,Z_Param_NodesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetNodesIDsByTierInHierarchy)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_TierIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetNodesIDsByTierInHierarchy(Z_Param_Out_HierarchyQuestIn,Z_Param_TierIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetSuperiorNodesOfNodeWithImmediateHierarchyTier)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetSuperiorNodesOfNodeWithImmediateHierarchyTier(Z_Param_Out_HierarchyQuestIn,Z_Param_NodeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetInferiorNodesOfNodeWithImmediateHierarchyTier)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetInferiorNodesOfNodeWithImmediateHierarchyTier(Z_Param_Out_HierarchyQuestIn,Z_Param_NodeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAdjustAllNodePositionsInTierByConnectedNodesInHierarchy)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_TierIn);
		P_GET_UBOOL(Z_Param_UseInferiorNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::AdjustAllNodePositionsInTierByConnectedNodesInHierarchy(Z_Param_Out_HierarchyQuestIn,Z_Param_TierIn,Z_Param_UseInferiorNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execSetNodePositionByTierInHierarchy)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_NodeIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxTaskInAnyTier);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::SetNodePositionByTierInHierarchy(Z_Param_Out_HierarchyQuestIn,Z_Param_NodeIn,Z_Param_MaxTaskInAnyTier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetMinHierarchyYTier)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetMinHierarchyYTier(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetMaxHierarchyYTier)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetMaxHierarchyYTier(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetMaxAmountOfNodesInHierarchyTiers)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TierOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetMaxAmountOfNodesInHierarchyTiers(Z_Param_Out_QuestIn,Z_Param_Out_TierOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetAmountOfNodesInHierarchyTier)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_YTierIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetAmountOfNodesInHierarchyTier(Z_Param_Out_QuestIn,Z_Param_YTierIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestHierarchy)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestRepIn);
		P_GET_TARRAY(UDataTable*,Z_Param_DatatablesIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxSuperiorTier);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxInferiorTier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuest*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetQuestHierarchy(Z_Param_Out_QuestRepIn,Z_Param_DatatablesIn,Z_Param_MaxSuperiorTier,Z_Param_MaxInferiorTier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execPropagateQuestsInHierarchy)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestRepIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxSuperiorTier);
		P_GET_UBOOL(Z_Param_PropagateUp);
		P_GET_TARRAY(UDataTable*,Z_Param_DatatablesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::PropagateQuestsInHierarchy(Z_Param_Out_HierarchyQuestIn,Z_Param_Out_QuestRepIn,Z_Param_MaxSuperiorTier,Z_Param_PropagateUp,Z_Param_DatatablesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAddInitialHierarchyOfQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestRepIn);
		P_GET_TARRAY(UDataTable*,Z_Param_DatatablesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::AddInitialHierarchyOfQuest(Z_Param_Out_HierarchyQuestIn,Z_Param_Out_QuestRepIn,Z_Param_DatatablesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAddHierarchyOfNodeToQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_HierarchyQuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_QuestRepNodeIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_SuperiorNodeTier);
		P_GET_UBOOL(Z_Param_PropagateUp);
		P_GET_TARRAY(UDataTable*,Z_Param_DatatablesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AddHierarchyOfNodeToQuest(Z_Param_Out_HierarchyQuestIn,Z_Param_Out_QuestRepNodeIn,Z_Param_SuperiorNodeTier,Z_Param_PropagateUp,Z_Param_DatatablesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execCreateDirectStartHierarchyTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTask*)Z_Param__Result=UQuestEditorDevFunctionLibrary::CreateDirectStartHierarchyTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execConvertQuestRepToHierarchyTask)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTask*)Z_Param__Result=UQuestEditorDevFunctionLibrary::ConvertQuestRepToHierarchyTask(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execConditionalTaskIsLinkedToQuest)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_SuperiorQuestIn);
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_InferiorQuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeIn);
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::ConditionalTaskIsLinkedToQuest(Z_Param_Out_SuperiorQuestIn,Z_Param_Out_InferiorQuestIn,Z_Param_Out_NodeIn,Z_Param_Out_QuestOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAreGroupOfNodesConectedToQuest)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_SuperiorQuestIn);
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_InferiorQuestIn);
		P_GET_TARRAY_REF(FQuestTaskLink,Z_Param_Out_NodeLinksIn);
		P_GET_ENUM_REF(ENodeLinkType,Z_Param_Out_LinkTypeOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AreGroupOfNodesConectedToQuest(Z_Param_Out_SuperiorQuestIn,Z_Param_Out_InferiorQuestIn,Z_Param_Out_NodeLinksIn,(ENodeLinkType&)(Z_Param_Out_LinkTypeOut));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetLinkTypeBetweenConnectedQuests)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_SuperiorQuestIn);
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_InferiorQuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ENodeLinkType*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetLinkTypeBetweenConnectedQuests(Z_Param_Out_SuperiorQuestIn,Z_Param_Out_InferiorQuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetAllInferiorQuestsOfQuestRep)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestRepIn);
		P_GET_TARRAY(UDataTable*,Z_Param_DatatablesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestRep>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetAllInferiorQuestsOfQuestRep(Z_Param_Out_QuestRepIn,Z_Param_DatatablesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetAllSuperiorQuestsOfQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestRep>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetAllSuperiorQuestsOfQuest(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestsGameWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetQuestsGameWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetAllQuestsInDTForNPC)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_Datatable);
		P_GET_PROPERTY(FStrProperty,Z_Param_NPCNameIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestRep>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetAllQuestsInDTForNPC(Z_Param_Datatable,Z_Param_NPCNameIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execNPCCanGiveQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_NPCNameIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::NPCCanGiveQuest(Z_Param_Out_QuestIn,Z_Param_NPCNameIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetStartingPseudoTalkTaskForNPC)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_NPCNameIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetStartingPseudoTalkTaskForNPC(Z_Param_Out_QuestIn,Z_Param_NPCNameIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetStartingTalkTaskForNPC)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_NPCNameIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetStartingTalkTaskForNPC(Z_Param_Out_QuestIn,Z_Param_NPCNameIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetInitialPseudoTasksOfQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetInitialPseudoTasksOfQuest(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestStartNPCs)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNPCQuestDefRep>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetQuestStartNPCs(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestPseudoStartNodes)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetQuestPseudoStartNodes(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestNonConditionalStartNodes)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetQuestNonConditionalStartNodes(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetNodeGridTier)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_NodeIn);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NodeWidgetSizeIn);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GridSizeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetNodeGridTier(Z_Param_Out_QuestIn,Z_Param_NodeIn,Z_Param_Out_NodeWidgetSizeIn,Z_Param_Out_GridSizeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetAllNodesOfSameTaskType)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_NodesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetAllNodesOfSameTaskType(Z_Param_Out_QuestIn,Z_Param_NodesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAreNodeArraysEqual)
	{
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_NodesA);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_NodesB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AreNodeArraysEqual(Z_Param_Out_NodesA,Z_Param_Out_NodesB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execSortNodesByEditorPositiong)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_Nodes);
		P_GET_UBOOL(Z_Param_UseY);
		P_GET_UBOOL(Z_Param_UseReverseOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::SortNodesByEditorPositiong(Z_Param_Out_QuestIn,Z_Param_Out_Nodes,Z_Param_UseY,Z_Param_UseReverseOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestEndNodes)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetQuestEndNodes(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestStartNodes)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetQuestStartNodes(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetNodePosition)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetNodePosition(Z_Param_Out_QuestIn,Z_Param_Out_NodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetPositionValue)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_NodesWidgetSizeIn);
		P_GET_UBOOL(Z_Param_UseY);
		P_GET_UBOOL(Z_Param_CheckLower);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetPositionValue(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn,Z_Param_Out_NodesWidgetSizeIn,Z_Param_UseY,Z_Param_CheckLower,Z_Param_Out_NodeOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execConvertCenterPositionToQEPosition)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NodeSizeIn);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NodeCenterPositionIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UQuestEditorDevFunctionLibrary::ConvertCenterPositionToQEPosition(Z_Param_Out_NodeSizeIn,Z_Param_Out_NodeCenterPositionIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetNodeCenterPosition)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_SelectedNodeIn);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NodeSizeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetNodeCenterPosition(Z_Param_Out_QuestIn,Z_Param_SelectedNodeIn,Z_Param_Out_NodeSizeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execUpdateAllConversationsIDs)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::UpdateAllConversationsIDs(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execSwapNodeConnections)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeA);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeB);
		P_GET_ENUM(ENodeConnectorType,Z_Param_ConnectorIn);
		P_GET_UBOOL(Z_Param_UpdateConversationIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::SwapNodeConnections(Z_Param_Out_QuestIn,Z_Param_Out_NodeA,Z_Param_Out_NodeB,ENodeConnectorType(Z_Param_ConnectorIn),Z_Param_UpdateConversationIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execCanNodeStartSwapConnection)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_NodeIn);
		P_GET_ENUM(ENodeConnectorType,Z_Param_ConnectorIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::CanNodeStartSwapConnection(Z_Param_Out_QuestIn,Z_Param_NodeIn,ENodeConnectorType(Z_Param_ConnectorIn));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetAllNodesDisablesConnections)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_DisablerNodesOut);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_DisabledNodesOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetAllNodesDisablesConnections(Z_Param_Out_QuestIn,Z_Param_Out_DisablerNodesOut,Z_Param_Out_DisabledNodesOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetAllSelectedNodesConnections)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodes);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SuperiorNodesOut);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_InferiorNodesOut);
		P_GET_TARRAY_REF(ENodeLinkType,Z_Param_Out_LinkTypesOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetAllSelectedNodesConnections(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodes,Z_Param_Out_SuperiorNodesOut,Z_Param_Out_InferiorNodesOut,Z_Param_Out_LinkTypesOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetAllNodesConnections)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SuperiorNodesOut);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_InferiorNodesOut);
		P_GET_TARRAY_REF(ENodeLinkType,Z_Param_Out_LinkTypesOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetAllNodesConnections(Z_Param_Out_QuestIn,Z_Param_Out_SuperiorNodesOut,Z_Param_Out_InferiorNodesOut,Z_Param_Out_LinkTypesOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetNodeDisableConnections)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_Node);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_DisablerNodesOut);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_DisabledNodesOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetNodeDisableConnections(Z_Param_Out_QuestIn,Z_Param_Node,Z_Param_Out_DisablerNodesOut,Z_Param_Out_DisabledNodesOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetNodeConnections)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_Node);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SuperiorNodesOut);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_InferiorNodesOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetNodeConnections(Z_Param_Out_QuestIn,Z_Param_Node,Z_Param_Out_SuperiorNodesOut,Z_Param_Out_InferiorNodesOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execFindNodeIDInNodeArray)
	{
		P_GET_TARRAY(FQuestTaskID,Z_Param_NodeIDArray);
		P_GET_STRUCT(FQuestTaskID,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::FindNodeIDInNodeArray(Z_Param_NodeIDArray,Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execChangeLinkTypeBetweenNodes)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_SuperiorNode);
		P_GET_STRUCT(FQuestTaskID,Z_Param_InferiorNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::ChangeLinkTypeBetweenNodes(Z_Param_Out_QuestIn,Z_Param_SuperiorNode,Z_Param_InferiorNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAreNodesLinked)
	{
		P_GET_STRUCT(FQuest,Z_Param_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_SuperiorNode);
		P_GET_STRUCT(FQuestTaskID,Z_Param_InferiorNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AreNodesLinked(Z_Param_QuestIn,Z_Param_SuperiorNode,Z_Param_InferiorNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execCanLinkWithDisableNode)
	{
		P_GET_STRUCT(FQuest,Z_Param_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_DisablerNode);
		P_GET_STRUCT(FQuestTaskID,Z_Param_DisabledNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::CanLinkWithDisableNode(Z_Param_QuestIn,Z_Param_DisablerNode,Z_Param_DisabledNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execCanLinkNodes)
	{
		P_GET_STRUCT(FQuest,Z_Param_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_SuperiorNode);
		P_GET_STRUCT(FQuestTaskID,Z_Param_InferiorNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::CanLinkNodes(Z_Param_QuestIn,Z_Param_SuperiorNode,Z_Param_InferiorNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execCreateNewLinkBetweenNodes)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_SuperiorNode);
		P_GET_STRUCT(FQuestTaskID,Z_Param_InferiorNode);
		P_GET_ENUM(ENodeLinkType,Z_Param_LinkType);
		P_GET_UBOOL(Z_Param_UpdateConversationIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::CreateNewLinkBetweenNodes(Z_Param_Out_QuestIn,Z_Param_SuperiorNode,Z_Param_InferiorNode,ENodeLinkType(Z_Param_LinkType),Z_Param_UpdateConversationIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execBreakAllConnectionOfNodeToConnector)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_NodeIn);
		P_GET_ENUM(ENodeConnectorType,Z_Param_ConnectorIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::BreakAllConnectionOfNodeToConnector(Z_Param_Out_QuestIn,Z_Param_NodeIn,ENodeConnectorType(Z_Param_ConnectorIn));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execBreakAllConnectionOfNode)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::BreakAllConnectionOfNode(Z_Param_Out_QuestIn,Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execBreakNodesConnection)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_SuperiorNode);
		P_GET_STRUCT(FQuestTaskID,Z_Param_InferiorNode);
		P_GET_UBOOL(Z_Param_UpdateConversationIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::BreakNodesConnection(Z_Param_Out_QuestIn,Z_Param_SuperiorNode,Z_Param_InferiorNode,Z_Param_UpdateConversationIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAddTaskOfType)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_ENUM(EQuestTaskType,Z_Param_TaskType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AddTaskOfType(Z_Param_Out_QuestIn,EQuestTaskType(Z_Param_TaskType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execClearAllConnections)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::ClearAllConnections(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execSortIDArrayDecreasing)
	{
		P_GET_TARRAY(FQuestTaskID,Z_Param_TaskIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::SortIDArrayDecreasing(Z_Param_TaskIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execRemoveMultipleTasksByID)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY(FQuestTaskID,Z_Param_TaskIDs);
		P_GET_UBOOL(Z_Param_UpdateConversationIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::RemoveMultipleTasksByID(Z_Param_Out_QuestIn,Z_Param_TaskIDs,Z_Param_UpdateConversationIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execRemoveTaskByID)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_TaskID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::RemoveTaskByID(Z_Param_Out_QuestIn,Z_Param_TaskID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetDisablerNodesOfNode)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetDisablerNodesOfNode(Z_Param_Out_QuestIn,Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetDisabledNodesOfNode)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTaskID>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetDisabledNodesOfNode(Z_Param_Out_QuestIn,Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execDestroyDisableLinkBetweenNodes)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_DisablerNodeIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_DisabledNodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::DestroyDisableLinkBetweenNodes(Z_Param_Out_QuestIn,Z_Param_DisablerNodeIn,Z_Param_DisabledNodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execCreateDisableLinkBetweenNodes)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_DisablerNodeIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_DisabledNodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::CreateDisableLinkBetweenNodes(Z_Param_Out_QuestIn,Z_Param_DisablerNodeIn,Z_Param_DisabledNodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAreQuestTasksMissingIDs)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AreQuestTasksMissingIDs(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execSetAllUniqueIDsInQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::SetAllUniqueIDsInQuest(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execIsDialogUniqueIDValid)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::IsDialogUniqueIDValid(Z_Param_DatatableIn,Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execIsQuestUniqueIDValid)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::IsQuestUniqueIDValid(Z_Param_DatatableIn,Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetDialogMaxUniqueIDInDT)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetDialogMaxUniqueIDInDT(Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestMaxUniqueIDInDT)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetQuestMaxUniqueIDInDT(Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetTaskMaxUniqueID)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_ENUM(EQuestTaskType,Z_Param_TaskType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetTaskMaxUniqueID(Z_Param_Out_QuestIn,EQuestTaskType(Z_Param_TaskType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGenerateDialogLocalizationKeys)
	{
		P_GET_STRUCT_REF(FDialog,Z_Param_Out_DialogIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialog*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GenerateDialogLocalizationKeys(Z_Param_Out_DialogIn,Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGenerateQuestLocalizationKeys)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuest*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GenerateQuestLocalizationKeys(Z_Param_Out_QuestIn,Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execHandleDialogUniqueID)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuest*)Z_Param__Result=UQuestEditorDevFunctionLibrary::HandleDialogUniqueID(Z_Param_Out_QuestIn,Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execHandleQuestUniqueID)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuest*)Z_Param__Result=UQuestEditorDevFunctionLibrary::HandleQuestUniqueID(Z_Param_Out_QuestIn,Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAddDialogRowToDT)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_PROPERTY(FNameProperty,Z_Param_InRowName);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_GET_UBOOL(Z_Param_UseAutoRowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AddDialogRowToDT(Z_Param_Out_QuestIn,Z_Param_InRowName,Z_Param_DatatableIn,Z_Param_UseAutoRowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAddQuestRowToDT)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_PROPERTY(FNameProperty,Z_Param_InRowName);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_GET_UBOOL(Z_Param_UseAutoRowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AddQuestRowToDT(Z_Param_Out_QuestIn,Z_Param_InRowName,Z_Param_DatatableIn,Z_Param_UseAutoRowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAddNPCInfoRowToDT)
	{
		P_GET_STRUCT_REF(FNPCQuestDef,Z_Param_Out_NPCInfoIn);
		P_GET_PROPERTY(FNameProperty,Z_Param_InRowName);
		P_GET_UBOOL(Z_Param_UseAutoRowName);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AddNPCInfoRowToDT(Z_Param_Out_NPCInfoIn,Z_Param_InRowName,Z_Param_UseAutoRowName,Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAddDialogsToNPC)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestRepIn);
		P_GET_PROPERTY(FNameProperty,Z_Param_NPCNameIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AddDialogsToNPC(Z_Param_Out_QuestRepIn,Z_Param_NPCNameIn,Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execAddQuestToNPC)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestRepIn);
		P_GET_PROPERTY(FNameProperty,Z_Param_NPCNameIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::AddQuestToNPC(Z_Param_Out_QuestRepIn,Z_Param_NPCNameIn,Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execSaveNPCRowToDT)
	{
		P_GET_STRUCT_REF(FNPCQuestDef,Z_Param_Out_NPCInfoIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::SaveNPCRowToDT(Z_Param_Out_NPCInfoIn,Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execSaveDialogRowToDT)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::SaveDialogRowToDT(Z_Param_Out_QuestIn,Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execSaveQuestRowToDT)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::SaveQuestRowToDT(Z_Param_Out_QuestIn,Z_Param_DatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execConvertDialogsToQuest)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_DialogDatatableIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_QuestDatatableIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::ConvertDialogsToQuest(Z_Param_DialogDatatableIn,Z_Param_QuestDatatableIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetTasksFromIDArray)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTask>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetTasksFromIDArray(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetTalkTasksFromIDArray)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTasksIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestTalkTask>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetTalkTasksFromIDArray(Z_Param_Out_QuestIn,Z_Param_Out_TalkTasksIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetRepresentingTalkTask)
	{
		P_GET_TARRAY_REF(FQuestTalkTask,Z_Param_Out_AllTalkTasksIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTalkTask*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetRepresentingTalkTask(Z_Param_Out_AllTalkTasksIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetRepresentingTask)
	{
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_AllTasksIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTask*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetRepresentingTask(Z_Param_Out_AllTasksIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetSelectionType)
	{
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_AllTasksIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_AllTalkTasksIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ENodeSelectionType*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetSelectionType(Z_Param_Out_AllTasksIn,Z_Param_Out_AllTalkTasksIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execSeparateTasksByType)
	{
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_AllTasksIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksOut);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::SeparateTasksByType(Z_Param_Out_AllTasksIn,Z_Param_Out_TasksOut,Z_Param_Out_TalkTasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execTruncateStringToLen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxLen);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestEditorDevFunctionLibrary::TruncateStringToLen(Z_Param_StringIn,Z_Param_MaxLen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetTaskIDSeparatedStrings)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_TaskIDIn);
		P_GET_UBOOL(Z_Param_UseNPCDialog);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_QuestStringOut);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TaskStringOut);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TaskTypeStringOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::GetTaskIDSeparatedStrings(Z_Param_Out_QuestIn,Z_Param_Out_TaskIDIn,Z_Param_UseNPCDialog,Z_Param_Out_QuestStringOut,Z_Param_Out_TaskStringOut,Z_Param_Out_TaskTypeStringOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestNodeSeparatedStrings)
	{
		P_GET_STRUCT(FQuestNode,Z_Param_QuestEndIn);
		P_GET_UBOOL(Z_Param_UseNPCDialog);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_QuestStringOut);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TaskStringOut);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TaskTypeStringOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::GetQuestNodeSeparatedStrings(Z_Param_QuestEndIn,Z_Param_UseNPCDialog,Z_Param_Out_QuestStringOut,Z_Param_Out_TaskStringOut,Z_Param_Out_TaskTypeStringOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetTaskIDVisualString)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_TaskIDIn);
		P_GET_UBOOL(Z_Param_UseNPCDialog);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetTaskIDVisualString(Z_Param_Out_QuestIn,Z_Param_Out_TaskIDIn,Z_Param_UseNPCDialog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestNodeVisualString)
	{
		P_GET_STRUCT(FQuestNode,Z_Param_QuestNodeIn);
		P_GET_UBOOL(Z_Param_UseNPCDialog);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetQuestNodeVisualString(Z_Param_QuestNodeIn,Z_Param_UseNPCDialog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execIsWidgetFullyVisible)
	{
		P_GET_OBJECT(UWidget,Z_Param_WidgetIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::IsWidgetFullyVisible(Z_Param_WidgetIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execIsQuestInDatatables)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestNameIn);
		P_GET_TARRAY(UDataTable*,Z_Param_DTArrayIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::IsQuestInDatatables(Z_Param_QuestNameIn,Z_Param_DTArrayIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execFindNPCInDatatables)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NPCNameIN);
		P_GET_TARRAY(UDataTable*,Z_Param_DTArrayIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNPCQuestDefRep*)Z_Param__Result=UQuestEditorDevFunctionLibrary::FindNPCInDatatables(Z_Param_NPCNameIN,Z_Param_DTArrayIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execFindDialogInDatatables)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogNameIN);
		P_GET_TARRAY(UDataTable*,Z_Param_DTArrayIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialogRep*)Z_Param__Result=UQuestEditorDevFunctionLibrary::FindDialogInDatatables(Z_Param_DialogNameIN,Z_Param_DTArrayIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execFindQuestInDatatables)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestNameIN);
		P_GET_TARRAY(UDataTable*,Z_Param_DTArrayIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestRep*)Z_Param__Result=UQuestEditorDevFunctionLibrary::FindQuestInDatatables(Z_Param_QuestNameIN,Z_Param_DTArrayIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execPrintQuestEditorDevLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestEditorDevFunctionLibrary::PrintQuestEditorDevLog(Z_Param_StringIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execIsDTofStructType)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DT);
		P_GET_OBJECT(UScriptStruct,Z_Param_DTStructIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::IsDTofStructType(Z_Param_DT,Z_Param_DTStructIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetTaskQuestEditorInfo)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UBaseQuestTask> ,Z_Param_TaskClassIn);
		P_GET_TARRAY(UDataTable*,Z_Param_TaskInfoDTsIn);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SlotTaskOut);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SlotDTOut);
		P_GET_STRUCT_REF(FQuestTaskEditorInfo,Z_Param_Out_TaskInfoOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetTaskQuestEditorInfo(Z_Param_TaskClassIn,Z_Param_TaskInfoDTsIn,Z_Param_Out_SlotTaskOut,Z_Param_Out_SlotDTOut,Z_Param_Out_TaskInfoOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execFindAllDatatablesOfStruct)
	{
		P_GET_OBJECT(UScriptStruct,Z_Param_DTStructIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDataTable*>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::FindAllDatatablesOfStruct(Z_Param_DTStructIn,Z_Param_FolderPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execFindQuestEditorReference)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseQuestEditor**)Z_Param__Result=UQuestEditorDevFunctionLibrary::FindQuestEditorReference(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetNPCsThatCanStartQuest)
	{
		P_GET_STRUCT_REF(FQuestRep,Z_Param_Out_QuestRepIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetNPCsThatCanStartQuest(Z_Param_Out_QuestRepIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execCanPerformKBAction)
	{
		P_GET_ENUM(EQuestKeyBindAction,Z_Param_ActionIn);
		P_GET_UBOOL(Z_Param_IsHierarchyIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::CanPerformKBAction(EQuestKeyBindAction(Z_Param_ActionIn),Z_Param_IsHierarchyIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetActionForKey)
	{
		P_GET_STRUCT(FInputChord,Z_Param_InputIn);
		P_GET_ENUM_REF(EQuestKeyBindAction,Z_Param_Out_ActionOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetActionForKey(Z_Param_InputIn,(EQuestKeyBindAction&)(Z_Param_Out_ActionOut));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetDefaultQuestEditorKeybinds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestEditorKeyBind>*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetDefaultQuestEditorKeybinds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetDefaultKeybindForAction)
	{
		P_GET_ENUM(EQuestKeyBindAction,Z_Param_ActionIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputChord*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetDefaultKeybindForAction(EQuestKeyBindAction(Z_Param_ActionIn));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetSettings_LineThickness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetSettings_LineThickness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetSettings_ArrowSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetSettings_ArrowSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetSettings_PreviousVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetSettings_PreviousVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetSettings_ZoomSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetSettings_ZoomSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetSettings_ArrowsSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetSettings_ArrowsSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetSettings_DetailsPanelSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetSettings_DetailsPanelSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetSettings_TalkTaskBGColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetSettings_TalkTaskBGColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetSettings_TaskBGColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetSettings_TaskBGColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestEditorDevFunctionLibrary::execGetQuestEditorSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestEditorSettings**)Z_Param__Result=UQuestEditorDevFunctionLibrary::GetQuestEditorSettings();
		P_NATIVE_END;
	}
	void UQuestEditorDevFunctionLibrary::StaticRegisterNativesUQuestEditorDevFunctionLibrary()
	{
		UClass* Class = UQuestEditorDevFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDialogRowToDT", &UQuestEditorDevFunctionLibrary::execAddDialogRowToDT },
			{ "AddDialogsToNPC", &UQuestEditorDevFunctionLibrary::execAddDialogsToNPC },
			{ "AddHierarchyOfNodeToQuest", &UQuestEditorDevFunctionLibrary::execAddHierarchyOfNodeToQuest },
			{ "AddInitialHierarchyOfQuest", &UQuestEditorDevFunctionLibrary::execAddInitialHierarchyOfQuest },
			{ "AddNPCInfoRowToDT", &UQuestEditorDevFunctionLibrary::execAddNPCInfoRowToDT },
			{ "AddQuestRowToDT", &UQuestEditorDevFunctionLibrary::execAddQuestRowToDT },
			{ "AddQuestToNPC", &UQuestEditorDevFunctionLibrary::execAddQuestToNPC },
			{ "AddTaskOfType", &UQuestEditorDevFunctionLibrary::execAddTaskOfType },
			{ "AdjustAllNodePositionsInTierByConnectedNodesInHierarchy", &UQuestEditorDevFunctionLibrary::execAdjustAllNodePositionsInTierByConnectedNodesInHierarchy },
			{ "AdjustAllTierPositionsToAvoidOverlap", &UQuestEditorDevFunctionLibrary::execAdjustAllTierPositionsToAvoidOverlap },
			{ "AdjustNodePairPositionsToAvoidOverlap", &UQuestEditorDevFunctionLibrary::execAdjustNodePairPositionsToAvoidOverlap },
			{ "AdjustNodePositionsToAvoidOverlapInTier", &UQuestEditorDevFunctionLibrary::execAdjustNodePositionsToAvoidOverlapInTier },
			{ "AreGroupOfNodesConectedToQuest", &UQuestEditorDevFunctionLibrary::execAreGroupOfNodesConectedToQuest },
			{ "AreNodeArraysEqual", &UQuestEditorDevFunctionLibrary::execAreNodeArraysEqual },
			{ "AreNodesLinked", &UQuestEditorDevFunctionLibrary::execAreNodesLinked },
			{ "AreQuestTasksMissingIDs", &UQuestEditorDevFunctionLibrary::execAreQuestTasksMissingIDs },
			{ "BreakAllConnectionOfNode", &UQuestEditorDevFunctionLibrary::execBreakAllConnectionOfNode },
			{ "BreakAllConnectionOfNodeToConnector", &UQuestEditorDevFunctionLibrary::execBreakAllConnectionOfNodeToConnector },
			{ "BreakNodesConnection", &UQuestEditorDevFunctionLibrary::execBreakNodesConnection },
			{ "CanLinkNodes", &UQuestEditorDevFunctionLibrary::execCanLinkNodes },
			{ "CanLinkWithDisableNode", &UQuestEditorDevFunctionLibrary::execCanLinkWithDisableNode },
			{ "CanNodeStartSwapConnection", &UQuestEditorDevFunctionLibrary::execCanNodeStartSwapConnection },
			{ "CanPerformKBAction", &UQuestEditorDevFunctionLibrary::execCanPerformKBAction },
			{ "ChangeLinkTypeBetweenNodes", &UQuestEditorDevFunctionLibrary::execChangeLinkTypeBetweenNodes },
			{ "ClearAllConnections", &UQuestEditorDevFunctionLibrary::execClearAllConnections },
			{ "CollapseXTiers", &UQuestEditorDevFunctionLibrary::execCollapseXTiers },
			{ "ConditionalTaskIsLinkedToQuest", &UQuestEditorDevFunctionLibrary::execConditionalTaskIsLinkedToQuest },
			{ "ConvertCenterPositionToQEPosition", &UQuestEditorDevFunctionLibrary::execConvertCenterPositionToQEPosition },
			{ "ConvertDialogsToQuest", &UQuestEditorDevFunctionLibrary::execConvertDialogsToQuest },
			{ "ConvertQuestRepToHierarchyTask", &UQuestEditorDevFunctionLibrary::execConvertQuestRepToHierarchyTask },
			{ "CreateDirectStartHierarchyTask", &UQuestEditorDevFunctionLibrary::execCreateDirectStartHierarchyTask },
			{ "CreateDisableLinkBetweenNodes", &UQuestEditorDevFunctionLibrary::execCreateDisableLinkBetweenNodes },
			{ "CreateNewLinkBetweenNodes", &UQuestEditorDevFunctionLibrary::execCreateNewLinkBetweenNodes },
			{ "DestroyDisableLinkBetweenNodes", &UQuestEditorDevFunctionLibrary::execDestroyDisableLinkBetweenNodes },
			{ "FilterRepeatedNodesInHierarchy", &UQuestEditorDevFunctionLibrary::execFilterRepeatedNodesInHierarchy },
			{ "FindAllDatatablesOfStruct", &UQuestEditorDevFunctionLibrary::execFindAllDatatablesOfStruct },
			{ "FindDialogInDatatables", &UQuestEditorDevFunctionLibrary::execFindDialogInDatatables },
			{ "FindNodeIDInNodeArray", &UQuestEditorDevFunctionLibrary::execFindNodeIDInNodeArray },
			{ "FindNPCInDatatables", &UQuestEditorDevFunctionLibrary::execFindNPCInDatatables },
			{ "FindQuestEditorReference", &UQuestEditorDevFunctionLibrary::execFindQuestEditorReference },
			{ "FindQuestInDatatables", &UQuestEditorDevFunctionLibrary::execFindQuestInDatatables },
			{ "GenerateDialogLocalizationKeys", &UQuestEditorDevFunctionLibrary::execGenerateDialogLocalizationKeys },
			{ "GenerateQuestLocalizationKeys", &UQuestEditorDevFunctionLibrary::execGenerateQuestLocalizationKeys },
			{ "GetActionForKey", &UQuestEditorDevFunctionLibrary::execGetActionForKey },
			{ "GetAllInferiorQuestsOfQuestRep", &UQuestEditorDevFunctionLibrary::execGetAllInferiorQuestsOfQuestRep },
			{ "GetAllNodesConnections", &UQuestEditorDevFunctionLibrary::execGetAllNodesConnections },
			{ "GetAllNodesDisablesConnections", &UQuestEditorDevFunctionLibrary::execGetAllNodesDisablesConnections },
			{ "GetAllNodesOfSameTaskType", &UQuestEditorDevFunctionLibrary::execGetAllNodesOfSameTaskType },
			{ "GetAllQuestsInDTForNPC", &UQuestEditorDevFunctionLibrary::execGetAllQuestsInDTForNPC },
			{ "GetAllSelectedNodesConnections", &UQuestEditorDevFunctionLibrary::execGetAllSelectedNodesConnections },
			{ "GetAllSuperiorQuestsOfQuest", &UQuestEditorDevFunctionLibrary::execGetAllSuperiorQuestsOfQuest },
			{ "GetAmountOfNodesInHierarchyTier", &UQuestEditorDevFunctionLibrary::execGetAmountOfNodesInHierarchyTier },
			{ "GetDefaultKeybindForAction", &UQuestEditorDevFunctionLibrary::execGetDefaultKeybindForAction },
			{ "GetDefaultQuestEditorKeybinds", &UQuestEditorDevFunctionLibrary::execGetDefaultQuestEditorKeybinds },
			{ "GetDialogMaxUniqueIDInDT", &UQuestEditorDevFunctionLibrary::execGetDialogMaxUniqueIDInDT },
			{ "GetDisabledNodesOfNode", &UQuestEditorDevFunctionLibrary::execGetDisabledNodesOfNode },
			{ "GetDisablerNodesOfNode", &UQuestEditorDevFunctionLibrary::execGetDisablerNodesOfNode },
			{ "GetHierarchyAdjustOffset", &UQuestEditorDevFunctionLibrary::execGetHierarchyAdjustOffset },
			{ "GetInferiorNodesOfNodeWithImmediateHierarchyTier", &UQuestEditorDevFunctionLibrary::execGetInferiorNodesOfNodeWithImmediateHierarchyTier },
			{ "GetInitialPseudoTasksOfQuest", &UQuestEditorDevFunctionLibrary::execGetInitialPseudoTasksOfQuest },
			{ "GetLinkTypeBetweenConnectedQuests", &UQuestEditorDevFunctionLibrary::execGetLinkTypeBetweenConnectedQuests },
			{ "GetMaxAmountOfNodesInHierarchyTiers", &UQuestEditorDevFunctionLibrary::execGetMaxAmountOfNodesInHierarchyTiers },
			{ "GetMaxHierarchyYTier", &UQuestEditorDevFunctionLibrary::execGetMaxHierarchyYTier },
			{ "GetMinHierarchyYTier", &UQuestEditorDevFunctionLibrary::execGetMinHierarchyYTier },
			{ "GetNodeCenterPosition", &UQuestEditorDevFunctionLibrary::execGetNodeCenterPosition },
			{ "GetNodeConnections", &UQuestEditorDevFunctionLibrary::execGetNodeConnections },
			{ "GetNodeDisableConnections", &UQuestEditorDevFunctionLibrary::execGetNodeDisableConnections },
			{ "GetNodeGridTier", &UQuestEditorDevFunctionLibrary::execGetNodeGridTier },
			{ "GetNodePosition", &UQuestEditorDevFunctionLibrary::execGetNodePosition },
			{ "GetNodesAverageXPositionInHierarchy", &UQuestEditorDevFunctionLibrary::execGetNodesAverageXPositionInHierarchy },
			{ "GetNodesIDsByTierInHierarchy", &UQuestEditorDevFunctionLibrary::execGetNodesIDsByTierInHierarchy },
			{ "GetNodesInTierOverlappingPosition", &UQuestEditorDevFunctionLibrary::execGetNodesInTierOverlappingPosition },
			{ "GetNPCsThatCanStartQuest", &UQuestEditorDevFunctionLibrary::execGetNPCsThatCanStartQuest },
			{ "GetPositionValue", &UQuestEditorDevFunctionLibrary::execGetPositionValue },
			{ "GetQuestEditorSettings", &UQuestEditorDevFunctionLibrary::execGetQuestEditorSettings },
			{ "GetQuestEndNodes", &UQuestEditorDevFunctionLibrary::execGetQuestEndNodes },
			{ "GetQuestHierarchy", &UQuestEditorDevFunctionLibrary::execGetQuestHierarchy },
			{ "GetQuestMaxUniqueIDInDT", &UQuestEditorDevFunctionLibrary::execGetQuestMaxUniqueIDInDT },
			{ "GetQuestNodeSeparatedStrings", &UQuestEditorDevFunctionLibrary::execGetQuestNodeSeparatedStrings },
			{ "GetQuestNodeVisualString", &UQuestEditorDevFunctionLibrary::execGetQuestNodeVisualString },
			{ "GetQuestNonConditionalStartNodes", &UQuestEditorDevFunctionLibrary::execGetQuestNonConditionalStartNodes },
			{ "GetQuestPseudoStartNodes", &UQuestEditorDevFunctionLibrary::execGetQuestPseudoStartNodes },
			{ "GetQuestsGameWorld", &UQuestEditorDevFunctionLibrary::execGetQuestsGameWorld },
			{ "GetQuestStartNodes", &UQuestEditorDevFunctionLibrary::execGetQuestStartNodes },
			{ "GetQuestStartNPCs", &UQuestEditorDevFunctionLibrary::execGetQuestStartNPCs },
			{ "GetRepresentingTalkTask", &UQuestEditorDevFunctionLibrary::execGetRepresentingTalkTask },
			{ "GetRepresentingTask", &UQuestEditorDevFunctionLibrary::execGetRepresentingTask },
			{ "GetSelectionType", &UQuestEditorDevFunctionLibrary::execGetSelectionType },
			{ "GetSettings_ArrowSize", &UQuestEditorDevFunctionLibrary::execGetSettings_ArrowSize },
			{ "GetSettings_ArrowsSensitivity", &UQuestEditorDevFunctionLibrary::execGetSettings_ArrowsSensitivity },
			{ "GetSettings_DetailsPanelSize", &UQuestEditorDevFunctionLibrary::execGetSettings_DetailsPanelSize },
			{ "GetSettings_LineThickness", &UQuestEditorDevFunctionLibrary::execGetSettings_LineThickness },
			{ "GetSettings_PreviousVersion", &UQuestEditorDevFunctionLibrary::execGetSettings_PreviousVersion },
			{ "GetSettings_TalkTaskBGColor", &UQuestEditorDevFunctionLibrary::execGetSettings_TalkTaskBGColor },
			{ "GetSettings_TaskBGColor", &UQuestEditorDevFunctionLibrary::execGetSettings_TaskBGColor },
			{ "GetSettings_ZoomSensitivity", &UQuestEditorDevFunctionLibrary::execGetSettings_ZoomSensitivity },
			{ "GetStartingPseudoTalkTaskForNPC", &UQuestEditorDevFunctionLibrary::execGetStartingPseudoTalkTaskForNPC },
			{ "GetStartingTalkTaskForNPC", &UQuestEditorDevFunctionLibrary::execGetStartingTalkTaskForNPC },
			{ "GetSuperiorNodesOfNodeWithImmediateHierarchyTier", &UQuestEditorDevFunctionLibrary::execGetSuperiorNodesOfNodeWithImmediateHierarchyTier },
			{ "GetTalkTasksFromIDArray", &UQuestEditorDevFunctionLibrary::execGetTalkTasksFromIDArray },
			{ "GetTaskIDSeparatedStrings", &UQuestEditorDevFunctionLibrary::execGetTaskIDSeparatedStrings },
			{ "GetTaskIDVisualString", &UQuestEditorDevFunctionLibrary::execGetTaskIDVisualString },
			{ "GetTaskMaxUniqueID", &UQuestEditorDevFunctionLibrary::execGetTaskMaxUniqueID },
			{ "GetTaskQuestEditorInfo", &UQuestEditorDevFunctionLibrary::execGetTaskQuestEditorInfo },
			{ "GetTasksFromIDArray", &UQuestEditorDevFunctionLibrary::execGetTasksFromIDArray },
			{ "HandleDialogUniqueID", &UQuestEditorDevFunctionLibrary::execHandleDialogUniqueID },
			{ "HandleQuestUniqueID", &UQuestEditorDevFunctionLibrary::execHandleQuestUniqueID },
			{ "IsDialogUniqueIDValid", &UQuestEditorDevFunctionLibrary::execIsDialogUniqueIDValid },
			{ "IsDTofStructType", &UQuestEditorDevFunctionLibrary::execIsDTofStructType },
			{ "IsNodeNearPositionInHierarchy", &UQuestEditorDevFunctionLibrary::execIsNodeNearPositionInHierarchy },
			{ "IsQuestInDatatables", &UQuestEditorDevFunctionLibrary::execIsQuestInDatatables },
			{ "IsQuestUniqueIDValid", &UQuestEditorDevFunctionLibrary::execIsQuestUniqueIDValid },
			{ "IsWidgetFullyVisible", &UQuestEditorDevFunctionLibrary::execIsWidgetFullyVisible },
			{ "NPCCanGiveQuest", &UQuestEditorDevFunctionLibrary::execNPCCanGiveQuest },
			{ "PrintQuestEditorDevLog", &UQuestEditorDevFunctionLibrary::execPrintQuestEditorDevLog },
			{ "PropagateQuestsInHierarchy", &UQuestEditorDevFunctionLibrary::execPropagateQuestsInHierarchy },
			{ "QuestRequiresDirectStartNode", &UQuestEditorDevFunctionLibrary::execQuestRequiresDirectStartNode },
			{ "RemoveMultipleTasksByID", &UQuestEditorDevFunctionLibrary::execRemoveMultipleTasksByID },
			{ "RemoveTaskByID", &UQuestEditorDevFunctionLibrary::execRemoveTaskByID },
			{ "SaveDialogRowToDT", &UQuestEditorDevFunctionLibrary::execSaveDialogRowToDT },
			{ "SaveNPCRowToDT", &UQuestEditorDevFunctionLibrary::execSaveNPCRowToDT },
			{ "SaveQuestRowToDT", &UQuestEditorDevFunctionLibrary::execSaveQuestRowToDT },
			{ "SeparateTasksByType", &UQuestEditorDevFunctionLibrary::execSeparateTasksByType },
			{ "SetAllNodePositionsInHierarchy", &UQuestEditorDevFunctionLibrary::execSetAllNodePositionsInHierarchy },
			{ "SetAllUniqueIDsInQuest", &UQuestEditorDevFunctionLibrary::execSetAllUniqueIDsInQuest },
			{ "SetNodePositionByTierInHierarchy", &UQuestEditorDevFunctionLibrary::execSetNodePositionByTierInHierarchy },
			{ "SortIDArrayDecreasing", &UQuestEditorDevFunctionLibrary::execSortIDArrayDecreasing },
			{ "SortNodesByEditorPositiong", &UQuestEditorDevFunctionLibrary::execSortNodesByEditorPositiong },
			{ "SwapNodeConnections", &UQuestEditorDevFunctionLibrary::execSwapNodeConnections },
			{ "TruncateStringToLen", &UQuestEditorDevFunctionLibrary::execTruncateStringToLen },
			{ "UpdateAllConversationsIDs", &UQuestEditorDevFunctionLibrary::execUpdateAllConversationsIDs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAddDialogRowToDT_Parms
		{
			FQuest QuestIn;
			FName InRowName;
			TSoftObjectPtr<UDataTable> DatatableIn;
			bool UseAutoRowName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InRowName;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static void NewProp_UseAutoRowName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAutoRowName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddDialogRowToDT_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_InRowName = { "InRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddDialogRowToDT_Parms, InRowName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddDialogRowToDT_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_UseAutoRowName_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAddDialogRowToDT_Parms*)Obj)->UseAutoRowName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_UseAutoRowName = { "UseAutoRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAddDialogRowToDT_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_UseAutoRowName_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAddDialogRowToDT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAddDialogRowToDT_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_InRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_UseAutoRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Adds a new dialog row to a dialog DT*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Adds a new dialog row to a dialog DT" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AddDialogRowToDT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::QuestEditorDevFunctionLibrary_eventAddDialogRowToDT_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAddDialogsToNPC_Parms
		{
			FQuestRep QuestRepIn;
			FName NPCNameIn;
			TSoftObjectPtr<UDataTable> DatatableIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRepIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRepIn;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NPCNameIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_QuestRepIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_QuestRepIn = { "QuestRepIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddDialogsToNPC_Parms, QuestRepIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_QuestRepIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_QuestRepIn_MetaData)) }; // 2639361420
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_NPCNameIn = { "NPCNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddDialogsToNPC_Parms, NPCNameIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddDialogsToNPC_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAddDialogsToNPC_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAddDialogsToNPC_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_QuestRepIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_NPCNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Adds the dialog to the npc DT info inventory.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Adds the dialog to the npc DT info inventory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AddDialogsToNPC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::QuestEditorDevFunctionLibrary_eventAddDialogsToNPC_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAddHierarchyOfNodeToQuest_Parms
		{
			FQuest HierarchyQuestIn;
			FQuestTaskID QuestRepNodeIn;
			int32 SuperiorNodeTier;
			bool PropagateUp;
			TArray<UDataTable*> DatatablesIn;
			TArray<FQuestTaskID> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRepNodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRepNodeIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SuperiorNodeTier;
		static void NewProp_PropagateUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PropagateUp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DatatablesIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatatablesIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddHierarchyOfNodeToQuest_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_QuestRepNodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_QuestRepNodeIn = { "QuestRepNodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddHierarchyOfNodeToQuest_Parms, QuestRepNodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_QuestRepNodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_QuestRepNodeIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_SuperiorNodeTier = { "SuperiorNodeTier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddHierarchyOfNodeToQuest_Parms, SuperiorNodeTier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_PropagateUp_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAddHierarchyOfNodeToQuest_Parms*)Obj)->PropagateUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_PropagateUp = { "PropagateUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAddHierarchyOfNodeToQuest_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_PropagateUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_DatatablesIn_Inner = { "DatatablesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_DatatablesIn = { "DatatablesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddHierarchyOfNodeToQuest_Parms, DatatablesIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddHierarchyOfNodeToQuest_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_QuestRepNodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_SuperiorNodeTier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_PropagateUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_DatatablesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_DatatablesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09""For a hierarchy quest, adds the superior nodes of a node to the tasks array and links them.\n\x09*\x09""Adjusts positions and links automatically for presenting in the editor based on the node tier.\n\x09*\x09Returns task IDs off added quests.\n\x09*\x09@Param HierarchyQuestIn Partial Hierarchy Quest.\n\x09*\x09@Param QuestRepNodeIn Task ID of the node that represents a quest in the hierarchy.\n\x09*\x09@Param SuperiorNodeTier Tier of the node, 0 represents the first Quest and it goes up for each superior node layer added.\n\x09*\x09@Param PropagateUp If true propagates for superior quests, if not for inferior quests.\n\x09*\x09@Param DatatablesIn Quest datatables of the system. Used for propagating down.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       For a hierarchy quest, adds the superior nodes of a node to the tasks array and links them.\n*       Adjusts positions and links automatically for presenting in the editor based on the node tier.\n*       Returns task IDs off added quests.\n*       @Param HierarchyQuestIn Partial Hierarchy Quest.\n*       @Param QuestRepNodeIn Task ID of the node that represents a quest in the hierarchy.\n*       @Param SuperiorNodeTier Tier of the node, 0 represents the first Quest and it goes up for each superior node layer added.\n*       @Param PropagateUp If true propagates for superior quests, if not for inferior quests.\n*       @Param DatatablesIn Quest datatables of the system. Used for propagating down." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AddHierarchyOfNodeToQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::QuestEditorDevFunctionLibrary_eventAddHierarchyOfNodeToQuest_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAddInitialHierarchyOfQuest_Parms
		{
			FQuest HierarchyQuestIn;
			FQuestRep QuestRepIn;
			TArray<UDataTable*> DatatablesIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRepIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRepIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DatatablesIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatatablesIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddInitialHierarchyOfQuest_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_QuestRepIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_QuestRepIn = { "QuestRepIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddInitialHierarchyOfQuest_Parms, QuestRepIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_QuestRepIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_QuestRepIn_MetaData)) }; // 2639361420
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_DatatablesIn_Inner = { "DatatablesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_DatatablesIn = { "DatatablesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddInitialHierarchyOfQuest_Parms, DatatablesIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_QuestRepIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_DatatablesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::NewProp_DatatablesIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09""For a hierarchy quest, adds the inferior nodes and the quest itself to the QuestHierarchy.\n\x09*\x09""Adjusts positions and links automatically for presenting in the editor.\n\x09*\x09""Also sets additional variables of quest.\n\x09*\x09@Param HierarchyQuestIn Initial Hierarchy Quest. Must be Zeroed Quest.\n\x09*\x09@Param QuestRepIn Initial quest in the hierarchy.\n\x09*\x09@Param SuperiorNodeTier Tier of the node, 0 represents the first Quest and it goes up for each superior node layer added.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       For a hierarchy quest, adds the inferior nodes and the quest itself to the QuestHierarchy.\n*       Adjusts positions and links automatically for presenting in the editor.\n*       Also sets additional variables of quest.\n*       @Param HierarchyQuestIn Initial Hierarchy Quest. Must be Zeroed Quest.\n*       @Param QuestRepIn Initial quest in the hierarchy.\n*       @Param SuperiorNodeTier Tier of the node, 0 represents the first Quest and it goes up for each superior node layer added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AddInitialHierarchyOfQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::QuestEditorDevFunctionLibrary_eventAddInitialHierarchyOfQuest_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAddNPCInfoRowToDT_Parms
		{
			FNPCQuestDef NPCInfoIn;
			FName InRowName;
			bool UseAutoRowName;
			TSoftObjectPtr<UDataTable> DatatableIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCInfoIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCInfoIn;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InRowName;
		static void NewProp_UseAutoRowName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAutoRowName;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_NPCInfoIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_NPCInfoIn = { "NPCInfoIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddNPCInfoRowToDT_Parms, NPCInfoIn), Z_Construct_UScriptStruct_FNPCQuestDef, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_NPCInfoIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_NPCInfoIn_MetaData)) }; // 2955034993
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_InRowName = { "InRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddNPCInfoRowToDT_Parms, InRowName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_UseAutoRowName_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAddNPCInfoRowToDT_Parms*)Obj)->UseAutoRowName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_UseAutoRowName = { "UseAutoRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAddNPCInfoRowToDT_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_UseAutoRowName_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddNPCInfoRowToDT_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAddNPCInfoRowToDT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAddNPCInfoRowToDT_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_NPCInfoIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_InRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_UseAutoRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Adds New NPC info row*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Adds New NPC info row" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AddNPCInfoRowToDT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::QuestEditorDevFunctionLibrary_eventAddNPCInfoRowToDT_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAddQuestRowToDT_Parms
		{
			FQuest QuestIn;
			FName InRowName;
			TSoftObjectPtr<UDataTable> DatatableIn;
			bool UseAutoRowName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InRowName;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static void NewProp_UseAutoRowName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAutoRowName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddQuestRowToDT_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_InRowName = { "InRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddQuestRowToDT_Parms, InRowName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddQuestRowToDT_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_UseAutoRowName_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAddQuestRowToDT_Parms*)Obj)->UseAutoRowName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_UseAutoRowName = { "UseAutoRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAddQuestRowToDT_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_UseAutoRowName_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAddQuestRowToDT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAddQuestRowToDT_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_InRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_UseAutoRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Adds a new quest row to a quest DT*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Adds a new quest row to a quest DT" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AddQuestRowToDT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::QuestEditorDevFunctionLibrary_eventAddQuestRowToDT_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAddQuestToNPC_Parms
		{
			FQuestRep QuestRepIn;
			FName NPCNameIn;
			TSoftObjectPtr<UDataTable> DatatableIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRepIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRepIn;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NPCNameIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_QuestRepIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_QuestRepIn = { "QuestRepIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddQuestToNPC_Parms, QuestRepIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_QuestRepIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_QuestRepIn_MetaData)) }; // 2639361420
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_NPCNameIn = { "NPCNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddQuestToNPC_Parms, NPCNameIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddQuestToNPC_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAddQuestToNPC_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAddQuestToNPC_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_QuestRepIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_NPCNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Adds the quest to the npc DT info inventory*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Adds the quest to the npc DT info inventory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AddQuestToNPC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::QuestEditorDevFunctionLibrary_eventAddQuestToNPC_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAddTaskOfType_Parms
		{
			FQuest QuestIn;
			EQuestTaskType TaskType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TaskType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddTaskOfType_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::NewProp_TaskType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::NewProp_TaskType = { "TaskType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddTaskOfType_Parms, TaskType), Z_Construct_UEnum_QuestEditor_EQuestTaskType, METADATA_PARAMS(nullptr, 0) }; // 1742157387
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAddTaskOfType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::NewProp_TaskType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::NewProp_TaskType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Add a task of type to quest*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Add a task of type to quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AddTaskOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::QuestEditorDevFunctionLibrary_eventAddTaskOfType_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Parms
		{
			FQuest HierarchyQuestIn;
			int32 TierIn;
			bool UseInferiorNodes;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TierIn;
		static void NewProp_UseInferiorNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseInferiorNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::NewProp_TierIn = { "TierIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Parms, TierIn), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::NewProp_UseInferiorNodes_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Parms*)Obj)->UseInferiorNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::NewProp_UseInferiorNodes = { "UseInferiorNodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::NewProp_UseInferiorNodes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::NewProp_TierIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::NewProp_UseInferiorNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Try to adjust node positions based on the position of the inferior or superior nodes.\n\x09*\x09@Param UseInferiorNodes If true, will use inferior nodes, if false is gonna use superior nodes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Try to adjust node positions based on the position of the inferior or superior nodes.\n@Param UseInferiorNodes If true, will use inferior nodes, if false is gonna use superior nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AdjustAllNodePositionsInTierByConnectedNodesInHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::QuestEditorDevFunctionLibrary_eventAdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAdjustAllTierPositionsToAvoidOverlap_Parms
		{
			FQuest HierarchyQuestIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAdjustAllTierPositionsToAvoidOverlap_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::NewProp_HierarchyQuestIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Moves the nodes untill there is no overlap in X for all tiers of quest.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Moves the nodes untill there is no overlap in X for all tiers of quest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AdjustAllTierPositionsToAvoidOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::QuestEditorDevFunctionLibrary_eventAdjustAllTierPositionsToAvoidOverlap_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAdjustNodePairPositionsToAvoidOverlap_Parms
		{
			FQuest HierarchyQuestIn;
			TArray<int32> NodePairIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodePairIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodePairIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAdjustNodePairPositionsToAvoidOverlap_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::NewProp_NodePairIn_Inner = { "NodePairIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::NewProp_NodePairIn = { "NodePairIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAdjustNodePairPositionsToAvoidOverlap_Parms, NodePairIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::NewProp_NodePairIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::NewProp_NodePairIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Moves the nodes untill there is no overlap in X for a particular tier.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Moves the nodes untill there is no overlap in X for a particular tier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AdjustNodePairPositionsToAvoidOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::QuestEditorDevFunctionLibrary_eventAdjustNodePairPositionsToAvoidOverlap_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAdjustNodePositionsToAvoidOverlapInTier_Parms
		{
			FQuest HierarchyQuestIn;
			int32 TierIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TierIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAdjustNodePositionsToAvoidOverlapInTier_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::NewProp_TierIn = { "TierIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAdjustNodePositionsToAvoidOverlapInTier_Parms, TierIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::NewProp_TierIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Moves the nodes untill there is no overlap in X for a particular tier.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Moves the nodes untill there is no overlap in X for a particular tier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AdjustNodePositionsToAvoidOverlapInTier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::QuestEditorDevFunctionLibrary_eventAdjustNodePositionsToAvoidOverlapInTier_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAreGroupOfNodesConectedToQuest_Parms
		{
			FQuestRep SuperiorQuestIn;
			FQuestRep InferiorQuestIn;
			TArray<FQuestTaskLink> NodeLinksIn;
			ENodeLinkType LinkTypeOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperiorQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorQuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InferiorQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorQuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeLinksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeLinksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeLinksIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkTypeOut_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkTypeOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_SuperiorQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_SuperiorQuestIn = { "SuperiorQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAreGroupOfNodesConectedToQuest_Parms, SuperiorQuestIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_SuperiorQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_SuperiorQuestIn_MetaData)) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_InferiorQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_InferiorQuestIn = { "InferiorQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAreGroupOfNodesConectedToQuest_Parms, InferiorQuestIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_InferiorQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_InferiorQuestIn_MetaData)) }; // 2639361420
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_NodeLinksIn_Inner = { "NodeLinksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskLink, METADATA_PARAMS(nullptr, 0) }; // 3937065984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_NodeLinksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_NodeLinksIn = { "NodeLinksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAreGroupOfNodesConectedToQuest_Parms, NodeLinksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_NodeLinksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_NodeLinksIn_MetaData)) }; // 3937065984
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_LinkTypeOut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_LinkTypeOut = { "LinkTypeOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAreGroupOfNodesConectedToQuest_Parms, LinkTypeOut), Z_Construct_UEnum_QuestEditor_ENodeLinkType, METADATA_PARAMS(nullptr, 0) }; // 4219667413
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAreGroupOfNodesConectedToQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAreGroupOfNodesConectedToQuest_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_SuperiorQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_InferiorQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_NodeLinksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_NodeLinksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_LinkTypeOut_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_LinkTypeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09Given a group of node links that are all start nodes and connected to a single Pseudo start, determines if this pack of nodes is connected to the Superior Quest\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       Given a group of node links that are all start nodes and connected to a single Pseudo start, determines if this pack of nodes is connected to the Superior Quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AreGroupOfNodesConectedToQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::QuestEditorDevFunctionLibrary_eventAreGroupOfNodesConectedToQuest_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAreNodeArraysEqual_Parms
		{
			TArray<FQuestTaskID> NodesA;
			TArray<FQuestTaskID> NodesB;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesA_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesA_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesB_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesB_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesA_Inner = { "NodesA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesA = { "NodesA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAreNodeArraysEqual_Parms, NodesA), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesA_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesB_Inner = { "NodesB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesB = { "NodesB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAreNodeArraysEqual_Parms, NodesB), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesB_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAreNodeArraysEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAreNodeArraysEqual_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesA_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesB_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_NodesB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Compares 2 arrays of nodes and determines if they contain the same nodes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Compares 2 arrays of nodes and determines if they contain the same nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AreNodeArraysEqual", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::QuestEditorDevFunctionLibrary_eventAreNodeArraysEqual_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAreNodesLinked_Parms
		{
			FQuest QuestIn;
			FQuestTaskID SuperiorNode;
			FQuestTaskID InferiorNode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAreNodesLinked_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::NewProp_SuperiorNode = { "SuperiorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAreNodesLinked_Parms, SuperiorNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::NewProp_InferiorNode = { "InferiorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAreNodesLinked_Parms, InferiorNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAreNodesLinked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAreNodesLinked_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::NewProp_SuperiorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::NewProp_InferiorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Determines if a node conection already exist between two nodes.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determines if a node conection already exist between two nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AreNodesLinked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::QuestEditorDevFunctionLibrary_eventAreNodesLinked_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventAreQuestTasksMissingIDs_Parms
		{
			FQuest QuestIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventAreQuestTasksMissingIDs_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventAreQuestTasksMissingIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventAreQuestTasksMissingIDs_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Determines if there is at least a task that needs a new ID*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determines if there is at least a task that needs a new ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "AreQuestTasksMissingIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::QuestEditorDevFunctionLibrary_eventAreQuestTasksMissingIDs_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNode_Parms
		{
			FQuest QuestIn;
			FQuestTaskID Node;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNode_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNode_Parms, Node), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNode_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\x09\n\x09*\x09""Breaks all node conections of a tasks\n\x09*\x09""Does not remove disable connections\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Breaks all node conections of a tasks\nDoes not remove disable connections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "BreakAllConnectionOfNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNode_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNodeToConnector_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			ENodeConnectorType ConnectorIn;
			TArray<FQuestTaskID> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectorIn_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectorIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNodeToConnector_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNodeToConnector_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_ConnectorIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_ConnectorIn = { "ConnectorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNodeToConnector_Parms, ConnectorIn), Z_Construct_UEnum_QuestEditor_ENodeConnectorType, METADATA_PARAMS(nullptr, 0) }; // 2123307039
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNodeToConnector_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_ConnectorIn_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_ConnectorIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Breaks all node conections of a tasks in a particular connector.\n\x09*\x09Returns all modified nodes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Breaks all node conections of a tasks in a particular connector.\nReturns all modified nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "BreakAllConnectionOfNodeToConnector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::QuestEditorDevFunctionLibrary_eventBreakAllConnectionOfNodeToConnector_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventBreakNodesConnection_Parms
		{
			FQuest QuestIn;
			FQuestTaskID SuperiorNode;
			FQuestTaskID InferiorNode;
			bool UpdateConversationIDs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorNode;
		static void NewProp_UpdateConversationIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateConversationIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventBreakNodesConnection_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_SuperiorNode = { "SuperiorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventBreakNodesConnection_Parms, SuperiorNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_InferiorNode = { "InferiorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventBreakNodesConnection_Parms, InferiorNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_UpdateConversationIDs_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventBreakNodesConnection_Parms*)Obj)->UpdateConversationIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_UpdateConversationIDs = { "UpdateConversationIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventBreakNodesConnection_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_UpdateConversationIDs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventBreakNodesConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventBreakNodesConnection_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_SuperiorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_InferiorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_UpdateConversationIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Breaks a node conection between tasks*/" },
		{ "CPP_Default_UpdateConversationIDs", "false" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Breaks a node conection between tasks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "BreakNodesConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::QuestEditorDevFunctionLibrary_eventBreakNodesConnection_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventCanLinkNodes_Parms
		{
			FQuest QuestIn;
			FQuestTaskID SuperiorNode;
			FQuestTaskID InferiorNode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCanLinkNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::NewProp_SuperiorNode = { "SuperiorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCanLinkNodes_Parms, SuperiorNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::NewProp_InferiorNode = { "InferiorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCanLinkNodes_Parms, InferiorNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventCanLinkNodes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventCanLinkNodes_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::NewProp_SuperiorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::NewProp_InferiorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Determines if a node conection can be made.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determines if a node conection can be made." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "CanLinkNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::QuestEditorDevFunctionLibrary_eventCanLinkNodes_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventCanLinkWithDisableNode_Parms
		{
			FQuest QuestIn;
			FQuestTaskID DisablerNode;
			FQuestTaskID DisabledNode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisablerNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCanLinkWithDisableNode_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::NewProp_DisablerNode = { "DisablerNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCanLinkWithDisableNode_Parms, DisablerNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::NewProp_DisabledNode = { "DisabledNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCanLinkWithDisableNode_Parms, DisabledNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventCanLinkWithDisableNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventCanLinkWithDisableNode_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::NewProp_DisablerNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::NewProp_DisabledNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Determines if a disable node conection can be made.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determines if a disable node conection can be made." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "CanLinkWithDisableNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::QuestEditorDevFunctionLibrary_eventCanLinkWithDisableNode_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventCanNodeStartSwapConnection_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			ENodeConnectorType ConnectorIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectorIn_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectorIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCanNodeStartSwapConnection_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCanNodeStartSwapConnection_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_ConnectorIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_ConnectorIn = { "ConnectorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCanNodeStartSwapConnection_Parms, ConnectorIn), Z_Construct_UEnum_QuestEditor_ENodeConnectorType, METADATA_PARAMS(nullptr, 0) }; // 2123307039
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventCanNodeStartSwapConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventCanNodeStartSwapConnection_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_ConnectorIn_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_ConnectorIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Determines if a node can start a swap connection\n\x09*\x09Returns pairs of nodes. Start and ends of node link.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determines if a node can start a swap connection\nReturns pairs of nodes. Start and ends of node link." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "CanNodeStartSwapConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::QuestEditorDevFunctionLibrary_eventCanNodeStartSwapConnection_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventCanPerformKBAction_Parms
		{
			EQuestKeyBindAction ActionIn;
			bool IsHierarchyIn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionIn_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionIn;
		static void NewProp_IsHierarchyIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHierarchyIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_ActionIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_ActionIn = { "ActionIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCanPerformKBAction_Parms, ActionIn), Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction, METADATA_PARAMS(nullptr, 0) }; // 2005418099
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_IsHierarchyIn_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventCanPerformKBAction_Parms*)Obj)->IsHierarchyIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_IsHierarchyIn = { "IsHierarchyIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventCanPerformKBAction_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_IsHierarchyIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventCanPerformKBAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventCanPerformKBAction_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_ActionIn_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_ActionIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_IsHierarchyIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Editor Key Binds" },
		{ "Comment", "/**\n\x09*\x09""Determines if the action can be performed in KB with the current modes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determines if the action can be performed in KB with the current modes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "CanPerformKBAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::QuestEditorDevFunctionLibrary_eventCanPerformKBAction_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventChangeLinkTypeBetweenNodes_Parms
		{
			FQuest QuestIn;
			FQuestTaskID SuperiorNode;
			FQuestTaskID InferiorNode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventChangeLinkTypeBetweenNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::NewProp_SuperiorNode = { "SuperiorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventChangeLinkTypeBetweenNodes_Parms, SuperiorNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::NewProp_InferiorNode = { "InferiorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventChangeLinkTypeBetweenNodes_Parms, InferiorNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventChangeLinkTypeBetweenNodes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventChangeLinkTypeBetweenNodes_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::NewProp_SuperiorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::NewProp_InferiorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Changes the link type of two nodes.\n\x09*\x09""Because there are two link types, it toggles them. No need to specify new value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Changes the link type of two nodes.\nBecause there are two link types, it toggles them. No need to specify new value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "ChangeLinkTypeBetweenNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::QuestEditorDevFunctionLibrary_eventChangeLinkTypeBetweenNodes_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventClearAllConnections_Parms
		{
			FQuest QuestIn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventClearAllConnections_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventClearAllConnections_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventClearAllConnections_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Clear all connections nodes.\n\x09*\x09WARNING - Only for testing and debugging.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Clear all connections nodes.\nWARNING - Only for testing and debugging." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "ClearAllConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::QuestEditorDevFunctionLibrary_eventClearAllConnections_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventCollapseXTiers_Parms
		{
			FQuest HierarchyQuestIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCollapseXTiers_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::NewProp_HierarchyQuestIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09""Adjusts all tiers, collpasing them if there are any tier missing in X.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Adjusts all tiers, collpasing them if there are any tier missing in X." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "CollapseXTiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::QuestEditorDevFunctionLibrary_eventCollapseXTiers_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventConditionalTaskIsLinkedToQuest_Parms
		{
			FQuestRep SuperiorQuestIn;
			FQuestRep InferiorQuestIn;
			FQuestTaskID NodeIn;
			FQuestRep QuestOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperiorQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorQuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InferiorQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorQuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_SuperiorQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_SuperiorQuestIn = { "SuperiorQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConditionalTaskIsLinkedToQuest_Parms, SuperiorQuestIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_SuperiorQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_SuperiorQuestIn_MetaData)) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_InferiorQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_InferiorQuestIn = { "InferiorQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConditionalTaskIsLinkedToQuest_Parms, InferiorQuestIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_InferiorQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_InferiorQuestIn_MetaData)) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConditionalTaskIsLinkedToQuest_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_QuestOut = { "QuestOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConditionalTaskIsLinkedToQuest_Parms, QuestOut), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventConditionalTaskIsLinkedToQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventConditionalTaskIsLinkedToQuest_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_SuperiorQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_InferiorQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_QuestOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09""Detects if a task of the inferior quest is a requeriment to have completed the superior quest in order to be accepted.\n\x09*\x09@Param QuestOut The Quest Involved in the conditional task.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       Detects if a task of the inferior quest is a requeriment to have completed the superior quest in order to be accepted.\n*       @Param QuestOut The Quest Involved in the conditional task." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "ConditionalTaskIsLinkedToQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::QuestEditorDevFunctionLibrary_eventConditionalTaskIsLinkedToQuest_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventConvertCenterPositionToQEPosition_Parms
		{
			FVector2D NodeSizeIn;
			FVector2D NodeCenterPositionIn;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeSizeIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeCenterPositionIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeCenterPositionIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_NodeSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_NodeSizeIn = { "NodeSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConvertCenterPositionToQEPosition_Parms, NodeSizeIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_NodeSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_NodeSizeIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_NodeCenterPositionIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_NodeCenterPositionIn = { "NodeCenterPositionIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConvertCenterPositionToQEPosition_Parms, NodeCenterPositionIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_NodeCenterPositionIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_NodeCenterPositionIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConvertCenterPositionToQEPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_NodeSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_NodeCenterPositionIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NodeAlignment" },
		{ "Comment", "/**\n\x09*\x09Gets a node center position and converts it to a Quest editor position (points to top left of node)\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets a node center position and converts it to a Quest editor position (points to top left of node)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "ConvertCenterPositionToQEPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::QuestEditorDevFunctionLibrary_eventConvertCenterPositionToQEPosition_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventConvertDialogsToQuest_Parms
		{
			TSoftObjectPtr<UDataTable> DialogDatatableIn;
			TSoftObjectPtr<UDataTable> QuestDatatableIn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DialogDatatableIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestDatatableIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::NewProp_DialogDatatableIn = { "DialogDatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConvertDialogsToQuest_Parms, DialogDatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::NewProp_QuestDatatableIn = { "QuestDatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConvertDialogsToQuest_Parms, QuestDatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventConvertDialogsToQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventConvertDialogsToQuest_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::NewProp_DialogDatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::NewProp_QuestDatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Saves all dialogs to a quest datatable.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Saves all dialogs to a quest datatable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "ConvertDialogsToQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::QuestEditorDevFunctionLibrary_eventConvertDialogsToQuest_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventConvertQuestRepToHierarchyTask_Parms
		{
			FQuestRep QuestIn;
			FQuestTask ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConvertQuestRepToHierarchyTask_Parms, QuestIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::NewProp_QuestIn_MetaData)) }; // 2639361420
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventConvertQuestRepToHierarchyTask_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09""Converts a quest rep to a task that can go inside a quest for hierarchy three.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       Converts a quest rep to a task that can go inside a quest for hierarchy three." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "ConvertQuestRepToHierarchyTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::QuestEditorDevFunctionLibrary_eventConvertQuestRepToHierarchyTask_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventCreateDirectStartHierarchyTask_Parms
		{
			FQuestTask ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCreateDirectStartHierarchyTask_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09""Creates a task that represents a direct start in the hierarchy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       Creates a task that represents a direct start in the hierarchy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "CreateDirectStartHierarchyTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::QuestEditorDevFunctionLibrary_eventCreateDirectStartHierarchyTask_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventCreateDisableLinkBetweenNodes_Parms
		{
			FQuest QuestIn;
			FQuestTaskID DisablerNodeIn;
			FQuestTaskID DisabledNodeIn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisablerNodeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledNodeIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCreateDisableLinkBetweenNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::NewProp_DisablerNodeIn = { "DisablerNodeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCreateDisableLinkBetweenNodes_Parms, DisablerNodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::NewProp_DisabledNodeIn = { "DisabledNodeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCreateDisableLinkBetweenNodes_Parms, DisabledNodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventCreateDisableLinkBetweenNodes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventCreateDisableLinkBetweenNodes_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::NewProp_DisablerNodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::NewProp_DisabledNodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Creates a disable node conection between tasks*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Creates a disable node conection between tasks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "CreateDisableLinkBetweenNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::QuestEditorDevFunctionLibrary_eventCreateDisableLinkBetweenNodes_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventCreateNewLinkBetweenNodes_Parms
		{
			FQuest QuestIn;
			FQuestTaskID SuperiorNode;
			FQuestTaskID InferiorNode;
			ENodeLinkType LinkType;
			bool UpdateConversationIDs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorNode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkType;
		static void NewProp_UpdateConversationIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateConversationIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCreateNewLinkBetweenNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_SuperiorNode = { "SuperiorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCreateNewLinkBetweenNodes_Parms, SuperiorNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_InferiorNode = { "InferiorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCreateNewLinkBetweenNodes_Parms, InferiorNode), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_LinkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_LinkType = { "LinkType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventCreateNewLinkBetweenNodes_Parms, LinkType), Z_Construct_UEnum_QuestEditor_ENodeLinkType, METADATA_PARAMS(nullptr, 0) }; // 4219667413
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_UpdateConversationIDs_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventCreateNewLinkBetweenNodes_Parms*)Obj)->UpdateConversationIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_UpdateConversationIDs = { "UpdateConversationIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventCreateNewLinkBetweenNodes_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_UpdateConversationIDs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventCreateNewLinkBetweenNodes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventCreateNewLinkBetweenNodes_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_SuperiorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_InferiorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_LinkType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_LinkType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_UpdateConversationIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Creates a node conection between tasks*/" },
		{ "CPP_Default_LinkType", "Required" },
		{ "CPP_Default_UpdateConversationIDs", "false" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Creates a node conection between tasks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "CreateNewLinkBetweenNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::QuestEditorDevFunctionLibrary_eventCreateNewLinkBetweenNodes_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventDestroyDisableLinkBetweenNodes_Parms
		{
			FQuest QuestIn;
			FQuestTaskID DisablerNodeIn;
			FQuestTaskID DisabledNodeIn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisablerNodeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledNodeIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventDestroyDisableLinkBetweenNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::NewProp_DisablerNodeIn = { "DisablerNodeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventDestroyDisableLinkBetweenNodes_Parms, DisablerNodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::NewProp_DisabledNodeIn = { "DisabledNodeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventDestroyDisableLinkBetweenNodes_Parms, DisabledNodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventDestroyDisableLinkBetweenNodes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventDestroyDisableLinkBetweenNodes_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::NewProp_DisablerNodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::NewProp_DisabledNodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Destroys a existing disable node conection between tasks*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Destroys a existing disable node conection between tasks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "DestroyDisableLinkBetweenNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::QuestEditorDevFunctionLibrary_eventDestroyDisableLinkBetweenNodes_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventFilterRepeatedNodesInHierarchy_Parms
		{
			FQuest HierarchyQuestIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFilterRepeatedNodesInHierarchy_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::NewProp_HierarchyQuestIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09""Filters all nodes and merges them in one if they appear more than once.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Filters all nodes and merges them in one if they appear more than once." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "FilterRepeatedNodesInHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::QuestEditorDevFunctionLibrary_eventFilterRepeatedNodesInHierarchy_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventFindAllDatatablesOfStruct_Parms
		{
			const UScriptStruct* DTStructIn;
			FString FolderPath;
			TArray<UDataTable*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DTStructIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DTStructIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_DTStructIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_DTStructIn = { "DTStructIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindAllDatatablesOfStruct_Parms, DTStructIn), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_DTStructIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_DTStructIn_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindAllDatatablesOfStruct_Parms, FolderPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindAllDatatablesOfStruct_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_DTStructIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Datatables" },
		{ "Comment", "/**\n\x09*\x09""Finds datatables of a particular struct in the specified folder.\n\x09*\x09""Can be heavy on performance, specially if folder is too big. \n\x09*\x09""Avoid calling this function.\n\x09*/" },
		{ "CPP_Default_FolderPath", "/Game" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Finds datatables of a particular struct in the specified folder.\nCan be heavy on performance, specially if folder is too big.\nAvoid calling this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "FindAllDatatablesOfStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::QuestEditorDevFunctionLibrary_eventFindAllDatatablesOfStruct_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventFindDialogInDatatables_Parms
		{
			FString DialogNameIN;
			TArray<UDataTable*> DTArrayIn;
			FDialogRep ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogNameIN_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogNameIN;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DTArrayIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DTArrayIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_DialogNameIN_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_DialogNameIN = { "DialogNameIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindDialogInDatatables_Parms, DialogNameIN), METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_DialogNameIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_DialogNameIN_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_DTArrayIn_Inner = { "DTArrayIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_DTArrayIn = { "DTArrayIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindDialogInDatatables_Parms, DTArrayIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindDialogInDatatables_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogRep, METADATA_PARAMS(nullptr, 0) }; // 266078582
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_DialogNameIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_DTArrayIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_DTArrayIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/**\n\x09*\x09Gets the quest information from a datatable reference.\n\x09*\x09This is expensive since it will iterate through all DTs untill finds one with same name.\n\x09*\x09UNRELIABLE - If many dialogs share same name, this will not work properly.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the quest information from a datatable reference.\nThis is expensive since it will iterate through all DTs untill finds one with same name.\nUNRELIABLE - If many dialogs share same name, this will not work properly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "FindDialogInDatatables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::QuestEditorDevFunctionLibrary_eventFindDialogInDatatables_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventFindNodeIDInNodeArray_Parms
		{
			TArray<FQuestTaskID> NodeIDArray;
			FQuestTaskID Node;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIDArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeIDArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::NewProp_NodeIDArray_Inner = { "NodeIDArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::NewProp_NodeIDArray = { "NodeIDArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindNodeIDInNodeArray_Parms, NodeIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindNodeIDInNodeArray_Parms, Node), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindNodeIDInNodeArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::NewProp_NodeIDArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::NewProp_NodeIDArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Finds a node in a array*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Finds a node in a array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "FindNodeIDInNodeArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::QuestEditorDevFunctionLibrary_eventFindNodeIDInNodeArray_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventFindNPCInDatatables_Parms
		{
			FString NPCNameIN;
			TArray<UDataTable*> DTArrayIn;
			FNPCQuestDefRep ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCNameIN_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NPCNameIN;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DTArrayIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DTArrayIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_NPCNameIN_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_NPCNameIN = { "NPCNameIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindNPCInDatatables_Parms, NPCNameIN), METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_NPCNameIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_NPCNameIN_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_DTArrayIn_Inner = { "DTArrayIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_DTArrayIn = { "DTArrayIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindNPCInDatatables_Parms, DTArrayIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindNPCInDatatables_Parms, ReturnValue), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_NPCNameIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_DTArrayIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_DTArrayIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/**\n\x09*\x09Gets the NPC information from a datatable reference.\n\x09*\x09This is expensive since it will iterate through all DTs untill finds one with same name.\n\x09*\x09UNRELIABLE - If many NPCs share same name, this will not work properly.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the NPC information from a datatable reference.\nThis is expensive since it will iterate through all DTs untill finds one with same name.\nUNRELIABLE - If many NPCs share same name, this will not work properly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "FindNPCInDatatables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::QuestEditorDevFunctionLibrary_eventFindNPCInDatatables_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventFindQuestEditorReference_Parms
		{
			UObject* WorldContextObject;
			UBaseQuestEditor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindQuestEditorReference_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindQuestEditorReference_Parms, ReturnValue), Z_Construct_UClass_UBaseQuestEditor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/**\n\x09*\x09Gets First Quest editor reference found.\n\x09*\x09This will find all quest editor references in memory and provide the first one.\n\x09*\x09""Avoid using this a lot. Try to call on begin play and save the reference once found for future use.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets First Quest editor reference found.\nThis will find all quest editor references in memory and provide the first one.\nAvoid using this a lot. Try to call on begin play and save the reference once found for future use." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "FindQuestEditorReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::QuestEditorDevFunctionLibrary_eventFindQuestEditorReference_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventFindQuestInDatatables_Parms
		{
			FString QuestNameIN;
			TArray<UDataTable*> DTArrayIn;
			FQuestRep ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestNameIN_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuestNameIN;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DTArrayIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DTArrayIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_QuestNameIN_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_QuestNameIN = { "QuestNameIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindQuestInDatatables_Parms, QuestNameIN), METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_QuestNameIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_QuestNameIN_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_DTArrayIn_Inner = { "DTArrayIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_DTArrayIn = { "DTArrayIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindQuestInDatatables_Parms, DTArrayIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventFindQuestInDatatables_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_QuestNameIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_DTArrayIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_DTArrayIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/**\n\x09*\x09Gets the quest information from a datatable reference.\n\x09*\x09This is expensive since it will iterate through all DTs untill finds one with same name.\n\x09*\x09UNRELIABLE - If many quests share same name, this will not work properly.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the quest information from a datatable reference.\nThis is expensive since it will iterate through all DTs untill finds one with same name.\nUNRELIABLE - If many quests share same name, this will not work properly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "FindQuestInDatatables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::QuestEditorDevFunctionLibrary_eventFindQuestInDatatables_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGenerateDialogLocalizationKeys_Parms
		{
			FDialog DialogIn;
			TSoftObjectPtr<UDataTable> DatatableIn;
			FDialog ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::NewProp_DialogIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::NewProp_DialogIn = { "DialogIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGenerateDialogLocalizationKeys_Parms, DialogIn), Z_Construct_UScriptStruct_FDialog, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::NewProp_DialogIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::NewProp_DialogIn_MetaData)) }; // 1356337939
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGenerateDialogLocalizationKeys_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGenerateDialogLocalizationKeys_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialog, METADATA_PARAMS(nullptr, 0) }; // 1356337939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::NewProp_DialogIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Generates localization keys for the dialog*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Generates localization keys for the dialog" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GenerateDialogLocalizationKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::QuestEditorDevFunctionLibrary_eventGenerateDialogLocalizationKeys_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGenerateQuestLocalizationKeys_Parms
		{
			FQuest QuestIn;
			TSoftObjectPtr<UDataTable> DatatableIn;
			FQuest ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGenerateQuestLocalizationKeys_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGenerateQuestLocalizationKeys_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGenerateQuestLocalizationKeys_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Generates localization keys for the quest*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Generates localization keys for the quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GenerateQuestLocalizationKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::QuestEditorDevFunctionLibrary_eventGenerateQuestLocalizationKeys_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetActionForKey_Parms
		{
			FInputChord InputIn;
			EQuestKeyBindAction ActionOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionOut_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::NewProp_InputIn = { "InputIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetActionForKey_Parms, InputIn), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 2392822822
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::NewProp_ActionOut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::NewProp_ActionOut = { "ActionOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetActionForKey_Parms, ActionOut), Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction, METADATA_PARAMS(nullptr, 0) }; // 2005418099
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetActionForKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetActionForKey_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::NewProp_InputIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::NewProp_ActionOut_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::NewProp_ActionOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Editor Key Binds" },
		{ "Comment", "/**\n\x09*\x09Given the key, returns the action assigned to the key.\n\x09*\x09If the key is not found in the overrides, it will be searchead in the default keys.\n\x09*\x09Returns true if the key is found. If not there is not action assigned to this key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Given the key, returns the action assigned to the key.\nIf the key is not found in the overrides, it will be searchead in the default keys.\nReturns true if the key is found. If not there is not action assigned to this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetActionForKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::QuestEditorDevFunctionLibrary_eventGetActionForKey_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetAllInferiorQuestsOfQuestRep_Parms
		{
			FQuestRep QuestRepIn;
			TArray<UDataTable*> DatatablesIn;
			TArray<FQuestRep> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRepIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRepIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DatatablesIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatatablesIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_QuestRepIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_QuestRepIn = { "QuestRepIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllInferiorQuestsOfQuestRep_Parms, QuestRepIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_QuestRepIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_QuestRepIn_MetaData)) }; // 2639361420
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_DatatablesIn_Inner = { "DatatablesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_DatatablesIn = { "DatatablesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllInferiorQuestsOfQuestRep_Parms, DatatablesIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllInferiorQuestsOfQuestRep_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_QuestRepIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_DatatablesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_DatatablesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09Gets all quests that require this quest as a starting condition.\n\x09*\x09Partial requeriments are considered. If a quest is only required in one start node is considered to be inferior quest.\n\x09*\x09Might be heavy on performance since it searches through all quest DTs\n\x09*\x09Unreliable. Needs to find quest in datatables, wich means that if names overlap this can be innacurated.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       Gets all quests that require this quest as a starting condition.\n*       Partial requeriments are considered. If a quest is only required in one start node is considered to be inferior quest.\n*       Might be heavy on performance since it searches through all quest DTs\n*       Unreliable. Needs to find quest in datatables, wich means that if names overlap this can be innacurated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetAllInferiorQuestsOfQuestRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::QuestEditorDevFunctionLibrary_eventGetAllInferiorQuestsOfQuestRep_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetAllNodesConnections_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SuperiorNodesOut;
			TArray<FQuestTaskID> InferiorNodesOut;
			TArray<ENodeLinkType> LinkTypesOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuperiorNodesOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InferiorNodesOut;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkTypesOut_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkTypesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkTypesOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllNodesConnections_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_SuperiorNodesOut_Inner = { "SuperiorNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_SuperiorNodesOut = { "SuperiorNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllNodesConnections_Parms, SuperiorNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_InferiorNodesOut_Inner = { "InferiorNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_InferiorNodesOut = { "InferiorNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllNodesConnections_Parms, InferiorNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_LinkTypesOut_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_LinkTypesOut_Inner = { "LinkTypesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_QuestEditor_ENodeLinkType, METADATA_PARAMS(nullptr, 0) }; // 4219667413
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_LinkTypesOut = { "LinkTypesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllNodesConnections_Parms, LinkTypesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4219667413
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetAllNodesConnections_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetAllNodesConnections_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_SuperiorNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_SuperiorNodesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_InferiorNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_InferiorNodesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_LinkTypesOut_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_LinkTypesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_LinkTypesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Returns all links of a quest for all superior and inferior nodes.\n\x09*\x09Returns pairs of nodes. Start and ends of node link.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Returns all links of a quest for all superior and inferior nodes.\nReturns pairs of nodes. Start and ends of node link." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetAllNodesConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::QuestEditorDevFunctionLibrary_eventGetAllNodesConnections_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetAllNodesDisablesConnections_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> DisablerNodesOut;
			TArray<FQuestTaskID> DisabledNodesOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisablerNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisablerNodesOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisabledNodesOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllNodesDisablesConnections_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_DisablerNodesOut_Inner = { "DisablerNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_DisablerNodesOut = { "DisablerNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllNodesDisablesConnections_Parms, DisablerNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_DisabledNodesOut_Inner = { "DisabledNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_DisabledNodesOut = { "DisabledNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllNodesDisablesConnections_Parms, DisabledNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetAllNodesDisablesConnections_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetAllNodesDisablesConnections_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_DisablerNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_DisablerNodesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_DisabledNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_DisabledNodesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Returns all disabled links for a quest\n\x09*\x09Returns pairs of nodes. Start and ends of node link.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Returns all disabled links for a quest\nReturns pairs of nodes. Start and ends of node link." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetAllNodesDisablesConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::QuestEditorDevFunctionLibrary_eventGetAllNodesDisablesConnections_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetAllNodesOfSameTaskType_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodesIn;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllNodesOfSameTaskType_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_NodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_NodesIn = { "NodesIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllNodesOfSameTaskType_Parms, NodesIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_NodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_NodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllNodesOfSameTaskType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_NodesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Finds all nodes of quest that have the same task type as the node selected.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Finds all nodes of quest that have the same task type as the node selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetAllNodesOfSameTaskType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::QuestEditorDevFunctionLibrary_eventGetAllNodesOfSameTaskType_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetAllQuestsInDTForNPC_Parms
		{
			TSoftObjectPtr<UDataTable> Datatable;
			FString NPCNameIn;
			TArray<FQuestRep> ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Datatable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCNameIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NPCNameIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_Datatable = { "Datatable", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllQuestsInDTForNPC_Parms, Datatable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_NPCNameIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_NPCNameIn = { "NPCNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllQuestsInDTForNPC_Parms, NPCNameIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_NPCNameIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_NPCNameIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllQuestsInDTForNPC_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_Datatable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_NPCNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NPC" },
		{ "Comment", "/**\n\x09*\x09Get All gets that this NPC can start.\n\x09*\x09If you have 2 NPCs with same name in same or different DT might be wrong.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get All gets that this NPC can start.\nIf you have 2 NPCs with same name in same or different DT might be wrong." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetAllQuestsInDTForNPC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::QuestEditorDevFunctionLibrary_eventGetAllQuestsInDTForNPC_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetAllSelectedNodesConnections_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodes;
			TArray<FQuestTaskID> SuperiorNodesOut;
			TArray<FQuestTaskID> InferiorNodesOut;
			TArray<ENodeLinkType> LinkTypesOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuperiorNodesOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InferiorNodesOut;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkTypesOut_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkTypesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkTypesOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllSelectedNodesConnections_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SelectedNodes_Inner = { "SelectedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SelectedNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SelectedNodes = { "SelectedNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllSelectedNodesConnections_Parms, SelectedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SelectedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SelectedNodes_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SuperiorNodesOut_Inner = { "SuperiorNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SuperiorNodesOut = { "SuperiorNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllSelectedNodesConnections_Parms, SuperiorNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_InferiorNodesOut_Inner = { "InferiorNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_InferiorNodesOut = { "InferiorNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllSelectedNodesConnections_Parms, InferiorNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_LinkTypesOut_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_LinkTypesOut_Inner = { "LinkTypesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_QuestEditor_ENodeLinkType, METADATA_PARAMS(nullptr, 0) }; // 4219667413
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_LinkTypesOut = { "LinkTypesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllSelectedNodesConnections_Parms, LinkTypesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4219667413
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetAllSelectedNodesConnections_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetAllSelectedNodesConnections_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SelectedNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SelectedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SuperiorNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_SuperiorNodesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_InferiorNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_InferiorNodesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_LinkTypesOut_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_LinkTypesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_LinkTypesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Returns all connections between the selected nodes.\n\x09*\x09Returns pairs of nodes. Start and ends of node link.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Returns all connections between the selected nodes.\nReturns pairs of nodes. Start and ends of node link." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetAllSelectedNodesConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::QuestEditorDevFunctionLibrary_eventGetAllSelectedNodesConnections_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetAllSuperiorQuestsOfQuest_Parms
		{
			FQuest QuestIn;
			TArray<FQuestRep> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllSuperiorQuestsOfQuest_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAllSuperiorQuestsOfQuest_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09Gets all quests that are required for a quest to start.\n\x09*\x09Partial requeriments are considered. If a quest is only required in one start node is considered to be superior quest.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       Gets all quests that are required for a quest to start.\n*       Partial requeriments are considered. If a quest is only required in one start node is considered to be superior quest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetAllSuperiorQuestsOfQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::QuestEditorDevFunctionLibrary_eventGetAllSuperiorQuestsOfQuest_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetAmountOfNodesInHierarchyTier_Parms
		{
			FQuest QuestIn;
			int32 YTierIn;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_YTierIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAmountOfNodesInHierarchyTier_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::NewProp_YTierIn = { "YTierIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAmountOfNodesInHierarchyTier_Parms, YTierIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetAmountOfNodesInHierarchyTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::NewProp_YTierIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09\x09Gets total nodes in a tier.\n\x09*\x09Returns 0 if tier does not exist.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets total nodes in a tier.\nReturns 0 if tier does not exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetAmountOfNodesInHierarchyTier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::QuestEditorDevFunctionLibrary_eventGetAmountOfNodesInHierarchyTier_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetDefaultKeybindForAction_Parms
		{
			EQuestKeyBindAction ActionIn;
			FInputChord ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionIn_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::NewProp_ActionIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::NewProp_ActionIn = { "ActionIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDefaultKeybindForAction_Parms, ActionIn), Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction, METADATA_PARAMS(nullptr, 0) }; // 2005418099
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDefaultKeybindForAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 2392822822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::NewProp_ActionIn_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::NewProp_ActionIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Editor Key Binds" },
		{ "Comment", "/**\n\x09*\x09Gets the input associated to the action by default for the quest editor\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the input associated to the action by default for the quest editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetDefaultKeybindForAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::QuestEditorDevFunctionLibrary_eventGetDefaultKeybindForAction_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetDefaultQuestEditorKeybinds_Parms
		{
			TArray<FQuestEditorKeyBind> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestEditorKeyBind, METADATA_PARAMS(nullptr, 0) }; // 3996454201
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDefaultQuestEditorKeybinds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3996454201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Editor Key Binds" },
		{ "Comment", "/**\n\x09*\x09Get the default keybinds array for the quest editor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get the default keybinds array for the quest editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetDefaultQuestEditorKeybinds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::QuestEditorDevFunctionLibrary_eventGetDefaultQuestEditorKeybinds_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetDialogMaxUniqueIDInDT_Parms
		{
			TSoftObjectPtr<UDataTable> DatatableIn;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDialogMaxUniqueIDInDT_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDialogMaxUniqueIDInDT_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Get max dialog Unique ID in Datatable*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get max dialog Unique ID in Datatable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetDialogMaxUniqueIDInDT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::QuestEditorDevFunctionLibrary_eventGetDialogMaxUniqueIDInDT_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetDisabledNodesOfNode_Parms
		{
			FQuest QuestIn;
			FQuestTaskID Node;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDisabledNodesOfNode_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDisabledNodesOfNode_Parms, Node), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDisabledNodesOfNode_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Get all disabled nodes of a particular node*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get all disabled nodes of a particular node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetDisabledNodesOfNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::QuestEditorDevFunctionLibrary_eventGetDisabledNodesOfNode_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetDisablerNodesOfNode_Parms
		{
			FQuest QuestIn;
			FQuestTaskID Node;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDisablerNodesOfNode_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDisablerNodesOfNode_Parms, Node), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetDisablerNodesOfNode_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Gets all nodes that disable this one*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all nodes that disable this one" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetDisablerNodesOfNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::QuestEditorDevFunctionLibrary_eventGetDisablerNodesOfNode_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetHierarchyAdjustOffset_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetHierarchyAdjustOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Gets the offset when adjusting overlapping nodes in X.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the offset when adjusting overlapping nodes in X." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetHierarchyAdjustOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::QuestEditorDevFunctionLibrary_eventGetHierarchyAdjustOffset_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetInferiorNodesOfNodeWithImmediateHierarchyTier_Parms
		{
			FQuest HierarchyQuestIn;
			int32 NodeID;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeID;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_HierarchyQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetInferiorNodesOfNodeWithImmediateHierarchyTier_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_HierarchyQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_HierarchyQuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetInferiorNodesOfNodeWithImmediateHierarchyTier_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetInferiorNodesOfNodeWithImmediateHierarchyTier_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_NodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Gets all inferior nodes of a node that have immediate lower tier to the node in the hierarchy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all inferior nodes of a node that have immediate lower tier to the node in the hierarchy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetInferiorNodesOfNodeWithImmediateHierarchyTier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::QuestEditorDevFunctionLibrary_eventGetInferiorNodesOfNodeWithImmediateHierarchyTier_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetInitialPseudoTasksOfQuest_Parms
		{
			FQuest QuestIn;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetInitialPseudoTasksOfQuest_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetInitialPseudoTasksOfQuest_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NPC" },
		{ "Comment", "/**\n\x09*\x09Gets all start task nodes that are activate cond only\n\x09*\x09This is used to start the Get Pseudo start talk tasks process \n\x09*\x09This is not a good check, only checks name of npc. Most of the times should be correct\n\x09*\x09If you have 2 NPCs with same name in same or different DT might be wrong.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all start task nodes that are activate cond only\nThis is used to start the Get Pseudo start talk tasks process\nThis is not a good check, only checks name of npc. Most of the times should be correct\nIf you have 2 NPCs with same name in same or different DT might be wrong." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetInitialPseudoTasksOfQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::QuestEditorDevFunctionLibrary_eventGetInitialPseudoTasksOfQuest_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetLinkTypeBetweenConnectedQuests_Parms
		{
			FQuestRep SuperiorQuestIn;
			FQuestRep InferiorQuestIn;
			ENodeLinkType ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperiorQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorQuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InferiorQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorQuestIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_SuperiorQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_SuperiorQuestIn = { "SuperiorQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetLinkTypeBetweenConnectedQuests_Parms, SuperiorQuestIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_SuperiorQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_SuperiorQuestIn_MetaData)) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_InferiorQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_InferiorQuestIn = { "InferiorQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetLinkTypeBetweenConnectedQuests_Parms, InferiorQuestIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_InferiorQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_InferiorQuestIn_MetaData)) }; // 2639361420
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetLinkTypeBetweenConnectedQuests_Parms, ReturnValue), Z_Construct_UEnum_QuestEditor_ENodeLinkType, METADATA_PARAMS(nullptr, 0) }; // 4219667413
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_SuperiorQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_InferiorQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09Gets the link type between two quests.\n\x09*\x09If all start nodes require the quest to start and the link between condition and pseudo start is required, then the link is required, otherwise is optional.\n\x09*\x09""Assumes that quests ARE linked. If quests are not link this function wont behave correctly. Designed to use always with connected quests.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       Gets the link type between two quests.\n*       If all start nodes require the quest to start and the link between condition and pseudo start is required, then the link is required, otherwise is optional.\n*       Assumes that quests ARE linked. If quests are not link this function wont behave correctly. Designed to use always with connected quests." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetLinkTypeBetweenConnectedQuests", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::QuestEditorDevFunctionLibrary_eventGetLinkTypeBetweenConnectedQuests_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetMaxAmountOfNodesInHierarchyTiers_Parms
		{
			FQuest QuestIn;
			int32 TierOut;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TierOut;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetMaxAmountOfNodesInHierarchyTiers_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::NewProp_TierOut = { "TierOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetMaxAmountOfNodesInHierarchyTiers_Parms, TierOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetMaxAmountOfNodesInHierarchyTiers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::NewProp_TierOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/** \n\x09*\x09Gets the maximun amount of nodes in a Y tier, along X.\n\x09*\x09""Checks all tiers.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the maximun amount of nodes in a Y tier, along X.\nChecks all tiers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetMaxAmountOfNodesInHierarchyTiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::QuestEditorDevFunctionLibrary_eventGetMaxAmountOfNodesInHierarchyTiers_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetMaxHierarchyYTier_Parms
		{
			FQuest QuestIn;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetMaxHierarchyYTier_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetMaxHierarchyYTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Gets the maximun tier in Y.\n\x09*\x09""Checks all tiers.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the maximun tier in Y.\nChecks all tiers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetMaxHierarchyYTier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::QuestEditorDevFunctionLibrary_eventGetMaxHierarchyYTier_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetMinHierarchyYTier_Parms
		{
			FQuest QuestIn;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetMinHierarchyYTier_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetMinHierarchyYTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Gets the minimun tier in Y.\n\x09*\x09""Checks all tiers.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the minimun tier in Y.\nChecks all tiers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetMinHierarchyYTier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::QuestEditorDevFunctionLibrary_eventGetMinHierarchyYTier_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetNodeCenterPosition_Parms
		{
			FQuest QuestIn;
			FQuestTaskID SelectedNodeIn;
			FVector2D NodeSizeIn;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodeIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeSizeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeCenterPosition_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_SelectedNodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_SelectedNodeIn = { "SelectedNodeIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeCenterPosition_Parms, SelectedNodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_SelectedNodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_SelectedNodeIn_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_NodeSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_NodeSizeIn = { "NodeSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeCenterPosition_Parms, NodeSizeIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_NodeSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_NodeSizeIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeCenterPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_SelectedNodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_NodeSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NodeAlignment" },
		{ "Comment", "/**\n\x09*\x09Gets the position of the node referenced to its center and not to its top left has they usually are.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the position of the node referenced to its center and not to its top left has they usually are." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetNodeCenterPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::QuestEditorDevFunctionLibrary_eventGetNodeCenterPosition_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetNodeConnections_Parms
		{
			FQuest QuestIn;
			FQuestTaskID Node;
			TArray<FQuestTaskID> SuperiorNodesOut;
			TArray<FQuestTaskID> InferiorNodesOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuperiorNodesOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InferiorNodesOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeConnections_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeConnections_Parms, Node), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_SuperiorNodesOut_Inner = { "SuperiorNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_SuperiorNodesOut = { "SuperiorNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeConnections_Parms, SuperiorNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_InferiorNodesOut_Inner = { "InferiorNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_InferiorNodesOut = { "InferiorNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeConnections_Parms, InferiorNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetNodeConnections_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetNodeConnections_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_SuperiorNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_SuperiorNodesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_InferiorNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_InferiorNodesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Returns all links of a node with superior and inferior nodes.\n\x09*\x09""Does not return disabled nodes links.\n\x09*\x09Returns pairs of nodes. Start and ends of node link.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Returns all links of a node with superior and inferior nodes.\nDoes not return disabled nodes links.\nReturns pairs of nodes. Start and ends of node link." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetNodeConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::QuestEditorDevFunctionLibrary_eventGetNodeConnections_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetNodeDisableConnections_Parms
		{
			FQuest QuestIn;
			FQuestTaskID Node;
			TArray<FQuestTaskID> DisablerNodesOut;
			TArray<FQuestTaskID> DisabledNodesOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisablerNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisablerNodesOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisabledNodesOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeDisableConnections_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeDisableConnections_Parms, Node), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_DisablerNodesOut_Inner = { "DisablerNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_DisablerNodesOut = { "DisablerNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeDisableConnections_Parms, DisablerNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_DisabledNodesOut_Inner = { "DisabledNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_DisabledNodesOut = { "DisabledNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeDisableConnections_Parms, DisabledNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetNodeDisableConnections_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetNodeDisableConnections_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_DisablerNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_DisablerNodesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_DisabledNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_DisabledNodesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Returns all links of a node with disabled nodes and disabler nodes.\n\x09*\x09Returns pairs of nodes. Start and ends of node link.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Returns all links of a node with disabled nodes and disabler nodes.\nReturns pairs of nodes. Start and ends of node link." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetNodeDisableConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::QuestEditorDevFunctionLibrary_eventGetNodeDisableConnections_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetNodeGridTier_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			FVector2D NodeWidgetSizeIn;
			FVector2D GridSizeIn;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeWidgetSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeWidgetSizeIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSizeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeGridTier_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeGridTier_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_NodeWidgetSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_NodeWidgetSizeIn = { "NodeWidgetSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeGridTier_Parms, NodeWidgetSizeIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_NodeWidgetSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_NodeWidgetSizeIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_GridSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_GridSizeIn = { "GridSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeGridTier_Parms, GridSizeIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_GridSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_GridSizeIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodeGridTier_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_NodeWidgetSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_GridSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Determines the node grid tier based on size and position and grid dimensions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determines the node grid tier based on size and position and grid dimensions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetNodeGridTier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::QuestEditorDevFunctionLibrary_eventGetNodeGridTier_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetNodePosition_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeIn;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodePosition_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_NodeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodePosition_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_NodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_NodeIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NodeAlignment" },
		{ "Comment", "/**\n\x09*\x09Gets the node quest editor position in quest\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the node quest editor position in quest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetNodePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::QuestEditorDevFunctionLibrary_eventGetNodePosition_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetNodesAverageXPositionInHierarchy_Parms
		{
			FQuest HierarchyQuestIn;
			TArray<int32> NodesIn;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodesIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesIn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_HierarchyQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodesAverageXPositionInHierarchy_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_HierarchyQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_HierarchyQuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_NodesIn_Inner = { "NodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_NodesIn = { "NodesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodesAverageXPositionInHierarchy_Parms, NodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodesAverageXPositionInHierarchy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_NodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_NodesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Gets the average position in X of nodes\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the average position in X of nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetNodesAverageXPositionInHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::QuestEditorDevFunctionLibrary_eventGetNodesAverageXPositionInHierarchy_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetNodesIDsByTierInHierarchy_Parms
		{
			FQuest HierarchyQuestIn;
			int32 TierIn;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TierIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_HierarchyQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodesIDsByTierInHierarchy_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_HierarchyQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_HierarchyQuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_TierIn = { "TierIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodesIDsByTierInHierarchy_Parms, TierIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodesIDsByTierInHierarchy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_TierIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Gets all nodes IDs of a tier in hierarchy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all nodes IDs of a tier in hierarchy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetNodesIDsByTierInHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::QuestEditorDevFunctionLibrary_eventGetNodesIDsByTierInHierarchy_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetNodesInTierOverlappingPosition_Parms
		{
			FQuest HierarchyQuestIn;
			int32 TierIn;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TierIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_HierarchyQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodesInTierOverlappingPosition_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_HierarchyQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_HierarchyQuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_TierIn = { "TierIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodesInTierOverlappingPosition_Parms, TierIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNodesInTierOverlappingPosition_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_TierIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09""Detects if are nodes overlapping in position X in the tier.\n\x09*\x09Returns the two nodes that are overlapping position that were found first.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Detects if are nodes overlapping in position X in the tier.\nReturns the two nodes that are overlapping position that were found first." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetNodesInTierOverlappingPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::QuestEditorDevFunctionLibrary_eventGetNodesInTierOverlappingPosition_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetNPCsThatCanStartQuest_Parms
		{
			FQuestRep QuestRepIn;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRepIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRepIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::NewProp_QuestRepIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::NewProp_QuestRepIn = { "QuestRepIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNPCsThatCanStartQuest_Parms, QuestRepIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::NewProp_QuestRepIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::NewProp_QuestRepIn_MetaData)) }; // 2639361420
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetNPCsThatCanStartQuest_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::NewProp_QuestRepIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*\n\x09*\x09Gets all NPCs names that can start a quest via talking.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       Gets all NPCs names that can start a quest via talking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetNPCsThatCanStartQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::QuestEditorDevFunctionLibrary_eventGetNPCsThatCanStartQuest_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
			TArray<FVector2D> NodesWidgetSizeIn;
			bool UseY;
			bool CheckLower;
			FQuestTaskID NodeOut;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesWidgetSizeIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesWidgetSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesWidgetSizeIn;
		static void NewProp_UseY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseY;
		static void NewProp_CheckLower_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckLower;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeOut;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_NodesWidgetSizeIn_Inner = { "NodesWidgetSizeIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_NodesWidgetSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_NodesWidgetSizeIn = { "NodesWidgetSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms, NodesWidgetSizeIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_NodesWidgetSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_NodesWidgetSizeIn_MetaData)) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_UseY_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms*)Obj)->UseY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_UseY = { "UseY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_UseY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_CheckLower_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms*)Obj)->CheckLower = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_CheckLower = { "CheckLower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_CheckLower_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_NodeOut = { "NodeOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms, NodeOut), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_SelectedNodesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_NodesWidgetSizeIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_NodesWidgetSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_UseY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_CheckLower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_NodeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NodeAlignment" },
		{ "Comment", "/**\n\x09*\x09Gets the lowest or highest X or Y value of all nodes positions calculated from center of widget\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the lowest or highest X or Y value of all nodes positions calculated from center of widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetPositionValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::QuestEditorDevFunctionLibrary_eventGetPositionValue_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestEditorSettings_Parms
		{
			UQuestEditorSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestEditorSettings_Parms, ReturnValue), Z_Construct_UClass_UQuestEditorSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Direct access to the plugin settings */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Direct access to the plugin settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestEditorSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::QuestEditorDevFunctionLibrary_eventGetQuestEditorSettings_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestEndNodes_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestEndNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestEndNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NodeAlignment" },
		{ "Comment", "/**\n\x09*\x09Gets all nodes that dont have inferior nodes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all nodes that dont have inferior nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestEndNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::QuestEditorDevFunctionLibrary_eventGetQuestEndNodes_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestHierarchy_Parms
		{
			FQuestRep QuestRepIn;
			TArray<UDataTable*> DatatablesIn;
			int32 MaxSuperiorTier;
			int32 MaxInferiorTier;
			FQuest ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRepIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRepIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DatatablesIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatatablesIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxSuperiorTier;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxInferiorTier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_QuestRepIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_QuestRepIn = { "QuestRepIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestHierarchy_Parms, QuestRepIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_QuestRepIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_QuestRepIn_MetaData)) }; // 2639361420
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_DatatablesIn_Inner = { "DatatablesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_DatatablesIn = { "DatatablesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestHierarchy_Parms, DatatablesIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_MaxSuperiorTier = { "MaxSuperiorTier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestHierarchy_Parms, MaxSuperiorTier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_MaxInferiorTier = { "MaxInferiorTier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestHierarchy_Parms, MaxInferiorTier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestHierarchy_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_QuestRepIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_DatatablesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_DatatablesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_MaxSuperiorTier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_MaxInferiorTier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09""Creates a quest that represents the chain hierarchy.\n\x09*\x09""Adjusts positions and links automatically for presenting in the editor.\n\x09*\x09The amount of quests to show in hierarchy can be adjusted. \n\x09*\x09""Calculating inferior quests is significantly heavier than superior quests.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       Creates a quest that represents the chain hierarchy.\n*       Adjusts positions and links automatically for presenting in the editor.\n*       The amount of quests to show in hierarchy can be adjusted.\n*       Calculating inferior quests is significantly heavier than superior quests." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::QuestEditorDevFunctionLibrary_eventGetQuestHierarchy_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestMaxUniqueIDInDT_Parms
		{
			TSoftObjectPtr<UDataTable> DatatableIn;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestMaxUniqueIDInDT_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestMaxUniqueIDInDT_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Get max Quest Unique ID in Datatable*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get max Quest Unique ID in Datatable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestMaxUniqueIDInDT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::QuestEditorDevFunctionLibrary_eventGetQuestMaxUniqueIDInDT_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestNodeSeparatedStrings_Parms
		{
			FQuestNode QuestEndIn;
			bool UseNPCDialog;
			FString QuestStringOut;
			FString TaskStringOut;
			FString TaskTypeStringOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestEndIn;
		static void NewProp_UseNPCDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseNPCDialog;
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuestStringOut;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskStringOut;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskTypeStringOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_QuestEndIn = { "QuestEndIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestNodeSeparatedStrings_Parms, QuestEndIn), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(nullptr, 0) }; // 2631386162
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_UseNPCDialog_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetQuestNodeSeparatedStrings_Parms*)Obj)->UseNPCDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_UseNPCDialog = { "UseNPCDialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetQuestNodeSeparatedStrings_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_UseNPCDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_QuestStringOut = { "QuestStringOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestNodeSeparatedStrings_Parms, QuestStringOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_TaskStringOut = { "TaskStringOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestNodeSeparatedStrings_Parms, TaskStringOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_TaskTypeStringOut = { "TaskTypeStringOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestNodeSeparatedStrings_Parms, TaskTypeStringOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_QuestEndIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_UseNPCDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_QuestStringOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_TaskStringOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::NewProp_TaskTypeStringOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Gets a quest end name variables for identifying in editor.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets a quest end name variables for identifying in editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestNodeSeparatedStrings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::QuestEditorDevFunctionLibrary_eventGetQuestNodeSeparatedStrings_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestNodeVisualString_Parms
		{
			FQuestNode QuestNodeIn;
			bool UseNPCDialog;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestNodeIn;
		static void NewProp_UseNPCDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseNPCDialog;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::NewProp_QuestNodeIn = { "QuestNodeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestNodeVisualString_Parms, QuestNodeIn), Z_Construct_UScriptStruct_FQuestNode, METADATA_PARAMS(nullptr, 0) }; // 2631386162
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::NewProp_UseNPCDialog_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetQuestNodeVisualString_Parms*)Obj)->UseNPCDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::NewProp_UseNPCDialog = { "UseNPCDialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetQuestNodeVisualString_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::NewProp_UseNPCDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestNodeVisualString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::NewProp_QuestNodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::NewProp_UseNPCDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Gets a quest end name for identifying in editor.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets a quest end name for identifying in editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestNodeVisualString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::QuestEditorDevFunctionLibrary_eventGetQuestNodeVisualString_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestNonConditionalStartNodes_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestNonConditionalStartNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestNonConditionalStartNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09Gets Start nodes that are not ActivateConditionOnly.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       Gets Start nodes that are not ActivateConditionOnly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestNonConditionalStartNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::QuestEditorDevFunctionLibrary_eventGetQuestNonConditionalStartNodes_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestPseudoStartNodes_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestPseudoStartNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestPseudoStartNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NPC" },
		{ "Comment", "/**\n\x09*\x09Gets all pseudo start nodes of quest.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all pseudo start nodes of quest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestPseudoStartNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::QuestEditorDevFunctionLibrary_eventGetQuestPseudoStartNodes_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestsGameWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestsGameWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-World" },
		{ "Comment", "/**Gets the game world.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the game world." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestsGameWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::QuestEditorDevFunctionLibrary_eventGetQuestsGameWorld_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestStartNodes_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestStartNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestStartNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NodeAlignment" },
		{ "Comment", "/**\n\x09*\x09Gets all nodes that dont have superior nodes\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all nodes that dont have superior nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestStartNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::QuestEditorDevFunctionLibrary_eventGetQuestStartNodes_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetQuestStartNPCs_Parms
		{
			FQuest QuestIn;
			TArray<FNPCQuestDefRep> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestStartNPCs_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetQuestStartNPCs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NPC" },
		{ "Comment", "/**\n\x09*\x09Gets all NPCs that can start this quest.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all NPCs that can start this quest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetQuestStartNPCs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::QuestEditorDevFunctionLibrary_eventGetQuestStartNPCs_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetRepresentingTalkTask_Parms
		{
			TArray<FQuestTalkTask> AllTalkTasksIn;
			FQuestTalkTask ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllTalkTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTalkTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTalkTasksIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::NewProp_AllTalkTasksIn_Inner = { "AllTalkTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::NewProp_AllTalkTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::NewProp_AllTalkTasksIn = { "AllTalkTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetRepresentingTalkTask_Parms, AllTalkTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::NewProp_AllTalkTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::NewProp_AllTalkTasksIn_MetaData)) }; // 1604935902
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetRepresentingTalkTask_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::NewProp_AllTalkTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::NewProp_AllTalkTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/**\n\x09*\x09Get a talktask that represents all the talktasks.\n\x09*\x09Used for multinode UI.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get a talktask that represents all the talktasks.\nUsed for multinode UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetRepresentingTalkTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::QuestEditorDevFunctionLibrary_eventGetRepresentingTalkTask_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetRepresentingTask_Parms
		{
			TArray<FQuestTask> AllTasksIn;
			FQuestTask ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTasksIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::NewProp_AllTasksIn_Inner = { "AllTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::NewProp_AllTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::NewProp_AllTasksIn = { "AllTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetRepresentingTask_Parms, AllTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::NewProp_AllTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::NewProp_AllTasksIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetRepresentingTask_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::NewProp_AllTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::NewProp_AllTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/**\n\x09*\x09Get a task that represents all the tasks.\n\x09*\x09Used for multinode UI.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get a task that represents all the tasks.\nUsed for multinode UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetRepresentingTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::QuestEditorDevFunctionLibrary_eventGetRepresentingTask_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetSelectionType_Parms
		{
			TArray<FQuestTaskID> AllTasksIn;
			TArray<FQuestTaskID> AllTalkTasksIn;
			ENodeSelectionType ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTasksIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllTalkTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTalkTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTalkTasksIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTasksIn_Inner = { "AllTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTasksIn = { "AllTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSelectionType_Parms, AllTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTalkTasksIn_Inner = { "AllTalkTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTalkTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTalkTasksIn = { "AllTalkTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSelectionType_Parms, AllTalkTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTalkTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTalkTasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSelectionType_Parms, ReturnValue), Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType, METADATA_PARAMS(nullptr, 0) }; // 2648707201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTalkTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_AllTalkTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/**\n\x09*\x09Get the selection type based on the selected nodes\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get the selection type based on the selected nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetSelectionType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::QuestEditorDevFunctionLibrary_eventGetSelectionType_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetSettings_ArrowSize_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSettings_ArrowSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Settings" },
		{ "Comment", "/** Get editor arrow size from settings */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get editor arrow size from settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetSettings_ArrowSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::QuestEditorDevFunctionLibrary_eventGetSettings_ArrowSize_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetSettings_ArrowsSensitivity_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSettings_ArrowsSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Settings" },
		{ "Comment", "/** Get arrow sensibility settings */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get arrow sensibility settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetSettings_ArrowsSensitivity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::QuestEditorDevFunctionLibrary_eventGetSettings_ArrowsSensitivity_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetSettings_DetailsPanelSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSettings_DetailsPanelSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Settings" },
		{ "Comment", "/** Get the detail panel width size in the settings. */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get the detail panel width size in the settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetSettings_DetailsPanelSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::QuestEditorDevFunctionLibrary_eventGetSettings_DetailsPanelSize_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetSettings_LineThickness_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSettings_LineThickness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Settings" },
		{ "Comment", "/** Get editor line thickness from settings */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get editor line thickness from settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetSettings_LineThickness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::QuestEditorDevFunctionLibrary_eventGetSettings_LineThickness_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetSettings_PreviousVersion_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSettings_PreviousVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get editor previous version from settings */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get editor previous version from settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetSettings_PreviousVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::QuestEditorDevFunctionLibrary_eventGetSettings_PreviousVersion_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetSettings_TalkTaskBGColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSettings_TalkTaskBGColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Settings" },
		{ "Comment", "/** TasksBackgroundColor getter from settings */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "TasksBackgroundColor getter from settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetSettings_TalkTaskBGColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::QuestEditorDevFunctionLibrary_eventGetSettings_TalkTaskBGColor_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetSettings_TaskBGColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSettings_TaskBGColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Settings" },
		{ "Comment", "/** TasksBackgroundColor getter from settings */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "TasksBackgroundColor getter from settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetSettings_TaskBGColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::QuestEditorDevFunctionLibrary_eventGetSettings_TaskBGColor_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetSettings_ZoomSensitivity_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSettings_ZoomSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Settings" },
		{ "Comment", "/** Get zoom sensibility settings */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get zoom sensibility settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetSettings_ZoomSensitivity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::QuestEditorDevFunctionLibrary_eventGetSettings_ZoomSensitivity_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetStartingPseudoTalkTaskForNPC_Parms
		{
			FQuest QuestIn;
			FString NPCNameIn;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCNameIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NPCNameIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetStartingPseudoTalkTaskForNPC_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_NPCNameIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_NPCNameIn = { "NPCNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetStartingPseudoTalkTaskForNPC_Parms, NPCNameIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_NPCNameIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_NPCNameIn_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetStartingPseudoTalkTaskForNPC_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_NPCNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NPC" },
		{ "Comment", "/**\n\x09*\x09Gets all pseudo start talk nodes for NPC by name.\n\x09*\x09""Does not care if the activate condition returns true, just asumes it does.\n\x09*\x09This is not a good check, only checks name of npc. Most of the times should be correct\n\x09*\x09If you have 2 NPCs with same name in same or different DT might be wrong.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all pseudo start talk nodes for NPC by name.\nDoes not care if the activate condition returns true, just asumes it does.\nThis is not a good check, only checks name of npc. Most of the times should be correct\nIf you have 2 NPCs with same name in same or different DT might be wrong." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetStartingPseudoTalkTaskForNPC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::QuestEditorDevFunctionLibrary_eventGetStartingPseudoTalkTaskForNPC_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetStartingTalkTaskForNPC_Parms
		{
			FQuest QuestIn;
			FString NPCNameIn;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCNameIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NPCNameIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetStartingTalkTaskForNPC_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_NPCNameIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_NPCNameIn = { "NPCNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetStartingTalkTaskForNPC_Parms, NPCNameIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_NPCNameIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_NPCNameIn_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetStartingTalkTaskForNPC_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_NPCNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NPC" },
		{ "Comment", "/**\x09\n\x09*\x09Gets all start talk nodes for NPC by name.\n\x09*\x09This is not a good check, only checks name of npc. Most of the times should be correct\n\x09*\x09If you have 2 NPCs with same name in same or different DT might be wrong.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all start talk nodes for NPC by name.\nThis is not a good check, only checks name of npc. Most of the times should be correct\nIf you have 2 NPCs with same name in same or different DT might be wrong." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetStartingTalkTaskForNPC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::QuestEditorDevFunctionLibrary_eventGetStartingTalkTaskForNPC_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetSuperiorNodesOfNodeWithImmediateHierarchyTier_Parms
		{
			FQuest HierarchyQuestIn;
			int32 NodeID;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeID;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_HierarchyQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSuperiorNodesOfNodeWithImmediateHierarchyTier_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_HierarchyQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_HierarchyQuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSuperiorNodesOfNodeWithImmediateHierarchyTier_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetSuperiorNodesOfNodeWithImmediateHierarchyTier_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_NodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Gets all inferior nodes of a node that have immediate lower tier to the node in the hierarchy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets all inferior nodes of a node that have immediate lower tier to the node in the hierarchy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetSuperiorNodesOfNodeWithImmediateHierarchyTier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::QuestEditorDevFunctionLibrary_eventGetSuperiorNodesOfNodeWithImmediateHierarchyTier_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetTalkTasksFromIDArray_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TalkTasksIn;
			TArray<FQuestTalkTask> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTalkTasksFromIDArray_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_TalkTasksIn_Inner = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_TalkTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_TalkTasksIn = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTalkTasksFromIDArray_Parms, TalkTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_TalkTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_TalkTasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTalkTasksFromIDArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_TalkTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_TalkTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/**\n\x09*\x09Get talktasks from quests based on ID arrays.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get talktasks from quests based on ID arrays." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetTalkTasksFromIDArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::QuestEditorDevFunctionLibrary_eventGetTalkTasksFromIDArray_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetTaskIDSeparatedStrings_Parms
		{
			FQuest QuestIn;
			FQuestTaskID TaskIDIn;
			bool UseNPCDialog;
			FString QuestStringOut;
			FString TaskStringOut;
			FString TaskTypeStringOut;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIDIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDIn;
		static void NewProp_UseNPCDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseNPCDialog;
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuestStringOut;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskStringOut;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskTypeStringOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskIDSeparatedStrings_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_TaskIDIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_TaskIDIn = { "TaskIDIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskIDSeparatedStrings_Parms, TaskIDIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_TaskIDIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_TaskIDIn_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_UseNPCDialog_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetTaskIDSeparatedStrings_Parms*)Obj)->UseNPCDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_UseNPCDialog = { "UseNPCDialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetTaskIDSeparatedStrings_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_UseNPCDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_QuestStringOut = { "QuestStringOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskIDSeparatedStrings_Parms, QuestStringOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_TaskStringOut = { "TaskStringOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskIDSeparatedStrings_Parms, TaskStringOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_TaskTypeStringOut = { "TaskTypeStringOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskIDSeparatedStrings_Parms, TaskTypeStringOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_TaskIDIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_UseNPCDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_QuestStringOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_TaskStringOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::NewProp_TaskTypeStringOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Gets a quest node ID name variables for identifying in editor.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets a quest node ID name variables for identifying in editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetTaskIDSeparatedStrings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::QuestEditorDevFunctionLibrary_eventGetTaskIDSeparatedStrings_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetTaskIDVisualString_Parms
		{
			FQuest QuestIn;
			FQuestTaskID TaskIDIn;
			bool UseNPCDialog;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIDIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDIn;
		static void NewProp_UseNPCDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseNPCDialog;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskIDVisualString_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_TaskIDIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_TaskIDIn = { "TaskIDIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskIDVisualString_Parms, TaskIDIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_TaskIDIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_TaskIDIn_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_UseNPCDialog_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetTaskIDVisualString_Parms*)Obj)->UseNPCDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_UseNPCDialog = { "UseNPCDialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetTaskIDVisualString_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_UseNPCDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskIDVisualString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_TaskIDIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_UseNPCDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Gets a quest end name for identifying in editor.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets a quest end name for identifying in editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetTaskIDVisualString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::QuestEditorDevFunctionLibrary_eventGetTaskIDVisualString_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetTaskMaxUniqueID_Parms
		{
			FQuest QuestIn;
			EQuestTaskType TaskType;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TaskType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskMaxUniqueID_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_TaskType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_TaskType = { "TaskType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskMaxUniqueID_Parms, TaskType), Z_Construct_UEnum_QuestEditor_EQuestTaskType, METADATA_PARAMS(nullptr, 0) }; // 1742157387
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskMaxUniqueID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_TaskType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_TaskType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Gets the talktasks or task max unique ID*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the talktasks or task max unique ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetTaskMaxUniqueID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::QuestEditorDevFunctionLibrary_eventGetTaskMaxUniqueID_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetTaskQuestEditorInfo_Parms
		{
			TSoftClassPtr<UBaseQuestTask>  TaskClassIn;
			TArray<UDataTable*> TaskInfoDTsIn;
			int32 SlotTaskOut;
			int32 SlotDTOut;
			FQuestTaskEditorInfo TaskInfoOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TaskClassIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskInfoDTsIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskInfoDTsIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotTaskOut;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotDTOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskInfoOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_TaskClassIn = { "TaskClassIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskQuestEditorInfo_Parms, TaskClassIn), Z_Construct_UClass_UBaseQuestTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_TaskInfoDTsIn_Inner = { "TaskInfoDTsIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_TaskInfoDTsIn = { "TaskInfoDTsIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskQuestEditorInfo_Parms, TaskInfoDTsIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_SlotTaskOut = { "SlotTaskOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskQuestEditorInfo_Parms, SlotTaskOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_SlotDTOut = { "SlotDTOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskQuestEditorInfo_Parms, SlotDTOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_TaskInfoOut = { "TaskInfoOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTaskQuestEditorInfo_Parms, TaskInfoOut), Z_Construct_UScriptStruct_FQuestTaskEditorInfo, METADATA_PARAMS(nullptr, 0) }; // 3394797982
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventGetTaskQuestEditorInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventGetTaskQuestEditorInfo_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_TaskClassIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_TaskInfoDTsIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_TaskInfoDTsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_SlotTaskOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_SlotDTOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_TaskInfoOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/**\n\x09*\x09Gets quest editor info of a task base on the task reference. \n\x09*\x09""Datatables array (for task info) must be provided to avoid extra calls to get datatable functions, for better performance.\n\x09*\x09If class invalid or not found in DTs, Slots will return -1 and return value is false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets quest editor info of a task base on the task reference.\nDatatables array (for task info) must be provided to avoid extra calls to get datatable functions, for better performance.\nIf class invalid or not found in DTs, Slots will return -1 and return value is false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetTaskQuestEditorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::QuestEditorDevFunctionLibrary_eventGetTaskQuestEditorInfo_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventGetTasksFromIDArray_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			TArray<FQuestTask> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTasksFromIDArray_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTasksFromIDArray_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventGetTasksFromIDArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/**\n\x09*\x09Get tasks from quests based on ID arrays.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Get tasks from quests based on ID arrays." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "GetTasksFromIDArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::QuestEditorDevFunctionLibrary_eventGetTasksFromIDArray_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventHandleDialogUniqueID_Parms
		{
			FQuest QuestIn;
			TSoftObjectPtr<UDataTable> DatatableIn;
			FQuest ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventHandleDialogUniqueID_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventHandleDialogUniqueID_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventHandleDialogUniqueID_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Handles the dialog Unique ID before adding to datatable. Dialog is in quest form.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Handles the dialog Unique ID before adding to datatable. Dialog is in quest form." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "HandleDialogUniqueID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::QuestEditorDevFunctionLibrary_eventHandleDialogUniqueID_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventHandleQuestUniqueID_Parms
		{
			FQuest QuestIn;
			TSoftObjectPtr<UDataTable> DatatableIn;
			FQuest ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventHandleQuestUniqueID_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventHandleQuestUniqueID_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventHandleQuestUniqueID_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Handles the quest Unique ID before adding to datatable.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Handles the quest Unique ID before adding to datatable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "HandleQuestUniqueID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::QuestEditorDevFunctionLibrary_eventHandleQuestUniqueID_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventIsDialogUniqueIDValid_Parms
		{
			TSoftObjectPtr<UDataTable> DatatableIn;
			FQuest QuestIn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsDialogUniqueIDValid_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsDialogUniqueIDValid_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventIsDialogUniqueIDValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventIsDialogUniqueIDValid_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09If the UniqueID is repetead more than once in the datatable is considered invalid\n\x09*\x09This can happend if the user modifies datatables manually instead of using the Quest Editor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "If the UniqueID is repetead more than once in the datatable is considered invalid\nThis can happend if the user modifies datatables manually instead of using the Quest Editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "IsDialogUniqueIDValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::QuestEditorDevFunctionLibrary_eventIsDialogUniqueIDValid_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventIsDTofStructType_Parms
		{
			UDataTable* DT;
			const UScriptStruct* DTStructIn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DTStructIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DTStructIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_DT = { "DT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsDTofStructType_Parms, DT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_DTStructIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_DTStructIn = { "DTStructIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsDTofStructType_Parms, DTStructIn), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_DTStructIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_DTStructIn_MetaData)) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventIsDTofStructType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventIsDTofStructType_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_DT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_DTStructIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Datatables" },
		{ "Comment", "/*Determines if a DT is of struct type*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determines if a DT is of struct type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "IsDTofStructType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::QuestEditorDevFunctionLibrary_eventIsDTofStructType_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventIsNodeNearPositionInHierarchy_Parms
		{
			FQuest HierarchyQuestIn;
			int32 PositionXIn;
			int32 TierIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyQuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PositionXIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TierIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_HierarchyQuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsNodeNearPositionInHierarchy_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_HierarchyQuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_HierarchyQuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_PositionXIn = { "PositionXIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsNodeNearPositionInHierarchy_Parms, PositionXIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_TierIn = { "TierIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsNodeNearPositionInHierarchy_Parms, TierIn), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventIsNodeNearPositionInHierarchy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventIsNodeNearPositionInHierarchy_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_PositionXIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_TierIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09""Determine if a node is already ocupping a position.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determine if a node is already ocupping a position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "IsNodeNearPositionInHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::QuestEditorDevFunctionLibrary_eventIsNodeNearPositionInHierarchy_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventIsQuestInDatatables_Parms
		{
			FString QuestNameIn;
			TArray<UDataTable*> DTArrayIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestNameIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuestNameIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DTArrayIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DTArrayIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_QuestNameIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_QuestNameIn = { "QuestNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsQuestInDatatables_Parms, QuestNameIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_QuestNameIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_QuestNameIn_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_DTArrayIn_Inner = { "DTArrayIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_DTArrayIn = { "DTArrayIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsQuestInDatatables_Parms, DTArrayIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventIsQuestInDatatables_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventIsQuestInDatatables_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_QuestNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_DTArrayIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_DTArrayIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest structs" },
		{ "Comment", "/**\n\x09*\x09""Determines if the quest is saved in a datatable by name.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determines if the quest is saved in a datatable by name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "IsQuestInDatatables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::QuestEditorDevFunctionLibrary_eventIsQuestInDatatables_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventIsQuestUniqueIDValid_Parms
		{
			TSoftObjectPtr<UDataTable> DatatableIn;
			FQuest QuestIn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsQuestUniqueIDValid_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsQuestUniqueIDValid_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventIsQuestUniqueIDValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventIsQuestUniqueIDValid_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09If the UniqueID is repetead more than once in the datatable is considered invalid\n\x09*\x09This can happend if the user modifies datatables manually instead of using the Quest Editor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "If the UniqueID is repetead more than once in the datatable is considered invalid\nThis can happend if the user modifies datatables manually instead of using the Quest Editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "IsQuestUniqueIDValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::QuestEditorDevFunctionLibrary_eventIsQuestUniqueIDValid_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventIsWidgetFullyVisible_Parms
		{
			UWidget* WidgetIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::NewProp_WidgetIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::NewProp_WidgetIn = { "WidgetIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventIsWidgetFullyVisible_Parms, WidgetIn), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::NewProp_WidgetIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::NewProp_WidgetIn_MetaData)) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventIsWidgetFullyVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventIsWidgetFullyVisible_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::NewProp_WidgetIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget Visiblity" },
		{ "Comment", "/*Determine if the widget is fully visible.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determine if the widget is fully visible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "IsWidgetFullyVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::QuestEditorDevFunctionLibrary_eventIsWidgetFullyVisible_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventNPCCanGiveQuest_Parms
		{
			FQuest QuestIn;
			FString NPCNameIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCNameIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NPCNameIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventNPCCanGiveQuest_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_NPCNameIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_NPCNameIn = { "NPCNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventNPCCanGiveQuest_Parms, NPCNameIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_NPCNameIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_NPCNameIn_MetaData)) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventNPCCanGiveQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventNPCCanGiveQuest_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_NPCNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-NPC" },
		{ "Comment", "/**\x09\n\x09*\x09""Determines if the NPC of this name can give this quest if assigned to him.\n\x09*\x09This is not a good check, only checks name of npc. Most of the times should be correct\n\x09*\x09If you have 2 NPCs with same name in same or different DT might be wrong.\n\x09*\x09If the quest has a direct start, then this will be false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Determines if the NPC of this name can give this quest if assigned to him.\nThis is not a good check, only checks name of npc. Most of the times should be correct\nIf you have 2 NPCs with same name in same or different DT might be wrong.\nIf the quest has a direct start, then this will be false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "NPCCanGiveQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::QuestEditorDevFunctionLibrary_eventNPCCanGiveQuest_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventPrintQuestEditorDevLog_Parms
		{
			FString StringIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::NewProp_StringIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::NewProp_StringIn = { "StringIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventPrintQuestEditorDevLog_Parms, StringIn), METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::NewProp_StringIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::NewProp_StringIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::NewProp_StringIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Datatables" },
		{ "Comment", "/*Prints in the Quest Dev Log. Only prints Log messages */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Prints in the Quest Dev Log. Only prints Log messages" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "PrintQuestEditorDevLog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::QuestEditorDevFunctionLibrary_eventPrintQuestEditorDevLog_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventPropagateQuestsInHierarchy_Parms
		{
			FQuest HierarchyQuestIn;
			FQuestRep QuestRepIn;
			int32 MaxSuperiorTier;
			bool PropagateUp;
			TArray<UDataTable*> DatatablesIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRepIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRepIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxSuperiorTier;
		static void NewProp_PropagateUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PropagateUp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DatatablesIn_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatatablesIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventPropagateQuestsInHierarchy_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_QuestRepIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_QuestRepIn = { "QuestRepIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventPropagateQuestsInHierarchy_Parms, QuestRepIn), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_QuestRepIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_QuestRepIn_MetaData)) }; // 2639361420
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_MaxSuperiorTier = { "MaxSuperiorTier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventPropagateQuestsInHierarchy_Parms, MaxSuperiorTier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_PropagateUp_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventPropagateQuestsInHierarchy_Parms*)Obj)->PropagateUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_PropagateUp = { "PropagateUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventPropagateQuestsInHierarchy_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_PropagateUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_DatatablesIn_Inner = { "DatatablesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_DatatablesIn = { "DatatablesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventPropagateQuestsInHierarchy_Parms, DatatablesIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_QuestRepIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_MaxSuperiorTier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_PropagateUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_DatatablesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::NewProp_DatatablesIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/*\n\x09*\x09""For a hierarchy quest, adds the superior or inferior nodes to the QuestHierarchy, propagating.\n\x09*\x09""Adjusts positions and links automatically for presenting in the editor.\n\x09*\x09""Also sets additional variables of quest.\n\x09*\x09@Param HierarchyQuestIn Hierarchy Quest.\n\x09*\x09@Param QuestRepIn Initial quest in the hierarchy.\n\x09*\x09@Param MaxSuperiorTier Max propagation tier. Can be used to avoid performance issues. If 0 will propagate infinitely.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "*       For a hierarchy quest, adds the superior or inferior nodes to the QuestHierarchy, propagating.\n*       Adjusts positions and links automatically for presenting in the editor.\n*       Also sets additional variables of quest.\n*       @Param HierarchyQuestIn Hierarchy Quest.\n*       @Param QuestRepIn Initial quest in the hierarchy.\n*       @Param MaxSuperiorTier Max propagation tier. Can be used to avoid performance issues. If 0 will propagate infinitely." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "PropagateQuestsInHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::QuestEditorDevFunctionLibrary_eventPropagateQuestsInHierarchy_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventQuestRequiresDirectStartNode_Parms
		{
			FQuest QuestIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventQuestRequiresDirectStartNode_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventQuestRequiresDirectStartNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventQuestRequiresDirectStartNode_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09""Detects if a quest should have a direct start node in hierarchy.\n\x09*\x09Requires at least one no conditional starts and at least 1 conditional start\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Detects if a quest should have a direct start node in hierarchy.\nRequires at least one no conditional starts and at least 1 conditional start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "QuestRequiresDirectStartNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::QuestEditorDevFunctionLibrary_eventQuestRequiresDirectStartNode_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventRemoveMultipleTasksByID_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TaskIDs;
			bool UpdateConversationIDs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDs;
		static void NewProp_UpdateConversationIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateConversationIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventRemoveMultipleTasksByID_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_TaskIDs_Inner = { "TaskIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_TaskIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_TaskIDs = { "TaskIDs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventRemoveMultipleTasksByID_Parms, TaskIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_TaskIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_TaskIDs_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_UpdateConversationIDs_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventRemoveMultipleTasksByID_Parms*)Obj)->UpdateConversationIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_UpdateConversationIDs = { "UpdateConversationIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventRemoveMultipleTasksByID_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_UpdateConversationIDs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventRemoveMultipleTasksByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventRemoveMultipleTasksByID_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_TaskIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_TaskIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_UpdateConversationIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Removes many tasks Id from quest.*/" },
		{ "CPP_Default_UpdateConversationIDs", "false" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Removes many tasks Id from quest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "RemoveMultipleTasksByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::QuestEditorDevFunctionLibrary_eventRemoveMultipleTasksByID_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventRemoveTaskByID_Parms
		{
			FQuest QuestIn;
			FQuestTaskID TaskID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventRemoveTaskByID_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::NewProp_TaskID = { "TaskID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventRemoveTaskByID_Parms, TaskID), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventRemoveTaskByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventRemoveTaskByID_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::NewProp_TaskID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Remove a task Id from quest.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Remove a task Id from quest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "RemoveTaskByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::QuestEditorDevFunctionLibrary_eventRemoveTaskByID_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventSaveDialogRowToDT_Parms
		{
			FQuest QuestIn;
			TSoftObjectPtr<UDataTable> DatatableIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSaveDialogRowToDT_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSaveDialogRowToDT_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventSaveDialogRowToDT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventSaveDialogRowToDT_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Saves the dialog to a DT from a quest struct. If it already existes overwrittes it. If not the quest is added*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Saves the dialog to a DT from a quest struct. If it already existes overwrittes it. If not the quest is added" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "SaveDialogRowToDT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::QuestEditorDevFunctionLibrary_eventSaveDialogRowToDT_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventSaveNPCRowToDT_Parms
		{
			FNPCQuestDef NPCInfoIn;
			TSoftObjectPtr<UDataTable> DatatableIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCInfoIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCInfoIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_NPCInfoIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_NPCInfoIn = { "NPCInfoIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSaveNPCRowToDT_Parms, NPCInfoIn), Z_Construct_UScriptStruct_FNPCQuestDef, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_NPCInfoIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_NPCInfoIn_MetaData)) }; // 2955034993
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSaveNPCRowToDT_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventSaveNPCRowToDT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventSaveNPCRowToDT_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_NPCInfoIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Saves the NPCInfo to a DT. If it already existes overwrittes it. If not the npc is added*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Saves the NPCInfo to a DT. If it already existes overwrittes it. If not the npc is added" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "SaveNPCRowToDT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::QuestEditorDevFunctionLibrary_eventSaveNPCRowToDT_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventSaveQuestRowToDT_Parms
		{
			FQuest QuestIn;
			TSoftObjectPtr<UDataTable> DatatableIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatatableIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSaveQuestRowToDT_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_DatatableIn = { "DatatableIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSaveQuestRowToDT_Parms, DatatableIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventSaveQuestRowToDT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventSaveQuestRowToDT_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_DatatableIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/*Saves the quest to a DT. If it already existes overwrittes it. If not the quest is added*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Saves the quest to a DT. If it already existes overwrittes it. If not the quest is added" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "SaveQuestRowToDT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::QuestEditorDevFunctionLibrary_eventSaveQuestRowToDT_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventSeparateTasksByType_Parms
		{
			TArray<FQuestTaskID> AllTasksIn;
			TArray<FQuestTaskID> TasksOut;
			TArray<FQuestTaskID> TalkTasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTasksIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_AllTasksIn_Inner = { "AllTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_AllTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_AllTasksIn = { "AllTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSeparateTasksByType_Parms, AllTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_AllTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_AllTasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSeparateTasksByType_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_TalkTasksOut_Inner = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_TalkTasksOut = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSeparateTasksByType_Parms, TalkTasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_AllTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_AllTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_TasksOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_TalkTasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::NewProp_TalkTasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/**\n\x09*\x09Given a tasks array, separates by type.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Given a tasks array, separates by type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "SeparateTasksByType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::QuestEditorDevFunctionLibrary_eventSeparateTasksByType_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventSetAllNodePositionsInHierarchy_Parms
		{
			FQuest HierarchyQuestIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSetAllNodePositionsInHierarchy_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::NewProp_HierarchyQuestIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Sets all nodes of quest based on their tiers.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Sets all nodes of quest based on their tiers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "SetAllNodePositionsInHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::QuestEditorDevFunctionLibrary_eventSetAllNodePositionsInHierarchy_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventSetAllUniqueIDsInQuest_Parms
		{
			FQuest QuestIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSetAllUniqueIDsInQuest_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::NewProp_QuestIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-IDs" },
		{ "Comment", "/*Gets the quest and sets all unique IDs that are not set in tasks.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets the quest and sets all unique IDs that are not set in tasks." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "SetAllUniqueIDsInQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::QuestEditorDevFunctionLibrary_eventSetAllUniqueIDsInQuest_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventSetNodePositionByTierInHierarchy_Parms
		{
			FQuest HierarchyQuestIn;
			FQuestTaskID NodeIn;
			int32 MaxTaskInAnyTier;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchyQuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxTaskInAnyTier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::NewProp_HierarchyQuestIn = { "HierarchyQuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSetNodePositionByTierInHierarchy_Parms, HierarchyQuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::NewProp_NodeIn = { "NodeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSetNodePositionByTierInHierarchy_Parms, NodeIn), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::NewProp_MaxTaskInAnyTier = { "MaxTaskInAnyTier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSetNodePositionByTierInHierarchy_Parms, MaxTaskInAnyTier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::NewProp_HierarchyQuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::NewProp_NodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::NewProp_MaxTaskInAnyTier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Hierarchy" },
		{ "Comment", "/**\n\x09*\x09Gets total nodes in a tier.\n\x09*\x09Uses payload vector to obtain tiers.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Gets total nodes in a tier.\nUses payload vector to obtain tiers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "SetNodePositionByTierInHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::QuestEditorDevFunctionLibrary_eventSetNodePositionByTierInHierarchy_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventSortIDArrayDecreasing_Parms
		{
			TArray<FQuestTaskID> TaskIDs;
			TArray<FQuestTaskID> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_TaskIDs_Inner = { "TaskIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_TaskIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_TaskIDs = { "TaskIDs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSortIDArrayDecreasing_Parms, TaskIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_TaskIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_TaskIDs_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSortIDArrayDecreasing_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_TaskIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_TaskIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Sorts a array of IDS in decreasing fashion.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Sorts a array of IDS in decreasing fashion." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "SortIDArrayDecreasing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::QuestEditorDevFunctionLibrary_eventSortIDArrayDecreasing_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventSortNodesByEditorPositiong_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> Nodes;
			bool UseY;
			bool UseReverseOrder;
			TArray<FQuestTaskID> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static void NewProp_UseY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseY;
		static void NewProp_UseReverseOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseReverseOrder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSortNodesByEditorPositiong_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_Nodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSortNodesByEditorPositiong_Parms, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_Nodes_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_UseY_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventSortNodesByEditorPositiong_Parms*)Obj)->UseY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_UseY = { "UseY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventSortNodesByEditorPositiong_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_UseY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_UseReverseOrder_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventSortNodesByEditorPositiong_Parms*)Obj)->UseReverseOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_UseReverseOrder = { "UseReverseOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventSortNodesByEditorPositiong_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_UseReverseOrder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSortNodesByEditorPositiong_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_UseY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_UseReverseOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Sorts a array of IDS in decreasing fashion.\n\x09*\x09""Can use X or Y component.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Sorts a array of IDS in decreasing fashion.\nCan use X or Y component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "SortNodesByEditorPositiong", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::QuestEditorDevFunctionLibrary_eventSortNodesByEditorPositiong_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventSwapNodeConnections_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeA;
			FQuestTaskID NodeB;
			ENodeConnectorType ConnectorIn;
			bool UpdateConversationIDs;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeB;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectorIn_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectorIn;
		static void NewProp_UpdateConversationIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateConversationIDs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSwapNodeConnections_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_NodeA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_NodeA = { "NodeA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSwapNodeConnections_Parms, NodeA), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_NodeA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_NodeA_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_NodeB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_NodeB = { "NodeB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSwapNodeConnections_Parms, NodeB), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_NodeB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_NodeB_MetaData)) }; // 3578582651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_ConnectorIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_ConnectorIn = { "ConnectorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSwapNodeConnections_Parms, ConnectorIn), Z_Construct_UEnum_QuestEditor_ENodeConnectorType, METADATA_PARAMS(nullptr, 0) }; // 2123307039
	void Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_UpdateConversationIDs_SetBit(void* Obj)
	{
		((QuestEditorDevFunctionLibrary_eventSwapNodeConnections_Parms*)Obj)->UpdateConversationIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_UpdateConversationIDs = { "UpdateConversationIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestEditorDevFunctionLibrary_eventSwapNodeConnections_Parms), &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_UpdateConversationIDs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventSwapNodeConnections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_NodeA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_NodeB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_ConnectorIn_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_ConnectorIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_UpdateConversationIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Swaps all connections of NodeA with NodeB.\n\x09*\x09Returns a array of messages to be printed for destroyed connections\n\x09*/" },
		{ "CPP_Default_UpdateConversationIDs", "false" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Swaps all connections of NodeA with NodeB.\nReturns a array of messages to be printed for destroyed connections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "SwapNodeConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::QuestEditorDevFunctionLibrary_eventSwapNodeConnections_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventTruncateStringToLen_Parms
		{
			FString StringIn;
			int32 MaxLen;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxLen;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::NewProp_StringIn = { "StringIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventTruncateStringToLen_Parms, StringIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::NewProp_MaxLen = { "MaxLen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventTruncateStringToLen_Parms, MaxLen), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventTruncateStringToLen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::NewProp_StringIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::NewProp_MaxLen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor" },
		{ "Comment", "/**\n\x09*\x09If the string exceds the len, returns all characters possibles untill reaching that len\n\x09*\x09If the string is truncated, \"...\" is added at the end.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "If the string exceds the len, returns all characters possibles untill reaching that len\nIf the string is truncated, \"...\" is added at the end." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "TruncateStringToLen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::QuestEditorDevFunctionLibrary_eventTruncateStringToLen_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics
	{
		struct QuestEditorDevFunctionLibrary_eventUpdateAllConversationsIDs_Parms
		{
			FQuest QuestIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorDevFunctionLibrary_eventUpdateAllConversationsIDs_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::NewProp_QuestIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Updates conversation IDs in talk tasks for a quest.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ToolTip", "Updates conversation IDs in talk tasks for a quest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorDevFunctionLibrary, nullptr, "UpdateAllConversationsIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::QuestEditorDevFunctionLibrary_eventUpdateAllConversationsIDs_Parms), Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorDevFunctionLibrary);
	UClass* Z_Construct_UClass_UQuestEditorDevFunctionLibrary_NoRegister()
	{
		return UQuestEditorDevFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogRowToDT, "AddDialogRowToDT" }, // 3958481174
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddDialogsToNPC, "AddDialogsToNPC" }, // 1796028438
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddHierarchyOfNodeToQuest, "AddHierarchyOfNodeToQuest" }, // 1372155898
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddInitialHierarchyOfQuest, "AddInitialHierarchyOfQuest" }, // 1756485514
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddNPCInfoRowToDT, "AddNPCInfoRowToDT" }, // 1642167918
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestRowToDT, "AddQuestRowToDT" }, // 383198226
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddQuestToNPC, "AddQuestToNPC" }, // 1196161381
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AddTaskOfType, "AddTaskOfType" }, // 2970048032
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllNodePositionsInTierByConnectedNodesInHierarchy, "AdjustAllNodePositionsInTierByConnectedNodesInHierarchy" }, // 478635180
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustAllTierPositionsToAvoidOverlap, "AdjustAllTierPositionsToAvoidOverlap" }, // 956033643
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePairPositionsToAvoidOverlap, "AdjustNodePairPositionsToAvoidOverlap" }, // 3101831810
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AdjustNodePositionsToAvoidOverlapInTier, "AdjustNodePositionsToAvoidOverlapInTier" }, // 4061080445
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreGroupOfNodesConectedToQuest, "AreGroupOfNodesConectedToQuest" }, // 4179487729
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodeArraysEqual, "AreNodeArraysEqual" }, // 3430638068
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreNodesLinked, "AreNodesLinked" }, // 1344547061
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_AreQuestTasksMissingIDs, "AreQuestTasksMissingIDs" }, // 2182940198
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNode, "BreakAllConnectionOfNode" }, // 542015336
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakAllConnectionOfNodeToConnector, "BreakAllConnectionOfNodeToConnector" }, // 2851300632
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_BreakNodesConnection, "BreakNodesConnection" }, // 1561906771
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkNodes, "CanLinkNodes" }, // 36866365
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanLinkWithDisableNode, "CanLinkWithDisableNode" }, // 2811140254
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanNodeStartSwapConnection, "CanNodeStartSwapConnection" }, // 3051906829
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CanPerformKBAction, "CanPerformKBAction" }, // 2725853512
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ChangeLinkTypeBetweenNodes, "ChangeLinkTypeBetweenNodes" }, // 239000907
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ClearAllConnections, "ClearAllConnections" }, // 2110425830
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CollapseXTiers, "CollapseXTiers" }, // 1454919834
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConditionalTaskIsLinkedToQuest, "ConditionalTaskIsLinkedToQuest" }, // 1227813820
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertCenterPositionToQEPosition, "ConvertCenterPositionToQEPosition" }, // 2499317904
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertDialogsToQuest, "ConvertDialogsToQuest" }, // 291495292
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_ConvertQuestRepToHierarchyTask, "ConvertQuestRepToHierarchyTask" }, // 2530485668
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDirectStartHierarchyTask, "CreateDirectStartHierarchyTask" }, // 3409568662
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateDisableLinkBetweenNodes, "CreateDisableLinkBetweenNodes" }, // 3610683784
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_CreateNewLinkBetweenNodes, "CreateNewLinkBetweenNodes" }, // 777929824
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_DestroyDisableLinkBetweenNodes, "DestroyDisableLinkBetweenNodes" }, // 200626334
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FilterRepeatedNodesInHierarchy, "FilterRepeatedNodesInHierarchy" }, // 504362807
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindAllDatatablesOfStruct, "FindAllDatatablesOfStruct" }, // 1945503249
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindDialogInDatatables, "FindDialogInDatatables" }, // 3377968911
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNodeIDInNodeArray, "FindNodeIDInNodeArray" }, // 1250564117
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindNPCInDatatables, "FindNPCInDatatables" }, // 4017889998
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestEditorReference, "FindQuestEditorReference" }, // 1494323321
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_FindQuestInDatatables, "FindQuestInDatatables" }, // 3720127102
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateDialogLocalizationKeys, "GenerateDialogLocalizationKeys" }, // 1015305204
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GenerateQuestLocalizationKeys, "GenerateQuestLocalizationKeys" }, // 3008370363
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetActionForKey, "GetActionForKey" }, // 34674042
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllInferiorQuestsOfQuestRep, "GetAllInferiorQuestsOfQuestRep" }, // 2379882129
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesConnections, "GetAllNodesConnections" }, // 3297226789
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesDisablesConnections, "GetAllNodesDisablesConnections" }, // 240258678
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllNodesOfSameTaskType, "GetAllNodesOfSameTaskType" }, // 2890658467
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllQuestsInDTForNPC, "GetAllQuestsInDTForNPC" }, // 2918431736
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSelectedNodesConnections, "GetAllSelectedNodesConnections" }, // 637053453
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAllSuperiorQuestsOfQuest, "GetAllSuperiorQuestsOfQuest" }, // 3494148562
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetAmountOfNodesInHierarchyTier, "GetAmountOfNodesInHierarchyTier" }, // 1600951318
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultKeybindForAction, "GetDefaultKeybindForAction" }, // 2657216073
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDefaultQuestEditorKeybinds, "GetDefaultQuestEditorKeybinds" }, // 2283070659
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDialogMaxUniqueIDInDT, "GetDialogMaxUniqueIDInDT" }, // 1565195847
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisabledNodesOfNode, "GetDisabledNodesOfNode" }, // 229185504
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetDisablerNodesOfNode, "GetDisablerNodesOfNode" }, // 1938935892
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetHierarchyAdjustOffset, "GetHierarchyAdjustOffset" }, // 4162487565
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInferiorNodesOfNodeWithImmediateHierarchyTier, "GetInferiorNodesOfNodeWithImmediateHierarchyTier" }, // 2321112627
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetInitialPseudoTasksOfQuest, "GetInitialPseudoTasksOfQuest" }, // 259499681
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetLinkTypeBetweenConnectedQuests, "GetLinkTypeBetweenConnectedQuests" }, // 839610033
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxAmountOfNodesInHierarchyTiers, "GetMaxAmountOfNodesInHierarchyTiers" }, // 4238266490
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMaxHierarchyYTier, "GetMaxHierarchyYTier" }, // 1957984845
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetMinHierarchyYTier, "GetMinHierarchyYTier" }, // 3762692581
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeCenterPosition, "GetNodeCenterPosition" }, // 3351616624
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeConnections, "GetNodeConnections" }, // 3712459594
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeDisableConnections, "GetNodeDisableConnections" }, // 1224899566
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodeGridTier, "GetNodeGridTier" }, // 4186221211
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodePosition, "GetNodePosition" }, // 2270122283
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesAverageXPositionInHierarchy, "GetNodesAverageXPositionInHierarchy" }, // 3418482882
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesIDsByTierInHierarchy, "GetNodesIDsByTierInHierarchy" }, // 1126698992
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNodesInTierOverlappingPosition, "GetNodesInTierOverlappingPosition" }, // 1230704168
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetNPCsThatCanStartQuest, "GetNPCsThatCanStartQuest" }, // 2113782612
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetPositionValue, "GetPositionValue" }, // 366382980
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEditorSettings, "GetQuestEditorSettings" }, // 1065465240
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestEndNodes, "GetQuestEndNodes" }, // 3012682915
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestHierarchy, "GetQuestHierarchy" }, // 112187638
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestMaxUniqueIDInDT, "GetQuestMaxUniqueIDInDT" }, // 1430574858
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeSeparatedStrings, "GetQuestNodeSeparatedStrings" }, // 3665857963
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNodeVisualString, "GetQuestNodeVisualString" }, // 2934350168
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestNonConditionalStartNodes, "GetQuestNonConditionalStartNodes" }, // 2488477009
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestPseudoStartNodes, "GetQuestPseudoStartNodes" }, // 1828661411
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestsGameWorld, "GetQuestsGameWorld" }, // 3437015515
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNodes, "GetQuestStartNodes" }, // 3829427995
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetQuestStartNPCs, "GetQuestStartNPCs" }, // 2743896073
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTalkTask, "GetRepresentingTalkTask" }, // 1258505883
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetRepresentingTask, "GetRepresentingTask" }, // 230747652
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSelectionType, "GetSelectionType" }, // 3918927914
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowSize, "GetSettings_ArrowSize" }, // 1256261740
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ArrowsSensitivity, "GetSettings_ArrowsSensitivity" }, // 1478330035
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_DetailsPanelSize, "GetSettings_DetailsPanelSize" }, // 727445186
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_LineThickness, "GetSettings_LineThickness" }, // 2779422089
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_PreviousVersion, "GetSettings_PreviousVersion" }, // 3292087633
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TalkTaskBGColor, "GetSettings_TalkTaskBGColor" }, // 3397666478
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_TaskBGColor, "GetSettings_TaskBGColor" }, // 1985148335
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSettings_ZoomSensitivity, "GetSettings_ZoomSensitivity" }, // 3515913767
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingPseudoTalkTaskForNPC, "GetStartingPseudoTalkTaskForNPC" }, // 3925743097
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetStartingTalkTaskForNPC, "GetStartingTalkTaskForNPC" }, // 4267261509
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetSuperiorNodesOfNodeWithImmediateHierarchyTier, "GetSuperiorNodesOfNodeWithImmediateHierarchyTier" }, // 3883123923
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTalkTasksFromIDArray, "GetTalkTasksFromIDArray" }, // 3446315605
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDSeparatedStrings, "GetTaskIDSeparatedStrings" }, // 3603096132
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskIDVisualString, "GetTaskIDVisualString" }, // 645745117
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskMaxUniqueID, "GetTaskMaxUniqueID" }, // 3725254437
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTaskQuestEditorInfo, "GetTaskQuestEditorInfo" }, // 2501269089
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_GetTasksFromIDArray, "GetTasksFromIDArray" }, // 1563878044
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleDialogUniqueID, "HandleDialogUniqueID" }, // 1280171801
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_HandleQuestUniqueID, "HandleQuestUniqueID" }, // 3934054992
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDialogUniqueIDValid, "IsDialogUniqueIDValid" }, // 2627406061
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsDTofStructType, "IsDTofStructType" }, // 3197933373
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsNodeNearPositionInHierarchy, "IsNodeNearPositionInHierarchy" }, // 1514704251
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestInDatatables, "IsQuestInDatatables" }, // 1250248215
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsQuestUniqueIDValid, "IsQuestUniqueIDValid" }, // 2712625210
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_IsWidgetFullyVisible, "IsWidgetFullyVisible" }, // 2572584759
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_NPCCanGiveQuest, "NPCCanGiveQuest" }, // 3675494283
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PrintQuestEditorDevLog, "PrintQuestEditorDevLog" }, // 1651918084
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_PropagateQuestsInHierarchy, "PropagateQuestsInHierarchy" }, // 2557062910
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_QuestRequiresDirectStartNode, "QuestRequiresDirectStartNode" }, // 665531891
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveMultipleTasksByID, "RemoveMultipleTasksByID" }, // 570498716
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_RemoveTaskByID, "RemoveTaskByID" }, // 2523345175
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveDialogRowToDT, "SaveDialogRowToDT" }, // 3662861802
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveNPCRowToDT, "SaveNPCRowToDT" }, // 1843791526
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SaveQuestRowToDT, "SaveQuestRowToDT" }, // 132139734
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SeparateTasksByType, "SeparateTasksByType" }, // 2684584057
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllNodePositionsInHierarchy, "SetAllNodePositionsInHierarchy" }, // 4286586592
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetAllUniqueIDsInQuest, "SetAllUniqueIDsInQuest" }, // 3711503258
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SetNodePositionByTierInHierarchy, "SetNodePositionByTierInHierarchy" }, // 389692770
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortIDArrayDecreasing, "SortIDArrayDecreasing" }, // 3244741171
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SortNodesByEditorPositiong, "SortNodesByEditorPositiong" }, // 621051877
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_SwapNodeConnections, "SwapNodeConnections" }, // 805775139
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_TruncateStringToLen, "TruncateStringToLen" }, // 3956610232
		{ &Z_Construct_UFunction_UQuestEditorDevFunctionLibrary_UpdateAllConversationsIDs, "UpdateAllConversationsIDs" }, // 2122409478
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestEditor/QuestEditorDevFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestEditorDevFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorDevFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics::ClassParams = {
		&UQuestEditorDevFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEditorDevFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorDevFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorDevFunctionLibrary.OuterSingleton, Z_Construct_UClass_UQuestEditorDevFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorDevFunctionLibrary.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UQuestEditorDevFunctionLibrary>()
	{
		return UQuestEditorDevFunctionLibrary::StaticClass();
	}
	UQuestEditorDevFunctionLibrary::UQuestEditorDevFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorDevFunctionLibrary);
	UQuestEditorDevFunctionLibrary::~UQuestEditorDevFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorDevFunctionLibrary, UQuestEditorDevFunctionLibrary::StaticClass, TEXT("UQuestEditorDevFunctionLibrary"), &Z_Registration_Info_UClass_UQuestEditorDevFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorDevFunctionLibrary), 415715273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_1973814500(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestEditorDevFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
