// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskSelectReward/BaseQuestTask_SelectRewardOnLocation.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuestTask_SelectRewardOnLocation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	QUESTEDITOR_API UClass* Z_Construct_UClass_ABaseQuestLocationActor_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_SelectReward();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UBaseQuestTask_SelectRewardOnLocation::execBindOverlapCharacterDelegates)
	{
		P_GET_OBJECT(ACharacter,Z_Param_NewCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindOverlapCharacterDelegates(Z_Param_NewCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectRewardOnLocation::execOnOverlapEvent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEvent(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectRewardOnLocation::execOnLocationReachForReward)
	{
		P_GET_OBJECT(ABaseQuestLocationActor,Z_Param_LocationIN);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocationReachForReward_Implementation(Z_Param_LocationIN);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectRewardOnLocation::execOnQuestLocationReachedCondition)
	{
		P_GET_OBJECT(ABaseQuestLocationActor,Z_Param_QuestLocationActorIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnQuestLocationReachedCondition_Implementation(Z_Param_QuestLocationActorIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask_SelectRewardOnLocation::execGetInteractingCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetInteractingCharacter_Implementation();
		P_NATIVE_END;
	}
	struct BaseQuestTask_SelectRewardOnLocation_eventGetInteractingCharacter_Parms
	{
		ACharacter* ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestTask_SelectRewardOnLocation_eventGetInteractingCharacter_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct BaseQuestTask_SelectRewardOnLocation_eventOnLocationReachForReward_Parms
	{
		ABaseQuestLocationActor* LocationIN;
	};
	struct BaseQuestTask_SelectRewardOnLocation_eventOnQuestLocationReachedCondition_Parms
	{
		ABaseQuestLocationActor* QuestLocationActorIn;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestTask_SelectRewardOnLocation_eventOnQuestLocationReachedCondition_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter = FName(TEXT("GetInteractingCharacter"));
	ACharacter* UBaseQuestTask_SelectRewardOnLocation::GetInteractingCharacter()
	{
		BaseQuestTask_SelectRewardOnLocation_eventGetInteractingCharacter_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward = FName(TEXT("OnLocationReachForReward"));
	void UBaseQuestTask_SelectRewardOnLocation::OnLocationReachForReward(ABaseQuestLocationActor* LocationIN)
	{
		BaseQuestTask_SelectRewardOnLocation_eventOnLocationReachForReward_Parms Parms;
		Parms.LocationIN=LocationIN;
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward),&Parms);
	}
	static FName NAME_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition = FName(TEXT("OnQuestLocationReachedCondition"));
	bool UBaseQuestTask_SelectRewardOnLocation::OnQuestLocationReachedCondition(ABaseQuestLocationActor* QuestLocationActorIn)
	{
		BaseQuestTask_SelectRewardOnLocation_eventOnQuestLocationReachedCondition_Parms Parms;
		Parms.QuestLocationActorIn=QuestLocationActorIn;
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	void UBaseQuestTask_SelectRewardOnLocation::StaticRegisterNativesUBaseQuestTask_SelectRewardOnLocation()
	{
		UClass* Class = UBaseQuestTask_SelectRewardOnLocation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindOverlapCharacterDelegates", &UBaseQuestTask_SelectRewardOnLocation::execBindOverlapCharacterDelegates },
			{ "GetInteractingCharacter", &UBaseQuestTask_SelectRewardOnLocation::execGetInteractingCharacter },
			{ "OnLocationReachForReward", &UBaseQuestTask_SelectRewardOnLocation::execOnLocationReachForReward },
			{ "OnOverlapEvent", &UBaseQuestTask_SelectRewardOnLocation::execOnOverlapEvent },
			{ "OnQuestLocationReachedCondition", &UBaseQuestTask_SelectRewardOnLocation::execOnQuestLocationReachedCondition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics
	{
		struct BaseQuestTask_SelectRewardOnLocation_eventBindOverlapCharacterDelegates_Parms
		{
			ACharacter* NewCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::NewProp_NewCharacter = { "NewCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectRewardOnLocation_eventBindOverlapCharacterDelegates_Parms, NewCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::NewProp_NewCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Function that binds to the character overlap delegates.*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectRewardOnLocation.h" },
		{ "ToolTip", "Function that binds to the character overlap delegates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation, nullptr, "BindOverlapCharacterDelegates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::BaseQuestTask_SelectRewardOnLocation_eventBindOverlapCharacterDelegates_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectRewardOnLocation_eventGetInteractingCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task Location" },
		{ "Comment", "/**\n\x09*\x09Overrideable function to get the character that reaches the quest location\n\x09*\x09""By default is the pawn that is controlled by the player state owner of the quest manager.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectRewardOnLocation.h" },
		{ "ToolTip", "Overrideable function to get the character that reaches the quest location\nBy default is the pawn that is controlled by the player state owner of the quest manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation, nullptr, "GetInteractingCharacter", nullptr, nullptr, sizeof(BaseQuestTask_SelectRewardOnLocation_eventGetInteractingCharacter_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationIN;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics::NewProp_LocationIN = { "LocationIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectRewardOnLocation_eventOnLocationReachForReward_Parms, LocationIN), Z_Construct_UClass_ABaseQuestLocationActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics::NewProp_LocationIN,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task Reward" },
		{ "Comment", "/*Overrideable function that is called when the Location is reached. Used in BindQuestEvents*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectRewardOnLocation.h" },
		{ "ToolTip", "Overrideable function that is called when the Location is reached. Used in BindQuestEvents" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation, nullptr, "OnLocationReachForReward", nullptr, nullptr, sizeof(BaseQuestTask_SelectRewardOnLocation_eventOnLocationReachForReward_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics
	{
		struct BaseQuestTask_SelectRewardOnLocation_eventOnOverlapEvent_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectRewardOnLocation_eventOnOverlapEvent_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectRewardOnLocation_eventOnOverlapEvent_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectRewardOnLocation_eventOnOverlapEvent_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectRewardOnLocation_eventOnOverlapEvent_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseQuestTask_SelectRewardOnLocation_eventOnOverlapEvent_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_SelectRewardOnLocation_eventOnOverlapEvent_Parms), &Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectRewardOnLocation_eventOnOverlapEvent_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**Overrideable function with the logic after overlapping, with potentially can be reaching a location.*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectRewardOnLocation.h" },
		{ "ToolTip", "Overrideable function with the logic after overlapping, with potentially can be reaching a location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation, nullptr, "OnOverlapEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::BaseQuestTask_SelectRewardOnLocation_eventOnOverlapEvent_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestLocationActorIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::NewProp_QuestLocationActorIn = { "QuestLocationActorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_SelectRewardOnLocation_eventOnQuestLocationReachedCondition_Parms, QuestLocationActorIn), Z_Construct_UClass_ABaseQuestLocationActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestTask_SelectRewardOnLocation_eventOnQuestLocationReachedCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_SelectRewardOnLocation_eventOnQuestLocationReachedCondition_Parms), &Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::NewProp_QuestLocationActorIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task Location" },
		{ "Comment", "/**Overrideable function with the condition that has to be met in order to commit this task succesfully.*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectRewardOnLocation.h" },
		{ "ToolTip", "Overrideable function with the condition that has to be met in order to commit this task succesfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation, nullptr, "OnQuestLocationReachedCondition", nullptr, nullptr, sizeof(BaseQuestTask_SelectRewardOnLocation_eventOnQuestLocationReachedCondition_Parms), Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseQuestTask_SelectRewardOnLocation);
	UClass* Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_NoRegister()
	{
		return UBaseQuestTask_SelectRewardOnLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseQuestTask_SelectReward,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_BindOverlapCharacterDelegates, "BindOverlapCharacterDelegates" }, // 462722698
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_GetInteractingCharacter, "GetInteractingCharacter" }, // 69198241
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnLocationReachForReward, "OnLocationReachForReward" }, // 1579569102
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnOverlapEvent, "OnOverlapEvent" }, // 1050956292
		{ &Z_Construct_UFunction_UBaseQuestTask_SelectRewardOnLocation_OnQuestLocationReachedCondition, "OnQuestLocationReachedCondition" }, // 1875966246
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is the basic object for any reward task on location reaching. StringA in payload is reserved for Location name. \n */" },
		{ "DisplayName", "LocationRewardTask" },
		{ "IncludePath", "TaskSelectReward/BaseQuestTask_SelectRewardOnLocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectRewardOnLocation.h" },
		{ "ToolTip", "This is the basic object for any reward task on location reaching. StringA in payload is reserved for Location name." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::NewProp_CurrentCharacter_MetaData[] = {
		{ "Comment", "/*The current character used for overlap*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/BaseQuestTask_SelectRewardOnLocation.h" },
		{ "ToolTip", "The current character used for overlap" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestTask_SelectRewardOnLocation, CurrentCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::NewProp_CurrentCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::NewProp_CurrentCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::NewProp_CurrentCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuestTask_SelectRewardOnLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::ClassParams = {
		&UBaseQuestTask_SelectRewardOnLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation()
	{
		if (!Z_Registration_Info_UClass_UBaseQuestTask_SelectRewardOnLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuestTask_SelectRewardOnLocation.OuterSingleton, Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseQuestTask_SelectRewardOnLocation.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UBaseQuestTask_SelectRewardOnLocation>()
	{
		return UBaseQuestTask_SelectRewardOnLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuestTask_SelectRewardOnLocation);
	UBaseQuestTask_SelectRewardOnLocation::~UBaseQuestTask_SelectRewardOnLocation() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseQuestTask_SelectRewardOnLocation, UBaseQuestTask_SelectRewardOnLocation::StaticClass, TEXT("UBaseQuestTask_SelectRewardOnLocation"), &Z_Registration_Info_UClass_UBaseQuestTask_SelectRewardOnLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuestTask_SelectRewardOnLocation), 2842514415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_3848298963(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_BaseQuestTask_SelectRewardOnLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
