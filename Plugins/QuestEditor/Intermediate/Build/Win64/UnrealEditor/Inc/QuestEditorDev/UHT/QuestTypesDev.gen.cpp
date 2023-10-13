// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/QuestEditor/QuestTypesDev.h"
#include "Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTypesDev() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseFloatSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseObjectClassSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseStringSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTagSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTalkTaskSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTaskContentPreviewWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTaskTitlePreviewWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseVectorSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UCustomPayloadSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTalkTaskError_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorTaskError_NoRegister();
	QUESTEDITORDEV_API UEnum* Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType();
	QUESTEDITORDEV_API UEnum* Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode();
	QUESTEDITORDEV_API UEnum* Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEditorDrawLineData();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEditorKeyBind();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskEditorInfo();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestEditor_EditMode;
	static UEnum* EQuestEditor_EditMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestEditor_EditMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestEditor_EditMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode, (UObject*)Z_Construct_UPackage__Script_QuestEditorDev(), TEXT("EQuestEditor_EditMode"));
		}
		return Z_Registration_Info_UEnum_EQuestEditor_EditMode.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UEnum* StaticEnum<EQuestEditor_EditMode>()
	{
		return EQuestEditor_EditMode_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode_Statics::Enumerators[] = {
		{ "EQuestEditor_EditMode::NPC", (int64)EQuestEditor_EditMode::NPC },
		{ "EQuestEditor_EditMode::Quest", (int64)EQuestEditor_EditMode::Quest },
		{ "EQuestEditor_EditMode::Dialog", (int64)EQuestEditor_EditMode::Dialog },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dialog.Name", "EQuestEditor_EditMode::Dialog" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
		{ "NPC.Name", "EQuestEditor_EditMode::NPC" },
		{ "Quest.Name", "EQuestEditor_EditMode::Quest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev,
		nullptr,
		"EQuestEditor_EditMode",
		"EQuestEditor_EditMode",
		Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode()
	{
		if (!Z_Registration_Info_UEnum_EQuestEditor_EditMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestEditor_EditMode.InnerSingleton, Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestEditor_EditMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeSelectionType;
	static UEnum* ENodeSelectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENodeSelectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENodeSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType, (UObject*)Z_Construct_UPackage__Script_QuestEditorDev(), TEXT("ENodeSelectionType"));
		}
		return Z_Registration_Info_UEnum_ENodeSelectionType.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UEnum* StaticEnum<ENodeSelectionType>()
	{
		return ENodeSelectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType_Statics::Enumerators[] = {
		{ "ENodeSelectionType::NoSelection", (int64)ENodeSelectionType::NoSelection },
		{ "ENodeSelectionType::Task", (int64)ENodeSelectionType::Task },
		{ "ENodeSelectionType::TalkTask", (int64)ENodeSelectionType::TalkTask },
		{ "ENodeSelectionType::MultiNode", (int64)ENodeSelectionType::MultiNode },
		{ "ENodeSelectionType::MultiTalkTask", (int64)ENodeSelectionType::MultiTalkTask },
		{ "ENodeSelectionType::MultiTask", (int64)ENodeSelectionType::MultiTask },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
		{ "MultiNode.Name", "ENodeSelectionType::MultiNode" },
		{ "MultiTalkTask.Name", "ENodeSelectionType::MultiTalkTask" },
		{ "MultiTask.Name", "ENodeSelectionType::MultiTask" },
		{ "NoSelection.Name", "ENodeSelectionType::NoSelection" },
		{ "TalkTask.Name", "ENodeSelectionType::TalkTask" },
		{ "Task.Name", "ENodeSelectionType::Task" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev,
		nullptr,
		"ENodeSelectionType",
		"ENodeSelectionType",
		Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType()
	{
		if (!Z_Registration_Info_UEnum_ENodeSelectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeSelectionType.InnerSingleton, Z_Construct_UEnum_QuestEditorDev_ENodeSelectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENodeSelectionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestKeyBindAction;
	static UEnum* EQuestKeyBindAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestKeyBindAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestKeyBindAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction, (UObject*)Z_Construct_UPackage__Script_QuestEditorDev(), TEXT("EQuestKeyBindAction"));
		}
		return Z_Registration_Info_UEnum_EQuestKeyBindAction.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UEnum* StaticEnum<EQuestKeyBindAction>()
	{
		return EQuestKeyBindAction_StaticEnum();
	}
	struct Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction_Statics::Enumerators[] = {
		{ "EQuestKeyBindAction::MoveUp", (int64)EQuestKeyBindAction::MoveUp },
		{ "EQuestKeyBindAction::MoveDown", (int64)EQuestKeyBindAction::MoveDown },
		{ "EQuestKeyBindAction::MoveLeft", (int64)EQuestKeyBindAction::MoveLeft },
		{ "EQuestKeyBindAction::MoveRight", (int64)EQuestKeyBindAction::MoveRight },
		{ "EQuestKeyBindAction::ZoomIn", (int64)EQuestKeyBindAction::ZoomIn },
		{ "EQuestKeyBindAction::ZoomOut", (int64)EQuestKeyBindAction::ZoomOut },
		{ "EQuestKeyBindAction::AlignNodesUp", (int64)EQuestKeyBindAction::AlignNodesUp },
		{ "EQuestKeyBindAction::AlignNodesDown", (int64)EQuestKeyBindAction::AlignNodesDown },
		{ "EQuestKeyBindAction::AlignNodesLeft", (int64)EQuestKeyBindAction::AlignNodesLeft },
		{ "EQuestKeyBindAction::AlignNodesRight", (int64)EQuestKeyBindAction::AlignNodesRight },
		{ "EQuestKeyBindAction::AlignNodesUpAndEven", (int64)EQuestKeyBindAction::AlignNodesUpAndEven },
		{ "EQuestKeyBindAction::AlignNodesDownAndEven", (int64)EQuestKeyBindAction::AlignNodesDownAndEven },
		{ "EQuestKeyBindAction::AlignNodesLeftAndEven", (int64)EQuestKeyBindAction::AlignNodesLeftAndEven },
		{ "EQuestKeyBindAction::AlignNodesRightAndEven", (int64)EQuestKeyBindAction::AlignNodesRightAndEven },
		{ "EQuestKeyBindAction::AlignNodesToGrid", (int64)EQuestKeyBindAction::AlignNodesToGrid },
		{ "EQuestKeyBindAction::EvenXDistribution", (int64)EQuestKeyBindAction::EvenXDistribution },
		{ "EQuestKeyBindAction::EvenYDistribution", (int64)EQuestKeyBindAction::EvenYDistribution },
		{ "EQuestKeyBindAction::DeleteNodes", (int64)EQuestKeyBindAction::DeleteNodes },
		{ "EQuestKeyBindAction::IterateStartNodes", (int64)EQuestKeyBindAction::IterateStartNodes },
		{ "EQuestKeyBindAction::IterateEndNodes", (int64)EQuestKeyBindAction::IterateEndNodes },
		{ "EQuestKeyBindAction::IterateNodesForward", (int64)EQuestKeyBindAction::IterateNodesForward },
		{ "EQuestKeyBindAction::IterateNodesBackward", (int64)EQuestKeyBindAction::IterateNodesBackward },
		{ "EQuestKeyBindAction::FindSelectedNode", (int64)EQuestKeyBindAction::FindSelectedNode },
		{ "EQuestKeyBindAction::CenterViewport", (int64)EQuestKeyBindAction::CenterViewport },
		{ "EQuestKeyBindAction::ResetZoom", (int64)EQuestKeyBindAction::ResetZoom },
		{ "EQuestKeyBindAction::Undo", (int64)EQuestKeyBindAction::Undo },
		{ "EQuestKeyBindAction::Redo", (int64)EQuestKeyBindAction::Redo },
		{ "EQuestKeyBindAction::CopyNodes", (int64)EQuestKeyBindAction::CopyNodes },
		{ "EQuestKeyBindAction::CutNodes", (int64)EQuestKeyBindAction::CutNodes },
		{ "EQuestKeyBindAction::PasteNodes", (int64)EQuestKeyBindAction::PasteNodes },
		{ "EQuestKeyBindAction::ConnectSelectedNodes", (int64)EQuestKeyBindAction::ConnectSelectedNodes },
		{ "EQuestKeyBindAction::ConnectSelectedNodesAsGrid", (int64)EQuestKeyBindAction::ConnectSelectedNodesAsGrid },
		{ "EQuestKeyBindAction::ToggleSelectedConnectionsTypes", (int64)EQuestKeyBindAction::ToggleSelectedConnectionsTypes },
		{ "EQuestKeyBindAction::MutuallyDisableNodes", (int64)EQuestKeyBindAction::MutuallyDisableNodes },
		{ "EQuestKeyBindAction::RemoveSelectedNodesConnections", (int64)EQuestKeyBindAction::RemoveSelectedNodesConnections },
		{ "EQuestKeyBindAction::RemoveSelectedNodesDisableConnections", (int64)EQuestKeyBindAction::RemoveSelectedNodesDisableConnections },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction_Statics::Enum_MetaDataParams[] = {
		{ "AlignNodesDown.Name", "EQuestKeyBindAction::AlignNodesDown" },
		{ "AlignNodesDownAndEven.Name", "EQuestKeyBindAction::AlignNodesDownAndEven" },
		{ "AlignNodesLeft.Name", "EQuestKeyBindAction::AlignNodesLeft" },
		{ "AlignNodesLeftAndEven.Name", "EQuestKeyBindAction::AlignNodesLeftAndEven" },
		{ "AlignNodesRight.Name", "EQuestKeyBindAction::AlignNodesRight" },
		{ "AlignNodesRightAndEven.Name", "EQuestKeyBindAction::AlignNodesRightAndEven" },
		{ "AlignNodesToGrid.Name", "EQuestKeyBindAction::AlignNodesToGrid" },
		{ "AlignNodesUp.Name", "EQuestKeyBindAction::AlignNodesUp" },
		{ "AlignNodesUpAndEven.Name", "EQuestKeyBindAction::AlignNodesUpAndEven" },
		{ "BlueprintType", "true" },
		{ "CenterViewport.Name", "EQuestKeyBindAction::CenterViewport" },
		{ "ConnectSelectedNodes.Name", "EQuestKeyBindAction::ConnectSelectedNodes" },
		{ "ConnectSelectedNodesAsGrid.Name", "EQuestKeyBindAction::ConnectSelectedNodesAsGrid" },
		{ "CopyNodes.Name", "EQuestKeyBindAction::CopyNodes" },
		{ "CutNodes.Name", "EQuestKeyBindAction::CutNodes" },
		{ "DeleteNodes.Name", "EQuestKeyBindAction::DeleteNodes" },
		{ "EvenXDistribution.Name", "EQuestKeyBindAction::EvenXDistribution" },
		{ "EvenYDistribution.Name", "EQuestKeyBindAction::EvenYDistribution" },
		{ "FindSelectedNode.Name", "EQuestKeyBindAction::FindSelectedNode" },
		{ "IterateEndNodes.Name", "EQuestKeyBindAction::IterateEndNodes" },
		{ "IterateNodesBackward.Name", "EQuestKeyBindAction::IterateNodesBackward" },
		{ "IterateNodesForward.Name", "EQuestKeyBindAction::IterateNodesForward" },
		{ "IterateStartNodes.Name", "EQuestKeyBindAction::IterateStartNodes" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
		{ "MoveDown.Name", "EQuestKeyBindAction::MoveDown" },
		{ "MoveLeft.Name", "EQuestKeyBindAction::MoveLeft" },
		{ "MoveRight.Name", "EQuestKeyBindAction::MoveRight" },
		{ "MoveUp.Name", "EQuestKeyBindAction::MoveUp" },
		{ "MutuallyDisableNodes.Name", "EQuestKeyBindAction::MutuallyDisableNodes" },
		{ "PasteNodes.Name", "EQuestKeyBindAction::PasteNodes" },
		{ "Redo.Name", "EQuestKeyBindAction::Redo" },
		{ "RemoveSelectedNodesConnections.Name", "EQuestKeyBindAction::RemoveSelectedNodesConnections" },
		{ "RemoveSelectedNodesDisableConnections.Name", "EQuestKeyBindAction::RemoveSelectedNodesDisableConnections" },
		{ "ResetZoom.Name", "EQuestKeyBindAction::ResetZoom" },
		{ "ToggleSelectedConnectionsTypes.Name", "EQuestKeyBindAction::ToggleSelectedConnectionsTypes" },
		{ "Undo.Name", "EQuestKeyBindAction::Undo" },
		{ "ZoomIn.Name", "EQuestKeyBindAction::ZoomIn" },
		{ "ZoomOut.Name", "EQuestKeyBindAction::ZoomOut" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev,
		nullptr,
		"EQuestKeyBindAction",
		"EQuestKeyBindAction",
		Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction()
	{
		if (!Z_Registration_Info_UEnum_EQuestKeyBindAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestKeyBindAction.InnerSingleton, Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestKeyBindAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestEditorDrawLineData;
class UScriptStruct* FQuestEditorDrawLineData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestEditorDrawLineData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestEditorDrawLineData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestEditorDrawLineData, (UObject*)Z_Construct_UPackage__Script_QuestEditorDev(), TEXT("QuestEditorDrawLineData"));
	}
	return Z_Registration_Info_UScriptStruct_QuestEditorDrawLineData.OuterSingleton;
}
template<> QUESTEDITORDEV_API UScriptStruct* StaticStruct<FQuestEditorDrawLineData>()
{
	return FQuestEditorDrawLineData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Struc to define draw arrows.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
		{ "ToolTip", "Struc to define draw arrows." },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestEditorDrawLineData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_PositionA_MetaData[] = {
		{ "Category", "DrawData" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_PositionA = { "PositionA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestEditorDrawLineData, PositionA), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_PositionA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_PositionA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_PositionB_MetaData[] = {
		{ "Category", "DrawData" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_PositionB = { "PositionB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestEditorDrawLineData, PositionB), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_PositionB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_PositionB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "DrawData" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestEditorDrawLineData, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "DrawData" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestEditorDrawLineData, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_Thickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_PositionA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_PositionB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewProp_Thickness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
		nullptr,
		&NewStructOps,
		"QuestEditorDrawLineData",
		sizeof(FQuestEditorDrawLineData),
		alignof(FQuestEditorDrawLineData),
		Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestEditorDrawLineData()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestEditorDrawLineData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestEditorDrawLineData.InnerSingleton, Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestEditorDrawLineData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestEditorKeyBind;
class UScriptStruct* FQuestEditorKeyBind::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestEditorKeyBind.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestEditorKeyBind.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestEditorKeyBind, (UObject*)Z_Construct_UPackage__Script_QuestEditorDev(), TEXT("QuestEditorKeyBind"));
	}
	return Z_Registration_Info_UScriptStruct_QuestEditorKeyBind.OuterSingleton;
}
template<> QUESTEDITORDEV_API UScriptStruct* StaticStruct<FQuestEditorKeyBind>()
{
	return FQuestEditorKeyBind::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Struc to define a Quest Editor Keybind.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
		{ "ToolTip", "Struc to define a Quest Editor Keybind." },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestEditorKeyBind>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Shortcut" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestEditorKeyBind, Action), Z_Construct_UEnum_QuestEditorDev_EQuestKeyBindAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Action_MetaData)) }; // 2005418099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Shortcut" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestEditorKeyBind, Input), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Input_MetaData)) }; // 2392822822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewProp_Input,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
		nullptr,
		&NewStructOps,
		"QuestEditorKeyBind",
		sizeof(FQuestEditorKeyBind),
		alignof(FQuestEditorKeyBind),
		Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestEditorKeyBind()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestEditorKeyBind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestEditorKeyBind.InnerSingleton, Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestEditorKeyBind.InnerSingleton;
	}

static_assert(std::is_polymorphic<FQuestTaskEditorInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestTaskEditorInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTaskEditorInfo;
class UScriptStruct* FQuestTaskEditorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTaskEditorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTaskEditorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTaskEditorInfo, (UObject*)Z_Construct_UPackage__Script_QuestEditorDev(), TEXT("QuestTaskEditorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTaskEditorInfo.OuterSingleton;
}
template<> QUESTEDITORDEV_API UScriptStruct* StaticStruct<FQuestTaskEditorInfo>()
{
	return FQuestTaskEditorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskEditorColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskEditorColor;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ErrorObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ErrorObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitlePreviewWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TitlePreviewWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPreviewWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ContentPreviewWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TaskClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringASelector_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StringASelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringBSelector_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StringBSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountInvolvedSelector_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AmountInvolvedSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimesToCheckSelector_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TimesToCheckSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagsRequiredSelector_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TagsRequiredSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagsIgnoredSelector_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TagsIgnoredSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClassSelector_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClassSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorSelector_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VectorSelector;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomPayloadSelectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadSelectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomPayloadSelectors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Struc to define a task editor information. */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
		{ "ToolTip", "Struc to define a task editor information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTaskEditorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskName_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, TaskName), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskEditorColor_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskEditorColor = { "TaskEditorColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, TaskEditorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskEditorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskEditorColor_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ErrorObjects_Inner = { "ErrorObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UQuestEditorTaskError_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ErrorObjects_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ErrorObjects = { "ErrorObjects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, ErrorObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ErrorObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ErrorObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TitlePreviewWidget_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TitlePreviewWidget = { "TitlePreviewWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, TitlePreviewWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseTaskTitlePreviewWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TitlePreviewWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TitlePreviewWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ContentPreviewWidget_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ContentPreviewWidget = { "ContentPreviewWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, ContentPreviewWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseTaskContentPreviewWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ContentPreviewWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ContentPreviewWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskClass_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskClass = { "TaskClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, TaskClass), Z_Construct_UClass_UBaseQuestTask_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_StringASelector_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_StringASelector = { "StringASelector", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, StringASelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseStringSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_StringASelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_StringASelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_StringBSelector_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_StringBSelector = { "StringBSelector", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, StringBSelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseStringSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_StringBSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_StringBSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_AmountInvolvedSelector_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_AmountInvolvedSelector = { "AmountInvolvedSelector", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, AmountInvolvedSelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseFloatSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_AmountInvolvedSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_AmountInvolvedSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TimesToCheckSelector_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TimesToCheckSelector = { "TimesToCheckSelector", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, TimesToCheckSelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseFloatSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TimesToCheckSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TimesToCheckSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TagsRequiredSelector_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TagsRequiredSelector = { "TagsRequiredSelector", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, TagsRequiredSelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseTagSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TagsRequiredSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TagsRequiredSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TagsIgnoredSelector_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TagsIgnoredSelector = { "TagsIgnoredSelector", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, TagsIgnoredSelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseTagSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TagsIgnoredSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TagsIgnoredSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ObjectClassSelector_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ObjectClassSelector = { "ObjectClassSelector", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, ObjectClassSelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseObjectClassSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ObjectClassSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ObjectClassSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_VectorSelector_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_VectorSelector = { "VectorSelector", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, VectorSelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseVectorSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_VectorSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_VectorSelector_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_CustomPayloadSelectors_Inner = { "CustomPayloadSelectors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomPayloadSelectorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_CustomPayloadSelectors_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_CustomPayloadSelectors = { "CustomPayloadSelectors", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTaskEditorInfo, CustomPayloadSelectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_CustomPayloadSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_CustomPayloadSelectors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskEditorColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ErrorObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ErrorObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TitlePreviewWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ContentPreviewWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TaskClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_StringASelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_StringBSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_AmountInvolvedSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TimesToCheckSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TagsRequiredSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_TagsIgnoredSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_ObjectClassSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_VectorSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_CustomPayloadSelectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewProp_CustomPayloadSelectors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestTaskEditorInfo",
		sizeof(FQuestTaskEditorInfo),
		alignof(FQuestTaskEditorInfo),
		Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskEditorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTaskEditorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTaskEditorInfo.InnerSingleton, Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTaskEditorInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FQuestTalkTaskEditorInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestTalkTaskEditorInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTalkTaskEditorInfo;
class UScriptStruct* FQuestTalkTaskEditorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTalkTaskEditorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTalkTaskEditorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo, (UObject*)Z_Construct_UPackage__Script_QuestEditorDev(), TEXT("QuestTalkTaskEditorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTalkTaskEditorInfo.OuterSingleton;
}
template<> QUESTEDITORDEV_API UScriptStruct* StaticStruct<FQuestTalkTaskEditorInfo>()
{
	return FQuestTalkTaskEditorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkModeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TalkModeName;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ErrorObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ErrorObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPreviewWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ContentPreviewWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTaskSelector_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TalkTaskSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadSelector_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomPayloadSelector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Struc to define a talk task editor information. */" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
		{ "ToolTip", "Struc to define a talk task editor information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTalkTaskEditorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_TalkModeName_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_TalkModeName = { "TalkModeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTaskEditorInfo, TalkModeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_TalkModeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_TalkModeName_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ErrorObjects_Inner = { "ErrorObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UQuestEditorTalkTaskError_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ErrorObjects_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ErrorObjects = { "ErrorObjects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTaskEditorInfo, ErrorObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ErrorObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ErrorObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ContentPreviewWidget_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ContentPreviewWidget = { "ContentPreviewWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTaskEditorInfo, ContentPreviewWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseTalkTaskContentPreviewWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ContentPreviewWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ContentPreviewWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_TalkTaskSelector_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_TalkTaskSelector = { "TalkTaskSelector", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTaskEditorInfo, TalkTaskSelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseTalkTaskSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_TalkTaskSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_TalkTaskSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_CustomPayloadSelector_MetaData[] = {
		{ "Category", "Task Editor Info" },
		{ "ModuleRelativePath", "Public/QuestEditor/QuestTypesDev.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_CustomPayloadSelector = { "CustomPayloadSelector", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTalkTaskEditorInfo, CustomPayloadSelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomPayloadSelectorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_CustomPayloadSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_CustomPayloadSelector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_TalkModeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ErrorObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ErrorObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_ContentPreviewWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_TalkTaskSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewProp_CustomPayloadSelector,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestTalkTaskEditorInfo",
		sizeof(FQuestTalkTaskEditorInfo),
		alignof(FQuestTalkTaskEditorInfo),
		Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTalkTaskEditorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTalkTaskEditorInfo.InnerSingleton, Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTalkTaskEditorInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_Statics::EnumInfo[] = {
		{ EQuestEditor_EditMode_StaticEnum, TEXT("EQuestEditor_EditMode"), &Z_Registration_Info_UEnum_EQuestEditor_EditMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3075556338U) },
		{ ENodeSelectionType_StaticEnum, TEXT("ENodeSelectionType"), &Z_Registration_Info_UEnum_ENodeSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2648707201U) },
		{ EQuestKeyBindAction_StaticEnum, TEXT("EQuestKeyBindAction"), &Z_Registration_Info_UEnum_EQuestKeyBindAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2005418099U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_Statics::ScriptStructInfo[] = {
		{ FQuestEditorDrawLineData::StaticStruct, Z_Construct_UScriptStruct_FQuestEditorDrawLineData_Statics::NewStructOps, TEXT("QuestEditorDrawLineData"), &Z_Registration_Info_UScriptStruct_QuestEditorDrawLineData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestEditorDrawLineData), 2288360119U) },
		{ FQuestEditorKeyBind::StaticStruct, Z_Construct_UScriptStruct_FQuestEditorKeyBind_Statics::NewStructOps, TEXT("QuestEditorKeyBind"), &Z_Registration_Info_UScriptStruct_QuestEditorKeyBind, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestEditorKeyBind), 3996454201U) },
		{ FQuestTaskEditorInfo::StaticStruct, Z_Construct_UScriptStruct_FQuestTaskEditorInfo_Statics::NewStructOps, TEXT("QuestTaskEditorInfo"), &Z_Registration_Info_UScriptStruct_QuestTaskEditorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTaskEditorInfo), 3394797982U) },
		{ FQuestTalkTaskEditorInfo::StaticStruct, Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo_Statics::NewStructOps, TEXT("QuestTalkTaskEditorInfo"), &Z_Registration_Info_UScriptStruct_QuestTalkTaskEditorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTalkTaskEditorInfo), 1054139793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_2570418670(TEXT("/Script/QuestEditorDev"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_QuestTypesDev_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
