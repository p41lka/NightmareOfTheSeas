// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestEditor/QuestEditorFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
struct FDialog;
struct FQuest;
struct FQuestTaskID;
#ifdef QUESTEDITOR_QuestEditorFunctionLibrary_generated_h
#error "QuestEditorFunctionLibrary.generated.h already included, missing '#pragma once' in QuestEditorFunctionLibrary.h"
#endif
#define QUESTEDITOR_QuestEditorFunctionLibrary_generated_h

#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_SPARSE_DATA
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetQuestTasksIDs); \
	DECLARE_FUNCTION(execGetQuestEndTasks); \
	DECLARE_FUNCTION(execGetAmountOfQuestEnds); \
	DECLARE_FUNCTION(execGetAmountOfQuestStarts); \
	DECLARE_FUNCTION(execConvertDialogToQuest); \
	DECLARE_FUNCTION(execConvertQuestToDialog); \
	DECLARE_FUNCTION(execGetDTDialogRowFromPath); \
	DECLARE_FUNCTION(execGetDTQuestRowFromPath);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetQuestTasksIDs); \
	DECLARE_FUNCTION(execGetQuestEndTasks); \
	DECLARE_FUNCTION(execGetAmountOfQuestEnds); \
	DECLARE_FUNCTION(execGetAmountOfQuestStarts); \
	DECLARE_FUNCTION(execConvertDialogToQuest); \
	DECLARE_FUNCTION(execConvertQuestToDialog); \
	DECLARE_FUNCTION(execGetDTDialogRowFromPath); \
	DECLARE_FUNCTION(execGetDTQuestRowFromPath);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_ACCESSORS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestEditorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuestEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UQuestEditorFunctionLibrary)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUQuestEditorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UQuestEditorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuestEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestEditor"), NO_API) \
	DECLARE_SERIALIZER(UQuestEditorFunctionLibrary)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestEditorFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEditorFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestEditorFunctionLibrary(UQuestEditorFunctionLibrary&&); \
	NO_API UQuestEditorFunctionLibrary(const UQuestEditorFunctionLibrary&); \
public: \
	NO_API virtual ~UQuestEditorFunctionLibrary();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestEditorFunctionLibrary(UQuestEditorFunctionLibrary&&); \
	NO_API UQuestEditorFunctionLibrary(const UQuestEditorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEditorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestEditorFunctionLibrary) \
	NO_API virtual ~UQuestEditorFunctionLibrary();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_14_PROLOG
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_RPC_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_INCLASS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UQuestEditorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_QuestEditor_QuestEditorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
