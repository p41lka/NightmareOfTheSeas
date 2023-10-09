// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Selectors/BasePayloadSelectorWidget.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePayloadSelectorWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBasePayloadSelectorWidget();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UBasePayloadSelectorWidget_NoRegister();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventPayloadSelectedFloat_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventPayloadSelectedFloat_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//----------------------------------------------DISPATCHERS DEFINITION\n" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "----------------------------------------------DISPATCHERS DEFINITION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "PayloadSelectedFloat__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::_Script_QuestEditorDev_eventPayloadSelectedFloat_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPayloadSelectedFloat_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedFloat, float NewValue)
{
	struct _Script_QuestEditorDev_eventPayloadSelectedFloat_Parms
	{
		float NewValue;
	};
	_Script_QuestEditorDev_eventPayloadSelectedFloat_Parms Parms;
	Parms.NewValue=NewValue;
	PayloadSelectedFloat.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventPayloadSelectedInt_Parms
		{
			int32 NewValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventPayloadSelectedInt_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "PayloadSelectedInt__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::_Script_QuestEditorDev_eventPayloadSelectedInt_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPayloadSelectedInt_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedInt, int32 NewValue)
{
	struct _Script_QuestEditorDev_eventPayloadSelectedInt_Parms
	{
		int32 NewValue;
	};
	_Script_QuestEditorDev_eventPayloadSelectedInt_Parms Parms;
	Parms.NewValue=NewValue;
	PayloadSelectedInt.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventPayloadSelectedString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventPayloadSelectedString_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "PayloadSelectedString__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::_Script_QuestEditorDev_eventPayloadSelectedString_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPayloadSelectedString_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedString, const FString& NewValue)
{
	struct _Script_QuestEditorDev_eventPayloadSelectedString_Parms
	{
		FString NewValue;
	};
	_Script_QuestEditorDev_eventPayloadSelectedString_Parms Parms;
	Parms.NewValue=NewValue;
	PayloadSelectedString.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventPayloadSelectedObjectClass_Parms
		{
			TSoftClassPtr<UObject>  NewValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventPayloadSelectedObjectClass_Parms, NewValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "PayloadSelectedObjectClass__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::_Script_QuestEditorDev_eventPayloadSelectedObjectClass_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPayloadSelectedObjectClass_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedObjectClass, const TSoftClassPtr<UObject> & NewValue)
{
	struct _Script_QuestEditorDev_eventPayloadSelectedObjectClass_Parms
	{
		TSoftClassPtr<UObject>  NewValue;
	};
	_Script_QuestEditorDev_eventPayloadSelectedObjectClass_Parms Parms;
	Parms.NewValue=NewValue;
	PayloadSelectedObjectClass.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventPayloadSelectedVector_Parms
		{
			FVector NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventPayloadSelectedVector_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "PayloadSelectedVector__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::_Script_QuestEditorDev_eventPayloadSelectedVector_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPayloadSelectedVector_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedVector, FVector NewValue)
{
	struct _Script_QuestEditorDev_eventPayloadSelectedVector_Parms
	{
		FVector NewValue;
	};
	_Script_QuestEditorDev_eventPayloadSelectedVector_Parms Parms;
	Parms.NewValue=NewValue;
	PayloadSelectedVector.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics
	{
		struct _Script_QuestEditorDev_eventPayloadSelectedTag_Parms
		{
			FGameplayTagContainer NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestEditorDev_eventPayloadSelectedTag_Parms, NewValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "PayloadSelectedTag__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::_Script_QuestEditorDev_eventPayloadSelectedTag_Parms), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPayloadSelectedTag_DelegateWrapper(const FMulticastScriptDelegate& PayloadSelectedTag, FGameplayTagContainer NewValue)
{
	struct _Script_QuestEditorDev_eventPayloadSelectedTag_Parms
	{
		FGameplayTagContainer NewValue;
	};
	_Script_QuestEditorDev_eventPayloadSelectedTag_Parms Parms;
	Parms.NewValue=NewValue;
	PayloadSelectedTag.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UBasePayloadSelectorWidget::execSelectedTagCallback)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_NewValueIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectedTagCallback(Z_Param_NewValueIn,Z_Param_SlotIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePayloadSelectorWidget::execSelectedVectorCallback)
	{
		P_GET_STRUCT(FVector,Z_Param_NewValueIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectedVectorCallback(Z_Param_NewValueIn,Z_Param_SlotIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePayloadSelectorWidget::execSelectedObjectClassCallback)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UObject> ,Z_Param_NewValueIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectedObjectClassCallback(Z_Param_NewValueIn,Z_Param_SlotIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePayloadSelectorWidget::execSelectedStringCallback)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewValueIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectedStringCallback(Z_Param_NewValueIn,Z_Param_SlotIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePayloadSelectorWidget::execSelectedFloatCallback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValueIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectedFloatCallback(Z_Param_NewValueIn,Z_Param_SlotIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePayloadSelectorWidget::execHandleWidgetSelectorsStart)
	{
		P_GET_TARRAY(UWidget*,Z_Param_SelectorWidgets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleWidgetSelectorsStart(Z_Param_SelectorWidgets);
		P_NATIVE_END;
	}
	void UBasePayloadSelectorWidget::StaticRegisterNativesUBasePayloadSelectorWidget()
	{
		UClass* Class = UBasePayloadSelectorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleWidgetSelectorsStart", &UBasePayloadSelectorWidget::execHandleWidgetSelectorsStart },
			{ "SelectedFloatCallback", &UBasePayloadSelectorWidget::execSelectedFloatCallback },
			{ "SelectedObjectClassCallback", &UBasePayloadSelectorWidget::execSelectedObjectClassCallback },
			{ "SelectedStringCallback", &UBasePayloadSelectorWidget::execSelectedStringCallback },
			{ "SelectedTagCallback", &UBasePayloadSelectorWidget::execSelectedTagCallback },
			{ "SelectedVectorCallback", &UBasePayloadSelectorWidget::execSelectedVectorCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics
	{
		struct BasePayloadSelectorWidget_eventHandleWidgetSelectorsStart_Parms
		{
			TArray<UWidget*> SelectorWidgets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectorWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectorWidgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets_Inner = { "SelectorWidgets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets = { "SelectorWidgets", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventHandleWidgetSelectorsStart_Parms, SelectorWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::NewProp_SelectorWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "/**\n\x09*\x09Handles all logic for selectors after spawn.\n\x09*\x09""Dispatches all events for payload change.\n\x09*\x09Must be called after selector widgets are spawned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "Handles all logic for selectors after spawn.\nDispatches all events for payload change.\nMust be called after selector widgets are spawned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePayloadSelectorWidget, nullptr, "HandleWidgetSelectorsStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::BasePayloadSelectorWidget_eventHandleWidgetSelectorsStart_Parms), Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics
	{
		struct BasePayloadSelectorWidget_eventSelectedFloatCallback_Parms
		{
			float NewValueIn;
			int32 SlotIn;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValueIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::NewProp_NewValueIn = { "NewValueIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventSelectedFloatCallback_Parms, NewValueIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::NewProp_SlotIn = { "SlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventSelectedFloatCallback_Parms, SlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::NewProp_NewValueIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::NewProp_SlotIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "Comment", "//---------------------------------*Callbacsk*/\n" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "---------------------------------*Callbacsk*/" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePayloadSelectorWidget, nullptr, "SelectedFloatCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::BasePayloadSelectorWidget_eventSelectedFloatCallback_Parms), Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics
	{
		struct BasePayloadSelectorWidget_eventSelectedObjectClassCallback_Parms
		{
			TSoftClassPtr<UObject>  NewValueIn;
			int32 SlotIn;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NewValueIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::NewProp_NewValueIn = { "NewValueIn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventSelectedObjectClassCallback_Parms, NewValueIn), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::NewProp_SlotIn = { "SlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventSelectedObjectClassCallback_Parms, SlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::NewProp_NewValueIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::NewProp_SlotIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePayloadSelectorWidget, nullptr, "SelectedObjectClassCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::BasePayloadSelectorWidget_eventSelectedObjectClassCallback_Parms), Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics
	{
		struct BasePayloadSelectorWidget_eventSelectedStringCallback_Parms
		{
			FString NewValueIn;
			int32 SlotIn;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewValueIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::NewProp_NewValueIn = { "NewValueIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventSelectedStringCallback_Parms, NewValueIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::NewProp_SlotIn = { "SlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventSelectedStringCallback_Parms, SlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::NewProp_NewValueIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::NewProp_SlotIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePayloadSelectorWidget, nullptr, "SelectedStringCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::BasePayloadSelectorWidget_eventSelectedStringCallback_Parms), Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics
	{
		struct BasePayloadSelectorWidget_eventSelectedTagCallback_Parms
		{
			FGameplayTagContainer NewValueIn;
			int32 SlotIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValueIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::NewProp_NewValueIn = { "NewValueIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventSelectedTagCallback_Parms, NewValueIn), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::NewProp_SlotIn = { "SlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventSelectedTagCallback_Parms, SlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::NewProp_NewValueIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::NewProp_SlotIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePayloadSelectorWidget, nullptr, "SelectedTagCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::BasePayloadSelectorWidget_eventSelectedTagCallback_Parms), Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics
	{
		struct BasePayloadSelectorWidget_eventSelectedVectorCallback_Parms
		{
			FVector NewValueIn;
			int32 SlotIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValueIn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::NewProp_NewValueIn = { "NewValueIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventSelectedVectorCallback_Parms, NewValueIn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::NewProp_SlotIn = { "SlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePayloadSelectorWidget_eventSelectedVectorCallback_Parms, SlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::NewProp_NewValueIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::NewProp_SlotIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePayloadSelectorWidget, nullptr, "SelectedVectorCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::BasePayloadSelectorWidget_eventSelectedVectorCallback_Parms), Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasePayloadSelectorWidget);
	UClass* Z_Construct_UClass_UBasePayloadSelectorWidget_NoRegister()
	{
		return UBasePayloadSelectorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBasePayloadSelectorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringBChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StringBChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringAChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StringAChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimesTocheckChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TimesTocheckChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AmountChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTagsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequiredTagsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredTagsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_IgnoredTagsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClassChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ObjectClassChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_VectorChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasePayloadSelectorWidget_HandleWidgetSelectorsStart, "HandleWidgetSelectorsStart" }, // 706904552
		{ &Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedFloatCallback, "SelectedFloatCallback" }, // 240518455
		{ &Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedObjectClassCallback, "SelectedObjectClassCallback" }, // 2912255359
		{ &Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedStringCallback, "SelectedStringCallback" }, // 3188125299
		{ &Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedTagCallback, "SelectedTagCallback" }, // 4096904003
		{ &Z_Construct_UFunction_UBasePayloadSelectorWidget_SelectedVectorCallback, "SelectedVectorCallback" }, // 2952817167
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09\x09""Base payload selector widget\n */" },
		{ "IncludePath", "Selectors/BasePayloadSelectorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "Base payload selector widget" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_StringBChanged_MetaData[] = {
		{ "Category", "Payload Update" },
		{ "Comment", "/*Called when Payload StringB value changes*/" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "Called when Payload StringB value changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_StringBChanged = { "StringBChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePayloadSelectorWidget, StringBChanged), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_StringBChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_StringBChanged_MetaData)) }; // 3057729546
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_StringAChanged_MetaData[] = {
		{ "Category", "Payload Update" },
		{ "Comment", "/*Called when Payload StringA value changes*/" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "Called when Payload StringA value changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_StringAChanged = { "StringAChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePayloadSelectorWidget, StringAChanged), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedString__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_StringAChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_StringAChanged_MetaData)) }; // 3057729546
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_TimesTocheckChanged_MetaData[] = {
		{ "Category", "Payload Update" },
		{ "Comment", "/*Called when Payload TimesTocheck value changes*/" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "Called when Payload TimesTocheck value changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_TimesTocheckChanged = { "TimesTocheckChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePayloadSelectorWidget, TimesTocheckChanged), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedInt__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_TimesTocheckChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_TimesTocheckChanged_MetaData)) }; // 1966507411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_AmountChanged_MetaData[] = {
		{ "Category", "Payload Update" },
		{ "Comment", "/*Called when Payload Amount value changes*/" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "Called when Payload Amount value changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_AmountChanged = { "AmountChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePayloadSelectorWidget, AmountChanged), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_AmountChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_AmountChanged_MetaData)) }; // 1659782235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_RequiredTagsChanged_MetaData[] = {
		{ "Category", "Payload Update" },
		{ "Comment", "/*Called when Payload Required Tags value changes*/" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "Called when Payload Required Tags value changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_RequiredTagsChanged = { "RequiredTagsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePayloadSelectorWidget, RequiredTagsChanged), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_RequiredTagsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_RequiredTagsChanged_MetaData)) }; // 2003404817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_IgnoredTagsChanged_MetaData[] = {
		{ "Category", "Payload Update" },
		{ "Comment", "/*Called when Payload Ignored Tags value changes*/" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "Called when Payload Ignored Tags value changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_IgnoredTagsChanged = { "IgnoredTagsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePayloadSelectorWidget, IgnoredTagsChanged), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedTag__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_IgnoredTagsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_IgnoredTagsChanged_MetaData)) }; // 2003404817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_ObjectClassChanged_MetaData[] = {
		{ "Category", "Payload Update" },
		{ "Comment", "/*Called when Payload Object Class value changes*/" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "Called when Payload Object Class value changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_ObjectClassChanged = { "ObjectClassChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePayloadSelectorWidget, ObjectClassChanged), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedObjectClass__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_ObjectClassChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_ObjectClassChanged_MetaData)) }; // 2332856398
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_VectorChanged_MetaData[] = {
		{ "Category", "Payload Update" },
		{ "Comment", "/*Called when Payload Vector value changes*/" },
		{ "ModuleRelativePath", "Public/Selectors/BasePayloadSelectorWidget.h" },
		{ "ToolTip", "Called when Payload Vector value changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_VectorChanged = { "VectorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePayloadSelectorWidget, VectorChanged), Z_Construct_UDelegateFunction_QuestEditorDev_PayloadSelectedVector__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_VectorChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_VectorChanged_MetaData)) }; // 3815763637
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_StringBChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_StringAChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_TimesTocheckChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_AmountChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_RequiredTagsChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_IgnoredTagsChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_ObjectClassChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::NewProp_VectorChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePayloadSelectorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::ClassParams = {
		&UBasePayloadSelectorWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePayloadSelectorWidget()
	{
		if (!Z_Registration_Info_UClass_UBasePayloadSelectorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasePayloadSelectorWidget.OuterSingleton, Z_Construct_UClass_UBasePayloadSelectorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasePayloadSelectorWidget.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UBasePayloadSelectorWidget>()
	{
		return UBasePayloadSelectorWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePayloadSelectorWidget);
	UBasePayloadSelectorWidget::~UBasePayloadSelectorWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasePayloadSelectorWidget, UBasePayloadSelectorWidget::StaticClass, TEXT("UBasePayloadSelectorWidget"), &Z_Registration_Info_UClass_UBasePayloadSelectorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasePayloadSelectorWidget), 3099098394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_1087856079(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_Selectors_BasePayloadSelectorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
