// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selectors/BasePayloadSelectorWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UWidget;
struct FGameplayTagContainer;
#ifdef QUESTEDITORDEV_BasePayloadSelectorWidget_generated_h
#error "BasePayloadSelectorWidget.generated.h already included, missing '#pragma once' in BasePayloadSelectorWidget.h"
#endif
#define QUESTEDITORDEV_BasePayloadSelectorWidget_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_14_DELEGATE \
QUESTEDITORDEV_API void FPayloadSelectedFloat_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedFloat, float NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_15_DELEGATE \
QUESTEDITORDEV_API void FPayloadSelectedInt_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedInt, int32 NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_16_DELEGATE \
QUESTEDITORDEV_API void FPayloadSelectedString_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedString, const FString& NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_17_DELEGATE \
QUESTEDITORDEV_API void FPayloadSelectedObjectClass_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedObjectClass, const TSoftClassPtr<UObject> & NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_18_DELEGATE \
QUESTEDITORDEV_API void FPayloadSelectedVector_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedVector, FVector NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_19_DELEGATE \
QUESTEDITORDEV_API void FPayloadSelectedTag_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedTag, FGameplayTagContainer NewValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectedTagCallback); \
	DECLARE_FUNCTION(execSelectedVectorCallback); \
	DECLARE_FUNCTION(execSelectedObjectClassCallback); \
	DECLARE_FUNCTION(execSelectedStringCallback); \
	DECLARE_FUNCTION(execSelectedFloatCallback); \
	DECLARE_FUNCTION(execHandleWidgetSelectorsStart);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectedTagCallback); \
	DECLARE_FUNCTION(execSelectedVectorCallback); \
	DECLARE_FUNCTION(execSelectedObjectClassCallback); \
	DECLARE_FUNCTION(execSelectedStringCallback); \
	DECLARE_FUNCTION(execSelectedFloatCallback); \
	DECLARE_FUNCTION(execHandleWidgetSelectorsStart);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasePayloadSelectorWidget(); \
	friend struct Z_Construct_UClass_UBasePayloadSelectorWidget_Statics; \
public: \
	DECLARE_CLASS(UBasePayloadSelectorWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditorDev"), NO_API) \
	DECLARE_SERIALIZER(UBasePayloadSelectorWidget)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUBasePayloadSelectorWidget(); \
	friend struct Z_Construct_UClass_UBasePayloadSelectorWidget_Statics; \
public: \
	DECLARE_CLASS(UBasePayloadSelectorWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestEditorDev"), NO_API) \
	DECLARE_SERIALIZER(UBasePayloadSelectorWidget)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasePayloadSelectorWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasePayloadSelectorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePayloadSelectorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePayloadSelectorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasePayloadSelectorWidget(UBasePayloadSelectorWidget&&); \
	NO_API UBasePayloadSelectorWidget(const UBasePayloadSelectorWidget&); \
public: \
	NO_API virtual ~UBasePayloadSelectorWidget();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasePayloadSelectorWidget(UBasePayloadSelectorWidget&&); \
	NO_API UBasePayloadSelectorWidget(const UBasePayloadSelectorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePayloadSelectorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePayloadSelectorWidget); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBasePayloadSelectorWidget) \
	NO_API virtual ~UBasePayloadSelectorWidget();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_24_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITORDEV_API UClass* StaticClass<class UBasePayloadSelectorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
