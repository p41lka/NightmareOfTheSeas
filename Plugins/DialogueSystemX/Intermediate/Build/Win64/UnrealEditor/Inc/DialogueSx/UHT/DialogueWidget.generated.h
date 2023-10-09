// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMG/DialogueWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESign : uint8;
enum class EType : uint8;
struct FDataStruct;
struct FDialogueDataStruct;
struct FReplyStruct;
#ifdef DIALOGUESX_DialogueWidget_generated_h
#error "DialogueWidget.generated.h already included, missing '#pragma once' in DialogueWidget.h"
#endif
#define DIALOGUESX_DialogueWidget_generated_h

#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_24_DELEGATE \
DIALOGUESX_API void FOnStartTextPrinting_DelegateWrapper(const FMulticastScriptDelegate& OnStartTextPrinting, const FText& Text, TArray<FDataStruct> const& Data, TArray<FString> const& Commands);


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_27_DELEGATE \
DIALOGUESX_API void FOnEndTextPrinting_DelegateWrapper(const FMulticastScriptDelegate& OnEndTextPrinting, TArray<FDataStruct> const& Data, TArray<FString> const& Commands);


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_30_DELEGATE \
DIALOGUESX_API void FOnReplyClick_DelegateWrapper(const FMulticastScriptDelegate& OnReplyClick, TArray<FDataStruct> const& Data, TArray<FString> const& Commands, TArray<int32> const& Connections);


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_32_DELEGATE \
DIALOGUESX_API void FOnEndDialogue_DelegateWrapper(const FMulticastScriptDelegate& OnEndDialogue);


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplyStruct_Statics; \
	DIALOGUESX_API static class UScriptStruct* StaticStruct();


template<> DIALOGUESX_API UScriptStruct* StaticStruct<struct FReplyStruct>();

#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNPCStruct_Statics; \
	DIALOGUESX_API static class UScriptStruct* StaticStruct();


template<> DIALOGUESX_API UScriptStruct* StaticStruct<struct FNPCStruct>();

#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_SPARSE_DATA
#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTextStartPrintingFun); \
	DECLARE_FUNCTION(execOnReplyFun); \
	DECLARE_FUNCTION(execClearReplies); \
	DECLARE_FUNCTION(execAddReplies); \
	DECLARE_FUNCTION(execNextState); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execGetFloatField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execGetIntegerField); \
	DECLARE_FUNCTION(execGetPropertyValueAsString); \
	DECLARE_FUNCTION(execShowReply); \
	DECLARE_FUNCTION(execGetCurrentReplies); \
	DECLARE_FUNCTION(execCompareValues);


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTextStartPrintingFun); \
	DECLARE_FUNCTION(execOnReplyFun); \
	DECLARE_FUNCTION(execClearReplies); \
	DECLARE_FUNCTION(execAddReplies); \
	DECLARE_FUNCTION(execNextState); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execGetFloatField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execGetIntegerField); \
	DECLARE_FUNCTION(execGetPropertyValueAsString); \
	DECLARE_FUNCTION(execShowReply); \
	DECLARE_FUNCTION(execGetCurrentReplies); \
	DECLARE_FUNCTION(execCompareValues);


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_ACCESSORS
#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueWidget(); \
	friend struct Z_Construct_UClass_UDialogueWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialogueSx"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidget)


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueWidget(); \
	friend struct Z_Construct_UClass_UDialogueWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialogueSx"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidget)


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWidget(UDialogueWidget&&); \
	NO_API UDialogueWidget(const UDialogueWidget&); \
public: \
	NO_API virtual ~UDialogueWidget();


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWidget(UDialogueWidget&&); \
	NO_API UDialogueWidget(const UDialogueWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidget) \
	NO_API virtual ~UDialogueWidget();


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_79_PROLOG
#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_RPC_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_INCLASS \
	FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_INCLASS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUESX_API UClass* StaticClass<class UDialogueWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_UMG_DialogueWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
