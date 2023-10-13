// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TalkTaskCustomization/BaseTalkTaskSelectorWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundCue;
struct FQuestTalkTask;
#ifdef QUESTEDITORDEV_BaseTalkTaskSelectorWidget_generated_h
#error "BaseTalkTaskSelectorWidget.generated.h already included, missing '#pragma once' in BaseTalkTaskSelectorWidget.h"
#endif
#define QUESTEDITORDEV_BaseTalkTaskSelectorWidget_generated_h

#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_22_DELEGATE \
QUESTEDITORDEV_API void FTalkSelectedText_DelegateWrapper(const FMulticastScriptDelegate& TalkSelectedText, FText const& NewValue);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_23_DELEGATE \
QUESTEDITORDEV_API void FTalkSelectedString_DelegateWrapper(const FMulticastScriptDelegate& TalkSelectedString, const FString& NewValue);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_24_DELEGATE \
QUESTEDITORDEV_API void FTalkSelectedSound_DelegateWrapper(const FMulticastScriptDelegate& TalkSelectedSound, const TSoftObjectPtr<USoundCue>& NewValue);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_SPARSE_DATA
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectorCommitNPCSound); \
	DECLARE_FUNCTION(execSelectorCommitPlayerSound); \
	DECLARE_FUNCTION(execSelectorCommitCustomPayloadData); \
	DECLARE_FUNCTION(execSelectorCommitShortDescription); \
	DECLARE_FUNCTION(execSelectorCommitNPCResponse); \
	DECLARE_FUNCTION(execSelectorCommitPlayerSay);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectorCommitNPCSound); \
	DECLARE_FUNCTION(execSelectorCommitPlayerSound); \
	DECLARE_FUNCTION(execSelectorCommitCustomPayloadData); \
	DECLARE_FUNCTION(execSelectorCommitShortDescription); \
	DECLARE_FUNCTION(execSelectorCommitNPCResponse); \
	DECLARE_FUNCTION(execSelectorCommitPlayerSay);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_ACCESSORS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_CALLBACK_WRAPPERS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseTalkTaskSelectorWidget(); \
	friend struct Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseTalkTaskSelectorWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditorDev"), NO_API) \
	DECLARE_SERIALIZER(UBaseTalkTaskSelectorWidget)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUBaseTalkTaskSelectorWidget(); \
	friend struct Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseTalkTaskSelectorWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditorDev"), NO_API) \
	DECLARE_SERIALIZER(UBaseTalkTaskSelectorWidget)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseTalkTaskSelectorWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseTalkTaskSelectorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTalkTaskSelectorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTalkTaskSelectorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseTalkTaskSelectorWidget(UBaseTalkTaskSelectorWidget&&); \
	NO_API UBaseTalkTaskSelectorWidget(const UBaseTalkTaskSelectorWidget&); \
public: \
	NO_API virtual ~UBaseTalkTaskSelectorWidget();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseTalkTaskSelectorWidget(UBaseTalkTaskSelectorWidget&&); \
	NO_API UBaseTalkTaskSelectorWidget(const UBaseTalkTaskSelectorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTalkTaskSelectorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTalkTaskSelectorWidget); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseTalkTaskSelectorWidget) \
	NO_API virtual ~UBaseTalkTaskSelectorWidget();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_26_PROLOG
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_RPC_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_INCLASS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_INCLASS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITORDEV_API UClass* StaticClass<class UBaseTalkTaskSelectorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
