// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Task/QuestTaskInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FQuestTaskPayload;
#ifdef QUESTEDITOR_QuestTaskInterface_generated_h
#error "QuestTaskInterface.generated.h already included, missing '#pragma once' in QuestTaskInterface.h"
#endif
#define QUESTEDITOR_QuestTaskInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_RPC_WRAPPERS \
	virtual float GetTaskTimer_Implementation() const { return 0; }; \
	virtual FLinearColor GetTaskColor_Implementation() const { return FLinearColor(ForceInit); }; \
	virtual bool TaskShouldShowInUI_Implementation() const { return false; }; \
	virtual bool TaskShouldAnnounce_Implementation() const { return false; }; \
	virtual FString GetTaskName_Implementation() const { return TEXT(""); }; \
	virtual FString GetTaskShortDescription_Implementation(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn) const { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execGetTaskTimer); \
	DECLARE_FUNCTION(execGetTaskColor); \
	DECLARE_FUNCTION(execTaskShouldShowInUI); \
	DECLARE_FUNCTION(execTaskShouldAnnounce); \
	DECLARE_FUNCTION(execGetTaskName); \
	DECLARE_FUNCTION(execGetTaskShortDescription);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetTaskTimer_Implementation() const { return 0; }; \
	virtual FLinearColor GetTaskColor_Implementation() const { return FLinearColor(ForceInit); }; \
	virtual bool TaskShouldShowInUI_Implementation() const { return false; }; \
	virtual bool TaskShouldAnnounce_Implementation() const { return false; }; \
	virtual FString GetTaskName_Implementation() const { return TEXT(""); }; \
	virtual FString GetTaskShortDescription_Implementation(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn) const { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execGetTaskTimer); \
	DECLARE_FUNCTION(execGetTaskColor); \
	DECLARE_FUNCTION(execTaskShouldShowInUI); \
	DECLARE_FUNCTION(execTaskShouldAnnounce); \
	DECLARE_FUNCTION(execGetTaskName); \
	DECLARE_FUNCTION(execGetTaskShortDescription);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTEDITOR_API UQuestTaskInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestTaskInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTEDITOR_API, UQuestTaskInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestTaskInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTEDITOR_API UQuestTaskInterface(UQuestTaskInterface&&); \
	QUESTEDITOR_API UQuestTaskInterface(const UQuestTaskInterface&); \
public: \
	QUESTEDITOR_API virtual ~UQuestTaskInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTEDITOR_API UQuestTaskInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTEDITOR_API UQuestTaskInterface(UQuestTaskInterface&&); \
	QUESTEDITOR_API UQuestTaskInterface(const UQuestTaskInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTEDITOR_API, UQuestTaskInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestTaskInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestTaskInterface) \
	QUESTEDITOR_API virtual ~UQuestTaskInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUQuestTaskInterface(); \
	friend struct Z_Construct_UClass_UQuestTaskInterface_Statics; \
public: \
	DECLARE_CLASS(UQuestTaskInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/QuestEditor"), QUESTEDITOR_API) \
	DECLARE_SERIALIZER(UQuestTaskInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IQuestTaskInterface() {} \
public: \
	typedef UQuestTaskInterface UClassType; \
	typedef IQuestTaskInterface ThisClass; \
	static FLinearColor Execute_GetTaskColor(const UObject* O); \
	static FString Execute_GetTaskName(const UObject* O); \
	static FString Execute_GetTaskShortDescription(const UObject* O, FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn); \
	static float Execute_GetTaskTimer(const UObject* O); \
	static bool Execute_TaskShouldAnnounce(const UObject* O); \
	static bool Execute_TaskShouldShowInUI(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IQuestTaskInterface() {} \
public: \
	typedef UQuestTaskInterface UClassType; \
	typedef IQuestTaskInterface ThisClass; \
	static FLinearColor Execute_GetTaskColor(const UObject* O); \
	static FString Execute_GetTaskName(const UObject* O); \
	static FString Execute_GetTaskShortDescription(const UObject* O, FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn); \
	static float Execute_GetTaskTimer(const UObject* O); \
	static bool Execute_TaskShouldAnnounce(const UObject* O); \
	static bool Execute_TaskShouldShowInUI(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTEDITOR_API UClass* StaticClass<class UQuestTaskInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Task_QuestTaskInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
