// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestEditor/BaseQuestEditor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseQuestTask;
class UBaseTooltipContentWidget;
class UObject;
class UQuestEditorSaveGame;
class USoundCue;
enum class ENodeConnectorType : uint8;
enum class EQuestEditor_EditMode : uint8;
struct FGameplayTagContainer;
struct FLinearColor;
struct FNPCQuestDefRep;
struct FQuest;
struct FQuestTalkTask;
struct FQuestTalkTaskEditorInfo;
struct FQuestTask;
struct FQuestTaskID;
struct FQuestTaskPayload;
struct FSoftClassPath;
#ifdef QUESTEDITORDEV_BaseQuestEditor_generated_h
#error "BaseQuestEditor.generated.h already included, missing '#pragma once' in BaseQuestEditor.h"
#endif
#define QUESTEDITORDEV_BaseQuestEditor_generated_h

#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_22_DELEGATE \
QUESTEDITORDEV_API void FHideTooltip_DelegateWrapper(const FMulticastScriptDelegate& HideTooltip);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_23_DELEGATE \
QUESTEDITORDEV_API void FShowTooltip_DelegateWrapper(const FMulticastScriptDelegate& ShowTooltip, FQuestTaskPayload const& PayloadIn, TSubclassOf<UBaseTooltipContentWidget>  TooltipContentWidget, bool UseMousePosition, FVector2D Offset);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_24_DELEGATE \
QUESTEDITORDEV_API void FShowMessage_DelegateWrapper(const FMulticastScriptDelegate& ShowMessage, const FString& StringIn, FLinearColor const& ColorIn);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_SPARSE_DATA
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearNPCForAllTalkTasks); \
	DECLARE_FUNCTION(execHandleCopyPasteNodes); \
	DECLARE_FUNCTION(execSwapNodeConnectionsAndPrintErrors); \
	DECLARE_FUNCTION(execToggleSelectedNodesConnectionsType); \
	DECLARE_FUNCTION(execRemoveSelectedNodesDisableConnections); \
	DECLARE_FUNCTION(execRemoveSelectedNodesConnections); \
	DECLARE_FUNCTION(execConnectNodesDisabling); \
	DECLARE_FUNCTION(execConnectNodesGridLayout); \
	DECLARE_FUNCTION(execConnectNodes); \
	DECLARE_FUNCTION(execDisplaceNodesPosition); \
	DECLARE_FUNCTION(execAlignNodesToEvenDistribution); \
	DECLARE_FUNCTION(execAlignNodesToGrid); \
	DECLARE_FUNCTION(execAlignNodesToSides); \
	DECLARE_FUNCTION(execUpdateNodeQEPosition); \
	DECLARE_FUNCTION(execUpdateTaskCustomPayload); \
	DECLARE_FUNCTION(execUpdateTaskSoftClass); \
	DECLARE_FUNCTION(execUpdateTaskPayload); \
	DECLARE_FUNCTION(execUpdateTaskVector); \
	DECLARE_FUNCTION(execUpdateTaskClass); \
	DECLARE_FUNCTION(execUpdateInverseActivateCond); \
	DECLARE_FUNCTION(execUpdateTaskShortDesc); \
	DECLARE_FUNCTION(execUpdateTaskTagsIgnored); \
	DECLARE_FUNCTION(execUpdateTaskTagsRequired); \
	DECLARE_FUNCTION(execUpdateTaskAmountInv); \
	DECLARE_FUNCTION(execUpdateTaskTimesToCheck); \
	DECLARE_FUNCTION(execUpdateTaskName2Inv); \
	DECLARE_FUNCTION(execUpdateTaskNameInv); \
	DECLARE_FUNCTION(execUpdateTalkTaskNPCCue); \
	DECLARE_FUNCTION(execUpdateTalkTaskPlayerCue); \
	DECLARE_FUNCTION(execUpdateTalkTaskNPCResponse); \
	DECLARE_FUNCTION(execUpdateTalkTaskYouSay); \
	DECLARE_FUNCTION(execUpdateTalkTaskCustomPayloadData); \
	DECLARE_FUNCTION(execUpdateTalkTaskShortDesc); \
	DECLARE_FUNCTION(execUpdateTalkTaskNPC); \
	DECLARE_FUNCTION(execQEditorSave_GetVariables_Misc); \
	DECLARE_FUNCTION(execQEditorSave_GetVariables_Undo); \
	DECLARE_FUNCTION(execQEditorSave_GetVariables_Primary); \
	DECLARE_FUNCTION(execQEditorSave_GetVariables); \
	DECLARE_FUNCTION(execQEditorSave_SaveVariables); \
	DECLARE_FUNCTION(execQEditorSave_GetSavegame); \
	DECLARE_FUNCTION(execGetCurrentTalkModeInfo); \
	DECLARE_FUNCTION(execShowWarnningMessage); \
	DECLARE_FUNCTION(execShowNormalMessage); \
	DECLARE_FUNCTION(execGetDefaultTalkModeInfo); \
	DECLARE_FUNCTION(execGetEditorAutosaveFreq); \
	DECLARE_FUNCTION(execGetEditorGridSize); \
	DECLARE_FUNCTION(execGetQENPCSelector); \
	DECLARE_FUNCTION(execGetQEQuestSelector); \
	DECLARE_FUNCTION(execGetQETaskSelector); \
	DECLARE_FUNCTION(execGetSelectorFromClass); \
	DECLARE_FUNCTION(execDeleteQuestEditorSaveGame); \
	DECLARE_FUNCTION(execChangeDTsType); \
	DECLARE_FUNCTION(execFixPreviousVersionData); \
	DECLARE_FUNCTION(execAppendDatatablesOfQuestForOneFolderPath); \
	DECLARE_FUNCTION(execSetAllDatatablesOfQuest);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearNPCForAllTalkTasks); \
	DECLARE_FUNCTION(execHandleCopyPasteNodes); \
	DECLARE_FUNCTION(execSwapNodeConnectionsAndPrintErrors); \
	DECLARE_FUNCTION(execToggleSelectedNodesConnectionsType); \
	DECLARE_FUNCTION(execRemoveSelectedNodesDisableConnections); \
	DECLARE_FUNCTION(execRemoveSelectedNodesConnections); \
	DECLARE_FUNCTION(execConnectNodesDisabling); \
	DECLARE_FUNCTION(execConnectNodesGridLayout); \
	DECLARE_FUNCTION(execConnectNodes); \
	DECLARE_FUNCTION(execDisplaceNodesPosition); \
	DECLARE_FUNCTION(execAlignNodesToEvenDistribution); \
	DECLARE_FUNCTION(execAlignNodesToGrid); \
	DECLARE_FUNCTION(execAlignNodesToSides); \
	DECLARE_FUNCTION(execUpdateNodeQEPosition); \
	DECLARE_FUNCTION(execUpdateTaskCustomPayload); \
	DECLARE_FUNCTION(execUpdateTaskSoftClass); \
	DECLARE_FUNCTION(execUpdateTaskPayload); \
	DECLARE_FUNCTION(execUpdateTaskVector); \
	DECLARE_FUNCTION(execUpdateTaskClass); \
	DECLARE_FUNCTION(execUpdateInverseActivateCond); \
	DECLARE_FUNCTION(execUpdateTaskShortDesc); \
	DECLARE_FUNCTION(execUpdateTaskTagsIgnored); \
	DECLARE_FUNCTION(execUpdateTaskTagsRequired); \
	DECLARE_FUNCTION(execUpdateTaskAmountInv); \
	DECLARE_FUNCTION(execUpdateTaskTimesToCheck); \
	DECLARE_FUNCTION(execUpdateTaskName2Inv); \
	DECLARE_FUNCTION(execUpdateTaskNameInv); \
	DECLARE_FUNCTION(execUpdateTalkTaskNPCCue); \
	DECLARE_FUNCTION(execUpdateTalkTaskPlayerCue); \
	DECLARE_FUNCTION(execUpdateTalkTaskNPCResponse); \
	DECLARE_FUNCTION(execUpdateTalkTaskYouSay); \
	DECLARE_FUNCTION(execUpdateTalkTaskCustomPayloadData); \
	DECLARE_FUNCTION(execUpdateTalkTaskShortDesc); \
	DECLARE_FUNCTION(execUpdateTalkTaskNPC); \
	DECLARE_FUNCTION(execQEditorSave_GetVariables_Misc); \
	DECLARE_FUNCTION(execQEditorSave_GetVariables_Undo); \
	DECLARE_FUNCTION(execQEditorSave_GetVariables_Primary); \
	DECLARE_FUNCTION(execQEditorSave_GetVariables); \
	DECLARE_FUNCTION(execQEditorSave_SaveVariables); \
	DECLARE_FUNCTION(execQEditorSave_GetSavegame); \
	DECLARE_FUNCTION(execGetCurrentTalkModeInfo); \
	DECLARE_FUNCTION(execShowWarnningMessage); \
	DECLARE_FUNCTION(execShowNormalMessage); \
	DECLARE_FUNCTION(execGetDefaultTalkModeInfo); \
	DECLARE_FUNCTION(execGetEditorAutosaveFreq); \
	DECLARE_FUNCTION(execGetEditorGridSize); \
	DECLARE_FUNCTION(execGetQENPCSelector); \
	DECLARE_FUNCTION(execGetQEQuestSelector); \
	DECLARE_FUNCTION(execGetQETaskSelector); \
	DECLARE_FUNCTION(execGetSelectorFromClass); \
	DECLARE_FUNCTION(execDeleteQuestEditorSaveGame); \
	DECLARE_FUNCTION(execChangeDTsType); \
	DECLARE_FUNCTION(execFixPreviousVersionData); \
	DECLARE_FUNCTION(execAppendDatatablesOfQuestForOneFolderPath); \
	DECLARE_FUNCTION(execSetAllDatatablesOfQuest);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_ACCESSORS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseQuestEditor(); \
	friend struct Z_Construct_UClass_UBaseQuestEditor_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestEditor, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditorDev"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestEditor) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUBaseQuestEditor(); \
	friend struct Z_Construct_UClass_UBaseQuestEditor_Statics; \
public: \
	DECLARE_CLASS(UBaseQuestEditor, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditorDev"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuestEditor) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseQuestEditor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseQuestEditor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestEditor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestEditor(UBaseQuestEditor&&); \
	NO_API UBaseQuestEditor(const UBaseQuestEditor&); \
public: \
	NO_API virtual ~UBaseQuestEditor();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuestEditor(UBaseQuestEditor&&); \
	NO_API UBaseQuestEditor(const UBaseQuestEditor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuestEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuestEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseQuestEditor) \
	NO_API virtual ~UBaseQuestEditor();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_26_PROLOG
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_RPC_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_INCLASS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_INCLASS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITORDEV_API UClass* StaticClass<class UBaseQuestEditor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
