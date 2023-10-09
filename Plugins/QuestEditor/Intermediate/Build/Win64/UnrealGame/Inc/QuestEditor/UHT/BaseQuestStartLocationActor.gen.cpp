// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Npc/BaseQuestStartLocationActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuestStartLocationActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	QUESTEDITOR_API UClass* Z_Construct_UClass_ABaseQuestStartLocationActor();
	QUESTEDITOR_API UClass* Z_Construct_UClass_ABaseQuestStartLocationActor_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UNPCManager_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(ABaseQuestStartLocationActor::execGetQuestManagerReference)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestManager**)Z_Param__Result=P_THIS->GetQuestManagerReference_Implementation(Z_Param_OverlappingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseQuestStartLocationActor::execOnOverlapCondition)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnOverlapCondition_Implementation(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseQuestStartLocationActor::execOnOverlapActorEvent)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapActorEvent_Implementation(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseQuestStartLocationActor::execOnBeginOverlap_LocationSphere)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap_LocationSphere(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	struct BaseQuestStartLocationActor_eventGetQuestManagerReference_Parms
	{
		AActor* OverlappingActor;
		UQuestManager* ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestStartLocationActor_eventGetQuestManagerReference_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct BaseQuestStartLocationActor_eventOnOverlapActorEvent_Parms
	{
		AActor* OtherActor;
	};
	struct BaseQuestStartLocationActor_eventOnOverlapCondition_Parms
	{
		AActor* OtherActor;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestStartLocationActor_eventOnOverlapCondition_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_ABaseQuestStartLocationActor_GetQuestManagerReference = FName(TEXT("GetQuestManagerReference"));
	UQuestManager* ABaseQuestStartLocationActor::GetQuestManagerReference(AActor* OverlappingActor)
	{
		BaseQuestStartLocationActor_eventGetQuestManagerReference_Parms Parms;
		Parms.OverlappingActor=OverlappingActor;
		ProcessEvent(FindFunctionChecked(NAME_ABaseQuestStartLocationActor_GetQuestManagerReference),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseQuestStartLocationActor_OnOverlapActorEvent = FName(TEXT("OnOverlapActorEvent"));
	void ABaseQuestStartLocationActor::OnOverlapActorEvent(AActor* OtherActor)
	{
		BaseQuestStartLocationActor_eventOnOverlapActorEvent_Parms Parms;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_ABaseQuestStartLocationActor_OnOverlapActorEvent),&Parms);
	}
	static FName NAME_ABaseQuestStartLocationActor_OnOverlapCondition = FName(TEXT("OnOverlapCondition"));
	bool ABaseQuestStartLocationActor::OnOverlapCondition(AActor* OtherActor)
	{
		BaseQuestStartLocationActor_eventOnOverlapCondition_Parms Parms;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_ABaseQuestStartLocationActor_OnOverlapCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	void ABaseQuestStartLocationActor::StaticRegisterNativesABaseQuestStartLocationActor()
	{
		UClass* Class = ABaseQuestStartLocationActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetQuestManagerReference", &ABaseQuestStartLocationActor::execGetQuestManagerReference },
			{ "OnBeginOverlap_LocationSphere", &ABaseQuestStartLocationActor::execOnBeginOverlap_LocationSphere },
			{ "OnOverlapActorEvent", &ABaseQuestStartLocationActor::execOnOverlapActorEvent },
			{ "OnOverlapCondition", &ABaseQuestStartLocationActor::execOnOverlapCondition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::NewProp_OverlappingActor = { "OverlappingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestStartLocationActor_eventGetQuestManagerReference_Parms, OverlappingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestStartLocationActor_eventGetQuestManagerReference_Parms, ReturnValue), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::NewProp_OverlappingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Start Location Actor" },
		{ "Comment", "/**\n\x09*\x09Overrideable function to get the quest manager reference from the overlapping actor.\n\x09*\x09""By default considers the quest manager is in the player state, and the actor is a character pawn.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Npc/BaseQuestStartLocationActor.h" },
		{ "ToolTip", "Overrideable function to get the quest manager reference from the overlapping actor.\nBy default considers the quest manager is in the player state, and the actor is a character pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseQuestStartLocationActor, nullptr, "GetQuestManagerReference", nullptr, nullptr, sizeof(BaseQuestStartLocationActor_eventGetQuestManagerReference_Parms), Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics
	{
		struct BaseQuestStartLocationActor_eventOnBeginOverlap_LocationSphere_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestStartLocationActor_eventOnBeginOverlap_LocationSphere_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestStartLocationActor_eventOnBeginOverlap_LocationSphere_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestStartLocationActor_eventOnBeginOverlap_LocationSphere_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestStartLocationActor_eventOnBeginOverlap_LocationSphere_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseQuestStartLocationActor_eventOnBeginOverlap_LocationSphere_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestStartLocationActor_eventOnBeginOverlap_LocationSphere_Parms), &Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestStartLocationActor_eventOnBeginOverlap_LocationSphere_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//-----------------------Overlap spheres\n" },
		{ "ModuleRelativePath", "Public/Npc/BaseQuestStartLocationActor.h" },
		{ "ToolTip", "-----------------------Overlap spheres" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseQuestStartLocationActor, nullptr, "OnBeginOverlap_LocationSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::BaseQuestStartLocationActor_eventOnBeginOverlap_LocationSphere_Parms), Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestStartLocationActor_eventOnOverlapActorEvent_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Start Location Actor" },
		{ "Comment", "/**Overrideable function with the logic after overlapping, for this actor in particular, it will try to give the quests to the player.*/" },
		{ "ModuleRelativePath", "Public/Npc/BaseQuestStartLocationActor.h" },
		{ "ToolTip", "Overrideable function with the logic after overlapping, for this actor in particular, it will try to give the quests to the player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseQuestStartLocationActor, nullptr, "OnOverlapActorEvent", nullptr, nullptr, sizeof(BaseQuestStartLocationActor_eventOnOverlapActorEvent_Parms), Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestStartLocationActor_eventOnOverlapCondition_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestStartLocationActor_eventOnOverlapCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestStartLocationActor_eventOnOverlapCondition_Parms), &Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Start Location Actor" },
		{ "Comment", "/**\n\x09*\x09Overrideable function for a condition to check before executing the OnOverlapEvent.\n\x09*\x09You can use this condition to filter actor overlaps that you dont want to execute overlap logic.\n\x09*\x09True by default.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Npc/BaseQuestStartLocationActor.h" },
		{ "ToolTip", "Overrideable function for a condition to check before executing the OnOverlapEvent.\nYou can use this condition to filter actor overlaps that you dont want to execute overlap logic.\nTrue by default." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseQuestStartLocationActor, nullptr, "OnOverlapCondition", nullptr, nullptr, sizeof(BaseQuestStartLocationActor_eventOnOverlapCondition_Parms), Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseQuestStartLocationActor);
	UClass* Z_Construct_UClass_ABaseQuestStartLocationActor_NoRegister()
	{
		return ABaseQuestStartLocationActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseQuestStartLocationActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCManagerReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCManagerReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseQuestStartLocationActor_GetQuestManagerReference, "GetQuestManagerReference" }, // 986145521
		{ &Z_Construct_UFunction_ABaseQuestStartLocationActor_OnBeginOverlap_LocationSphere, "OnBeginOverlap_LocationSphere" }, // 2631362563
		{ &Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapActorEvent, "OnOverlapActorEvent" }, // 2044982817
		{ &Z_Construct_UFunction_ABaseQuestStartLocationActor_OnOverlapCondition, "OnOverlapCondition" }, // 2354926146
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Npc/BaseQuestStartLocationActor.h" },
		{ "ModuleRelativePath", "Public/Npc/BaseQuestStartLocationActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Scene Component" },
		{ "Comment", "/** Scene root.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Npc/BaseQuestStartLocationActor.h" },
		{ "ToolTip", "Scene root." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseQuestStartLocationActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_LocationArea_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Location Sphere" },
		{ "Comment", "/** The are in wich the quests will be given on overlap*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Npc/BaseQuestStartLocationActor.h" },
		{ "ToolTip", "The are in wich the quests will be given on overlap" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_LocationArea = { "LocationArea", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseQuestStartLocationActor, LocationArea), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_LocationArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_LocationArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_NPCManagerReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NPC" },
		{ "Comment", "/** The NPC manager reference for this location. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Npc/BaseQuestStartLocationActor.h" },
		{ "ToolTip", "The NPC manager reference for this location." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_NPCManagerReference = { "NPCManagerReference", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseQuestStartLocationActor, NPCManagerReference), Z_Construct_UClass_UNPCManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_NPCManagerReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_NPCManagerReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_LocationArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::NewProp_NPCManagerReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseQuestStartLocationActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::ClassParams = {
		&ABaseQuestStartLocationActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseQuestStartLocationActor()
	{
		if (!Z_Registration_Info_UClass_ABaseQuestStartLocationActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseQuestStartLocationActor.OuterSingleton, Z_Construct_UClass_ABaseQuestStartLocationActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseQuestStartLocationActor.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<ABaseQuestStartLocationActor>()
	{
		return ABaseQuestStartLocationActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseQuestStartLocationActor);
	ABaseQuestStartLocationActor::~ABaseQuestStartLocationActor() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseQuestStartLocationActor, ABaseQuestStartLocationActor::StaticClass, TEXT("ABaseQuestStartLocationActor"), &Z_Registration_Info_UClass_ABaseQuestStartLocationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseQuestStartLocationActor), 1035318563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_1571575943(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_BaseQuestStartLocationActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
