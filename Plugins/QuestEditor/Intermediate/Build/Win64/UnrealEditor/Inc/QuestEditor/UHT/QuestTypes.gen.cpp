// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestRewardSlot_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_NoRegister();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_EDialogType();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_ENodeConnectorType();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_ENodeLinkType();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_EQuestSelectedType();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_EQuestTaskState();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_EQuestTaskType();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_ETalkTextMode();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_ETalkTextType();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCompletedQuestTrack();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialog();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialogRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialogTrack();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDef();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDefRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestFailTrack();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestNode();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestNodeID();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestObjectTrack();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTask();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskID();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskLink();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskPayload();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTrack();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRewardTabSlotInfo();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSingleSentenceModeData();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTalkModeDef();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTalkTaskTrack();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTalkTextInfo();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTaskObjectTrack();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTaskTrack();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestTaskState;
	static UEnum* EQuestTaskState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestTaskState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestTaskState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditor_EQuestTaskState, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("EQuestTaskState"));
		}
		return Z_Registration_Info_UEnum_EQuestTaskState.OuterSingleton;
	}
	template<> QUESTEDITOR_API UEnum* StaticEnum<EQuestTaskState>()
	{
		return EQuestTaskState_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditor_EQuestTaskState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditor_EQuestTaskState_Statics::Enumerators[] = {
		{ "EQuestTaskState::Locked", (int64)EQuestTaskState::Locked },
		{ "EQuestTaskState::PreActive", (int64)EQuestTaskState::PreActive },
		{ "EQuestTaskState::Active", (int64)EQuestTaskState::Active },
		{ "EQuestTaskState::Completed", (int64)EQuestTaskState::Completed },
		{ "EQuestTaskState::Disabled", (int64)EQuestTaskState::Disabled },
		{ "EQuestTaskState::Failed", (int64)EQuestTaskState::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditor_EQuestTaskState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Name", "EQuestTaskState::Active" },
		{ "BlueprintType", "true" },
		{ "Comment", "//----------------------------------- QUEST ENUMS\n" },
		{ "Completed.Name", "EQuestTaskState::Completed" },
		{ "Disabled.Name", "EQuestTaskState::Disabled" },
		{ "Failed.Name", "EQuestTaskState::Failed" },
		{ "Locked.Name", "EQuestTaskState::Locked" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "PreActive.Name", "EQuestTaskState::PreActive" },
		{ "ToolTip", "----------------------------------- QUEST ENUMS" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditor_EQuestTaskState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		"EQuestTaskState",
		"EQuestTaskState",
		Z_Construct_UEnum_QuestEditor_EQuestTaskState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_EQuestTaskState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditor_EQuestTaskState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_EQuestTaskState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditor_EQuestTaskState()
	{
		if (!Z_Registration_Info_UEnum_EQuestTaskState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestTaskState.InnerSingleton, Z_Construct_UEnum_QuestEditor_EQuestTaskState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestTaskState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestSelectedType;
	static UEnum* EQuestSelectedType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestSelectedType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestSelectedType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditor_EQuestSelectedType, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("EQuestSelectedType"));
		}
		return Z_Registration_Info_UEnum_EQuestSelectedType.OuterSingleton;
	}
	template<> QUESTEDITOR_API UEnum* StaticEnum<EQuestSelectedType>()
	{
		return EQuestSelectedType_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditor_EQuestSelectedType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditor_EQuestSelectedType_Statics::Enumerators[] = {
		{ "EQuestSelectedType::Active", (int64)EQuestSelectedType::Active },
		{ "EQuestSelectedType::Completed", (int64)EQuestSelectedType::Completed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditor_EQuestSelectedType_Statics::Enum_MetaDataParams[] = {
		{ "Active.Name", "EQuestSelectedType::Active" },
		{ "BlueprintType", "true" },
		{ "Completed.Name", "EQuestSelectedType::Completed" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditor_EQuestSelectedType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		"EQuestSelectedType",
		"EQuestSelectedType",
		Z_Construct_UEnum_QuestEditor_EQuestSelectedType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_EQuestSelectedType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditor_EQuestSelectedType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_EQuestSelectedType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditor_EQuestSelectedType()
	{
		if (!Z_Registration_Info_UEnum_EQuestSelectedType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestSelectedType.InnerSingleton, Z_Construct_UEnum_QuestEditor_EQuestSelectedType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestSelectedType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETalkTextType;
	static UEnum* ETalkTextType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETalkTextType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETalkTextType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditor_ETalkTextType, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("ETalkTextType"));
		}
		return Z_Registration_Info_UEnum_ETalkTextType.OuterSingleton;
	}
	template<> QUESTEDITOR_API UEnum* StaticEnum<ETalkTextType>()
	{
		return ETalkTextType_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditor_ETalkTextType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditor_ETalkTextType_Statics::Enumerators[] = {
		{ "ETalkTextType::PreActivateTalkTask", (int64)ETalkTextType::PreActivateTalkTask },
		{ "ETalkTextType::TalkTask", (int64)ETalkTextType::TalkTask },
		{ "ETalkTextType::AcceptQuest", (int64)ETalkTextType::AcceptQuest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditor_ETalkTextType_Statics::Enum_MetaDataParams[] = {
		{ "AcceptQuest.Name", "ETalkTextType::AcceptQuest" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "PreActivateTalkTask.Name", "ETalkTextType::PreActivateTalkTask" },
		{ "TalkTask.Name", "ETalkTextType::TalkTask" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditor_ETalkTextType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		"ETalkTextType",
		"ETalkTextType",
		Z_Construct_UEnum_QuestEditor_ETalkTextType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_ETalkTextType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditor_ETalkTextType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_ETalkTextType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditor_ETalkTextType()
	{
		if (!Z_Registration_Info_UEnum_ETalkTextType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETalkTextType.InnerSingleton, Z_Construct_UEnum_QuestEditor_ETalkTextType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETalkTextType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETalkTextMode;
	static UEnum* ETalkTextMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETalkTextMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETalkTextMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditor_ETalkTextMode, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("ETalkTextMode"));
		}
		return Z_Registration_Info_UEnum_ETalkTextMode.OuterSingleton;
	}
	template<> QUESTEDITOR_API UEnum* StaticEnum<ETalkTextMode>()
	{
		return ETalkTextMode_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditor_ETalkTextMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditor_ETalkTextMode_Statics::Enumerators[] = {
		{ "ETalkTextMode::Quest", (int64)ETalkTextMode::Quest },
		{ "ETalkTextMode::Dialog", (int64)ETalkTextMode::Dialog },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditor_ETalkTextMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dialog.Name", "ETalkTextMode::Dialog" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "Quest.Name", "ETalkTextMode::Quest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditor_ETalkTextMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		"ETalkTextMode",
		"ETalkTextMode",
		Z_Construct_UEnum_QuestEditor_ETalkTextMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_ETalkTextMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditor_ETalkTextMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_ETalkTextMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditor_ETalkTextMode()
	{
		if (!Z_Registration_Info_UEnum_ETalkTextMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETalkTextMode.InnerSingleton, Z_Construct_UEnum_QuestEditor_ETalkTextMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETalkTextMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeLinkType;
	static UEnum* ENodeLinkType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENodeLinkType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENodeLinkType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditor_ENodeLinkType, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("ENodeLinkType"));
		}
		return Z_Registration_Info_UEnum_ENodeLinkType.OuterSingleton;
	}
	template<> QUESTEDITOR_API UEnum* StaticEnum<ENodeLinkType>()
	{
		return ENodeLinkType_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditor_ENodeLinkType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditor_ENodeLinkType_Statics::Enumerators[] = {
		{ "ENodeLinkType::Required", (int64)ENodeLinkType::Required },
		{ "ENodeLinkType::Optional", (int64)ENodeLinkType::Optional },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditor_ENodeLinkType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "Optional.Name", "ENodeLinkType::Optional" },
		{ "Required.Name", "ENodeLinkType::Required" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditor_ENodeLinkType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		"ENodeLinkType",
		"ENodeLinkType",
		Z_Construct_UEnum_QuestEditor_ENodeLinkType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_ENodeLinkType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditor_ENodeLinkType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_ENodeLinkType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditor_ENodeLinkType()
	{
		if (!Z_Registration_Info_UEnum_ENodeLinkType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeLinkType.InnerSingleton, Z_Construct_UEnum_QuestEditor_ENodeLinkType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENodeLinkType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestTaskType;
	static UEnum* EQuestTaskType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestTaskType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestTaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditor_EQuestTaskType, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("EQuestTaskType"));
		}
		return Z_Registration_Info_UEnum_EQuestTaskType.OuterSingleton;
	}
	template<> QUESTEDITOR_API UEnum* StaticEnum<EQuestTaskType>()
	{
		return EQuestTaskType_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditor_EQuestTaskType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditor_EQuestTaskType_Statics::Enumerators[] = {
		{ "EQuestTaskType::Task", (int64)EQuestTaskType::Task },
		{ "EQuestTaskType::TalkTask", (int64)EQuestTaskType::TalkTask },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditor_EQuestTaskType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "TalkTask.Name", "EQuestTaskType::TalkTask" },
		{ "Task.Name", "EQuestTaskType::Task" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditor_EQuestTaskType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		"EQuestTaskType",
		"EQuestTaskType",
		Z_Construct_UEnum_QuestEditor_EQuestTaskType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_EQuestTaskType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditor_EQuestTaskType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_EQuestTaskType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditor_EQuestTaskType()
	{
		if (!Z_Registration_Info_UEnum_EQuestTaskType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestTaskType.InnerSingleton, Z_Construct_UEnum_QuestEditor_EQuestTaskType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestTaskType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestTaskTypeSelection;
	static UEnum* EQuestTaskTypeSelection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestTaskTypeSelection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestTaskTypeSelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("EQuestTaskTypeSelection"));
		}
		return Z_Registration_Info_UEnum_EQuestTaskTypeSelection.OuterSingleton;
	}
	template<> QUESTEDITOR_API UEnum* StaticEnum<EQuestTaskTypeSelection>()
	{
		return EQuestTaskTypeSelection_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection_Statics::Enumerators[] = {
		{ "EQuestTaskTypeSelection::All", (int64)EQuestTaskTypeSelection::All },
		{ "EQuestTaskTypeSelection::Task", (int64)EQuestTaskTypeSelection::Task },
		{ "EQuestTaskTypeSelection::TalkTask", (int64)EQuestTaskTypeSelection::TalkTask },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EQuestTaskTypeSelection::All" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "TalkTask.Name", "EQuestTaskTypeSelection::TalkTask" },
		{ "Task.Name", "EQuestTaskTypeSelection::Task" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		"EQuestTaskTypeSelection",
		"EQuestTaskTypeSelection",
		Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection()
	{
		if (!Z_Registration_Info_UEnum_EQuestTaskTypeSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestTaskTypeSelection.InnerSingleton, Z_Construct_UEnum_QuestEditor_EQuestTaskTypeSelection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestTaskTypeSelection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeConnectorType;
	static UEnum* ENodeConnectorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENodeConnectorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENodeConnectorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditor_ENodeConnectorType, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("ENodeConnectorType"));
		}
		return Z_Registration_Info_UEnum_ENodeConnectorType.OuterSingleton;
	}
	template<> QUESTEDITOR_API UEnum* StaticEnum<ENodeConnectorType>()
	{
		return ENodeConnectorType_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditor_ENodeConnectorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditor_ENodeConnectorType_Statics::Enumerators[] = {
		{ "ENodeConnectorType::Inferior", (int64)ENodeConnectorType::Inferior },
		{ "ENodeConnectorType::Superior", (int64)ENodeConnectorType::Superior },
		{ "ENodeConnectorType::Disable", (int64)ENodeConnectorType::Disable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditor_ENodeConnectorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disable.Name", "ENodeConnectorType::Disable" },
		{ "Inferior.Name", "ENodeConnectorType::Inferior" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "Superior.Name", "ENodeConnectorType::Superior" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditor_ENodeConnectorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		"ENodeConnectorType",
		"ENodeConnectorType",
		Z_Construct_UEnum_QuestEditor_ENodeConnectorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_ENodeConnectorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditor_ENodeConnectorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_ENodeConnectorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditor_ENodeConnectorType()
	{
		if (!Z_Registration_Info_UEnum_ENodeConnectorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeConnectorType.InnerSingleton, Z_Construct_UEnum_QuestEditor_ENodeConnectorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENodeConnectorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogType;
	static UEnum* EDialogType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDialogType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDialogType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditor_EDialogType, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("EDialogType"));
		}
		return Z_Registration_Info_UEnum_EDialogType.OuterSingleton;
	}
	template<> QUESTEDITOR_API UEnum* StaticEnum<EDialogType>()
	{
		return EDialogType_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditor_EDialogType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditor_EDialogType_Statics::Enumerators[] = {
		{ "EDialogType::NPC", (int64)EDialogType::NPC },
		{ "EDialogType::Player", (int64)EDialogType::Player },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditor_EDialogType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "NPC.Name", "EDialogType::NPC" },
		{ "Player.Name", "EDialogType::Player" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditor_EDialogType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		"EDialogType",
		"EDialogType",
		Z_Construct_UEnum_QuestEditor_EDialogType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_EDialogType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditor_EDialogType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditor_EDialogType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditor_EDialogType()
	{
		if (!Z_Registration_Info_UEnum_EDialogType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogType.InnerSingleton, Z_Construct_UEnum_QuestEditor_EDialogType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDialogType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SingleSentenceModeData;
class UScriptStruct* FSingleSentenceModeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SingleSentenceModeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SingleSentenceModeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleSentenceModeData, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("SingleSentenceModeData"));
	}
	return Z_Registration_Info_UScriptStruct_SingleSentenceModeData.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FSingleSentenceModeData>()
{
	return FSingleSentenceModeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FontSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FontColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//----------Talk modes-\n" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "----------Talk modes-" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleSentenceModeData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Single Sentence Mode" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSingleSentenceModeData, Type), Z_Construct_UEnum_QuestEditor_EDialogType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_Type_MetaData)) }; // 1002308137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "Single Sentence Mode" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSingleSentenceModeData, FontSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_FontSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_FontColor_MetaData[] = {
		{ "Category", "Single Sentence Mode" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_FontColor = { "FontColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSingleSentenceModeData, FontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_FontColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_FontColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_FontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewProp_FontColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"SingleSentenceModeData",
		sizeof(FSingleSentenceModeData),
		alignof(FSingleSentenceModeData),
		Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSingleSentenceModeData()
	{
		if (!Z_Registration_Info_UScriptStruct_SingleSentenceModeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SingleSentenceModeData.InnerSingleton, Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SingleSentenceModeData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TalkModeDef;
class UScriptStruct* FTalkModeDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TalkModeDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TalkModeDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTalkModeDef, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("TalkModeDef"));
	}
	return Z_Registration_Info_UScriptStruct_TalkModeDef.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FTalkModeDef>()
{
	return FTalkModeDef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTalkModeDef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Datatable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Datatable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkModeDef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTalkModeDef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewProp_RowName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkModeDef, RowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewProp_RowName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewProp_Datatable_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewProp_Datatable = { "Datatable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkModeDef, Datatable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewProp_Datatable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewProp_Datatable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTalkModeDef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewProp_RowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewProp_Datatable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTalkModeDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"TalkModeDef",
		sizeof(FTalkModeDef),
		alignof(FTalkModeDef),
		Z_Construct_UScriptStruct_FTalkModeDef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkModeDef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkModeDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkModeDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTalkModeDef()
	{
		if (!Z_Registration_Info_UScriptStruct_TalkModeDef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TalkModeDef.InnerSingleton, Z_Construct_UScriptStruct_FTalkModeDef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TalkModeDef.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestRep;
class UScriptStruct* FQuestRep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestRep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestRep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestRep, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestRep"));
	}
	return Z_Registration_Info_UScriptStruct_QuestRep.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestRep>()
{
	return FQuestRep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestRep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestDTName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_QuestDTName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Datatable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Datatable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestRep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//-------------------------------------Rep\n" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "-------------------------------------Rep" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestRep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestRep>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestRep_Statics::NewProp_QuestDTName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestRep_Statics::NewProp_QuestDTName = { "QuestDTName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestRep, QuestDTName), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestRep_Statics::NewProp_QuestDTName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestRep_Statics::NewProp_QuestDTName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestRep_Statics::NewProp_Datatable_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestRep_Statics::NewProp_Datatable = { "Datatable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestRep, Datatable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestRep_Statics::NewProp_Datatable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestRep_Statics::NewProp_Datatable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestRep_Statics::NewProp_QuestDTName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestRep_Statics::NewProp_Datatable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestRep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"QuestRep",
		sizeof(FQuestRep),
		alignof(FQuestRep),
		Z_Construct_UScriptStruct_FQuestRep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestRep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestRep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestRep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestRep()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestRep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestRep.InnerSingleton, Z_Construct_UScriptStruct_FQuestRep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestRep.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogRep;
class UScriptStruct* FDialogRep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogRep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogRep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogRep, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("DialogRep"));
	}
	return Z_Registration_Info_UScriptStruct_DialogRep.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FDialogRep>()
{
	return FDialogRep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogRep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogsDTName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DialogsDTName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Datatable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Datatable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogRep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Struc to define a address for a Dialog DT.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Struc to define a address for a Dialog DT." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogRep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogRep>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogRep_Statics::NewProp_DialogsDTName_MetaData[] = {
		{ "Category", "Dialogs" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogRep_Statics::NewProp_DialogsDTName = { "DialogsDTName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogRep, DialogsDTName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogRep_Statics::NewProp_DialogsDTName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogRep_Statics::NewProp_DialogsDTName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogRep_Statics::NewProp_Datatable_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDialogRep_Statics::NewProp_Datatable = { "Datatable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogRep, Datatable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogRep_Statics::NewProp_Datatable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogRep_Statics::NewProp_Datatable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogRep_Statics::NewProp_DialogsDTName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogRep_Statics::NewProp_Datatable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogRep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"DialogRep",
		sizeof(FDialogRep),
		alignof(FDialogRep),
		Z_Construct_UScriptStruct_FDialogRep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogRep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogRep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogRep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogRep()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogRep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogRep.InnerSingleton, Z_Construct_UScriptStruct_FDialogRep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogRep.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCQuestDefRep;
class UScriptStruct* FNPCQuestDefRep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCQuestDefRep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCQuestDefRep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCQuestDefRep, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("NPCQuestDefRep"));
	}
	return Z_Registration_Info_UScriptStruct_NPCQuestDefRep.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FNPCQuestDefRep>()
{
	return FNPCQuestDefRep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCDefDTName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NPCDefDTName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Datatable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Datatable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Struct to define a address for a FNPCQuestDef. Should add to your own NPC struct or logic, to have a way to retrieve quests and dialogs information.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Struct to define a address for a FNPCQuestDef. Should add to your own NPC struct or logic, to have a way to retrieve quests and dialogs information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCQuestDefRep>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewProp_NPCDefDTName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewProp_NPCDefDTName = { "NPCDefDTName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCQuestDefRep, NPCDefDTName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewProp_NPCDefDTName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewProp_NPCDefDTName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewProp_Datatable_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewProp_Datatable = { "Datatable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCQuestDefRep, Datatable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewProp_Datatable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewProp_Datatable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewProp_NPCDefDTName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewProp_Datatable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"NPCQuestDefRep",
		sizeof(FNPCQuestDefRep),
		alignof(FNPCQuestDefRep),
		Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDefRep()
	{
		if (!Z_Registration_Info_UScriptStruct_NPCQuestDefRep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCQuestDefRep.InnerSingleton, Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NPCQuestDefRep.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTaskID;
class UScriptStruct* FQuestTaskID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTaskID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTaskID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTaskID, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestTaskID"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTaskID.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestTaskID>()
{
	return FQuestTaskID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTaskID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TaskID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TaskType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//----------------------------------- Task IDS\n" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "----------------------------------- Task IDS" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTaskID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskID_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskID = { "TaskID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskID, TaskID), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskType_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskType = { "TaskType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskID, TaskType), Z_Construct_UEnum_QuestEditor_EQuestTaskType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskType_MetaData)) }; // 1742157387
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTaskID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewProp_TaskType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTaskID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"QuestTaskID",
		sizeof(FQuestTaskID),
		alignof(FQuestTaskID),
		Z_Construct_UScriptStruct_FQuestTaskID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskID()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTaskID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTaskID.InnerSingleton, Z_Construct_UScriptStruct_FQuestTaskID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTaskID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTaskLink;
class UScriptStruct* FQuestTaskLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTaskLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTaskLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTaskLink, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestTaskLink"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTaskLink.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestTaskLink>()
{
	return FQuestTaskLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTaskLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Struct to define a link between tasks.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Struct to define a link between tasks." },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTaskLink>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "QuestTaskLink" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskLink, Node), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_Node_MetaData)) }; // 3578582651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_LinkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_LinkType_MetaData[] = {
		{ "Category", "QuestTaskLink" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_LinkType = { "LinkType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskLink, LinkType), Z_Construct_UEnum_QuestEditor_ENodeLinkType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_LinkType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_LinkType_MetaData)) }; // 4219667413
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTaskLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_LinkType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewProp_LinkType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTaskLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"QuestTaskLink",
		sizeof(FQuestTaskLink),
		alignof(FQuestTaskLink),
		Z_Construct_UScriptStruct_FQuestTaskLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskLink()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTaskLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTaskLink.InnerSingleton, Z_Construct_UScriptStruct_FQuestTaskLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTaskLink.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTalkTask;
class UScriptStruct* FQuestTalkTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTalkTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTalkTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTalkTask, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestTalkTask"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTalkTask.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestTalkTask>()
{
	return FQuestTalkTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTalkTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestEditorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestEditorPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperiorNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuperiorNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InferiorNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InferiorNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledNodesOnComplete_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledNodesOnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisabledNodesOnComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversationID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ConversationID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkNPC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkNPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDialog_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PlayerDialog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCResponse_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NPCResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlayerSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NPCSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskShortDesc_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TaskShortDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomPayloadData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UniqueID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//----------------------------------- STRUCTS QUEST TASKS\n" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "----------------------------------- STRUCTS QUEST TASKS" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTalkTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_QuestEditorPosition_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_QuestEditorPosition = { "QuestEditorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, QuestEditorPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_QuestEditorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_QuestEditorPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_SuperiorNodes_Inner = { "SuperiorNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskLink, METADATA_PARAMS(nullptr, 0) }; // 3937065984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_SuperiorNodes_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_SuperiorNodes = { "SuperiorNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, SuperiorNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_SuperiorNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_SuperiorNodes_MetaData)) }; // 3937065984
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_InferiorNodes_Inner = { "InferiorNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskLink, METADATA_PARAMS(nullptr, 0) }; // 3937065984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_InferiorNodes_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_InferiorNodes = { "InferiorNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, InferiorNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_InferiorNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_InferiorNodes_MetaData)) }; // 3937065984
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_DisabledNodesOnComplete_Inner = { "DisabledNodesOnComplete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_DisabledNodesOnComplete_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_DisabledNodesOnComplete = { "DisabledNodesOnComplete", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, DisabledNodesOnComplete), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_DisabledNodesOnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_DisabledNodesOnComplete_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_ConversationID_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_ConversationID = { "ConversationID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, ConversationID), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_ConversationID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_ConversationID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_TalkNPC_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_TalkNPC = { "TalkNPC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, TalkNPC), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_TalkNPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_TalkNPC_MetaData)) }; // 3466971976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_PlayerDialog_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_PlayerDialog = { "PlayerDialog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, PlayerDialog), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_PlayerDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_PlayerDialog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_NPCResponse_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_NPCResponse = { "NPCResponse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, NPCResponse), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_NPCResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_NPCResponse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_PlayerSoundCue_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_PlayerSoundCue = { "PlayerSoundCue", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, PlayerSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_PlayerSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_PlayerSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_NPCSoundCue_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_NPCSoundCue = { "NPCSoundCue", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, NPCSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_NPCSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_NPCSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_TaskShortDesc_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_TaskShortDesc = { "TaskShortDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, TaskShortDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_TaskShortDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_TaskShortDesc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_CustomPayloadData_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_CustomPayloadData = { "CustomPayloadData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, CustomPayloadData), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_CustomPayloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_CustomPayloadData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_UniqueID_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTask, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_UniqueID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTalkTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_QuestEditorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_SuperiorNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_SuperiorNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_InferiorNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_InferiorNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_DisabledNodesOnComplete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_DisabledNodesOnComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_ConversationID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_TalkNPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_PlayerDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_NPCResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_PlayerSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_NPCSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_TaskShortDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_CustomPayloadData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewProp_UniqueID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTalkTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"QuestTalkTask",
		sizeof(FQuestTalkTask),
		alignof(FQuestTalkTask),
		Z_Construct_UScriptStruct_FQuestTalkTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTask()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTalkTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTalkTask.InnerSingleton, Z_Construct_UScriptStruct_FQuestTalkTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTalkTask.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTaskPayload;
class UScriptStruct* FQuestTaskPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTaskPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTaskPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTaskPayload, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestTaskPayload"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTaskPayload.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestTaskPayload>()
{
	return FQuestTaskPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTaskPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimesToCheckTask_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimesToCheckTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountInvolved_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountInvolved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringA_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringB_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoredTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassInvolved_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ClassInvolved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorInvolved_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorInvolved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTaskPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_TimesToCheckTask_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_TimesToCheckTask = { "TimesToCheckTask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskPayload, TimesToCheckTask), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_TimesToCheckTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_TimesToCheckTask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_AmountInvolved_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_AmountInvolved = { "AmountInvolved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskPayload, AmountInvolved), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_AmountInvolved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_AmountInvolved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_StringA_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_StringA = { "StringA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskPayload, StringA), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_StringA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_StringA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_StringB_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_StringB = { "StringB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskPayload, StringB), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_StringB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_StringB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_RequiredTags_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskPayload, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_RequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_RequiredTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_IgnoredTags_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_IgnoredTags = { "IgnoredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskPayload, IgnoredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_IgnoredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_IgnoredTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_ClassInvolved_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_ClassInvolved = { "ClassInvolved", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskPayload, ClassInvolved), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_ClassInvolved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_ClassInvolved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_VectorInvolved_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_VectorInvolved = { "VectorInvolved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskPayload, VectorInvolved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_VectorInvolved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_VectorInvolved_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_TimesToCheckTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_AmountInvolved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_StringA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_StringB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_RequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_IgnoredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_ClassInvolved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewProp_VectorInvolved,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"QuestTaskPayload",
		sizeof(FQuestTaskPayload),
		alignof(FQuestTaskPayload),
		Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTaskPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTaskPayload.InnerSingleton, Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTaskPayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTask;
class UScriptStruct* FQuestTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTask, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestTask"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestTask>()
{
	return FQuestTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestEditorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestEditorPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperiorNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperiorNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuperiorNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InferiorNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InferiorNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InferiorNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledNodesOnComplete_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledNodesOnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisabledNodesOnComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TaskClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomPayloadData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomPayloadData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskShortDesc_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TaskShortDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InverseActivateCondition_MetaData[];
#endif
		static void NewProp_InverseActivateCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InverseActivateCondition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UniqueID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_QuestEditorPosition_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_QuestEditorPosition = { "QuestEditorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTask, QuestEditorPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_QuestEditorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_QuestEditorPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_SuperiorNodes_Inner = { "SuperiorNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskLink, METADATA_PARAMS(nullptr, 0) }; // 3937065984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_SuperiorNodes_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_SuperiorNodes = { "SuperiorNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTask, SuperiorNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_SuperiorNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_SuperiorNodes_MetaData)) }; // 3937065984
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InferiorNodes_Inner = { "InferiorNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskLink, METADATA_PARAMS(nullptr, 0) }; // 3937065984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InferiorNodes_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InferiorNodes = { "InferiorNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTask, InferiorNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InferiorNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InferiorNodes_MetaData)) }; // 3937065984
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_DisabledNodesOnComplete_Inner = { "DisabledNodesOnComplete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_DisabledNodesOnComplete_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_DisabledNodesOnComplete = { "DisabledNodesOnComplete", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTask, DisabledNodesOnComplete), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_DisabledNodesOnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_DisabledNodesOnComplete_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskClass_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskClass = { "TaskClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTask, TaskClass), Z_Construct_UClass_UBaseQuestTask_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Payload_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTask, Payload), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Payload_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CustomPayloadData_Inner = { "CustomPayloadData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CustomPayloadData_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CustomPayloadData = { "CustomPayloadData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTask, CustomPayloadData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CustomPayloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CustomPayloadData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskShortDesc_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskShortDesc = { "TaskShortDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTask, TaskShortDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskShortDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskShortDesc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InverseActivateCondition_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InverseActivateCondition_SetBit(void* Obj)
	{
		((FQuestTask*)Obj)->InverseActivateCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InverseActivateCondition = { "InverseActivateCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FQuestTask), &Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InverseActivateCondition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InverseActivateCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InverseActivateCondition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_UniqueID_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTask, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_UniqueID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_QuestEditorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_SuperiorNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_SuperiorNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InferiorNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InferiorNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_DisabledNodesOnComplete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_DisabledNodesOnComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CustomPayloadData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CustomPayloadData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskShortDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_InverseActivateCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_UniqueID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"QuestTask",
		sizeof(FQuestTask),
		alignof(FQuestTask),
		Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTask()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton, Z_Construct_UScriptStruct_FQuestTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton;
	}

static_assert(std::is_polymorphic<FQuest>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuest cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Quest;
class UScriptStruct* FQuest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Quest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Quest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuest, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("Quest"));
	}
	return Z_Registration_Info_UScriptStruct_Quest.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuest>()
{
	return FQuest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_QuestDescription;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestEditorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestEditorPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UniqueID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//----------------------------------- STRUCTS QUEST MAIN\n" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "----------------------------------- STRUCTS QUEST MAIN" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, QuestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestDescription_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, QuestDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestDescription_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Tasks_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Tasks_MetaData)) }; // 3659381813
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkTasks_Inner = { "TalkTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkTasks_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkTasks = { "TalkTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, TalkTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkTasks_MetaData)) }; // 1604935902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestTags_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestTags = { "QuestTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, QuestTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestEditorPosition_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestEditorPosition = { "QuestEditorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, QuestEditorPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestEditorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestEditorPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkMode_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkMode = { "TalkMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, TalkMode), Z_Construct_UScriptStruct_FTalkModeDef, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkMode_MetaData)) }; // 2653090243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_UniqueID_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_UniqueID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Tasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Tasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestEditorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_TalkMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_UniqueID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Quest",
		sizeof(FQuest),
		alignof(FQuest),
		Z_Construct_UScriptStruct_FQuest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuest()
	{
		if (!Z_Registration_Info_UScriptStruct_Quest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Quest.InnerSingleton, Z_Construct_UScriptStruct_FQuest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Quest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TalkTextInfo;
class UScriptStruct* FTalkTextInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TalkTextInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TalkTextInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTalkTextInfo, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("TalkTextInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TalkTextInfo.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FTalkTextInfo>()
{
	return FTalkTextInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTalkTextInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDialog_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PlayerDialog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCResponse_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NPCResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlayerSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NPCSoundCue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QuestSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TaskSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomPayloadData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTalkTextInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_PlayerDialog_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_PlayerDialog = { "PlayerDialog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTextInfo, PlayerDialog), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_PlayerDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_PlayerDialog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_NPCResponse_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_NPCResponse = { "NPCResponse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTextInfo, NPCResponse), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_NPCResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_NPCResponse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_PlayerSoundCue_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_PlayerSoundCue = { "PlayerSoundCue", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTextInfo, PlayerSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_PlayerSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_PlayerSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_NPCSoundCue_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_NPCSoundCue = { "NPCSoundCue", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTextInfo, NPCSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_NPCSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_NPCSoundCue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTextInfo, Mode), Z_Construct_UEnum_QuestEditor_ETalkTextMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Mode_MetaData)) }; // 395059072
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTextInfo, Type), Z_Construct_UEnum_QuestEditor_ETalkTextType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Type_MetaData)) }; // 2212476359
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTextInfo, State), Z_Construct_UEnum_QuestEditor_EQuestTaskState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_State_MetaData)) }; // 3520366681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_QuestSlot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_QuestSlot = { "QuestSlot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTextInfo, QuestSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_QuestSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_QuestSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_TaskSlot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_TaskSlot = { "TaskSlot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTextInfo, TaskSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_TaskSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_TaskSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_CustomPayloadData_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_CustomPayloadData = { "CustomPayloadData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTextInfo, CustomPayloadData), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_CustomPayloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_CustomPayloadData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTalkTextInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_PlayerDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_NPCResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_PlayerSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_NPCSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_QuestSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_TaskSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewProp_CustomPayloadData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTalkTextInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"TalkTextInfo",
		sizeof(FTalkTextInfo),
		alignof(FTalkTextInfo),
		Z_Construct_UScriptStruct_FTalkTextInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTextInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTalkTextInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TalkTextInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TalkTextInfo.InnerSingleton, Z_Construct_UScriptStruct_FTalkTextInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TalkTextInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TalkTaskTrack;
class UScriptStruct* FTalkTaskTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TalkTaskTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TalkTaskTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTalkTaskTrack, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("TalkTaskTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TalkTaskTrack.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FTalkTaskTrack>()
{
	return FTalkTaskTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTalkTaskTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ActivationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CompletionOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//----------------------------------- STRUCTS QUEST TRACK\n" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "----------------------------------- STRUCTS QUEST TRACK" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTalkTaskTrack>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTaskTrack, State), Z_Construct_UEnum_QuestEditor_EQuestTaskState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_State_MetaData)) }; // 3520366681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_ActivationOrder_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_ActivationOrder = { "ActivationOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTaskTrack, ActivationOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_ActivationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_ActivationOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_CompletionOrder_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_CompletionOrder = { "CompletionOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTalkTaskTrack, CompletionOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_CompletionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_CompletionOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_ActivationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewProp_CompletionOrder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"TalkTaskTrack",
		sizeof(FTalkTaskTrack),
		alignof(FTalkTaskTrack),
		Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTalkTaskTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TalkTaskTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TalkTaskTrack.InnerSingleton, Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TalkTaskTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogTrack;
class UScriptStruct* FDialogTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogTrack, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("DialogTrack"));
	}
	return Z_Registration_Info_UScriptStruct_DialogTrack.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FDialogTrack>()
{
	return FDialogTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NpcDefRep_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NpcDefRep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogsStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogsStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogsStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_NpcDefRep_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_NpcDefRep = { "NpcDefRep", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogTrack, NpcDefRep), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_NpcDefRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_NpcDefRep_MetaData)) }; // 3466971976
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_DialogsStates_Inner = { "DialogsStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTalkTaskTrack, METADATA_PARAMS(nullptr, 0) }; // 3058962060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_DialogsStates_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_DialogsStates = { "DialogsStates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogTrack, DialogsStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_DialogsStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_DialogsStates_MetaData)) }; // 3058962060
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_NpcDefRep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_DialogsStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogTrack_Statics::NewProp_DialogsStates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"DialogTrack",
		sizeof(FDialogTrack),
		alignof(FDialogTrack),
		Z_Construct_UScriptStruct_FDialogTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogTrack.InnerSingleton, Z_Construct_UScriptStruct_FDialogTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaskObjectTrack;
class UScriptStruct* FTaskObjectTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaskObjectTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaskObjectTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskObjectTrack, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("TaskObjectTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TaskObjectTrack.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FTaskObjectTrack>()
{
	return FTaskObjectTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTaskObjectTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTaskReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseTaskReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Tracks the reference of a task object for a particular tasks*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Tracks the reference of a task object for a particular tasks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskObjectTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::NewProp_BaseTaskReference_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::NewProp_BaseTaskReference = { "BaseTaskReference", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTaskObjectTrack, BaseTaskReference), Z_Construct_UClass_UBaseQuestTask_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::NewProp_BaseTaskReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::NewProp_BaseTaskReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::NewProp_BaseTaskReference,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"TaskObjectTrack",
		sizeof(FTaskObjectTrack),
		alignof(FTaskObjectTrack),
		Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskObjectTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TaskObjectTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaskObjectTrack.InnerSingleton, Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TaskObjectTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestObjectTrack;
class UScriptStruct* FQuestObjectTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestObjectTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestObjectTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestObjectTrack, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestObjectTrack"));
	}
	return Z_Registration_Info_UScriptStruct_QuestObjectTrack.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestObjectTrack>()
{
	return FQuestObjectTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestObjectTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectTasksTrack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTasksTrack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTasksTrack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Tracks all the task objects of a quest*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Tracks all the task objects of a quest" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestObjectTrack>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::NewProp_ObjectTasksTrack_Inner = { "ObjectTasksTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTaskObjectTrack, METADATA_PARAMS(nullptr, 0) }; // 4188178558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::NewProp_ObjectTasksTrack_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::NewProp_ObjectTasksTrack = { "ObjectTasksTrack", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestObjectTrack, ObjectTasksTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::NewProp_ObjectTasksTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::NewProp_ObjectTasksTrack_MetaData)) }; // 4188178558
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::NewProp_ObjectTasksTrack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::NewProp_ObjectTasksTrack,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"QuestObjectTrack",
		sizeof(FQuestObjectTrack),
		alignof(FQuestObjectTrack),
		Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestObjectTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestObjectTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestObjectTrack.InnerSingleton, Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestObjectTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaskTrack;
class UScriptStruct* FTaskTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaskTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaskTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskTrack, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("TaskTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TaskTrack.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FTaskTrack>()
{
	return FTaskTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTaskTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ActivationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CompletionOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskTrack>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTaskTrack, State), Z_Construct_UEnum_QuestEditor_EQuestTaskState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_State_MetaData)) }; // 3520366681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CurrentAmount_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CurrentAmount = { "CurrentAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTaskTrack, CurrentAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CurrentAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CurrentAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_ActivationOrder_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_ActivationOrder = { "ActivationOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTaskTrack, ActivationOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_ActivationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_ActivationOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CompletionOrder_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CompletionOrder = { "CompletionOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTaskTrack, CompletionOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CompletionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CompletionOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CurrentPayload_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CurrentPayload = { "CurrentPayload", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTaskTrack, CurrentPayload), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CurrentPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CurrentPayload_MetaData)) }; // 4258527549
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CurrentAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_ActivationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CompletionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskTrack_Statics::NewProp_CurrentPayload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"TaskTrack",
		sizeof(FTaskTrack),
		alignof(FTaskTrack),
		Z_Construct_UScriptStruct_FTaskTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TaskTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaskTrack.InnerSingleton, Z_Construct_UScriptStruct_FTaskTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TaskTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTrack;
class UScriptStruct* FQuestTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTrack, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestTrack"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTrack.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestTrack>()
{
	return FQuestTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeHandler_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPendingCompletion_MetaData[];
#endif
		static void NewProp_bIsPendingCompletion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPendingCompletion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreActiveTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreActiveTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreActiveTasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveTasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasksTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksTracks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Quest track for active quest*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Quest track for active quest" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_NodeHandler_MetaData[] = {
		{ "Comment", "//Node that is handling the Main activation or completion operation\n" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Node that is handling the Main activation or completion operation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_NodeHandler = { "NodeHandler", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTrack, NodeHandler), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_NodeHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_NodeHandler_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_bIsPendingCompletion_MetaData[] = {
		{ "Comment", "//If the quest should be completed at end of handling operation\n" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "If the quest should be completed at end of handling operation" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_bIsPendingCompletion_SetBit(void* Obj)
	{
		((FQuestTrack*)Obj)->bIsPendingCompletion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_bIsPendingCompletion = { "bIsPendingCompletion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FQuestTrack), &Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_bIsPendingCompletion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_bIsPendingCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_bIsPendingCompletion_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_PreActiveTasks_Inner = { "PreActiveTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_PreActiveTasks_MetaData[] = {
		{ "Comment", "//Preactivation is something rather internal for tracking npc talk multistarts\n" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Preactivation is something rather internal for tracking npc talk multistarts" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_PreActiveTasks = { "PreActiveTasks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTrack, PreActiveTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_PreActiveTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_PreActiveTasks_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_ActiveTasks_Inner = { "ActiveTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_ActiveTasks_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_ActiveTasks = { "ActiveTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTrack, ActiveTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_ActiveTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_ActiveTasks_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TasksTracks_Inner = { "TasksTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTaskTrack, METADATA_PARAMS(nullptr, 0) }; // 356126919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TasksTracks_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TasksTracks = { "TasksTracks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTrack, TasksTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TasksTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TasksTracks_MetaData)) }; // 356126919
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TalkTasksTracks_Inner = { "TalkTasksTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTalkTaskTrack, METADATA_PARAMS(nullptr, 0) }; // 3058962060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TalkTasksTracks_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TalkTasksTracks = { "TalkTasksTracks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTrack, TalkTasksTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TalkTasksTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TalkTasksTracks_MetaData)) }; // 3058962060
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_NodeHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_bIsPendingCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_PreActiveTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_PreActiveTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_ActiveTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_ActiveTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TasksTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TasksTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TalkTasksTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTrack_Statics::NewProp_TalkTasksTracks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"QuestTrack",
		sizeof(FQuestTrack),
		alignof(FQuestTrack),
		Z_Construct_UScriptStruct_FQuestTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTrack.InnerSingleton, Z_Construct_UScriptStruct_FQuestTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompletedQuestTrack;
class UScriptStruct* FCompletedQuestTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompletedQuestTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompletedQuestTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompletedQuestTrack, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("CompletedQuestTrack"));
	}
	return Z_Registration_Info_UScriptStruct_CompletedQuestTrack.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FCompletedQuestTrack>()
{
	return FCompletedQuestTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestRep_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestRep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTrack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Quest track for a completed quest*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Quest track for a completed quest" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompletedQuestTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewProp_QuestRep_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewProp_QuestRep = { "QuestRep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompletedQuestTrack, QuestRep), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewProp_QuestRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewProp_QuestRep_MetaData)) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewProp_QuestTrack_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewProp_QuestTrack = { "QuestTrack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompletedQuestTrack, QuestTrack), Z_Construct_UScriptStruct_FQuestTrack, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewProp_QuestTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewProp_QuestTrack_MetaData)) }; // 2823668651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewProp_QuestRep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewProp_QuestTrack,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"CompletedQuestTrack",
		sizeof(FCompletedQuestTrack),
		alignof(FCompletedQuestTrack),
		Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompletedQuestTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_CompletedQuestTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompletedQuestTrack.InnerSingleton, Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompletedQuestTrack.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDialog>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialog cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Dialog;
class UScriptStruct* FDialog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Dialog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Dialog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialog, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("Dialog"));
	}
	return Z_Registration_Info_UScriptStruct_Dialog.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FDialog>()
{
	return FDialog::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogEditorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogEditorName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dialogs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dialogs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Dialogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UniqueID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialog_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Base dialog struct for npc*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Base dialog struct for npc" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialog>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialog_Statics::NewProp_DialogEditorName_MetaData[] = {
		{ "Category", "Dialogs" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialog_Statics::NewProp_DialogEditorName = { "DialogEditorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialog, DialogEditorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialog_Statics::NewProp_DialogEditorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialog_Statics::NewProp_DialogEditorName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialog_Statics::NewProp_Dialogs_Inner = { "Dialogs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialog_Statics::NewProp_Dialogs_MetaData[] = {
		{ "Category", "Dialogs" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialog_Statics::NewProp_Dialogs = { "Dialogs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialog, Dialogs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialog_Statics::NewProp_Dialogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialog_Statics::NewProp_Dialogs_MetaData)) }; // 1604935902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialog_Statics::NewProp_EditorPosition_MetaData[] = {
		{ "Category", "Dialogs" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialog_Statics::NewProp_EditorPosition = { "EditorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialog, EditorPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialog_Statics::NewProp_EditorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialog_Statics::NewProp_EditorPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialog_Statics::NewProp_TalkMode_MetaData[] = {
		{ "Category", "Dialogs" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialog_Statics::NewProp_TalkMode = { "TalkMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialog, TalkMode), Z_Construct_UScriptStruct_FTalkModeDef, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialog_Statics::NewProp_TalkMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialog_Statics::NewProp_TalkMode_MetaData)) }; // 2653090243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialog_Statics::NewProp_UniqueID_MetaData[] = {
		{ "Category", "Dialogs" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDialog_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialog, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialog_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialog_Statics::NewProp_UniqueID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialog_Statics::NewProp_DialogEditorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialog_Statics::NewProp_Dialogs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialog_Statics::NewProp_Dialogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialog_Statics::NewProp_EditorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialog_Statics::NewProp_TalkMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialog_Statics::NewProp_UniqueID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Dialog",
		sizeof(FDialog),
		alignof(FDialog),
		Z_Construct_UScriptStruct_FDialog_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialog_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialog_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialog_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialog()
	{
		if (!Z_Registration_Info_UScriptStruct_Dialog.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Dialog.InnerSingleton, Z_Construct_UScriptStruct_FDialog_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Dialog.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNPCQuestDef>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FNPCQuestDef cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCQuestDef;
class UScriptStruct* FNPCQuestDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCQuestDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCQuestDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCQuestDef, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("NPCQuestDef"));
	}
	return Z_Registration_Info_UScriptStruct_NPCQuestDef.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FNPCQuestDef>()
{
	return FNPCQuestDef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNPCQuestDef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NPCName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dialogs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dialogs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Dialogs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Quests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestDef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Base struct for npcs to define quests and dialogs. Should have at least a datatable to hold this info*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Base struct for npcs to define quests and dialogs. Should have at least a datatable to hold this info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCQuestDef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_NPCName_MetaData[] = {
		{ "Category", "QuestNPCDef" },
		{ "Comment", "/*This is the name used to indentify npc in the editor.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "This is the name used to indentify npc in the editor." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_NPCName = { "NPCName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCQuestDef, NPCName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_NPCName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_NPCName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Dialogs_Inner = { "Dialogs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Dialogs_MetaData[] = {
		{ "Category", "QuestNPCDef" },
		{ "Comment", "/*Dialogs reference*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Dialogs reference" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Dialogs = { "Dialogs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCQuestDef, Dialogs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Dialogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Dialogs_MetaData)) }; // 2639361420
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Quests_Inner = { "Quests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Quests_MetaData[] = {
		{ "Category", "QuestNPCDef" },
		{ "Comment", "/*Quests references*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Quests references" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCQuestDef, Quests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Quests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Quests_MetaData)) }; // 2639361420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCQuestDef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_NPCName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Dialogs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Dialogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Quests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewProp_Quests,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCQuestDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"NPCQuestDef",
		sizeof(FNPCQuestDef),
		alignof(FNPCQuestDef),
		Z_Construct_UScriptStruct_FNPCQuestDef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestDef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDef()
	{
		if (!Z_Registration_Info_UScriptStruct_NPCQuestDef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCQuestDef.InnerSingleton, Z_Construct_UScriptStruct_FNPCQuestDef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NPCQuestDef.InnerSingleton;
	}

static_assert(std::is_polymorphic<FQuestNode>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestNode cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestNode;
class UScriptStruct* FQuestNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestNode, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestNode"));
	}
	return Z_Registration_Info_UScriptStruct_QuestNode.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestNode>()
{
	return FQuestNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Base Quest ending struct*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Base Quest ending struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestNode, Quest), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_Quest_MetaData)) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestNode, Node), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_Node_MetaData)) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestNode_Statics::NewProp_Node,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestNode",
		sizeof(FQuestNode),
		alignof(FQuestNode),
		Z_Construct_UScriptStruct_FQuestNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestNode()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestNode.InnerSingleton, Z_Construct_UScriptStruct_FQuestNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestNode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestFailTrack;
class UScriptStruct* FQuestFailTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestFailTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestFailTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestFailTrack, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestFailTrack"));
	}
	return Z_Registration_Info_UScriptStruct_QuestFailTrack.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestFailTrack>()
{
	return FQuestFailTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestFailTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailDate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestFailTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Structure to track Quest fail*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Structure to track Quest fail" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestFailTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*The quest that failed*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "The quest that failed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestFailTrack, Quest), Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewProp_Quest_MetaData)) }; // 2639361420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewProp_FailDate_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*Time of the fail quest in UTC time*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Time of the fail quest in UTC time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewProp_FailDate = { "FailDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestFailTrack, FailDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewProp_FailDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewProp_FailDate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestFailTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewProp_Quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewProp_FailDate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestFailTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"QuestFailTrack",
		sizeof(FQuestFailTrack),
		alignof(FQuestFailTrack),
		Z_Construct_UScriptStruct_FQuestFailTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestFailTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestFailTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestFailTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestFailTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestFailTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestFailTrack.InnerSingleton, Z_Construct_UScriptStruct_FQuestFailTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestFailTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RewardTabSlotInfo;
class UScriptStruct* FRewardTabSlotInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RewardTabSlotInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RewardTabSlotInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardTabSlotInfo, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("RewardTabSlotInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RewardTabSlotInfo.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FRewardTabSlotInfo>()
{
	return FRewardTabSlotInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskRewardSlot_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TaskRewardSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestSlot_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskSlot_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TaskSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDialogTask_MetaData[];
#endif
		static void NewProp_IsDialogTask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Structure to provide info for updating the Rewards Tab in the UI.*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Structure to provide info for updating the Rewards Tab in the UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardTabSlotInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_TaskRewardSlot_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*Slot class for creating the widget*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Slot class for creating the widget" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_TaskRewardSlot = { "TaskRewardSlot", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRewardTabSlotInfo, TaskRewardSlot), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseQuestRewardSlot_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_TaskRewardSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_TaskRewardSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_QuestSlot_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*Quest index in the inventory*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Quest index in the inventory" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_QuestSlot = { "QuestSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRewardTabSlotInfo, QuestSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_QuestSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_QuestSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_TaskSlot_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*Task ID inside the quest*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Task ID inside the quest" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_TaskSlot = { "TaskSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRewardTabSlotInfo, TaskSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_TaskSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_TaskSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_IsDialogTask_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*If is a dialog task slot*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "If is a dialog task slot" },
	};
#endif
	void Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_IsDialogTask_SetBit(void* Obj)
	{
		((FRewardTabSlotInfo*)Obj)->IsDialogTask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_IsDialogTask = { "IsDialogTask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRewardTabSlotInfo), &Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_IsDialogTask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_IsDialogTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_IsDialogTask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_TaskRewardSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_QuestSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_TaskSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewProp_IsDialogTask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"RewardTabSlotInfo",
		sizeof(FRewardTabSlotInfo),
		alignof(FRewardTabSlotInfo),
		Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRewardTabSlotInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RewardTabSlotInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RewardTabSlotInfo.InnerSingleton, Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RewardTabSlotInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestNodeID;
class UScriptStruct* FQuestNodeID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestNodeID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestNodeID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestNodeID, (UObject*)Z_Construct_UPackage__Script_QuestEditor(), TEXT("QuestNodeID"));
	}
	return Z_Registration_Info_UScriptStruct_QuestNodeID.OuterSingleton;
}
template<> QUESTEDITOR_API UScriptStruct* StaticStruct<FQuestNodeID>()
{
	return FQuestNodeID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestNodeID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestSlot_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestNodeID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09""Base Quest Id track struct.\n*\x09""Be careful using this as the slot in quest is not reliable if there are changes to the quest inventory.\n*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Base Quest Id track struct.\nBe careful using this as the slot in quest is not reliable if there are changes to the quest inventory." },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestNodeID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewProp_QuestSlot_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*Active Quest Slot*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Active Quest Slot" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewProp_QuestSlot = { "QuestSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestNodeID, QuestSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewProp_QuestSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewProp_QuestSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*Node ID*/" },
		{ "ModuleRelativePath", "Public/Quest/QuestTypes.h" },
		{ "ToolTip", "Node ID" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestNodeID, Node), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewProp_Node_MetaData)) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestNodeID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewProp_QuestSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewProp_Node,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestNodeID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
		nullptr,
		&NewStructOps,
		"QuestNodeID",
		sizeof(FQuestNodeID),
		alignof(FQuestNodeID),
		Z_Construct_UScriptStruct_FQuestNodeID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNodeID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestNodeID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestNodeID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestNodeID()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestNodeID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestNodeID.InnerSingleton, Z_Construct_UScriptStruct_FQuestNodeID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestNodeID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestTypes_h_Statics::EnumInfo[] = {
		{ EQuestTaskState_StaticEnum, TEXT("EQuestTaskState"), &Z_Registration_Info_UEnum_EQuestTaskState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3520366681U) },
		{ EQuestSelectedType_StaticEnum, TEXT("EQuestSelectedType"), &Z_Registration_Info_UEnum_EQuestSelectedType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1214583526U) },
		{ ETalkTextType_StaticEnum, TEXT("ETalkTextType"), &Z_Registration_Info_UEnum_ETalkTextType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2212476359U) },
		{ ETalkTextMode_StaticEnum, TEXT("ETalkTextMode"), &Z_Registration_Info_UEnum_ETalkTextMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 395059072U) },
		{ ENodeLinkType_StaticEnum, TEXT("ENodeLinkType"), &Z_Registration_Info_UEnum_ENodeLinkType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4219667413U) },
		{ EQuestTaskType_StaticEnum, TEXT("EQuestTaskType"), &Z_Registration_Info_UEnum_EQuestTaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1742157387U) },
		{ EQuestTaskTypeSelection_StaticEnum, TEXT("EQuestTaskTypeSelection"), &Z_Registration_Info_UEnum_EQuestTaskTypeSelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3456227288U) },
		{ ENodeConnectorType_StaticEnum, TEXT("ENodeConnectorType"), &Z_Registration_Info_UEnum_ENodeConnectorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2123307039U) },
		{ EDialogType_StaticEnum, TEXT("EDialogType"), &Z_Registration_Info_UEnum_EDialogType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1002308137U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestTypes_h_Statics::ScriptStructInfo[] = {
		{ FSingleSentenceModeData::StaticStruct, Z_Construct_UScriptStruct_FSingleSentenceModeData_Statics::NewStructOps, TEXT("SingleSentenceModeData"), &Z_Registration_Info_UScriptStruct_SingleSentenceModeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSingleSentenceModeData), 169965353U) },
		{ FTalkModeDef::StaticStruct, Z_Construct_UScriptStruct_FTalkModeDef_Statics::NewStructOps, TEXT("TalkModeDef"), &Z_Registration_Info_UScriptStruct_TalkModeDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTalkModeDef), 2653090243U) },
		{ FQuestRep::StaticStruct, Z_Construct_UScriptStruct_FQuestRep_Statics::NewStructOps, TEXT("QuestRep"), &Z_Registration_Info_UScriptStruct_QuestRep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestRep), 2639361420U) },
		{ FDialogRep::StaticStruct, Z_Construct_UScriptStruct_FDialogRep_Statics::NewStructOps, TEXT("DialogRep"), &Z_Registration_Info_UScriptStruct_DialogRep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogRep), 266078582U) },
		{ FNPCQuestDefRep::StaticStruct, Z_Construct_UScriptStruct_FNPCQuestDefRep_Statics::NewStructOps, TEXT("NPCQuestDefRep"), &Z_Registration_Info_UScriptStruct_NPCQuestDefRep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCQuestDefRep), 3466971976U) },
		{ FQuestTaskID::StaticStruct, Z_Construct_UScriptStruct_FQuestTaskID_Statics::NewStructOps, TEXT("QuestTaskID"), &Z_Registration_Info_UScriptStruct_QuestTaskID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTaskID), 3578582651U) },
		{ FQuestTaskLink::StaticStruct, Z_Construct_UScriptStruct_FQuestTaskLink_Statics::NewStructOps, TEXT("QuestTaskLink"), &Z_Registration_Info_UScriptStruct_QuestTaskLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTaskLink), 3937065984U) },
		{ FQuestTalkTask::StaticStruct, Z_Construct_UScriptStruct_FQuestTalkTask_Statics::NewStructOps, TEXT("QuestTalkTask"), &Z_Registration_Info_UScriptStruct_QuestTalkTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTalkTask), 1604935902U) },
		{ FQuestTaskPayload::StaticStruct, Z_Construct_UScriptStruct_FQuestTaskPayload_Statics::NewStructOps, TEXT("QuestTaskPayload"), &Z_Registration_Info_UScriptStruct_QuestTaskPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTaskPayload), 4258527549U) },
		{ FQuestTask::StaticStruct, Z_Construct_UScriptStruct_FQuestTask_Statics::NewStructOps, TEXT("QuestTask"), &Z_Registration_Info_UScriptStruct_QuestTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTask), 3659381813U) },
		{ FQuest::StaticStruct, Z_Construct_UScriptStruct_FQuest_Statics::NewStructOps, TEXT("Quest"), &Z_Registration_Info_UScriptStruct_Quest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuest), 1952640410U) },
		{ FTalkTextInfo::StaticStruct, Z_Construct_UScriptStruct_FTalkTextInfo_Statics::NewStructOps, TEXT("TalkTextInfo"), &Z_Registration_Info_UScriptStruct_TalkTextInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTalkTextInfo), 907379287U) },
		{ FTalkTaskTrack::StaticStruct, Z_Construct_UScriptStruct_FTalkTaskTrack_Statics::NewStructOps, TEXT("TalkTaskTrack"), &Z_Registration_Info_UScriptStruct_TalkTaskTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTalkTaskTrack), 3058962060U) },
		{ FDialogTrack::StaticStruct, Z_Construct_UScriptStruct_FDialogTrack_Statics::NewStructOps, TEXT("DialogTrack"), &Z_Registration_Info_UScriptStruct_DialogTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogTrack), 2633733683U) },
		{ FTaskObjectTrack::StaticStruct, Z_Construct_UScriptStruct_FTaskObjectTrack_Statics::NewStructOps, TEXT("TaskObjectTrack"), &Z_Registration_Info_UScriptStruct_TaskObjectTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaskObjectTrack), 4188178558U) },
		{ FQuestObjectTrack::StaticStruct, Z_Construct_UScriptStruct_FQuestObjectTrack_Statics::NewStructOps, TEXT("QuestObjectTrack"), &Z_Registration_Info_UScriptStruct_QuestObjectTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestObjectTrack), 85895618U) },
		{ FTaskTrack::StaticStruct, Z_Construct_UScriptStruct_FTaskTrack_Statics::NewStructOps, TEXT("TaskTrack"), &Z_Registration_Info_UScriptStruct_TaskTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaskTrack), 356126919U) },
		{ FQuestTrack::StaticStruct, Z_Construct_UScriptStruct_FQuestTrack_Statics::NewStructOps, TEXT("QuestTrack"), &Z_Registration_Info_UScriptStruct_QuestTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTrack), 2823668651U) },
		{ FCompletedQuestTrack::StaticStruct, Z_Construct_UScriptStruct_FCompletedQuestTrack_Statics::NewStructOps, TEXT("CompletedQuestTrack"), &Z_Registration_Info_UScriptStruct_CompletedQuestTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompletedQuestTrack), 2064038991U) },
		{ FDialog::StaticStruct, Z_Construct_UScriptStruct_FDialog_Statics::NewStructOps, TEXT("Dialog"), &Z_Registration_Info_UScriptStruct_Dialog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialog), 1356337939U) },
		{ FNPCQuestDef::StaticStruct, Z_Construct_UScriptStruct_FNPCQuestDef_Statics::NewStructOps, TEXT("NPCQuestDef"), &Z_Registration_Info_UScriptStruct_NPCQuestDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCQuestDef), 2955034993U) },
		{ FQuestNode::StaticStruct, Z_Construct_UScriptStruct_FQuestNode_Statics::NewStructOps, TEXT("QuestNode"), &Z_Registration_Info_UScriptStruct_QuestNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestNode), 2631386162U) },
		{ FQuestFailTrack::StaticStruct, Z_Construct_UScriptStruct_FQuestFailTrack_Statics::NewStructOps, TEXT("QuestFailTrack"), &Z_Registration_Info_UScriptStruct_QuestFailTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestFailTrack), 3734998214U) },
		{ FRewardTabSlotInfo::StaticStruct, Z_Construct_UScriptStruct_FRewardTabSlotInfo_Statics::NewStructOps, TEXT("RewardTabSlotInfo"), &Z_Registration_Info_UScriptStruct_RewardTabSlotInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRewardTabSlotInfo), 2505220435U) },
		{ FQuestNodeID::StaticStruct, Z_Construct_UScriptStruct_FQuestNodeID_Statics::NewStructOps, TEXT("QuestNodeID"), &Z_Registration_Info_UScriptStruct_QuestNodeID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestNodeID), 1209730174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestTypes_h_2725969549(TEXT("/Script/QuestEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Quest_QuestTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
