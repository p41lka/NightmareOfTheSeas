// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Selectors/BaseSelectorWidget.h"
#include "GameplayTagContainer.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSelectorWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBaseSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventSelectedFloat_Parms
		{
			float NewValue;
			int32 Slot;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventSelectedFloat_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventSelectedFloat_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Base widget that contains logic for all payload selectors\n *///------------------------------------------DISPATCHERS DEFINITIONS-----------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Base widget that contains logic for all payload selectors\n//------------------------------------------DISPATCHERS DEFINITIONS-----------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "SelectedFloat__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::_Script_QuestEditorDev_eventSelectedFloat_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSelectedFloat_DelegateWrapper(const FMulticastScriptDelegate& SelectedFloat, float NewValue, int32 Slot)
{
	struct _Script_QuestEditorDev_eventSelectedFloat_Parms
	{
		float NewValue;
		int32 Slot;
	};
	_Script_QuestEditorDev_eventSelectedFloat_Parms Parms;
	Parms.NewValue=NewValue;
	Parms.Slot=Slot;
	SelectedFloat.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventSelectedString_Parms
		{
			FString NewValue;
			int32 Slot;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventSelectedString_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventSelectedString_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "SelectedString__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::_Script_QuestEditorDev_eventSelectedString_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSelectedString_DelegateWrapper(const FMulticastScriptDelegate& SelectedString, const FString& NewValue, int32 Slot)
{
	struct _Script_QuestEditorDev_eventSelectedString_Parms
	{
		FString NewValue;
		int32 Slot;
	};
	_Script_QuestEditorDev_eventSelectedString_Parms Parms;
	Parms.NewValue=NewValue;
	Parms.Slot=Slot;
	SelectedString.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventSelectedObjectClass_Parms
		{
			TSoftClassPtr<UObject>  NewValue;
			int32 Slot;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventSelectedObjectClass_Parms, NewValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventSelectedObjectClass_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "SelectedObjectClass__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::_Script_QuestEditorDev_eventSelectedObjectClass_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSelectedObjectClass_DelegateWrapper(const FMulticastScriptDelegate& SelectedObjectClass, const TSoftClassPtr<UObject> & NewValue, int32 Slot)
{
	struct _Script_QuestEditorDev_eventSelectedObjectClass_Parms
	{
		TSoftClassPtr<UObject>  NewValue;
		int32 Slot;
	};
	_Script_QuestEditorDev_eventSelectedObjectClass_Parms Parms;
	Parms.NewValue=NewValue;
	Parms.Slot=Slot;
	SelectedObjectClass.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventSelectedVector_Parms
		{
			FVector NewValue;
			int32 Slot;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventSelectedVector_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventSelectedVector_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "SelectedVector__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::_Script_QuestEditorDev_eventSelectedVector_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSelectedVector_DelegateWrapper(const FMulticastScriptDelegate& SelectedVector, FVector NewValue, int32 Slot)
{
	struct _Script_QuestEditorDev_eventSelectedVector_Parms
	{
		FVector NewValue;
		int32 Slot;
	};
	_Script_QuestEditorDev_eventSelectedVector_Parms Parms;
	Parms.NewValue=NewValue;
	Parms.Slot=Slot;
	SelectedVector.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventSelectedTag_Parms
		{
			FGameplayTagContainer NewValue;
			int32 Slot;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventSelectedTag_Parms, NewValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventSelectedTag_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "SelectedTag__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::_Script_QuestEditorDev_eventSelectedTag_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSelectedTag_DelegateWrapper(const FMulticastScriptDelegate& SelectedTag, FGameplayTagContainer NewValue, int32 Slot)
{
	struct _Script_QuestEditorDev_eventSelectedTag_Parms
	{
		FGameplayTagContainer NewValue;
		int32 Slot;
	};
	_Script_QuestEditorDev_eventSelectedTag_Parms Parms;
	Parms.NewValue=NewValue;
	Parms.Slot=Slot;
	SelectedTag.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UBaseSelectorWidget::execFindDTFromPath)
	{
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UDataTable>,Z_Param_Out_DTObjectPathIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=P_THIS->FindDTFromPath(Z_Param_Out_DTObjectPathIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseSelectorWidget::execFindDTFromName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DTObjectNameIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=P_THIS->FindDTFromName(Z_Param_DTObjectNameIn);
		P_NATIVE_END;
	}
	struct BaseSelectorWidget_eventGetDTVariables_Parms
	{
		FName DTNameOUT;
		TSoftObjectPtr<UDataTable> DTPathOUT;
	};
	struct BaseSelectorWidget_eventUpdateFromTask_Parms
	{
		FQuestTask QuestTaskIn;
	};
	static FName NAME_UBaseSelectorWidget_GetDTVariables = FName(TEXT("GetDTVariables"));
	void UBaseSelectorWidget::GetDTVariables(FName& DTNameOUT, TSoftObjectPtr<UDataTable>& DTPathOUT)
	{
		BaseSelectorWidget_eventGetDTVariables_Parms Parms;
		Parms.DTNameOUT=DTNameOUT;
		Parms.DTPathOUT=DTPathOUT;
		ProcessEvent(FindFunctionChecked(NAME_UBaseSelectorWidget_GetDTVariables),&Parms);
		DTNameOUT=Parms.DTNameOUT;
		DTPathOUT=Parms.DTPathOUT;
	}
	static FName NAME_UBaseSelectorWidget_UpdateFromTask = FName(TEXT("UpdateFromTask"));
	void UBaseSelectorWidget::UpdateFromTask(FQuestTask const& QuestTaskIn)
	{
		BaseSelectorWidget_eventUpdateFromTask_Parms Parms;
		Parms.QuestTaskIn=QuestTaskIn;
		ProcessEvent(FindFunctionChecked(NAME_UBaseSelectorWidget_UpdateFromTask),&Parms);
	}
	void UBaseSelectorWidget::StaticRegisterNativesUBaseSelectorWidget()
	{
		UClass* Class = UBaseSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindDTFromName", &UBaseSelectorWidget::execFindDTFromName },
			{ "FindDTFromPath", &UBaseSelectorWidget::execFindDTFromPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics
	{
		struct BaseSelectorWidget_eventFindDTFromName_Parms
		{
			FString DTObjectNameIn;
			UDataTable* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DTObjectNameIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DTObjectNameIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::NewProp_DTObjectNameIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::NewProp_DTObjectNameIn = { "DTObjectNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseSelectorWidget_eventFindDTFromName_Parms, DTObjectNameIn), METADATA_PARAMS(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::NewProp_DTObjectNameIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::NewProp_DTObjectNameIn_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseSelectorWidget_eventFindDTFromName_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::NewProp_DTObjectNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09""Finds a DT from the datatable array that matches the object name\n\x09*\x09If finds none, returns first of array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Finds a DT from the datatable array that matches the object name\nIf finds none, returns first of array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseSelectorWidget, nullptr, "FindDTFromName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::BaseSelectorWidget_eventFindDTFromName_Parms), Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics
	{
		struct BaseSelectorWidget_eventFindDTFromPath_Parms
		{
			TSoftObjectPtr<UDataTable> DTObjectPathIn;
			UDataTable* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DTObjectPathIn_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DTObjectPathIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::NewProp_DTObjectPathIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::NewProp_DTObjectPathIn = { "DTObjectPathIn", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseSelectorWidget_eventFindDTFromPath_Parms, DTObjectPathIn), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::NewProp_DTObjectPathIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::NewProp_DTObjectPathIn_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseSelectorWidget_eventFindDTFromPath_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::NewProp_DTObjectPathIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09""Finds a DT from the datatable array that matches the object path name\n\x09*\x09If finds none, returns first of array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Finds a DT from the datatable array that matches the object path name\nIf finds none, returns first of array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseSelectorWidget, nullptr, "FindDTFromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::BaseSelectorWidget_eventFindDTFromPath_Parms), Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_DTNameOUT;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DTPathOUT;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::NewProp_DTNameOUT = { "DTNameOUT", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseSelectorWidget_eventGetDTVariables_Parms, DTNameOUT), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::NewProp_DTPathOUT = { "DTPathOUT", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseSelectorWidget_eventGetDTVariables_Parms, DTPathOUT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::NewProp_DTNameOUT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::NewProp_DTPathOUT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Gets information of the current datatable being used by the selector.\n\x09*\x09Not needed for most selectors.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Gets information of the current datatable being used by the selector.\nNot needed for most selectors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseSelectorWidget, nullptr, "GetDTVariables", nullptr, nullptr, sizeof(BaseSelectorWidget_eventGetDTVariables_Parms), Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTaskIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn = { "QuestTaskIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseSelectorWidget_eventUpdateFromTask_Parms, QuestTaskIn), Z_Construct_UScriptStruct_FQuestTask, METADATA_PARAMS(Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn_MetaData)) }; // 3659381813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::NewProp_QuestTaskIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Main update event for the selector.\n\x09*\x09""All the logic needed for updating this widget should be placed here.\n\x09*\x09""All selectors must override this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Main update event for the selector.\nAll the logic needed for updating this widget should be placed here.\nAll selectors must override this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseSelectorWidget, nullptr, "UpdateFromTask", nullptr, nullptr, sizeof(BaseSelectorWidget_eventUpdateFromTask_Parms), Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseSelectorWidget);
	UClass* Z_Construct_UClass_UBaseSelectorWidget_NoRegister()
	{
		return UBaseSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFloat_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedString_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjectClass_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedObjectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedVector_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTag_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectedTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorSlot_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectorSlot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Datatables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Datatables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Datatables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromName, "FindDTFromName" }, // 1445394903
		{ &Z_Construct_UFunction_UBaseSelectorWidget_FindDTFromPath, "FindDTFromPath" }, // 373809605
		{ &Z_Construct_UFunction_UBaseSelectorWidget_GetDTVariables, "GetDTVariables" }, // 4061250047
		{ &Z_Construct_UFunction_UBaseSelectorWidget_UpdateFromTask, "UpdateFromTask" }, // 3999107074
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Selectors/BaseSelectorWidget.h" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedFloat_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when a selector commits float value*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Called when a selector commits float value" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedFloat = { "SelectedFloat", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseSelectorWidget, SelectedFloat), Z_Construct_UDelegateFunction_QuestEditorDev_SelectedFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedFloat_MetaData)) }; // 3743605714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedString_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when a selector commits string value*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Called when a selector commits string value" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedString = { "SelectedString", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseSelectorWidget, SelectedString), Z_Construct_UDelegateFunction_QuestEditorDev_SelectedString__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedString_MetaData)) }; // 2769379483
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedObjectClass_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when a selector commits object class value*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Called when a selector commits object class value" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedObjectClass = { "SelectedObjectClass", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseSelectorWidget, SelectedObjectClass), Z_Construct_UDelegateFunction_QuestEditorDev_SelectedObjectClass__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedObjectClass_MetaData)) }; // 3206736050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedVector_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when a selector commits vector value*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Called when a selector commits vector value" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedVector = { "SelectedVector", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseSelectorWidget, SelectedVector), Z_Construct_UDelegateFunction_QuestEditorDev_SelectedVector__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedVector_MetaData)) }; // 1801575852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedTag_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/*Called when a selector commits tag value*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Called when a selector commits tag value" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedTag = { "SelectedTag", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseSelectorWidget, SelectedTag), Z_Construct_UDelegateFunction_QuestEditorDev_SelectedTag__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedTag_MetaData)) }; // 3500908601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectorSlot_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Indicates the variable on the payload.\n\x09*\x09Slot 0 is the first variable of type that appears on the payload. The followings increasing in number.\n\x09*\x09Some variables in the payload are duplicated, for example there are two string variables.\n\x09*\x09Use to update from payload.\n\x09*\x09Its also used for int as it was float. \"AmountInvolved\" is slot 0 and \"TimesToCheck\" is slot 1 even when is a int value.\n\x09*/" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Indicates the variable on the payload.\nSlot 0 is the first variable of type that appears on the payload. The followings increasing in number.\nSome variables in the payload are duplicated, for example there are two string variables.\nUse to update from payload.\nIts also used for int as it was float. \"AmountInvolved\" is slot 0 and \"TimesToCheck\" is slot 1 even when is a int value." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectorSlot = { "SelectorSlot", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseSelectorWidget, SelectorSlot), METADATA_PARAMS(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectorSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectorSlot_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_Datatables_Inner = { "Datatables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_Datatables_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09""Array of datatables of the selector. Used when the selector is choosing from diferent tables.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BaseSelectorWidget.h" },
		{ "ToolTip", "Array of datatables of the selector. Used when the selector is choosing from diferent tables." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_Datatables = { "Datatables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseSelectorWidget, Datatables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_Datatables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_Datatables_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseSelectorWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectedTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_SelectorSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_Datatables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSelectorWidget_Statics::NewProp_Datatables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseSelectorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseSelectorWidget_Statics::ClassParams = {
		&UBaseSelectorWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseSelectorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSelectorWidget_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseSelectorWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseSelectorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseSelectorWidget.OuterSingleton, Z_Construct_UClass_UBaseSelectorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseSelectorWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBaseSelectorWidget>()
	{
		return UBaseSelectorWidget::StaticClass();
	}
	UBaseSelectorWidget::UBaseSelectorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseSelectorWidget);
	UBaseSelectorWidget::~UBaseSelectorWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseSelectorWidget, UBaseSelectorWidget::StaticClass, TEXT("UBaseSelectorWidget"), &Z_Registration_Info_UClass_UBaseSelectorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseSelectorWidget), 3746208147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_1299622309(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BaseSelectorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
