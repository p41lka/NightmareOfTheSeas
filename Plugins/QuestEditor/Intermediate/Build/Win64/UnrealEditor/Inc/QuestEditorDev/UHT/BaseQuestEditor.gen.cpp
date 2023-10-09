// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/QuestEditor/BaseQuestEditor.h"
#include "GameplayTagContainer.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
#include "QuestEditorDev/Public/QuestEditor/QuestTypesDev.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuestEditor() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_NoRegister();
	QUESTEDITOR_API UEnum* Z_Construct_UEnum_QuestEditor_ENodeConnectorType();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDefRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTask();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskID();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskPayload();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestEditor();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestEditor_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTooltipContentWidget_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorSaveGame_NoRegister();
	QUESTEDITORDEV_API UEnum* Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_HideTooltip__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestEditorDev_HideTooltip__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_HideTooltip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------------------------------------------------\n//-----------------------------------------------Dispatchers\n//------------------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "-----------------------------------------------Dispatchers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_HideTooltip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "HideTooltip__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_HideTooltip__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_HideTooltip__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_HideTooltip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_HideTooltip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHideTooltip_DelegateWrapper(const FMulticastScriptDelegate& HideTooltip)
{
	HideTooltip.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventShowTooltip_Parms
		{
			FQuestTaskPayload PayloadIn;
			TSubclassOf<UBaseTooltipContentWidget>  TooltipContentWidget;
			bool UseMousePosition;
			FVector2D Offset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TooltipContentWidget;
		static void NewProp_UseMousePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMousePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventShowTooltip_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_TooltipContentWidget = { "TooltipContentWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventShowTooltip_Parms, TooltipContentWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseTooltipContentWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_UseMousePosition_SetBit(void* Obj)
	{
		((_Script_QuestEditorDev_eventShowTooltip_Parms*)Obj)->UseMousePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_UseMousePosition = { "UseMousePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_QuestEditorDev_eventShowTooltip_Parms), &Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_UseMousePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventShowTooltip_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_TooltipContentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_UseMousePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "ShowTooltip__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::_Script_QuestEditorDev_eventShowTooltip_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FShowTooltip_DelegateWrapper(const FMulticastScriptDelegate& ShowTooltip, FQuestTaskPayload const& PayloadIn, TSubclassOf<UBaseTooltipContentWidget>  TooltipContentWidget, bool UseMousePosition, FVector2D Offset)
{
	struct _Script_QuestEditorDev_eventShowTooltip_Parms
	{
		FQuestTaskPayload PayloadIn;
		TSubclassOf<UBaseTooltipContentWidget>  TooltipContentWidget;
		bool UseMousePosition;
		FVector2D Offset;
	};
	_Script_QuestEditorDev_eventShowTooltip_Parms Parms;
	Parms.PayloadIn=PayloadIn;
	Parms.TooltipContentWidget=TooltipContentWidget;
	Parms.UseMousePosition=UseMousePosition ? true : false;
	Parms.Offset=Offset;
	ShowTooltip.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventShowMessage_Parms
		{
			FString StringIn;
			FLinearColor ColorIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::NewProp_StringIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::NewProp_StringIn = { "StringIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventShowMessage_Parms, StringIn), METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::NewProp_StringIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::NewProp_StringIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::NewProp_ColorIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::NewProp_ColorIn = { "ColorIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventShowMessage_Parms, ColorIn), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::NewProp_ColorIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::NewProp_ColorIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::NewProp_StringIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::NewProp_ColorIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "ShowMessage__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::_Script_QuestEditorDev_eventShowMessage_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FShowMessage_DelegateWrapper(const FMulticastScriptDelegate& ShowMessage, const FString& StringIn, FLinearColor const& ColorIn)
{
	struct _Script_QuestEditorDev_eventShowMessage_Parms
	{
		FString StringIn;
		FLinearColor ColorIn;
	};
	_Script_QuestEditorDev_eventShowMessage_Parms Parms;
	Parms.StringIn=StringIn;
	Parms.ColorIn=ColorIn;
	ShowMessage.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UBaseQuestEditor::execClearNPCForAllTalkTasks)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseQuestEditor::ClearNPCForAllTalkTasks(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execHandleCopyPasteNodes)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestCopiedIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_CopiedNodesIn);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_NodesWidgetSizeIn);
		P_GET_STRUCT(FVector2D,Z_Param_MousePastePositionIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_PastedNodesOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBaseQuestEditor::HandleCopyPasteNodes(Z_Param_Out_QuestIn,Z_Param_Out_QuestCopiedIn,Z_Param_Out_CopiedNodesIn,Z_Param_Out_NodesWidgetSizeIn,Z_Param_MousePastePositionIn,Z_Param_Out_PastedNodesOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execSwapNodeConnectionsAndPrintErrors)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeA);
		P_GET_STRUCT_REF(FQuestTaskID,Z_Param_Out_NodeB);
		P_GET_ENUM(ENodeConnectorType,Z_Param_ConnectorIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapNodeConnectionsAndPrintErrors(Z_Param_Out_QuestIn,Z_Param_Out_NodeA,Z_Param_Out_NodeB,ENodeConnectorType(Z_Param_ConnectorIn));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execToggleSelectedNodesConnectionsType)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBaseQuestEditor::ToggleSelectedNodesConnectionsType(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execRemoveSelectedNodesDisableConnections)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBaseQuestEditor::RemoveSelectedNodesDisableConnections(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execRemoveSelectedNodesConnections)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBaseQuestEditor::RemoveSelectedNodesConnections(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execConnectNodesDisabling)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBaseQuestEditor::ConnectNodesDisabling(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execConnectNodesGridLayout)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_NodesWidgetSizeIn);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GridSizeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBaseQuestEditor::ConnectNodesGridLayout(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn,Z_Param_Out_NodesWidgetSizeIn,Z_Param_Out_GridSizeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execConnectNodes)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBaseQuestEditor::ConnectNodes(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execDisplaceNodesPosition)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Displacement);
		P_GET_UBOOL(Z_Param_UseY);
		P_GET_UBOOL(Z_Param_UseInverseOperation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UBaseQuestEditor::DisplaceNodesPosition(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn,Z_Param_Displacement,Z_Param_UseY,Z_Param_UseInverseOperation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execAlignNodesToEvenDistribution)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_GET_UBOOL(Z_Param_UseY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UBaseQuestEditor::AlignNodesToEvenDistribution(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn,Z_Param_UseY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execAlignNodesToGrid)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_NodesWidgetSizeIn);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GridSizeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UBaseQuestEditor::AlignNodesToGrid(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn,Z_Param_Out_NodesWidgetSizeIn,Z_Param_Out_GridSizeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execAlignNodesToSides)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_SelectedNodesIn);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_NodesWidgetSizeIn);
		P_GET_UBOOL(Z_Param_UseY);
		P_GET_UBOOL(Z_Param_CheckLower);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UBaseQuestEditor::AlignNodesToSides(Z_Param_Out_QuestIn,Z_Param_Out_SelectedNodesIn,Z_Param_Out_NodesWidgetSizeIn,Z_Param_UseY,Z_Param_CheckLower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateNodeQEPosition)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_STRUCT(FQuestTaskID,Z_Param_TaskID);
		P_GET_STRUCT(FVector2D,Z_Param_NewPositionIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseQuestEditor::UpdateNodeQEPosition(Z_Param_Out_QuestIn,Z_Param_TaskID,Z_Param_NewPositionIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskCustomPayload)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_PayloadSlotIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadDataIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskCustomPayload(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_PayloadSlotIn,Z_Param_PayloadDataIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskSoftClass)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_SOFTCLASS(TSoftClassPtr<UBaseQuestTask> ,Z_Param_TaskClassIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskSoftClass(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_TaskClassIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskPayload)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_STRUCT(FQuestTaskPayload,Z_Param_PayloadIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskPayload(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_PayloadIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskVector)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_STRUCT(FVector,Z_Param_VectorIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskVector(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_VectorIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskClass)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_SOFTCLASS(TSoftClassPtr<UObject> ,Z_Param_ClassIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskClass(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_ClassIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateInverseActivateCond)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_UBOOL(Z_Param_InverseCondIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInverseActivateCond(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_InverseCondIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskShortDesc)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_PROPERTY(FTextProperty,Z_Param_ShortDescIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskShortDesc(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_ShortDescIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskTagsIgnored)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_TagsIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskTagsIgnored(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_TagsIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskTagsRequired)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_TagsIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskTagsRequired(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_TagsIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskAmountInv)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmountIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskAmountInv(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_AmountIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskTimesToCheck)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimesIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskTimesToCheck(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_TimesIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskName2Inv)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_NameIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskName2Inv(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_NameIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTaskNameInv)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TasksIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_NameIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TaskIDsOut);
		P_GET_TARRAY_REF(FQuestTask,Z_Param_Out_TasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTaskNameInv(Z_Param_Out_QuestIn,Z_Param_Out_TasksIn,Z_Param_NameIn,Z_Param_Out_TaskIDsOut,Z_Param_Out_TasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTalkTaskNPCCue)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTasksIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<USoundCue>,Z_Param_NpcCue);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTaskIDsOut);
		P_GET_TARRAY_REF(FQuestTalkTask,Z_Param_Out_TalkTasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTalkTaskNPCCue(Z_Param_Out_QuestIn,Z_Param_Out_TalkTasksIn,Z_Param_NpcCue,Z_Param_Out_TalkTaskIDsOut,Z_Param_Out_TalkTasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTalkTaskPlayerCue)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTasksIn);
		P_GET_SOFTOBJECT(TSoftObjectPtr<USoundCue>,Z_Param_PlayerCue);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTaskIDsOut);
		P_GET_TARRAY_REF(FQuestTalkTask,Z_Param_Out_TalkTasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTalkTaskPlayerCue(Z_Param_Out_QuestIn,Z_Param_Out_TalkTasksIn,Z_Param_PlayerCue,Z_Param_Out_TalkTaskIDsOut,Z_Param_Out_TalkTasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTalkTaskNPCResponse)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTasksIn);
		P_GET_PROPERTY(FTextProperty,Z_Param_NpcResponse);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTaskIDsOut);
		P_GET_TARRAY_REF(FQuestTalkTask,Z_Param_Out_TalkTasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTalkTaskNPCResponse(Z_Param_Out_QuestIn,Z_Param_Out_TalkTasksIn,Z_Param_NpcResponse,Z_Param_Out_TalkTaskIDsOut,Z_Param_Out_TalkTasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTalkTaskYouSay)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTasksIn);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_YouSay);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTaskIDsOut);
		P_GET_TARRAY_REF(FQuestTalkTask,Z_Param_Out_TalkTasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTalkTaskYouSay(Z_Param_Out_QuestIn,Z_Param_Out_TalkTasksIn,Z_Param_Out_YouSay,Z_Param_Out_TalkTaskIDsOut,Z_Param_Out_TalkTasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTalkTaskCustomPayloadData)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTasksIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_CustomPaylodDataIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTaskIDsOut);
		P_GET_TARRAY_REF(FQuestTalkTask,Z_Param_Out_TalkTasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTalkTaskCustomPayloadData(Z_Param_Out_QuestIn,Z_Param_Out_TalkTasksIn,Z_Param_CustomPaylodDataIn,Z_Param_Out_TalkTaskIDsOut,Z_Param_Out_TalkTasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTalkTaskShortDesc)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTasksIn);
		P_GET_PROPERTY(FTextProperty,Z_Param_ShortDescIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTaskIDsOut);
		P_GET_TARRAY_REF(FQuestTalkTask,Z_Param_Out_TalkTasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTalkTaskShortDesc(Z_Param_Out_QuestIn,Z_Param_Out_TalkTasksIn,Z_Param_ShortDescIn,Z_Param_Out_TalkTaskIDsOut,Z_Param_Out_TalkTasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execUpdateTalkTaskNPC)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTasksIn);
		P_GET_STRUCT_REF(FNPCQuestDefRep,Z_Param_Out_NPCDefIn);
		P_GET_TARRAY_REF(FQuestTaskID,Z_Param_Out_TalkTaskIDsOut);
		P_GET_TARRAY_REF(FQuestTalkTask,Z_Param_Out_TalkTasksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTalkTaskNPC(Z_Param_Out_QuestIn,Z_Param_Out_TalkTasksIn,Z_Param_Out_NPCDefIn,Z_Param_Out_TalkTaskIDsOut,Z_Param_Out_TalkTasksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execQEditorSave_GetVariables_Misc)
	{
		P_GET_ENUM_REF(EQuestEditor_EditMode,Z_Param_Out_CurrentEditorModeOut);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ViewportScaleSavedOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QEditorSave_GetVariables_Misc((EQuestEditor_EditMode&)(Z_Param_Out_CurrentEditorModeOut),Z_Param_Out_ViewportScaleSavedOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execQEditorSave_GetVariables_Undo)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UndoQuestIndexSavedOut);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UndoDialogIndexSavedOut);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_UndoHistoryQuestsOut);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_UndoHistoryDialogsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QEditorSave_GetVariables_Undo(Z_Param_Out_UndoQuestIndexSavedOut,Z_Param_Out_UndoDialogIndexSavedOut,Z_Param_Out_UndoHistoryQuestsOut,Z_Param_Out_UndoHistoryDialogsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execQEditorSave_GetVariables_Primary)
	{
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_PreviousQuestsOut);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_PreviousDialogsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QEditorSave_GetVariables_Primary(Z_Param_Out_PreviousQuestsOut,Z_Param_Out_PreviousDialogsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execQEditorSave_GetVariables)
	{
		P_GET_ENUM_REF(EQuestEditor_EditMode,Z_Param_Out_CurrentEditorModeOut);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UndoQuestIndexSavedOut);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UndoDialogIndexSavedOut);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ViewportScaleSavedOut);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_PreviousQuestsOut);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_UndoHistoryQuestsOut);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_PreviousDialogsOut);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_UndoHistoryDialogsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QEditorSave_GetVariables((EQuestEditor_EditMode&)(Z_Param_Out_CurrentEditorModeOut),Z_Param_Out_UndoQuestIndexSavedOut,Z_Param_Out_UndoDialogIndexSavedOut,Z_Param_Out_ViewportScaleSavedOut,Z_Param_Out_PreviousQuestsOut,Z_Param_Out_UndoHistoryQuestsOut,Z_Param_Out_PreviousDialogsOut,Z_Param_Out_UndoHistoryDialogsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execQEditorSave_SaveVariables)
	{
		P_GET_UBOOL(Z_Param_MantainPrevDialogsIn);
		P_GET_UBOOL(Z_Param_MantainPrevQuestsIn);
		P_GET_ENUM(EQuestEditor_EditMode,Z_Param_CurrentEditorModeIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_UndoQuestIndexSavedIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_UndoDialogIndexSavedIn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ViewportScaleSavedIn);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_PreviousQuestsIn);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_UndoHistoryQuestsIn);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_PreviousDialogsIn);
		P_GET_TARRAY_REF(FQuest,Z_Param_Out_UndoHistoryDialogsIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QEditorSave_SaveVariables(Z_Param_MantainPrevDialogsIn,Z_Param_MantainPrevQuestsIn,EQuestEditor_EditMode(Z_Param_CurrentEditorModeIn),Z_Param_UndoQuestIndexSavedIn,Z_Param_UndoDialogIndexSavedIn,Z_Param_ViewportScaleSavedIn,Z_Param_Out_PreviousQuestsIn,Z_Param_Out_UndoHistoryQuestsIn,Z_Param_Out_PreviousDialogsIn,Z_Param_Out_UndoHistoryDialogsIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execQEditorSave_GetSavegame)
	{
		P_GET_UBOOL_REF(Z_Param_Out_FoundSaveOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestEditorSaveGame**)Z_Param__Result=P_THIS->QEditorSave_GetSavegame(Z_Param_Out_FoundSaveOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execGetCurrentTalkModeInfo)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_QuestIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTalkTaskEditorInfo*)Z_Param__Result=P_THIS->GetCurrentTalkModeInfo(Z_Param_Out_QuestIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execShowWarnningMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MessageIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowWarnningMessage(Z_Param_MessageIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execShowNormalMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MessageIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowNormalMessage(Z_Param_MessageIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execGetDefaultTalkModeInfo)
	{
		P_GET_UBOOL_REF(Z_Param_Out_FoundModeOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTalkTaskEditorInfo*)Z_Param__Result=P_THIS->GetDefaultTalkModeInfo(Z_Param_Out_FoundModeOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execGetEditorAutosaveFreq)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEditorAutosaveFreq();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execGetEditorGridSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetEditorGridSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execGetQENPCSelector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetQENPCSelector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execGetQEQuestSelector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetQEQuestSelector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execGetQETaskSelector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetQETaskSelector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execGetSelectorFromClass)
	{
		P_GET_STRUCT(FSoftClassPath,Z_Param_ClassSelected);
		P_GET_STRUCT(FSoftClassPath,Z_Param_DefaultSelector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetSelectorFromClass(Z_Param_ClassSelected,Z_Param_DefaultSelector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execDeleteQuestEditorSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteQuestEditorSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execChangeDTsType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeDTsType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execFixPreviousVersionData)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MessageOut);
		P_GET_UBOOL_REF(Z_Param_Out_ShowChangelogOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FixPreviousVersionData(Z_Param_Out_MessageOut,Z_Param_Out_ShowChangelogOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execAppendDatatablesOfQuestForOneFolderPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendDatatablesOfQuestForOneFolderPath(Z_Param_FolderPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestEditor::execSetAllDatatablesOfQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllDatatablesOfQuest();
		P_NATIVE_END;
	}
	void UBaseQuestEditor::StaticRegisterNativesUBaseQuestEditor()
	{
		UClass* Class = UBaseQuestEditor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AlignNodesToEvenDistribution", &UBaseQuestEditor::execAlignNodesToEvenDistribution },
			{ "AlignNodesToGrid", &UBaseQuestEditor::execAlignNodesToGrid },
			{ "AlignNodesToSides", &UBaseQuestEditor::execAlignNodesToSides },
			{ "AppendDatatablesOfQuestForOneFolderPath", &UBaseQuestEditor::execAppendDatatablesOfQuestForOneFolderPath },
			{ "ChangeDTsType", &UBaseQuestEditor::execChangeDTsType },
			{ "ClearNPCForAllTalkTasks", &UBaseQuestEditor::execClearNPCForAllTalkTasks },
			{ "ConnectNodes", &UBaseQuestEditor::execConnectNodes },
			{ "ConnectNodesDisabling", &UBaseQuestEditor::execConnectNodesDisabling },
			{ "ConnectNodesGridLayout", &UBaseQuestEditor::execConnectNodesGridLayout },
			{ "DeleteQuestEditorSaveGame", &UBaseQuestEditor::execDeleteQuestEditorSaveGame },
			{ "DisplaceNodesPosition", &UBaseQuestEditor::execDisplaceNodesPosition },
			{ "FixPreviousVersionData", &UBaseQuestEditor::execFixPreviousVersionData },
			{ "GetCurrentTalkModeInfo", &UBaseQuestEditor::execGetCurrentTalkModeInfo },
			{ "GetDefaultTalkModeInfo", &UBaseQuestEditor::execGetDefaultTalkModeInfo },
			{ "GetEditorAutosaveFreq", &UBaseQuestEditor::execGetEditorAutosaveFreq },
			{ "GetEditorGridSize", &UBaseQuestEditor::execGetEditorGridSize },
			{ "GetQENPCSelector", &UBaseQuestEditor::execGetQENPCSelector },
			{ "GetQEQuestSelector", &UBaseQuestEditor::execGetQEQuestSelector },
			{ "GetQETaskSelector", &UBaseQuestEditor::execGetQETaskSelector },
			{ "GetSelectorFromClass", &UBaseQuestEditor::execGetSelectorFromClass },
			{ "HandleCopyPasteNodes", &UBaseQuestEditor::execHandleCopyPasteNodes },
			{ "QEditorSave_GetSavegame", &UBaseQuestEditor::execQEditorSave_GetSavegame },
			{ "QEditorSave_GetVariables", &UBaseQuestEditor::execQEditorSave_GetVariables },
			{ "QEditorSave_GetVariables_Misc", &UBaseQuestEditor::execQEditorSave_GetVariables_Misc },
			{ "QEditorSave_GetVariables_Primary", &UBaseQuestEditor::execQEditorSave_GetVariables_Primary },
			{ "QEditorSave_GetVariables_Undo", &UBaseQuestEditor::execQEditorSave_GetVariables_Undo },
			{ "QEditorSave_SaveVariables", &UBaseQuestEditor::execQEditorSave_SaveVariables },
			{ "RemoveSelectedNodesConnections", &UBaseQuestEditor::execRemoveSelectedNodesConnections },
			{ "RemoveSelectedNodesDisableConnections", &UBaseQuestEditor::execRemoveSelectedNodesDisableConnections },
			{ "SetAllDatatablesOfQuest", &UBaseQuestEditor::execSetAllDatatablesOfQuest },
			{ "ShowNormalMessage", &UBaseQuestEditor::execShowNormalMessage },
			{ "ShowWarnningMessage", &UBaseQuestEditor::execShowWarnningMessage },
			{ "SwapNodeConnectionsAndPrintErrors", &UBaseQuestEditor::execSwapNodeConnectionsAndPrintErrors },
			{ "ToggleSelectedNodesConnectionsType", &UBaseQuestEditor::execToggleSelectedNodesConnectionsType },
			{ "UpdateInverseActivateCond", &UBaseQuestEditor::execUpdateInverseActivateCond },
			{ "UpdateNodeQEPosition", &UBaseQuestEditor::execUpdateNodeQEPosition },
			{ "UpdateTalkTaskCustomPayloadData", &UBaseQuestEditor::execUpdateTalkTaskCustomPayloadData },
			{ "UpdateTalkTaskNPC", &UBaseQuestEditor::execUpdateTalkTaskNPC },
			{ "UpdateTalkTaskNPCCue", &UBaseQuestEditor::execUpdateTalkTaskNPCCue },
			{ "UpdateTalkTaskNPCResponse", &UBaseQuestEditor::execUpdateTalkTaskNPCResponse },
			{ "UpdateTalkTaskPlayerCue", &UBaseQuestEditor::execUpdateTalkTaskPlayerCue },
			{ "UpdateTalkTaskShortDesc", &UBaseQuestEditor::execUpdateTalkTaskShortDesc },
			{ "UpdateTalkTaskYouSay", &UBaseQuestEditor::execUpdateTalkTaskYouSay },
			{ "UpdateTaskAmountInv", &UBaseQuestEditor::execUpdateTaskAmountInv },
			{ "UpdateTaskClass", &UBaseQuestEditor::execUpdateTaskClass },
			{ "UpdateTaskCustomPayload", &UBaseQuestEditor::execUpdateTaskCustomPayload },
			{ "UpdateTaskName2Inv", &UBaseQuestEditor::execUpdateTaskName2Inv },
			{ "UpdateTaskNameInv", &UBaseQuestEditor::execUpdateTaskNameInv },
			{ "UpdateTaskPayload", &UBaseQuestEditor::execUpdateTaskPayload },
			{ "UpdateTaskShortDesc", &UBaseQuestEditor::execUpdateTaskShortDesc },
			{ "UpdateTaskSoftClass", &UBaseQuestEditor::execUpdateTaskSoftClass },
			{ "UpdateTaskTagsIgnored", &UBaseQuestEditor::execUpdateTaskTagsIgnored },
			{ "UpdateTaskTagsRequired", &UBaseQuestEditor::execUpdateTaskTagsRequired },
			{ "UpdateTaskTimesToCheck", &UBaseQuestEditor::execUpdateTaskTimesToCheck },
			{ "UpdateTaskVector", &UBaseQuestEditor::execUpdateTaskVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics
	{
		struct BaseQuestEditor_eventAlignNodesToEvenDistribution_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
			bool UseY;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static void NewProp_UseY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToEvenDistribution_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToEvenDistribution_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_UseY_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventAlignNodesToEvenDistribution_Parms*)Obj)->UseY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_UseY = { "UseY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventAlignNodesToEvenDistribution_Parms), &Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_UseY_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToEvenDistribution_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_SelectedNodesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_UseY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Takes the nodes with lower and higher position, and fills all other nodes evenly in between.\n\x09*\x09""At least three nodes must be provided.\n\x09*\x09It can also align nodes.\n\x09*\x09Returns all positions vectors.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Takes the nodes with lower and higher position, and fills all other nodes evenly in between.\nAt least three nodes must be provided.\nIt can also align nodes.\nReturns all positions vectors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "AlignNodesToEvenDistribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::BaseQuestEditor_eventAlignNodesToEvenDistribution_Parms), Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics
	{
		struct BaseQuestEditor_eventAlignNodesToGrid_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
			TArray<FVector2D> NodesWidgetSizeIn;
			FVector2D GridSizeIn;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesWidgetSizeIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesWidgetSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesWidgetSizeIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSizeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToGrid_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToGrid_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_NodesWidgetSizeIn_Inner = { "NodesWidgetSizeIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_NodesWidgetSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_NodesWidgetSizeIn = { "NodesWidgetSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToGrid_Parms, NodesWidgetSizeIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_NodesWidgetSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_NodesWidgetSizeIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_GridSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_GridSizeIn = { "GridSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToGrid_Parms, GridSizeIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_GridSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_GridSizeIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToGrid_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_SelectedNodesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_NodesWidgetSizeIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_NodesWidgetSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_GridSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Creates a grid based on the parameters and adjust all nodes positions to the it.\n\x09*\x09Returns all positions vectors.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Creates a grid based on the parameters and adjust all nodes positions to the it.\nReturns all positions vectors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "AlignNodesToGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::BaseQuestEditor_eventAlignNodesToGrid_Parms), Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C82401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics
	{
		struct BaseQuestEditor_eventAlignNodesToSides_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
			TArray<FVector2D> NodesWidgetSizeIn;
			bool UseY;
			bool CheckLower;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesWidgetSizeIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesWidgetSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesWidgetSizeIn;
		static void NewProp_UseY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseY;
		static void NewProp_CheckLower_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckLower;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToSides_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToSides_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_NodesWidgetSizeIn_Inner = { "NodesWidgetSizeIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_NodesWidgetSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_NodesWidgetSizeIn = { "NodesWidgetSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToSides_Parms, NodesWidgetSizeIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_NodesWidgetSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_NodesWidgetSizeIn_MetaData)) };
	void Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_UseY_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventAlignNodesToSides_Parms*)Obj)->UseY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_UseY = { "UseY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventAlignNodesToSides_Parms), &Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_UseY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_CheckLower_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventAlignNodesToSides_Parms*)Obj)->CheckLower = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_CheckLower = { "CheckLower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventAlignNodesToSides_Parms), &Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_CheckLower_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAlignNodesToSides_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_SelectedNodesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_NodesWidgetSizeIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_NodesWidgetSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_UseY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_CheckLower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Aligns nodes to side of the selected nodes\n\x09*\x09@Param UseY If false use X, if true use Y.\n\x09*\x09@Param CheckLower If false use Higher, if true use Lower.\n\x09*\x09Returns all positions vectors.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Aligns nodes to side of the selected nodes\n@Param UseY If false use X, if true use Y.\n@Param CheckLower If false use Higher, if true use Lower.\nReturns all positions vectors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "AlignNodesToSides", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::BaseQuestEditor_eventAlignNodesToSides_Parms), Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics
	{
		struct BaseQuestEditor_eventAppendDatatablesOfQuestForOneFolderPath_Parms
		{
			FString FolderPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::NewProp_FolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventAppendDatatablesOfQuestForOneFolderPath_Parms, FolderPath), METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::NewProp_FolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::NewProp_FolderPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::NewProp_FolderPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09""Appends all datatables found in the folder path to the corresponding array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Appends all datatables found in the folder path to the corresponding array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "AppendDatatablesOfQuestForOneFolderPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::BaseQuestEditor_eventAppendDatatablesOfQuestForOneFolderPath_Parms), Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics
	{
		struct BaseQuestEditor_eventChangeDTsType_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventChangeDTsType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventChangeDTsType_Parms), &Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09""Converts Dialogs dts to quest and fixes localization data\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Converts Dialogs dts to quest and fixes localization data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "ChangeDTsType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::BaseQuestEditor_eventChangeDTsType_Parms), Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics
	{
		struct BaseQuestEditor_eventClearNPCForAllTalkTasks_Parms
		{
			FQuest QuestIn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventClearNPCForAllTalkTasks_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	void Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventClearNPCForAllTalkTasks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventClearNPCForAllTalkTasks_Parms), &Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/** \n\x09*\x09""Clear NPC for al talk tasks of quest.\n\x09*\x09Used after pasting nodes in dialog mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Clear NPC for al talk tasks of quest.\nUsed after pasting nodes in dialog mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "ClearNPCForAllTalkTasks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::BaseQuestEditor_eventClearNPCForAllTalkTasks_Parms), Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics
	{
		struct BaseQuestEditor_eventConnectNodes_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventConnectNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventConnectNodes_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::NewProp_SelectedNodesIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Connect all selected nodes based on position.\n\x09*\x09Higher nodes are superior nodes of lower nodes. Only one connection per node is created (Chain)\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Connect all selected nodes based on position.\nHigher nodes are superior nodes of lower nodes. Only one connection per node is created (Chain)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "ConnectNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::BaseQuestEditor_eventConnectNodes_Parms), Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics
	{
		struct BaseQuestEditor_eventConnectNodesDisabling_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventConnectNodesDisabling_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventConnectNodesDisabling_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::NewProp_SelectedNodesIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Connect all selected nodes in a mutually exclusively disable connection.\n\x09*\x09""Each node will disable all the others\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Connect all selected nodes in a mutually exclusively disable connection.\nEach node will disable all the others" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "ConnectNodesDisabling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::BaseQuestEditor_eventConnectNodesDisabling_Parms), Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics
	{
		struct BaseQuestEditor_eventConnectNodesGridLayout_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
			TArray<FVector2D> NodesWidgetSizeIn;
			FVector2D GridSizeIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesWidgetSizeIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesWidgetSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesWidgetSizeIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSizeIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventConnectNodesGridLayout_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventConnectNodesGridLayout_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_NodesWidgetSizeIn_Inner = { "NodesWidgetSizeIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_NodesWidgetSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_NodesWidgetSizeIn = { "NodesWidgetSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventConnectNodesGridLayout_Parms, NodesWidgetSizeIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_NodesWidgetSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_NodesWidgetSizeIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_GridSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_GridSizeIn = { "GridSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventConnectNodesGridLayout_Parms, GridSizeIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_GridSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_GridSizeIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_SelectedNodesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_NodesWidgetSizeIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_NodesWidgetSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::NewProp_GridSizeIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Connect all selected nodes based on position in grid (Y axis). \n\x09*\x09Nodes with same grid position wont be connected.\n\x09*\x09Nodes with immediate inferior or superior grid position will be connected with the corresponding links.\n\x09*\x09Must provide the node size and grid size to be consistent with the visual grid.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Connect all selected nodes based on position in grid (Y axis).\nNodes with same grid position wont be connected.\nNodes with immediate inferior or superior grid position will be connected with the corresponding links.\nMust provide the node size and grid size to be consistent with the visual grid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "ConnectNodesGridLayout", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::BaseQuestEditor_eventConnectNodesGridLayout_Parms), Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C82401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics
	{
		struct BaseQuestEditor_eventDeleteQuestEditorSaveGame_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventDeleteQuestEditorSaveGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventDeleteQuestEditorSaveGame_Parms), &Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09""Delete editor save game\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Delete editor save game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "DeleteQuestEditorSaveGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::BaseQuestEditor_eventDeleteQuestEditorSaveGame_Parms), Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics
	{
		struct BaseQuestEditor_eventDisplaceNodesPosition_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
			float Displacement;
			bool UseY;
			bool UseInverseOperation;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Displacement;
		static void NewProp_UseY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseY;
		static void NewProp_UseInverseOperation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseInverseOperation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventDisplaceNodesPosition_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventDisplaceNodesPosition_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_Displacement = { "Displacement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventDisplaceNodesPosition_Parms, Displacement), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_UseY_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventDisplaceNodesPosition_Parms*)Obj)->UseY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_UseY = { "UseY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventDisplaceNodesPosition_Parms), &Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_UseY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_UseInverseOperation_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventDisplaceNodesPosition_Parms*)Obj)->UseInverseOperation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_UseInverseOperation = { "UseInverseOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventDisplaceNodesPosition_Parms), &Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_UseInverseOperation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventDisplaceNodesPosition_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_SelectedNodesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_Displacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_UseY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_UseInverseOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09""Adds a amount to a node position. This allows to displace the nodes.\n\x09*\x09Useful for making nodes move with arrow keys.\n\x09*\x09Returns all positions vectors.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Adds a amount to a node position. This allows to displace the nodes.\nUseful for making nodes move with arrow keys.\nReturns all positions vectors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "DisplaceNodesPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::BaseQuestEditor_eventDisplaceNodesPosition_Parms), Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics
	{
		struct BaseQuestEditor_eventFixPreviousVersionData_Parms
		{
			FString MessageOut;
			bool ShowChangelogOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageOut;
		static void NewProp_ShowChangelogOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowChangelogOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::NewProp_MessageOut = { "MessageOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventFixPreviousVersionData_Parms, MessageOut), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::NewProp_ShowChangelogOut_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventFixPreviousVersionData_Parms*)Obj)->ShowChangelogOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::NewProp_ShowChangelogOut = { "ShowChangelogOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventFixPreviousVersionData_Parms), &Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::NewProp_ShowChangelogOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventFixPreviousVersionData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventFixPreviousVersionData_Parms), &Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::NewProp_MessageOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::NewProp_ShowChangelogOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09""Fixes all datatables saved with update data for current version.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Fixes all datatables saved with update data for current version." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "FixPreviousVersionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::BaseQuestEditor_eventFixPreviousVersionData_Parms), Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics
	{
		struct BaseQuestEditor_eventGetCurrentTalkModeInfo_Parms
		{
			FQuest QuestIn;
			FQuestTalkTaskEditorInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::NewProp_QuestIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetCurrentTalkModeInfo_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::NewProp_QuestIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::NewProp_QuestIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetCurrentTalkModeInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo, METADATA_PARAMS(nullptr, 0) }; // 1054139793
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Settings" },
		{ "Comment", "/**\n\x09*\x09Gets the current talk mode for the quest editor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Gets the current talk mode for the quest editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "GetCurrentTalkModeInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::BaseQuestEditor_eventGetCurrentTalkModeInfo_Parms), Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics
	{
		struct BaseQuestEditor_eventGetDefaultTalkModeInfo_Parms
		{
			bool FoundModeOut;
			FQuestTalkTaskEditorInfo ReturnValue;
		};
		static void NewProp_FoundModeOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FoundModeOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::NewProp_FoundModeOut_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventGetDefaultTalkModeInfo_Parms*)Obj)->FoundModeOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::NewProp_FoundModeOut = { "FoundModeOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventGetDefaultTalkModeInfo_Parms), &Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::NewProp_FoundModeOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetDefaultTalkModeInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTalkTaskEditorInfo, METADATA_PARAMS(nullptr, 0) }; // 1054139793
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::NewProp_FoundModeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Settings" },
		{ "Comment", "/**\n\x09*\x09Gets the current default talk mode for the quest editor.\n\x09*\x09This can be set in the project settings.\n\x09*\x09If the mode set in settings is invalid, this will return a null struct.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Gets the current default talk mode for the quest editor.\nThis can be set in the project settings.\nIf the mode set in settings is invalid, this will return a null struct." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "GetDefaultTalkModeInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::BaseQuestEditor_eventGetDefaultTalkModeInfo_Parms), Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics
	{
		struct BaseQuestEditor_eventGetEditorAutosaveFreq_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetEditorAutosaveFreq_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Settings" },
		{ "Comment", "/**\n\x09*\x09Gets the editor autosave frequency.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Gets the editor autosave frequency." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "GetEditorAutosaveFreq", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::BaseQuestEditor_eventGetEditorAutosaveFreq_Parms), Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics
	{
		struct BaseQuestEditor_eventGetEditorGridSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetEditorGridSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Settings" },
		{ "Comment", "/**\n\x09*\x09Gets the editor grid size.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Gets the editor grid size." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "GetEditorGridSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::BaseQuestEditor_eventGetEditorGridSize_Parms), Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics
	{
		struct BaseQuestEditor_eventGetQENPCSelector_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetQENPCSelector_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Settings" },
		{ "Comment", "/**\n\x09*\x09Gets the current selector for the editor for tasks.\n\x09*\x09This can be set in the config file.\n\x09*\x09Used to created Quest Editor UI.\n\x09*\x09If is not set correctly, will use default instead.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Gets the current selector for the editor for tasks.\nThis can be set in the config file.\nUsed to created Quest Editor UI.\nIf is not set correctly, will use default instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "GetQENPCSelector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::BaseQuestEditor_eventGetQENPCSelector_Parms), Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics
	{
		struct BaseQuestEditor_eventGetQEQuestSelector_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetQEQuestSelector_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Settings" },
		{ "Comment", "/**\n\x09*\x09Gets the current selector for the editor for Quests.\n\x09*\x09This can be set in the config file.\n\x09*\x09Used to created Quest Editor UI.\n\x09*\x09If is not set correctly, will use default instead.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Gets the current selector for the editor for Quests.\nThis can be set in the config file.\nUsed to created Quest Editor UI.\nIf is not set correctly, will use default instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "GetQEQuestSelector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::BaseQuestEditor_eventGetQEQuestSelector_Parms), Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics
	{
		struct BaseQuestEditor_eventGetQETaskSelector_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetQETaskSelector_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Settings" },
		{ "Comment", "/**\n\x09*\x09Gets the current selector for the editor for tasks.\n\x09*\x09This can be set in the config file.\n\x09*\x09Used to created Quest Editor UI.\n\x09*\x09If is not set correctly, will use default instead.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Gets the current selector for the editor for tasks.\nThis can be set in the config file.\nUsed to created Quest Editor UI.\nIf is not set correctly, will use default instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "GetQETaskSelector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::BaseQuestEditor_eventGetQETaskSelector_Parms), Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct BaseQuestEditor_eventGetSelectorFromClass_Parms
		{
			FSoftClassPath ClassSelected;
			FSoftClassPath DefaultSelector;
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassSelected;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSelector;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::NewProp_ClassSelected = { "ClassSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetSelectorFromClass_Parms, ClassSelected), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::NewProp_DefaultSelector = { "DefaultSelector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetSelectorFromClass_Parms, DefaultSelector), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventGetSelectorFromClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::NewProp_ClassSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::NewProp_DefaultSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09Gets the current selector for the editor for tasks for any class.\n\x09*\x09In case of fail load, must provide a default selector.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Gets the current selector for the editor for tasks for any class.\nIn case of fail load, must provide a default selector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "GetSelectorFromClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::BaseQuestEditor_eventGetSelectorFromClass_Parms), Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics
	{
		struct BaseQuestEditor_eventHandleCopyPasteNodes_Parms
		{
			FQuest QuestIn;
			FQuest QuestCopiedIn;
			TArray<FQuestTaskID> CopiedNodesIn;
			TArray<FVector2D> NodesWidgetSizeIn;
			FVector2D MousePastePositionIn;
			TArray<FQuestTaskID> PastedNodesOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestCopiedIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestCopiedIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CopiedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopiedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CopiedNodesIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesWidgetSizeIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesWidgetSizeIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodesWidgetSizeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MousePastePositionIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PastedNodesOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PastedNodesOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventHandleCopyPasteNodes_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_QuestCopiedIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_QuestCopiedIn = { "QuestCopiedIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventHandleCopyPasteNodes_Parms, QuestCopiedIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_QuestCopiedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_QuestCopiedIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_CopiedNodesIn_Inner = { "CopiedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_CopiedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_CopiedNodesIn = { "CopiedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventHandleCopyPasteNodes_Parms, CopiedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_CopiedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_CopiedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_NodesWidgetSizeIn_Inner = { "NodesWidgetSizeIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_NodesWidgetSizeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_NodesWidgetSizeIn = { "NodesWidgetSizeIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventHandleCopyPasteNodes_Parms, NodesWidgetSizeIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_NodesWidgetSizeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_NodesWidgetSizeIn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_MousePastePositionIn = { "MousePastePositionIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventHandleCopyPasteNodes_Parms, MousePastePositionIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_PastedNodesOut_Inner = { "PastedNodesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_PastedNodesOut = { "PastedNodesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventHandleCopyPasteNodes_Parms, PastedNodesOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_QuestCopiedIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_CopiedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_CopiedNodesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_NodesWidgetSizeIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_NodesWidgetSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_MousePastePositionIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_PastedNodesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::NewProp_PastedNodesOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Handles all the operation for copy pasting nodes inside the Quest Editor.\n\x09*\x09@PARAM QuestIn Quest to modify in Editor.\n\x09*\x09@PARAM QuestCopiedIn Quest at the moment of copying the nodes. Used to mantain the state of the quest from when the nodes where copied and not the possible modified current state.\n\x09*\x09@PARAM CopiedNodesIn Nodes selected at the moment of copy.\n\x09*\x09@PARAM MousePastePositionIn Mouse position when pasting nodes.\n\x09*\x09@PARAM PastedNodesOut New nodes IDS added to the quest as result of the paste operation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Handles all the operation for copy pasting nodes inside the Quest Editor.\n@PARAM QuestIn Quest to modify in Editor.\n@PARAM QuestCopiedIn Quest at the moment of copying the nodes. Used to mantain the state of the quest from when the nodes where copied and not the possible modified current state.\n@PARAM CopiedNodesIn Nodes selected at the moment of copy.\n@PARAM MousePastePositionIn Mouse position when pasting nodes.\n@PARAM PastedNodesOut New nodes IDS added to the quest as result of the paste operation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "HandleCopyPasteNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::BaseQuestEditor_eventHandleCopyPasteNodes_Parms), Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C82401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics
	{
		struct BaseQuestEditor_eventQEditorSave_GetSavegame_Parms
		{
			bool FoundSaveOut;
			UQuestEditorSaveGame* ReturnValue;
		};
		static void NewProp_FoundSaveOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FoundSaveOut;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::NewProp_FoundSaveOut_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventQEditorSave_GetSavegame_Parms*)Obj)->FoundSaveOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::NewProp_FoundSaveOut = { "FoundSaveOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventQEditorSave_GetSavegame_Parms), &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::NewProp_FoundSaveOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetSavegame_Parms, ReturnValue), Z_Construct_UClass_UQuestEditorSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::NewProp_FoundSaveOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-SaveGame" },
		{ "Comment", "/*Get savegame object for quest editor*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Get savegame object for quest editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "QEditorSave_GetSavegame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::BaseQuestEditor_eventQEditorSave_GetSavegame_Parms), Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics
	{
		struct BaseQuestEditor_eventQEditorSave_GetVariables_Parms
		{
			EQuestEditor_EditMode CurrentEditorModeOut;
			int32 UndoQuestIndexSavedOut;
			int32 UndoDialogIndexSavedOut;
			float ViewportScaleSavedOut;
			TArray<FQuest> PreviousQuestsOut;
			TArray<FQuest> UndoHistoryQuestsOut;
			TArray<FQuest> PreviousDialogsOut;
			TArray<FQuest> UndoHistoryDialogsOut;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentEditorModeOut_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentEditorModeOut;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UndoQuestIndexSavedOut;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UndoDialogIndexSavedOut;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewportScaleSavedOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousQuestsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousQuestsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndoHistoryQuestsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UndoHistoryQuestsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousDialogsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousDialogsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndoHistoryDialogsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UndoHistoryDialogsOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_CurrentEditorModeOut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_CurrentEditorModeOut = { "CurrentEditorModeOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Parms, CurrentEditorModeOut), Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode, METADATA_PARAMS(nullptr, 0) }; // 3075556338
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoQuestIndexSavedOut = { "UndoQuestIndexSavedOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Parms, UndoQuestIndexSavedOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoDialogIndexSavedOut = { "UndoDialogIndexSavedOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Parms, UndoDialogIndexSavedOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_ViewportScaleSavedOut = { "ViewportScaleSavedOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Parms, ViewportScaleSavedOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_PreviousQuestsOut_Inner = { "PreviousQuestsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_PreviousQuestsOut = { "PreviousQuestsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Parms, PreviousQuestsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoHistoryQuestsOut_Inner = { "UndoHistoryQuestsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoHistoryQuestsOut = { "UndoHistoryQuestsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Parms, UndoHistoryQuestsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_PreviousDialogsOut_Inner = { "PreviousDialogsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_PreviousDialogsOut = { "PreviousDialogsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Parms, PreviousDialogsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoHistoryDialogsOut_Inner = { "UndoHistoryDialogsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoHistoryDialogsOut = { "UndoHistoryDialogsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Parms, UndoHistoryDialogsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_CurrentEditorModeOut_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_CurrentEditorModeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoQuestIndexSavedOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoDialogIndexSavedOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_ViewportScaleSavedOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_PreviousQuestsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_PreviousQuestsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoHistoryQuestsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoHistoryQuestsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_PreviousDialogsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_PreviousDialogsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoHistoryDialogsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::NewProp_UndoHistoryDialogsOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-SaveGame" },
		{ "Comment", "/*Get all variables from the savegame object for the quest editor*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Get all variables from the savegame object for the quest editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "QEditorSave_GetVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::BaseQuestEditor_eventQEditorSave_GetVariables_Parms), Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics
	{
		struct BaseQuestEditor_eventQEditorSave_GetVariables_Misc_Parms
		{
			EQuestEditor_EditMode CurrentEditorModeOut;
			float ViewportScaleSavedOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentEditorModeOut_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentEditorModeOut;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewportScaleSavedOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::NewProp_CurrentEditorModeOut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::NewProp_CurrentEditorModeOut = { "CurrentEditorModeOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Misc_Parms, CurrentEditorModeOut), Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode, METADATA_PARAMS(nullptr, 0) }; // 3075556338
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::NewProp_ViewportScaleSavedOut = { "ViewportScaleSavedOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Misc_Parms, ViewportScaleSavedOut), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventQEditorSave_GetVariables_Misc_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventQEditorSave_GetVariables_Misc_Parms), &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::NewProp_CurrentEditorModeOut_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::NewProp_CurrentEditorModeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::NewProp_ViewportScaleSavedOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-SaveGame" },
		{ "Comment", "/**\n\x09*\x09Get misc variables from the savegame object for the quest editor.\n\x09*\x09Returns wether or not the savegame was found.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Get misc variables from the savegame object for the quest editor.\nReturns wether or not the savegame was found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "QEditorSave_GetVariables_Misc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::BaseQuestEditor_eventQEditorSave_GetVariables_Misc_Parms), Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics
	{
		struct BaseQuestEditor_eventQEditorSave_GetVariables_Primary_Parms
		{
			TArray<FQuest> PreviousQuestsOut;
			TArray<FQuest> PreviousDialogsOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousQuestsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousQuestsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousDialogsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousDialogsOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_PreviousQuestsOut_Inner = { "PreviousQuestsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_PreviousQuestsOut = { "PreviousQuestsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Primary_Parms, PreviousQuestsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_PreviousDialogsOut_Inner = { "PreviousDialogsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_PreviousDialogsOut = { "PreviousDialogsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Primary_Parms, PreviousDialogsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	void Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventQEditorSave_GetVariables_Primary_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventQEditorSave_GetVariables_Primary_Parms), &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_PreviousQuestsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_PreviousQuestsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_PreviousDialogsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_PreviousDialogsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-SaveGame" },
		{ "Comment", "/**\n\x09*\x09Get quests and dialogs arrays from the savegame object for the quest editor.\n\x09*\x09Returns wether or not the savegame was found.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Get quests and dialogs arrays from the savegame object for the quest editor.\nReturns wether or not the savegame was found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "QEditorSave_GetVariables_Primary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::BaseQuestEditor_eventQEditorSave_GetVariables_Primary_Parms), Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics
	{
		struct BaseQuestEditor_eventQEditorSave_GetVariables_Undo_Parms
		{
			int32 UndoQuestIndexSavedOut;
			int32 UndoDialogIndexSavedOut;
			TArray<FQuest> UndoHistoryQuestsOut;
			TArray<FQuest> UndoHistoryDialogsOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UndoQuestIndexSavedOut;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UndoDialogIndexSavedOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndoHistoryQuestsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UndoHistoryQuestsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndoHistoryDialogsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UndoHistoryDialogsOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoQuestIndexSavedOut = { "UndoQuestIndexSavedOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Undo_Parms, UndoQuestIndexSavedOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoDialogIndexSavedOut = { "UndoDialogIndexSavedOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Undo_Parms, UndoDialogIndexSavedOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoHistoryQuestsOut_Inner = { "UndoHistoryQuestsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoHistoryQuestsOut = { "UndoHistoryQuestsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Undo_Parms, UndoHistoryQuestsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoHistoryDialogsOut_Inner = { "UndoHistoryDialogsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoHistoryDialogsOut = { "UndoHistoryDialogsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_GetVariables_Undo_Parms, UndoHistoryDialogsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	void Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventQEditorSave_GetVariables_Undo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventQEditorSave_GetVariables_Undo_Parms), &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoQuestIndexSavedOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoDialogIndexSavedOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoHistoryQuestsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoHistoryQuestsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoHistoryDialogsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_UndoHistoryDialogsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-SaveGame" },
		{ "Comment", "/**\n\x09*\x09Get quests and dialogs arrays from the savegame object for the quest editor.\n\x09*\x09Returns wether or not the savegame was found.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Get quests and dialogs arrays from the savegame object for the quest editor.\nReturns wether or not the savegame was found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "QEditorSave_GetVariables_Undo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::BaseQuestEditor_eventQEditorSave_GetVariables_Undo_Parms), Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics
	{
		struct BaseQuestEditor_eventQEditorSave_SaveVariables_Parms
		{
			bool MantainPrevDialogsIn;
			bool MantainPrevQuestsIn;
			EQuestEditor_EditMode CurrentEditorModeIn;
			int32 UndoQuestIndexSavedIn;
			int32 UndoDialogIndexSavedIn;
			float ViewportScaleSavedIn;
			TArray<FQuest> PreviousQuestsIn;
			TArray<FQuest> UndoHistoryQuestsIn;
			TArray<FQuest> PreviousDialogsIn;
			TArray<FQuest> UndoHistoryDialogsIn;
		};
		static void NewProp_MantainPrevDialogsIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MantainPrevDialogsIn;
		static void NewProp_MantainPrevQuestsIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MantainPrevQuestsIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentEditorModeIn_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentEditorModeIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UndoQuestIndexSavedIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UndoDialogIndexSavedIn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewportScaleSavedIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousQuestsIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousQuestsIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousQuestsIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndoHistoryQuestsIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndoHistoryQuestsIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UndoHistoryQuestsIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousDialogsIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousDialogsIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousDialogsIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndoHistoryDialogsIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndoHistoryDialogsIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UndoHistoryDialogsIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_MantainPrevDialogsIn_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventQEditorSave_SaveVariables_Parms*)Obj)->MantainPrevDialogsIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_MantainPrevDialogsIn = { "MantainPrevDialogsIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventQEditorSave_SaveVariables_Parms), &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_MantainPrevDialogsIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_MantainPrevQuestsIn_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventQEditorSave_SaveVariables_Parms*)Obj)->MantainPrevQuestsIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_MantainPrevQuestsIn = { "MantainPrevQuestsIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventQEditorSave_SaveVariables_Parms), &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_MantainPrevQuestsIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_CurrentEditorModeIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_CurrentEditorModeIn = { "CurrentEditorModeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_SaveVariables_Parms, CurrentEditorModeIn), Z_Construct_UEnum_QuestEditorDev_EQuestEditor_EditMode, METADATA_PARAMS(nullptr, 0) }; // 3075556338
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoQuestIndexSavedIn = { "UndoQuestIndexSavedIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_SaveVariables_Parms, UndoQuestIndexSavedIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoDialogIndexSavedIn = { "UndoDialogIndexSavedIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_SaveVariables_Parms, UndoDialogIndexSavedIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_ViewportScaleSavedIn = { "ViewportScaleSavedIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_SaveVariables_Parms, ViewportScaleSavedIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousQuestsIn_Inner = { "PreviousQuestsIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousQuestsIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousQuestsIn = { "PreviousQuestsIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_SaveVariables_Parms, PreviousQuestsIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousQuestsIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousQuestsIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryQuestsIn_Inner = { "UndoHistoryQuestsIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryQuestsIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryQuestsIn = { "UndoHistoryQuestsIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_SaveVariables_Parms, UndoHistoryQuestsIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryQuestsIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryQuestsIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousDialogsIn_Inner = { "PreviousDialogsIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousDialogsIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousDialogsIn = { "PreviousDialogsIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_SaveVariables_Parms, PreviousDialogsIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousDialogsIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousDialogsIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryDialogsIn_Inner = { "UndoHistoryDialogsIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryDialogsIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryDialogsIn = { "UndoHistoryDialogsIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventQEditorSave_SaveVariables_Parms, UndoHistoryDialogsIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryDialogsIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryDialogsIn_MetaData)) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_MantainPrevDialogsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_MantainPrevQuestsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_CurrentEditorModeIn_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_CurrentEditorModeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoQuestIndexSavedIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoDialogIndexSavedIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_ViewportScaleSavedIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousQuestsIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousQuestsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryQuestsIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryQuestsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousDialogsIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_PreviousDialogsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryDialogsIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::NewProp_UndoHistoryDialogsIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-SaveGame" },
		{ "Comment", "/*Save all variables into a savegame object for the quest editor*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Save all variables into a savegame object for the quest editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "QEditorSave_SaveVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::BaseQuestEditor_eventQEditorSave_SaveVariables_Parms), Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics
	{
		struct BaseQuestEditor_eventRemoveSelectedNodesConnections_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventRemoveSelectedNodesConnections_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventRemoveSelectedNodesConnections_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::NewProp_SelectedNodesIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Removes all normal connections (not disabling ones) of selected nodes\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Removes all normal connections (not disabling ones) of selected nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "RemoveSelectedNodesConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::BaseQuestEditor_eventRemoveSelectedNodesConnections_Parms), Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics
	{
		struct BaseQuestEditor_eventRemoveSelectedNodesDisableConnections_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventRemoveSelectedNodesDisableConnections_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventRemoveSelectedNodesDisableConnections_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::NewProp_SelectedNodesIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Removes all disable connections of selected nodes\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Removes all disable connections of selected nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "RemoveSelectedNodesDisableConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::BaseQuestEditor_eventRemoveSelectedNodesDisableConnections_Parms), Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_SetAllDatatablesOfQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_SetAllDatatablesOfQuest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09Sets all datatables array for further using in child widgets that have a reference to this class.\n\x09*\x09This ensures its only done once for performance reasons.\n\x09*\x09""Called on construct.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Sets all datatables array for further using in child widgets that have a reference to this class.\nThis ensures its only done once for performance reasons.\nCalled on construct." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_SetAllDatatablesOfQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "SetAllDatatablesOfQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_SetAllDatatablesOfQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_SetAllDatatablesOfQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_SetAllDatatablesOfQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_SetAllDatatablesOfQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics
	{
		struct BaseQuestEditor_eventShowNormalMessage_Parms
		{
			FString MessageIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::NewProp_MessageIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::NewProp_MessageIn = { "MessageIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventShowNormalMessage_Parms, MessageIn), METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::NewProp_MessageIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::NewProp_MessageIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::NewProp_MessageIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Messages" },
		{ "Comment", "/**\n\x09*\x09""Calls delegate to show message with normal color.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Calls delegate to show message with normal color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "ShowNormalMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::BaseQuestEditor_eventShowNormalMessage_Parms), Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics
	{
		struct BaseQuestEditor_eventShowWarnningMessage_Parms
		{
			FString MessageIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::NewProp_MessageIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::NewProp_MessageIn = { "MessageIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventShowWarnningMessage_Parms, MessageIn), METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::NewProp_MessageIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::NewProp_MessageIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::NewProp_MessageIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Messages" },
		{ "Comment", "/**\n\x09*\x09""Calls delegate to show message with warnning color.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Calls delegate to show message with warnning color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "ShowWarnningMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::BaseQuestEditor_eventShowWarnningMessage_Parms), Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics
	{
		struct BaseQuestEditor_eventSwapNodeConnectionsAndPrintErrors_Parms
		{
			FQuest QuestIn;
			FQuestTaskID NodeA;
			FQuestTaskID NodeB;
			ENodeConnectorType ConnectorIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeB;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectorIn_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectorIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventSwapNodeConnectionsAndPrintErrors_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_NodeA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_NodeA = { "NodeA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventSwapNodeConnectionsAndPrintErrors_Parms, NodeA), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_NodeA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_NodeA_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_NodeB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_NodeB = { "NodeB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventSwapNodeConnectionsAndPrintErrors_Parms, NodeB), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_NodeB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_NodeB_MetaData)) }; // 3578582651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_ConnectorIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_ConnectorIn = { "ConnectorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventSwapNodeConnectionsAndPrintErrors_Parms, ConnectorIn), Z_Construct_UEnum_QuestEditor_ENodeConnectorType, METADATA_PARAMS(nullptr, 0) }; // 2123307039
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_NodeA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_NodeB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_ConnectorIn_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::NewProp_ConnectorIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Swaps all connections of NodeA with NodeB.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Swaps all connections of NodeA with NodeB." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "SwapNodeConnectionsAndPrintErrors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::BaseQuestEditor_eventSwapNodeConnectionsAndPrintErrors_Parms), Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics
	{
		struct BaseQuestEditor_eventToggleSelectedNodesConnectionsType_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> SelectedNodesIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNodesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodesIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventToggleSelectedNodesConnectionsType_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::NewProp_SelectedNodesIn_Inner = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::NewProp_SelectedNodesIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::NewProp_SelectedNodesIn = { "SelectedNodesIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventToggleSelectedNodesConnectionsType_Parms, SelectedNodesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::NewProp_SelectedNodesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::NewProp_SelectedNodesIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::NewProp_SelectedNodesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::NewProp_SelectedNodesIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/**\n\x09*\x09Toggles all selected nodes connection type\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Toggles all selected nodes connection type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "ToggleSelectedNodesConnectionsType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::BaseQuestEditor_eventToggleSelectedNodesConnectionsType_Parms), Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics
	{
		struct BaseQuestEditor_eventUpdateInverseActivateCond_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			bool InverseCondIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static void NewProp_InverseCondIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InverseCondIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateInverseActivateCond_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateInverseActivateCond_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	void Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_InverseCondIn_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventUpdateInverseActivateCond_Parms*)Obj)->InverseCondIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_InverseCondIn = { "InverseCondIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventUpdateInverseActivateCond_Parms), &Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_InverseCondIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateInverseActivateCond_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateInverseActivateCond_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_InverseCondIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateInverseActivateCond", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::BaseQuestEditor_eventUpdateInverseActivateCond_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics
	{
		struct BaseQuestEditor_eventUpdateNodeQEPosition_Parms
		{
			FQuest QuestIn;
			FQuestTaskID TaskID;
			FVector2D NewPositionIn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPositionIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateNodeQEPosition_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::NewProp_TaskID = { "TaskID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateNodeQEPosition_Parms, TaskID), Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::NewProp_NewPositionIn = { "NewPositionIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateNodeQEPosition_Parms, NewPositionIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestEditor_eventUpdateNodeQEPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestEditor_eventUpdateNodeQEPosition_Parms), &Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::NewProp_TaskID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::NewProp_NewPositionIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Node" },
		{ "Comment", "/*Update Quest editor position in struct. This is the position where the node is placed in the editor.*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Update Quest editor position in struct. This is the position where the node is placed in the editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateNodeQEPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::BaseQuestEditor_eventUpdateNodeQEPosition_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C82401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics
	{
		struct BaseQuestEditor_eventUpdateTalkTaskCustomPayloadData_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TalkTasksIn;
			FString CustomPaylodDataIn;
			TArray<FQuestTaskID> TalkTaskIDsOut;
			TArray<FQuestTalkTask> TalkTasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomPaylodDataIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskCustomPayloadData_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksIn_Inner = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksIn = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskCustomPayloadData_Parms, TalkTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_CustomPaylodDataIn = { "CustomPaylodDataIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskCustomPayloadData_Parms, CustomPaylodDataIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTaskIDsOut_Inner = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTaskIDsOut = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskCustomPayloadData_Parms, TalkTaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksOut_Inner = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksOut = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskCustomPayloadData_Parms, TalkTasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_CustomPaylodDataIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::NewProp_TalkTasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-TalkTask" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTalkTaskCustomPayloadData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::BaseQuestEditor_eventUpdateTalkTaskCustomPayloadData_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics
	{
		struct BaseQuestEditor_eventUpdateTalkTaskNPC_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TalkTasksIn;
			FNPCQuestDefRep NPCDefIn;
			TArray<FQuestTaskID> TalkTaskIDsOut;
			TArray<FQuestTalkTask> TalkTasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCDefIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCDefIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPC_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksIn_Inner = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksIn = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPC_Parms, TalkTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksIn_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_NPCDefIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_NPCDefIn = { "NPCDefIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPC_Parms, NPCDefIn), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_NPCDefIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_NPCDefIn_MetaData)) }; // 3466971976
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTaskIDsOut_Inner = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTaskIDsOut = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPC_Parms, TalkTaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksOut_Inner = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksOut = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPC_Parms, TalkTasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_NPCDefIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::NewProp_TalkTasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-TalkTask" },
		{ "Comment", "//---------------------------------------------Editor Updating\n//--------------------Quest talk task\n" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "---------------------------------------------Editor Updating\n--------------------Quest talk task" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTalkTaskNPC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::BaseQuestEditor_eventUpdateTalkTaskNPC_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics
	{
		struct BaseQuestEditor_eventUpdateTalkTaskNPCCue_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TalkTasksIn;
			TSoftObjectPtr<USoundCue> NpcCue;
			TArray<FQuestTaskID> TalkTaskIDsOut;
			TArray<FQuestTalkTask> TalkTasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NpcCue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPCCue_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksIn_Inner = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksIn = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPCCue_Parms, TalkTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_NpcCue = { "NpcCue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPCCue_Parms, NpcCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTaskIDsOut_Inner = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTaskIDsOut = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPCCue_Parms, TalkTaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksOut_Inner = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksOut = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPCCue_Parms, TalkTasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_NpcCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::NewProp_TalkTasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-TalkTask" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTalkTaskNPCCue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::BaseQuestEditor_eventUpdateTalkTaskNPCCue_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics
	{
		struct BaseQuestEditor_eventUpdateTalkTaskNPCResponse_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TalkTasksIn;
			FText NpcResponse;
			TArray<FQuestTaskID> TalkTaskIDsOut;
			TArray<FQuestTalkTask> TalkTasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksIn;
		static const UECodeGen_Private::FTextPropertyParams NewProp_NpcResponse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPCResponse_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksIn_Inner = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksIn = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPCResponse_Parms, TalkTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_NpcResponse = { "NpcResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPCResponse_Parms, NpcResponse), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTaskIDsOut_Inner = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTaskIDsOut = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPCResponse_Parms, TalkTaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksOut_Inner = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksOut = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskNPCResponse_Parms, TalkTasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_NpcResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::NewProp_TalkTasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-TalkTask" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTalkTaskNPCResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::BaseQuestEditor_eventUpdateTalkTaskNPCResponse_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics
	{
		struct BaseQuestEditor_eventUpdateTalkTaskPlayerCue_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TalkTasksIn;
			TSoftObjectPtr<USoundCue> PlayerCue;
			TArray<FQuestTaskID> TalkTaskIDsOut;
			TArray<FQuestTalkTask> TalkTasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksIn;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlayerCue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskPlayerCue_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksIn_Inner = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksIn = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskPlayerCue_Parms, TalkTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_PlayerCue = { "PlayerCue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskPlayerCue_Parms, PlayerCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTaskIDsOut_Inner = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTaskIDsOut = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskPlayerCue_Parms, TalkTaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksOut_Inner = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksOut = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskPlayerCue_Parms, TalkTasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_PlayerCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::NewProp_TalkTasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-TalkTask" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTalkTaskPlayerCue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::BaseQuestEditor_eventUpdateTalkTaskPlayerCue_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics
	{
		struct BaseQuestEditor_eventUpdateTalkTaskShortDesc_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TalkTasksIn;
			FText ShortDescIn;
			TArray<FQuestTaskID> TalkTaskIDsOut;
			TArray<FQuestTalkTask> TalkTasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksIn;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ShortDescIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskShortDesc_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksIn_Inner = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksIn = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskShortDesc_Parms, TalkTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_ShortDescIn = { "ShortDescIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskShortDesc_Parms, ShortDescIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTaskIDsOut_Inner = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTaskIDsOut = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskShortDesc_Parms, TalkTaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksOut_Inner = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksOut = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskShortDesc_Parms, TalkTasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_ShortDescIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::NewProp_TalkTasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-TalkTask" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTalkTaskShortDesc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::BaseQuestEditor_eventUpdateTalkTaskShortDesc_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics
	{
		struct BaseQuestEditor_eventUpdateTalkTaskYouSay_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TalkTasksIn;
			FText YouSay;
			TArray<FQuestTaskID> TalkTaskIDsOut;
			TArray<FQuestTalkTask> TalkTasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YouSay_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_YouSay;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskYouSay_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksIn_Inner = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksIn = { "TalkTasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskYouSay_Parms, TalkTasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksIn_MetaData)) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_YouSay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_YouSay = { "YouSay", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskYouSay_Parms, YouSay), METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_YouSay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_YouSay_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTaskIDsOut_Inner = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTaskIDsOut = { "TalkTaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskYouSay_Parms, TalkTaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksOut_Inner = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksOut = { "TalkTasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTalkTaskYouSay_Parms, TalkTasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1604935902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_YouSay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::NewProp_TalkTasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-TalkTask" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTalkTaskYouSay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::BaseQuestEditor_eventUpdateTalkTaskYouSay_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskAmountInv_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			float AmountIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskAmountInv_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskAmountInv_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_AmountIn = { "AmountIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskAmountInv_Parms, AmountIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskAmountInv_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskAmountInv_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_AmountIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskAmountInv", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::BaseQuestEditor_eventUpdateTaskAmountInv_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskClass_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			TSoftClassPtr<UObject>  ClassIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ClassIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskClass_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskClass_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_ClassIn = { "ClassIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskClass_Parms, ClassIn), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskClass_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskClass_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_ClassIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::BaseQuestEditor_eventUpdateTaskClass_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskCustomPayload_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			int32 PayloadSlotIn;
			FString PayloadDataIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PayloadSlotIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadDataIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskCustomPayload_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskCustomPayload_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_PayloadSlotIn = { "PayloadSlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskCustomPayload_Parms, PayloadSlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_PayloadDataIn = { "PayloadDataIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskCustomPayload_Parms, PayloadDataIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskCustomPayload_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskCustomPayload_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_PayloadSlotIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_PayloadDataIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskCustomPayload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::BaseQuestEditor_eventUpdateTaskCustomPayload_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskName2Inv_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			FString NameIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskName2Inv_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskName2Inv_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_NameIn = { "NameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskName2Inv_Parms, NameIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskName2Inv_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskName2Inv_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_NameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskName2Inv", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::BaseQuestEditor_eventUpdateTaskName2Inv_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskNameInv_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			FString NameIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskNameInv_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskNameInv_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_NameIn = { "NameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskNameInv_Parms, NameIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskNameInv_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskNameInv_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_NameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "Comment", "//--------------------Quest Task\n" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "--------------------Quest Task" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskNameInv", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::BaseQuestEditor_eventUpdateTaskNameInv_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskPayload_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			FQuestTaskPayload PayloadIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskPayload_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskPayload_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskPayload_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(nullptr, 0) }; // 4258527549
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskPayload_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskPayload_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskPayload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::BaseQuestEditor_eventUpdateTaskPayload_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskShortDesc_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			FText ShortDescIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ShortDescIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskShortDesc_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskShortDesc_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_ShortDescIn = { "ShortDescIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskShortDesc_Parms, ShortDescIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskShortDesc_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskShortDesc_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_ShortDescIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskShortDesc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::BaseQuestEditor_eventUpdateTaskShortDesc_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskSoftClass_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			TSoftClassPtr<UBaseQuestTask>  TaskClassIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TaskClassIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskSoftClass_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskSoftClass_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TaskClassIn = { "TaskClassIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskSoftClass_Parms, TaskClassIn), Z_Construct_UClass_UBaseQuestTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskSoftClass_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskSoftClass_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TaskClassIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskSoftClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::BaseQuestEditor_eventUpdateTaskSoftClass_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskTagsIgnored_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			FGameplayTagContainer TagsIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagsIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTagsIgnored_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTagsIgnored_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TagsIn = { "TagsIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTagsIgnored_Parms, TagsIn), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTagsIgnored_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTagsIgnored_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TagsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskTagsIgnored", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::BaseQuestEditor_eventUpdateTaskTagsIgnored_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskTagsRequired_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			FGameplayTagContainer TagsIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagsIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTagsRequired_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTagsRequired_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TagsIn = { "TagsIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTagsRequired_Parms, TagsIn), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTagsRequired_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTagsRequired_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TagsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskTagsRequired", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::BaseQuestEditor_eventUpdateTaskTagsRequired_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskTimesToCheck_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			int32 TimesIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimesIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTimesToCheck_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTimesToCheck_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TimesIn = { "TimesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTimesToCheck_Parms, TimesIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTimesToCheck_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskTimesToCheck_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TimesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskTimesToCheck", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::BaseQuestEditor_eventUpdateTaskTimesToCheck_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics
	{
		struct BaseQuestEditor_eventUpdateTaskVector_Parms
		{
			FQuest QuestIn;
			TArray<FQuestTaskID> TasksIn;
			FVector VectorIn;
			TArray<FQuestTaskID> TaskIDsOut;
			TArray<FQuestTask> TasksOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskIDsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIDsOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_QuestIn = { "QuestIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskVector_Parms, QuestIn), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksIn_Inner = { "TasksIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksIn = { "TasksIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskVector_Parms, TasksIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksIn_MetaData)) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_VectorIn = { "VectorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskVector_Parms, VectorIn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TaskIDsOut_Inner = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTaskID, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TaskIDsOut = { "TaskIDsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskVector_Parms, TaskIDsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3578582651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksOut_Inner = { "TasksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksOut = { "TasksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestEditor_eventUpdateTaskVector_Parms, TasksOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_QuestIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_VectorIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TaskIDsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TaskIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::NewProp_TasksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestEditor-Task" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestEditor, nullptr, "UpdateTaskVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::BaseQuestEditor_eventUpdateTaskVector_Parms), Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseQuestEditor);
	UClass* Z_Construct_UClass_UBaseQuestEditor_NoRegister()
	{
		return UBaseQuestEditor::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuestEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HideTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_HideTooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowTooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowChangelog_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowChangelog;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDatatables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestDatatables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestDatatables;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogDatatables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogDatatables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogDatatables;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCDatatables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCDatatables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCDatatables;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskInfoDatatables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskInfoDatatables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskInfoDatatables;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TalkTaskInfoDatatables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTaskInfoDatatables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TalkTaskInfoDatatables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorNormalMessageColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorNormalMessageColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorWarnningMessageColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorWarnningMessageColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuestEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseQuestEditor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToEvenDistribution, "AlignNodesToEvenDistribution" }, // 1401882454
		{ &Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToGrid, "AlignNodesToGrid" }, // 1328101868
		{ &Z_Construct_UFunction_UBaseQuestEditor_AlignNodesToSides, "AlignNodesToSides" }, // 3002736864
		{ &Z_Construct_UFunction_UBaseQuestEditor_AppendDatatablesOfQuestForOneFolderPath, "AppendDatatablesOfQuestForOneFolderPath" }, // 4279542228
		{ &Z_Construct_UFunction_UBaseQuestEditor_ChangeDTsType, "ChangeDTsType" }, // 1936746135
		{ &Z_Construct_UFunction_UBaseQuestEditor_ClearNPCForAllTalkTasks, "ClearNPCForAllTalkTasks" }, // 3549375483
		{ &Z_Construct_UFunction_UBaseQuestEditor_ConnectNodes, "ConnectNodes" }, // 1420205083
		{ &Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesDisabling, "ConnectNodesDisabling" }, // 3935198494
		{ &Z_Construct_UFunction_UBaseQuestEditor_ConnectNodesGridLayout, "ConnectNodesGridLayout" }, // 2205705827
		{ &Z_Construct_UFunction_UBaseQuestEditor_DeleteQuestEditorSaveGame, "DeleteQuestEditorSaveGame" }, // 3605979583
		{ &Z_Construct_UFunction_UBaseQuestEditor_DisplaceNodesPosition, "DisplaceNodesPosition" }, // 3979356833
		{ &Z_Construct_UFunction_UBaseQuestEditor_FixPreviousVersionData, "FixPreviousVersionData" }, // 2179834500
		{ &Z_Construct_UFunction_UBaseQuestEditor_GetCurrentTalkModeInfo, "GetCurrentTalkModeInfo" }, // 2862551786
		{ &Z_Construct_UFunction_UBaseQuestEditor_GetDefaultTalkModeInfo, "GetDefaultTalkModeInfo" }, // 13959207
		{ &Z_Construct_UFunction_UBaseQuestEditor_GetEditorAutosaveFreq, "GetEditorAutosaveFreq" }, // 3310964021
		{ &Z_Construct_UFunction_UBaseQuestEditor_GetEditorGridSize, "GetEditorGridSize" }, // 3554465737
		{ &Z_Construct_UFunction_UBaseQuestEditor_GetQENPCSelector, "GetQENPCSelector" }, // 172725173
		{ &Z_Construct_UFunction_UBaseQuestEditor_GetQEQuestSelector, "GetQEQuestSelector" }, // 180353655
		{ &Z_Construct_UFunction_UBaseQuestEditor_GetQETaskSelector, "GetQETaskSelector" }, // 183017536
		{ &Z_Construct_UFunction_UBaseQuestEditor_GetSelectorFromClass, "GetSelectorFromClass" }, // 3082530119
		{ &Z_Construct_UFunction_UBaseQuestEditor_HandleCopyPasteNodes, "HandleCopyPasteNodes" }, // 397114749
		{ &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetSavegame, "QEditorSave_GetSavegame" }, // 1556301133
		{ &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables, "QEditorSave_GetVariables" }, // 1808770002
		{ &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Misc, "QEditorSave_GetVariables_Misc" }, // 2980136874
		{ &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Primary, "QEditorSave_GetVariables_Primary" }, // 2026272785
		{ &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_GetVariables_Undo, "QEditorSave_GetVariables_Undo" }, // 495339892
		{ &Z_Construct_UFunction_UBaseQuestEditor_QEditorSave_SaveVariables, "QEditorSave_SaveVariables" }, // 2418816192
		{ &Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesConnections, "RemoveSelectedNodesConnections" }, // 2125056217
		{ &Z_Construct_UFunction_UBaseQuestEditor_RemoveSelectedNodesDisableConnections, "RemoveSelectedNodesDisableConnections" }, // 4070544569
		{ &Z_Construct_UFunction_UBaseQuestEditor_SetAllDatatablesOfQuest, "SetAllDatatablesOfQuest" }, // 1709922490
		{ &Z_Construct_UFunction_UBaseQuestEditor_ShowNormalMessage, "ShowNormalMessage" }, // 2212001336
		{ &Z_Construct_UFunction_UBaseQuestEditor_ShowWarnningMessage, "ShowWarnningMessage" }, // 3043937885
		{ &Z_Construct_UFunction_UBaseQuestEditor_SwapNodeConnectionsAndPrintErrors, "SwapNodeConnectionsAndPrintErrors" }, // 691623824
		{ &Z_Construct_UFunction_UBaseQuestEditor_ToggleSelectedNodesConnectionsType, "ToggleSelectedNodesConnectionsType" }, // 1732763541
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateInverseActivateCond, "UpdateInverseActivateCond" }, // 1694886355
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateNodeQEPosition, "UpdateNodeQEPosition" }, // 1813778311
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskCustomPayloadData, "UpdateTalkTaskCustomPayloadData" }, // 3704303499
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPC, "UpdateTalkTaskNPC" }, // 351938293
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCCue, "UpdateTalkTaskNPCCue" }, // 1851580142
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskNPCResponse, "UpdateTalkTaskNPCResponse" }, // 465848932
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskPlayerCue, "UpdateTalkTaskPlayerCue" }, // 1550065296
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskShortDesc, "UpdateTalkTaskShortDesc" }, // 3779910495
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTalkTaskYouSay, "UpdateTalkTaskYouSay" }, // 2249512772
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskAmountInv, "UpdateTaskAmountInv" }, // 1991059347
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskClass, "UpdateTaskClass" }, // 2859121620
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskCustomPayload, "UpdateTaskCustomPayload" }, // 4209397042
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskName2Inv, "UpdateTaskName2Inv" }, // 1375594778
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskNameInv, "UpdateTaskNameInv" }, // 3843493150
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskPayload, "UpdateTaskPayload" }, // 2389119325
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskShortDesc, "UpdateTaskShortDesc" }, // 34145864
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskSoftClass, "UpdateTaskSoftClass" }, // 730114399
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsIgnored, "UpdateTaskTagsIgnored" }, // 2252740772
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTagsRequired, "UpdateTaskTagsRequired" }, // 4209645227
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskTimesToCheck, "UpdateTaskTimesToCheck" }, // 2017725502
		{ &Z_Construct_UFunction_UBaseQuestEditor_UpdateTaskVector, "UpdateTaskVector" }, // 1936158800
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestEditor/BaseQuestEditor.h" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_HideTooltip_MetaData[] = {
		{ "Category", "Tooltip" },
		{ "Comment", "/*Call tooltip event to hide tooltip on quest editor*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Call tooltip event to hide tooltip on quest editor" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_HideTooltip = { "HideTooltip", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, HideTooltip), Z_Construct_UDelegateFunction_QuestEditorDev_HideTooltip__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_HideTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_HideTooltip_MetaData)) }; // 708600910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowTooltip_MetaData[] = {
		{ "Category", "Tooltip" },
		{ "Comment", "/**\n\x09*\x09""Call tooltip event to show tooltip on quest editor\n\x09*\x09Payload is passed to update the tooltip widget.\n\x09*\x09""Class is passed for the tooltip content widget.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Call tooltip event to show tooltip on quest editor\nPayload is passed to update the tooltip widget.\nClass is passed for the tooltip content widget." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowTooltip = { "ShowTooltip", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, ShowTooltip), Z_Construct_UDelegateFunction_QuestEditorDev_ShowTooltip__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowTooltip_MetaData)) }; // 2442303505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowMessage_MetaData[] = {
		{ "Category", "Messages" },
		{ "Comment", "/**\n\x09*\x09""Call when want to show a message in ui.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Call when want to show a message in ui." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowMessage = { "ShowMessage", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, ShowMessage), Z_Construct_UDelegateFunction_QuestEditorDev_ShowMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowMessage_MetaData)) }; // 1501233008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowChangelog_MetaData[] = {
		{ "Category", "Messages" },
		{ "Comment", "/*Show the changelog inside the editor*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Show the changelog inside the editor" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowChangelog = { "ShowChangelog", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, ShowChangelog), Z_Construct_UDelegateFunction_QuestEditorDev_HideTooltip__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowChangelog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowChangelog_MetaData)) }; // 708600910
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_QuestDatatables_Inner = { "QuestDatatables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_QuestDatatables_MetaData[] = {
		{ "Category", "Quest Datatables" },
		{ "Comment", "/**\n\x09*\x09""All datatables of quest struct that are in the specified folder.\n\x09*\x09This are determined in editor begin play.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "All datatables of quest struct that are in the specified folder.\nThis are determined in editor begin play." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_QuestDatatables = { "QuestDatatables", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, QuestDatatables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_QuestDatatables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_QuestDatatables_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_DialogDatatables_Inner = { "DialogDatatables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_DialogDatatables_MetaData[] = {
		{ "Category", "Quest Datatables" },
		{ "Comment", "/**\n\x09*\x09""All datatables of dialog struct that are in the specified folder.\n\x09*\x09This are determined in editor begin play.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "All datatables of dialog struct that are in the specified folder.\nThis are determined in editor begin play." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_DialogDatatables = { "DialogDatatables", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, DialogDatatables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_DialogDatatables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_DialogDatatables_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_NPCDatatables_Inner = { "NPCDatatables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_NPCDatatables_MetaData[] = {
		{ "Category", "Quest Datatables" },
		{ "Comment", "/**\n\x09*\x09""All datatables of NPCQuestDef struct that are in the specified folder.\n\x09*\x09This are determined in editor begin play.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "All datatables of NPCQuestDef struct that are in the specified folder.\nThis are determined in editor begin play." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_NPCDatatables = { "NPCDatatables", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, NPCDatatables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_NPCDatatables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_NPCDatatables_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TaskInfoDatatables_Inner = { "TaskInfoDatatables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TaskInfoDatatables_MetaData[] = {
		{ "Category", "Quest Datatables" },
		{ "Comment", "/**\n\x09*\x09""All datatables of QuestTaskEditorInfo struct that are in the specified folder.\n\x09*\x09This are determined in editor begin play.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "All datatables of QuestTaskEditorInfo struct that are in the specified folder.\nThis are determined in editor begin play." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TaskInfoDatatables = { "TaskInfoDatatables", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, TaskInfoDatatables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TaskInfoDatatables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TaskInfoDatatables_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TalkTaskInfoDatatables_Inner = { "TalkTaskInfoDatatables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TalkTaskInfoDatatables_MetaData[] = {
		{ "Category", "Quest Datatables" },
		{ "Comment", "/**\n\x09*\x09""All datatables of QuestTalkTaskEditorInfo struct that are in the specified folder.\n\x09*\x09This are determined in editor begin play.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "All datatables of QuestTalkTaskEditorInfo struct that are in the specified folder.\nThis are determined in editor begin play." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TalkTaskInfoDatatables = { "TalkTaskInfoDatatables", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, TalkTaskInfoDatatables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TalkTaskInfoDatatables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TalkTaskInfoDatatables_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_EditorNormalMessageColor_MetaData[] = {
		{ "Category", "Messages" },
		{ "Comment", "/**\n\x09*\x09Standar color for normal messages in the editor\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Standar color for normal messages in the editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_EditorNormalMessageColor = { "EditorNormalMessageColor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, EditorNormalMessageColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_EditorNormalMessageColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_EditorNormalMessageColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_EditorWarnningMessageColor_MetaData[] = {
		{ "Category", "Messages" },
		{ "Comment", "/**\n\x09*\x09Standar color for warnning messages in the editor\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditor/BaseQuestEditor.h" },
		{ "ToolTip", "Standar color for warnning messages in the editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_EditorWarnningMessageColor = { "EditorWarnningMessageColor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestEditor, EditorWarnningMessageColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_EditorWarnningMessageColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_EditorWarnningMessageColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseQuestEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_HideTooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowTooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_ShowChangelog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_QuestDatatables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_QuestDatatables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_DialogDatatables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_DialogDatatables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_NPCDatatables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_NPCDatatables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TaskInfoDatatables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TaskInfoDatatables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TalkTaskInfoDatatables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_TalkTaskInfoDatatables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_EditorNormalMessageColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestEditor_Statics::NewProp_EditorWarnningMessageColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuestEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuestEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuestEditor_Statics::ClassParams = {
		&UBaseQuestEditor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseQuestEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuestEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuestEditor()
	{
		if (!Z_Registration_Info_UClass_UBaseQuestEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuestEditor.OuterSingleton, Z_Construct_UClass_UBaseQuestEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseQuestEditor.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseQuestEditor>()
	{
		return UBaseQuestEditor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuestEditor);
	UBaseQuestEditor::~UBaseQuestEditor() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseQuestEditor, UBaseQuestEditor::StaticClass, TEXT("UBaseQuestEditor"), &Z_Registration_Info_UClass_UBaseQuestEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuestEditor), 3189538536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_1832746021(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditor_BaseQuestEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
