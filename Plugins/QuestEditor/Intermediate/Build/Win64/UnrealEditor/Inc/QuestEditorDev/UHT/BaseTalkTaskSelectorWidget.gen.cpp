// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTalkTaskSelectorWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTalkTask();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseQuestEditor_NoRegister();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTalkTaskSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseTalkTaskSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventTalkSelectedText_Parms
		{
			FText NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventTalkSelectedText_Parms, NewValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::NewProp_NewValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Base widget that contains logic for talk tasks selectors\n *///------------------------------------------DISPATCHERS DEFINITIONS-----------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Base widget that contains logic for talk tasks selectors\n//------------------------------------------DISPATCHERS DEFINITIONS-----------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "TalkSelectedText__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::_Script_QuestEditorDev_eventTalkSelectedText_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTalkSelectedText_DelegateWrapper(const FMulticastScriptDelegate& TalkSelectedText, FText const& NewValue)
{
	struct _Script_QuestEditorDev_eventTalkSelectedText_Parms
	{
		FText NewValue;
	};
	_Script_QuestEditorDev_eventTalkSelectedText_Parms Parms;
	Parms.NewValue=NewValue;
	TalkSelectedText.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventTalkSelectedString_Parms
		{
			FString NewValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventTalkSelectedString_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "TalkSelectedString__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::_Script_QuestEditorDev_eventTalkSelectedString_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTalkSelectedString_DelegateWrapper(const FMulticastScriptDelegate& TalkSelectedString, const FString& NewValue)
{
	struct _Script_QuestEditorDev_eventTalkSelectedString_Parms
	{
		FString NewValue;
	};
	_Script_QuestEditorDev_eventTalkSelectedString_Parms Parms;
	Parms.NewValue=NewValue;
	TalkSelectedString.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventTalkSelectedSound_Parms
		{
			TSoftObjectPtr<USoundCue> NewValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventTalkSelectedSound_Parms, NewValue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "TalkSelectedSound__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::_Script_QuestEditorDev_eventTalkSelectedSound_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTalkSelectedSound_DelegateWrapper(const FMulticastScriptDelegate& TalkSelectedSound, const TSoftObjectPtr<USoundCue>& NewValue)
{
	struct _Script_QuestEditorDev_eventTalkSelectedSound_Parms
	{
		TSoftObjectPtr<USoundCue> NewValue;
	};
	_Script_QuestEditorDev_eventTalkSelectedSound_Parms Parms;
	Parms.NewValue=NewValue;
	TalkSelectedSound.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UBaseTalkTaskSelectorWidget::execSelectorCommitNPCSound)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<USoundCue>,Z_Param_NewSoundIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitNPCSound(Z_Param_NewSoundIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTalkTaskSelectorWidget::execSelectorCommitPlayerSound)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<USoundCue>,Z_Param_NewSoundIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitPlayerSound(Z_Param_NewSoundIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTalkTaskSelectorWidget::execSelectorCommitCustomPayloadData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitCustomPayloadData(Z_Param_NewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTalkTaskSelectorWidget::execSelectorCommitShortDescription)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_ShortDescriptionIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitShortDescription(Z_Param_ShortDescriptionIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTalkTaskSelectorWidget::execSelectorCommitNPCResponse)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NPCResponseIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitNPCResponse(Z_Param_NPCResponseIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTalkTaskSelectorWidget::execSelectorCommitPlayerSay)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_PlayerSayIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectorCommitPlayerSay(Z_Param_PlayerSayIn);
		P_NATIVE_END;
	}
	struct BaseTalkTaskSelectorWidget_eventUpdateFromTask_Parms
	{
		FQuestTalkTask QuestTaskIn;
		bool IsDialogIn;
	};
	static FName NAME_UBaseTalkTaskSelectorWidget_UpdateFromTask = FName(TEXT("UpdateFromTask"));
	void UBaseTalkTaskSelectorWidget::UpdateFromTask(FQuestTalkTask const& QuestTaskIn, bool IsDialogIn)
	{
		BaseTalkTaskSelectorWidget_eventUpdateFromTask_Parms Parms;
		Parms.QuestTaskIn=QuestTaskIn;
		Parms.IsDialogIn=IsDialogIn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBaseTalkTaskSelectorWidget_UpdateFromTask),&Parms);
	}
	void UBaseTalkTaskSelectorWidget::StaticRegisterNativesUBaseTalkTaskSelectorWidget()
	{
		UClass* Class = UBaseTalkTaskSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectorCommitCustomPayloadData", &UBaseTalkTaskSelectorWidget::execSelectorCommitCustomPayloadData },
			{ "SelectorCommitNPCResponse", &UBaseTalkTaskSelectorWidget::execSelectorCommitNPCResponse },
			{ "SelectorCommitNPCSound", &UBaseTalkTaskSelectorWidget::execSelectorCommitNPCSound },
			{ "SelectorCommitPlayerSay", &UBaseTalkTaskSelectorWidget::execSelectorCommitPlayerSay },
			{ "SelectorCommitPlayerSound", &UBaseTalkTaskSelectorWidget::execSelectorCommitPlayerSound },
			{ "SelectorCommitShortDescription", &UBaseTalkTaskSelectorWidget::execSelectorCommitShortDescription },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics
	{
		struct BaseTalkTaskSelectorWidget_eventSelectorCommitCustomPayloadData_Parms
		{
			FString NewData;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTalkTaskSelectorWidget_eventSelectorCommitCustomPayloadData_Parms, NewData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::NewProp_NewData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector CustomPayloadData commit function.\n\x09*\x09Must be called when the specified variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Selector CustomPayloadData commit function.\nMust be called when the specified variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTalkTaskSelectorWidget, nullptr, "SelectorCommitCustomPayloadData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::BaseTalkTaskSelectorWidget_eventSelectorCommitCustomPayloadData_Parms), Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics
	{
		struct BaseTalkTaskSelectorWidget_eventSelectorCommitNPCResponse_Parms
		{
			FText NPCResponseIn;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_NPCResponseIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::NewProp_NPCResponseIn = { "NPCResponseIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTalkTaskSelectorWidget_eventSelectorCommitNPCResponse_Parms, NPCResponseIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::NewProp_NPCResponseIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector NPCResponse commit function.\n\x09*\x09Must be called when the specified variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Selector NPCResponse commit function.\nMust be called when the specified variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTalkTaskSelectorWidget, nullptr, "SelectorCommitNPCResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::BaseTalkTaskSelectorWidget_eventSelectorCommitNPCResponse_Parms), Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics
	{
		struct BaseTalkTaskSelectorWidget_eventSelectorCommitNPCSound_Parms
		{
			TSoftObjectPtr<USoundCue> NewSoundIn;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NewSoundIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::NewProp_NewSoundIn = { "NewSoundIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTalkTaskSelectorWidget_eventSelectorCommitNPCSound_Parms, NewSoundIn), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::NewProp_NewSoundIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector NPC sound commit function.\n\x09*\x09Must be called when the specified variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Selector NPC sound commit function.\nMust be called when the specified variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTalkTaskSelectorWidget, nullptr, "SelectorCommitNPCSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::BaseTalkTaskSelectorWidget_eventSelectorCommitNPCSound_Parms), Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics
	{
		struct BaseTalkTaskSelectorWidget_eventSelectorCommitPlayerSay_Parms
		{
			FText PlayerSayIn;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_PlayerSayIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::NewProp_PlayerSayIn = { "PlayerSayIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTalkTaskSelectorWidget_eventSelectorCommitPlayerSay_Parms, PlayerSayIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::NewProp_PlayerSayIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector PlayerSay commit function.\n\x09*\x09Must be called when the specified variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Selector PlayerSay commit function.\nMust be called when the specified variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTalkTaskSelectorWidget, nullptr, "SelectorCommitPlayerSay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::BaseTalkTaskSelectorWidget_eventSelectorCommitPlayerSay_Parms), Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics
	{
		struct BaseTalkTaskSelectorWidget_eventSelectorCommitPlayerSound_Parms
		{
			TSoftObjectPtr<USoundCue> NewSoundIn;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NewSoundIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::NewProp_NewSoundIn = { "NewSoundIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTalkTaskSelectorWidget_eventSelectorCommitPlayerSound_Parms, NewSoundIn), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::NewProp_NewSoundIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector Player sound commit function.\n\x09*\x09Must be called when the specified variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Selector Player sound commit function.\nMust be called when the specified variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTalkTaskSelectorWidget, nullptr, "SelectorCommitPlayerSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::BaseTalkTaskSelectorWidget_eventSelectorCommitPlayerSound_Parms), Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics
	{
		struct BaseTalkTaskSelectorWidget_eventSelectorCommitShortDescription_Parms
		{
			FText ShortDescriptionIn;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ShortDescriptionIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::NewProp_ShortDescriptionIn = { "ShortDescriptionIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTalkTaskSelectorWidget_eventSelectorCommitShortDescription_Parms, ShortDescriptionIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::NewProp_ShortDescriptionIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Selector ShortDescription commit function.\n\x09*\x09Must be called when the specified variable changes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Selector ShortDescription commit function.\nMust be called when the specified variable changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTalkTaskSelectorWidget, nullptr, "SelectorCommitShortDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::BaseTalkTaskSelectorWidget_eventSelectorCommitShortDescription_Parms), Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTaskIn;
		static void NewProp_IsDialogIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn = { "QuestTaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseTalkTaskSelectorWidget_eventUpdateFromTask_Parms, QuestTaskIn), Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData)) }; // 1604935902
	void Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::NewProp_IsDialogIn_SetBit(void* Obj)
	{
		((BaseTalkTaskSelectorWidget_eventUpdateFromTask_Parms*)Obj)->IsDialogIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::NewProp_IsDialogIn = { "IsDialogIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseTalkTaskSelectorWidget_eventUpdateFromTask_Parms), &Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::NewProp_IsDialogIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::NewProp_IsDialogIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Main update event for the selector.\n\x09*\x09""All the logic needed for updating this widget should be placed here.\n\x09*\x09""All selectors must override this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Main update event for the selector.\nAll the logic needed for updating this widget should be placed here.\nAll selectors must override this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTalkTaskSelectorWidget, nullptr, "UpdateFromTask", nullptr, nullptr, sizeof(BaseTalkTaskSelectorWidget_eventUpdateFromTask_Parms), Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseTalkTaskSelectorWidget);
	UClass* Z_Construct_UClass_UBaseTalkTaskSelectorWidget_NoRegister()
	{
		return UBaseTalkTaskSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPlayerSay_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedPlayerSay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNPCResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedNPCResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedShortDescription_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedShortDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCustomPayloadData_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedCustomPayloadData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPlayerSound_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedPlayerSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNPCSound_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedNPCSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDialog_MetaData[];
#endif
		static void NewProp_IsDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTalkTask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTalkTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestEditorReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestEditorReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitCustomPayloadData, "SelectorCommitCustomPayloadData" }, // 1976310556
		{ &Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCResponse, "SelectorCommitNPCResponse" }, // 322574090
		{ &Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitNPCSound, "SelectorCommitNPCSound" }, // 2898590515
		{ &Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSay, "SelectorCommitPlayerSay" }, // 1941989599
		{ &Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitPlayerSound, "SelectorCommitPlayerSound" }, // 1542272949
		{ &Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_SelectorCommitShortDescription, "SelectorCommitShortDescription" }, // 3923393973
		{ &Z_Construct_UFunction_UBaseTalkTaskSelectorWidget_UpdateFromTask, "UpdateFromTask" }, // 1708765415
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "TalkTaskSelector" },
		{ "IncludePath", "TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedPlayerSay_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when the Talk selector commits Player Say value*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Called when the Talk selector commits Player Say value" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedPlayerSay = { "SelectedPlayerSay", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskSelectorWidget, SelectedPlayerSay), Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedPlayerSay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedPlayerSay_MetaData)) }; // 499747979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedNPCResponse_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when the Talk selector commits Player Say value*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Called when the Talk selector commits Player Say value" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedNPCResponse = { "SelectedNPCResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskSelectorWidget, SelectedNPCResponse), Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedNPCResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedNPCResponse_MetaData)) }; // 499747979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedShortDescription_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when the Talk selector commits short description*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Called when the Talk selector commits short description" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedShortDescription = { "SelectedShortDescription", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskSelectorWidget, SelectedShortDescription), Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedShortDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedShortDescription_MetaData)) }; // 499747979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedCustomPayloadData_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when the Talk selector commits custom payload data*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Called when the Talk selector commits custom payload data" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedCustomPayloadData = { "SelectedCustomPayloadData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskSelectorWidget, SelectedCustomPayloadData), Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedString__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedCustomPayloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedCustomPayloadData_MetaData)) }; // 4209385718
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedPlayerSound_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when the Talk selector commits short description*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Called when the Talk selector commits short description" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedPlayerSound = { "SelectedPlayerSound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskSelectorWidget, SelectedPlayerSound), Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedPlayerSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedPlayerSound_MetaData)) }; // 4174584570
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedNPCSound_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when the Talk selector commits short description*/" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Called when the Talk selector commits short description" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedNPCSound = { "SelectedNPCSound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskSelectorWidget, SelectedNPCSound), Z_Construct_UDelegateFunction_QuestEditorDev_TalkSelectedSound__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedNPCSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedNPCSound_MetaData)) }; // 4174584570
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_IsDialog_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*Quest talk task ID. Use to update widget.*/" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Quest talk task ID. Use to update widget." },
	};
#endif
	void Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_IsDialog_SetBit(void* Obj)
	{
		((UBaseTalkTaskSelectorWidget*)Obj)->IsDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_IsDialog = { "IsDialog", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseTalkTaskSelectorWidget), &Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_IsDialog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_IsDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_IsDialog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_QuestTalkTask_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*Quest talk task current info. Use to update widget.*/" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Quest talk task current info. Use to update widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_QuestTalkTask = { "QuestTalkTask", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskSelectorWidget, QuestTalkTask), Z_Construct_UScriptStruct_FQuestTalkTask, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_QuestTalkTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_QuestTalkTask_MetaData)) }; // 1604935902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_QuestEditorReference_MetaData[] = {
		{ "Category", "Preview Widget" },
		{ "Comment", "/*Quest editor reference for calling events and getting datatable information if needed.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TalkTaskCustomization/BaseTalkTaskSelectorWidget.h" },
		{ "ToolTip", "Quest editor reference for calling events and getting datatable information if needed." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_QuestEditorReference = { "QuestEditorReference", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseTalkTaskSelectorWidget, QuestEditorReference), Z_Construct_UClass_UBaseQuestEditor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_QuestEditorReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_QuestEditorReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedPlayerSay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedNPCResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedShortDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedCustomPayloadData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedPlayerSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_SelectedNPCSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_IsDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_QuestTalkTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::NewProp_QuestEditorReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTalkTaskSelectorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::ClassParams = {
		&UBaseTalkTaskSelectorWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTalkTaskSelectorWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseTalkTaskSelectorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTalkTaskSelectorWidget.OuterSingleton, Z_Construct_UClass_UBaseTalkTaskSelectorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseTalkTaskSelectorWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseTalkTaskSelectorWidget>()
	{
		return UBaseTalkTaskSelectorWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTalkTaskSelectorWidget);
	UBaseTalkTaskSelectorWidget::~UBaseTalkTaskSelectorWidget() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTalkTaskSelectorWidget, UBaseTalkTaskSelectorWidget::StaticClass, TEXT("UBaseTalkTaskSelectorWidget"), &Z_Registration_Info_UClass_UBaseTalkTaskSelectorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTalkTaskSelectorWidget), 165828919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_4196226903(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_TalkTaskCustomization_BaseTalkTaskSelectorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
