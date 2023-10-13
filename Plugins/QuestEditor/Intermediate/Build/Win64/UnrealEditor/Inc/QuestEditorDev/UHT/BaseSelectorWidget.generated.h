// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selectors/BaseSelectorWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
class UObject;
struct FGameplayTagContainer;
struct FQuestTask;
#ifdef QUESTEDITORDEV_BaseSelectorWidget_generated_h
#error "BaseSelectorWidget.generated.h already included, missing '#pragma once' in BaseSelectorWidget.h"
#endif
#define QUESTEDITORDEV_BaseSelectorWidget_generated_h

#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_18_DELEGATE \
QUESTEDITORDEV_API void FSelectedFloat_DelegateWrapper(const FMulticastScriptDelegate& SelectedFloat, float NewValue, int32 Slot);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_19_DELEGATE \
QUESTEDITORDEV_API void FSelectedString_DelegateWrapper(const FMulticastScriptDelegate& SelectedString, const FString& NewValue, int32 Slot);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_20_DELEGATE \
QUESTEDITORDEV_API void FSelectedObjectClass_DelegateWrapper(const FMulticastScriptDelegate& SelectedObjectClass, const TSoftClassPtr<UObject> & NewValue, int32 Slot);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_21_DELEGATE \
QUESTEDITORDEV_API void FSelectedVector_DelegateWrapper(const FMulticastScriptDelegate& SelectedVector, FVector NewValue, int32 Slot);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_22_DELEGATE \
QUESTEDITORDEV_API void FSelectedTag_DelegateWrapper(const FMulticastScriptDelegate& SelectedTag, FGameplayTagContainer NewValue, int32 Slot);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_SPARSE_DATA
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindDTFromPath); \
	DECLARE_FUNCTION(execFindDTFromName);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindDTFromPath); \
	DECLARE_FUNCTION(execFindDTFromName);


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_ACCESSORS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_CALLBACK_WRAPPERS
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseSelectorWidget(); \
	friend struct Z_Construct_UClass_UBaseSelectorWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseSelectorWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditorDev"), NO_API) \
	DECLARE_SERIALIZER(UBaseSelectorWidget)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUBaseSelectorWidget(); \
	friend struct Z_Construct_UClass_UBaseSelectorWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseSelectorWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditorDev"), NO_API) \
	DECLARE_SERIALIZER(UBaseSelectorWidget)


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseSelectorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseSelectorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseSelectorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseSelectorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseSelectorWidget(UBaseSelectorWidget&&); \
	NO_API UBaseSelectorWidget(const UBaseSelectorWidget&); \
public: \
	NO_API virtual ~UBaseSelectorWidget();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseSelectorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseSelectorWidget(UBaseSelectorWidget&&); \
	NO_API UBaseSelectorWidget(const UBaseSelectorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseSelectorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseSelectorWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseSelectorWidget) \
	NO_API virtual ~UBaseSelectorWidget();


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_27_PROLOG
#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_RPC_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_INCLASS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_SPARSE_DATA \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_ACCESSORS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_CALLBACK_WRAPPERS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_INCLASS_NO_PURE_DECLS \
	FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITORDEV_API UClass* StaticClass<class UBaseSelectorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
