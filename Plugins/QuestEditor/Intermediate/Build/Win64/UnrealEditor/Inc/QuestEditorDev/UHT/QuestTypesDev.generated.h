// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestEditor/QuestTypesDev.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTEDITORDEV_QuestTypesDev_generated_h
#error "QuestTypesDev.generated.h already included, missing '#pragma once' in QuestTypesDev.h"
#endif
#define QUESTEDITORDEV_QuestTypesDev_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics; \
	QUESTEDITORDEV_API static class UScriptStruct* StaticStruct();


template<> QUESTEDITORDEV_API UScriptStruct* StaticStruct<struct FQuestEditorDrawLineData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics; \
	QUESTEDITORDEV_API static class UScriptStruct* StaticStruct();


template<> QUESTEDITORDEV_API UScriptStruct* StaticStruct<struct FQuestEditorKeyBind>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics; \
	QUESTEDITORDEV_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> QUESTEDITORDEV_API UScriptStruct* StaticStruct<struct FQuestTaskEditorInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics; \
	QUESTEDITORDEV_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> QUESTEDITORDEV_API UScriptStruct* StaticStruct<struct FQuestTalkTaskEditorInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h


#define FOREACH_ENUM_EQUESTEDITOR_EDITMODE(op) \
	op(EQuestEditor_EditMode::NPC) \
	op(EQuestEditor_EditMode::Quest) \
	op(EQuestEditor_EditMode::Dialog) 

enum class EQuestEditor_EditMode : uint8;
template<> struct TIsUEnumClass<EQuestEditor_EditMode> { enum { Value = true }; };
template<> QUESTEDITORDEV_API UEnum* StaticEnum<EQuestEditor_EditMode>();

#define FOREACH_ENUM_ENODESELECTIONTYPE(op) \
	op(ENodeSelectionType::NoSelection) \
	op(ENodeSelectionType::Task) \
	op(ENodeSelectionType::TalkTask) \
	op(ENodeSelectionType::MultiNode) \
	op(ENodeSelectionType::MultiTalkTask) \
	op(ENodeSelectionType::MultiTask) 

enum class ENodeSelectionType : uint8;
template<> struct TIsUEnumClass<ENodeSelectionType> { enum { Value = true }; };
template<> QUESTEDITORDEV_API UEnum* StaticEnum<ENodeSelectionType>();

#define FOREACH_ENUM_EQUESTKEYBINDACTION(op) \
	op(EQuestKeyBindAction::MoveUp) \
	op(EQuestKeyBindAction::MoveDown) \
	op(EQuestKeyBindAction::MoveLeft) \
	op(EQuestKeyBindAction::MoveRight) \
	op(EQuestKeyBindAction::ZoomIn) \
	op(EQuestKeyBindAction::ZoomOut) \
	op(EQuestKeyBindAction::AlignNodesUp) \
	op(EQuestKeyBindAction::AlignNodesDown) \
	op(EQuestKeyBindAction::AlignNodesLeft) \
	op(EQuestKeyBindAction::AlignNodesRight) \
	op(EQuestKeyBindAction::AlignNodesUpAndEven) \
	op(EQuestKeyBindAction::AlignNodesDownAndEven) \
	op(EQuestKeyBindAction::AlignNodesLeftAndEven) \
	op(EQuestKeyBindAction::AlignNodesRightAndEven) \
	op(EQuestKeyBindAction::AlignNodesToGrid) \
	op(EQuestKeyBindAction::EvenXDistribution) \
	op(EQuestKeyBindAction::EvenYDistribution) \
	op(EQuestKeyBindAction::DeleteNodes) \
	op(EQuestKeyBindAction::IterateStartNodes) \
	op(EQuestKeyBindAction::IterateEndNodes) \
	op(EQuestKeyBindAction::IterateNodesForward) \
	op(EQuestKeyBindAction::IterateNodesBackward) \
	op(EQuestKeyBindAction::FindSelectedNode) \
	op(EQuestKeyBindAction::CenterViewport) \
	op(EQuestKeyBindAction::ResetZoom) \
	op(EQuestKeyBindAction::Undo) \
	op(EQuestKeyBindAction::Redo) \
	op(EQuestKeyBindAction::CopyNodes) \
	op(EQuestKeyBindAction::CutNodes) \
	op(EQuestKeyBindAction::PasteNodes) \
	op(EQuestKeyBindAction::ConnectSelectedNodes) \
	op(EQuestKeyBindAction::ConnectSelectedNodesAsGrid) \
	op(EQuestKeyBindAction::ToggleSelectedConnectionsTypes) \
	op(EQuestKeyBindAction::MutuallyDisableNodes) \
	op(EQuestKeyBindAction::RemoveSelectedNodesConnections) \
	op(EQuestKeyBindAction::RemoveSelectedNodesDisableConnections) 

enum class EQuestKeyBindAction : uint8;
template<> struct TIsUEnumClass<EQuestKeyBindAction> { enum { Value = true }; };
template<> QUESTEDITORDEV_API UEnum* StaticEnum<EQuestKeyBindAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
