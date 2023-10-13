// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/TaskSelectReward/QuestTaskRewardInterface.h"
#include "GameplayTagContainer.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTaskRewardInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestRewardSlot_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskRewardInterface();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskRewardInterface_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDefRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskPayload();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(IQuestTaskRewardInterface::execTaskRewardTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->TaskRewardTags_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IQuestTaskRewardInterface::execTaskRewardSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UBaseQuestRewardSlot> *)Z_Param__Result=P_THIS->TaskRewardSlot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IQuestTaskRewardInterface::execTaskRewardLocation)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_LocationNameOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskRewardLocation_Implementation(Z_Param_Out_PayloadIn,Z_Param_Out_LocationNameOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IQuestTaskRewardInterface::execTaskRewardGiver)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_STRUCT_REF(FNPCQuestDefRep,Z_Param_Out_RewardGiverOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskRewardGiver_Implementation(Z_Param_Out_PayloadIn,Z_Param_Out_RewardGiverOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IQuestTaskRewardInterface::execTaskShowsOnlyOnceInSummary)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StringID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TaskShowsOnlyOnceInSummary_Implementation(Z_Param_Out_PayloadIn,Z_Param_Out_StringID);
		P_NATIVE_END;
	}
	struct QuestTaskRewardInterface_eventTaskRewardGiver_Parms
	{
		FQuestTaskPayload PayloadIn;
		FNPCQuestDefRep RewardGiverOut;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		QuestTaskRewardInterface_eventTaskRewardGiver_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct QuestTaskRewardInterface_eventTaskRewardLocation_Parms
	{
		FQuestTaskPayload PayloadIn;
		FString LocationNameOut;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		QuestTaskRewardInterface_eventTaskRewardLocation_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct QuestTaskRewardInterface_eventTaskRewardSlot_Parms
	{
		TSubclassOf<UBaseQuestRewardSlot>  ReturnValue;

		/** Constructor, initializes return property only **/
		QuestTaskRewardInterface_eventTaskRewardSlot_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct QuestTaskRewardInterface_eventTaskRewardTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
	struct QuestTaskRewardInterface_eventTaskShowsOnlyOnceInSummary_Parms
	{
		FQuestTaskPayload PayloadIn;
		FString StringID;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		QuestTaskRewardInterface_eventTaskShowsOnlyOnceInSummary_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IQuestTaskRewardInterface::TaskRewardGiver(FQuestTaskPayload const& PayloadIn, FNPCQuestDefRep& RewardGiverOut) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TaskRewardGiver instead.");
		QuestTaskRewardInterface_eventTaskRewardGiver_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IQuestTaskRewardInterface::TaskRewardLocation(FQuestTaskPayload const& PayloadIn, FString& LocationNameOut) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TaskRewardLocation instead.");
		QuestTaskRewardInterface_eventTaskRewardLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	TSubclassOf<UBaseQuestRewardSlot>  IQuestTaskRewardInterface::TaskRewardSlot() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TaskRewardSlot instead.");
		QuestTaskRewardInterface_eventTaskRewardSlot_Parms Parms;
		return Parms.ReturnValue;
	}
	FGameplayTagContainer IQuestTaskRewardInterface::TaskRewardTags() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TaskRewardTags instead.");
		QuestTaskRewardInterface_eventTaskRewardTags_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IQuestTaskRewardInterface::TaskShowsOnlyOnceInSummary(FQuestTaskPayload const& PayloadIn, FString& StringID) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TaskShowsOnlyOnceInSummary instead.");
		QuestTaskRewardInterface_eventTaskShowsOnlyOnceInSummary_Parms Parms;
		return Parms.ReturnValue;
	}
	void UQuestTaskRewardInterface::StaticRegisterNativesUQuestTaskRewardInterface()
	{
		UClass* Class = UQuestTaskRewardInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TaskRewardGiver", &IQuestTaskRewardInterface::execTaskRewardGiver },
			{ "TaskRewardLocation", &IQuestTaskRewardInterface::execTaskRewardLocation },
			{ "TaskRewardSlot", &IQuestTaskRewardInterface::execTaskRewardSlot },
			{ "TaskRewardTags", &IQuestTaskRewardInterface::execTaskRewardTags },
			{ "TaskShowsOnlyOnceInSummary", &IQuestTaskRewardInterface::execTaskShowsOnlyOnceInSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RewardGiverOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskRewardInterface_eventTaskRewardGiver_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_RewardGiverOut = { "RewardGiverOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskRewardInterface_eventTaskRewardGiver_Parms, RewardGiverOut), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	void Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestTaskRewardInterface_eventTaskRewardGiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestTaskRewardInterface_eventTaskRewardGiver_Parms), &Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_RewardGiverOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Rewards Interface" },
		{ "Comment", "/**\n\x09*\x09""Determines if the task has a reward giver and if found, returns the definition.\n\x09*\x09""By default the reward tasks use stringA of payload for the NPCDef.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/QuestTaskRewardInterface.h" },
		{ "ToolTip", "Determines if the task has a reward giver and if found, returns the definition.\nBy default the reward tasks use stringA of payload for the NPCDef." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskRewardInterface, nullptr, "TaskRewardGiver", nullptr, nullptr, sizeof(QuestTaskRewardInterface_eventTaskRewardGiver_Parms), Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationNameOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskRewardInterface_eventTaskRewardLocation_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_LocationNameOut = { "LocationNameOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskRewardInterface_eventTaskRewardLocation_Parms, LocationNameOut), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestTaskRewardInterface_eventTaskRewardLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestTaskRewardInterface_eventTaskRewardLocation_Parms), &Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_LocationNameOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Rewards Interface" },
		{ "Comment", "/**\n\x09*\x09""Determines if the task has a location reward giver and if found, returns the location name.\n\x09*\x09""By default the reward tasks use stringA of payload for the location name.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/QuestTaskRewardInterface.h" },
		{ "ToolTip", "Determines if the task has a location reward giver and if found, returns the location name.\nBy default the reward tasks use stringA of payload for the location name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskRewardInterface, nullptr, "TaskRewardLocation", nullptr, nullptr, sizeof(QuestTaskRewardInterface_eventTaskRewardLocation_Parms), Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskRewardInterface_eventTaskRewardSlot_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseQuestRewardSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Rewards Interface" },
		{ "Comment", "/**\n\x09*\x09""Determines the task reward slot used in UI.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/QuestTaskRewardInterface.h" },
		{ "ToolTip", "Determines the task reward slot used in UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskRewardInterface, nullptr, "TaskRewardSlot", nullptr, nullptr, sizeof(QuestTaskRewardInterface_eventTaskRewardSlot_Parms), Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskRewardInterface_eventTaskRewardTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Rewards Interface" },
		{ "Comment", "/**\n\x09*\x09""Add all additional tags that you want to have for this reward task. \n\x09*\x09Useful to distinguish between different reward tasks, for example, when notifying the player that a reward has been given.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/QuestTaskRewardInterface.h" },
		{ "ToolTip", "Add all additional tags that you want to have for this reward task.\nUseful to distinguish between different reward tasks, for example, when notifying the player that a reward has been given." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskRewardInterface, nullptr, "TaskRewardTags", nullptr, nullptr, sizeof(QuestTaskRewardInterface_eventTaskRewardTags_Parms), Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskRewardInterface_eventTaskShowsOnlyOnceInSummary_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_StringID = { "StringID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestTaskRewardInterface_eventTaskShowsOnlyOnceInSummary_Parms, StringID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestTaskRewardInterface_eventTaskShowsOnlyOnceInSummary_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuestTaskRewardInterface_eventTaskShowsOnlyOnceInSummary_Parms), &Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_StringID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest Task Rewards Interface" },
		{ "Comment", "/**\n\x09*\x09""Determines if the task should show only once in summary even if there are many of it active at the same time.\n\x09*\x09Used in choose reward.\n\x09*\x09The string ID helps identify the task type. Should be unique per each task type. For Example: ItemReward.\n\x09*\x09""All tasks with same ID will be shown only once in the summary is there are more than one active at the same time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskSelectReward/QuestTaskRewardInterface.h" },
		{ "ToolTip", "Determines if the task should show only once in summary even if there are many of it active at the same time.\nUsed in choose reward.\nThe string ID helps identify the task type. Should be unique per each task type. For Example: ItemReward.\nAll tasks with same ID will be shown only once in the summary is there are more than one active at the same time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTaskRewardInterface, nullptr, "TaskShowsOnlyOnceInSummary", nullptr, nullptr, sizeof(QuestTaskRewardInterface_eventTaskShowsOnlyOnceInSummary_Parms), Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestTaskRewardInterface);
	UClass* Z_Construct_UClass_UQuestTaskRewardInterface_NoRegister()
	{
		return UQuestTaskRewardInterface::StaticClass();
	}
	struct Z_Construct_UClass_UQuestTaskRewardInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestTaskRewardInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestTaskRewardInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardGiver, "TaskRewardGiver" }, // 2443543770
		{ &Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardLocation, "TaskRewardLocation" }, // 3024144475
		{ &Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardSlot, "TaskRewardSlot" }, // 977257946
		{ &Z_Construct_UFunction_UQuestTaskRewardInterface_TaskRewardTags, "TaskRewardTags" }, // 610986238
		{ &Z_Construct_UFunction_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary, "TaskShowsOnlyOnceInSummary" }, // 531606912
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestTaskRewardInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskSelectReward/QuestTaskRewardInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestTaskRewardInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IQuestTaskRewardInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestTaskRewardInterface_Statics::ClassParams = {
		&UQuestTaskRewardInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestTaskRewardInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestTaskRewardInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestTaskRewardInterface()
	{
		if (!Z_Registration_Info_UClass_UQuestTaskRewardInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestTaskRewardInterface.OuterSingleton, Z_Construct_UClass_UQuestTaskRewardInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestTaskRewardInterface.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UQuestTaskRewardInterface>()
	{
		return UQuestTaskRewardInterface::StaticClass();
	}
	UQuestTaskRewardInterface::UQuestTaskRewardInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestTaskRewardInterface);
	UQuestTaskRewardInterface::~UQuestTaskRewardInterface() {}
	static FName NAME_UQuestTaskRewardInterface_TaskRewardGiver = FName(TEXT("TaskRewardGiver"));
	bool IQuestTaskRewardInterface::Execute_TaskRewardGiver(const UObject* O, FQuestTaskPayload const& PayloadIn, FNPCQuestDefRep& RewardGiverOut)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskRewardInterface::StaticClass()));
		QuestTaskRewardInterface_eventTaskRewardGiver_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskRewardInterface_TaskRewardGiver);
		if (Func)
		{
			Parms.PayloadIn=PayloadIn;
			Parms.RewardGiverOut=RewardGiverOut;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			RewardGiverOut=Parms.RewardGiverOut;
		}
		else if (auto I = (const IQuestTaskRewardInterface*)(O->GetNativeInterfaceAddress(UQuestTaskRewardInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TaskRewardGiver_Implementation(PayloadIn,RewardGiverOut);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UQuestTaskRewardInterface_TaskRewardLocation = FName(TEXT("TaskRewardLocation"));
	bool IQuestTaskRewardInterface::Execute_TaskRewardLocation(const UObject* O, FQuestTaskPayload const& PayloadIn, FString& LocationNameOut)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskRewardInterface::StaticClass()));
		QuestTaskRewardInterface_eventTaskRewardLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskRewardInterface_TaskRewardLocation);
		if (Func)
		{
			Parms.PayloadIn=PayloadIn;
			Parms.LocationNameOut=LocationNameOut;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			LocationNameOut=Parms.LocationNameOut;
		}
		else if (auto I = (const IQuestTaskRewardInterface*)(O->GetNativeInterfaceAddress(UQuestTaskRewardInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TaskRewardLocation_Implementation(PayloadIn,LocationNameOut);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UQuestTaskRewardInterface_TaskRewardSlot = FName(TEXT("TaskRewardSlot"));
	TSubclassOf<UBaseQuestRewardSlot>  IQuestTaskRewardInterface::Execute_TaskRewardSlot(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskRewardInterface::StaticClass()));
		QuestTaskRewardInterface_eventTaskRewardSlot_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskRewardInterface_TaskRewardSlot);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IQuestTaskRewardInterface*)(O->GetNativeInterfaceAddress(UQuestTaskRewardInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TaskRewardSlot_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UQuestTaskRewardInterface_TaskRewardTags = FName(TEXT("TaskRewardTags"));
	FGameplayTagContainer IQuestTaskRewardInterface::Execute_TaskRewardTags(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskRewardInterface::StaticClass()));
		QuestTaskRewardInterface_eventTaskRewardTags_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskRewardInterface_TaskRewardTags);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IQuestTaskRewardInterface*)(O->GetNativeInterfaceAddress(UQuestTaskRewardInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TaskRewardTags_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary = FName(TEXT("TaskShowsOnlyOnceInSummary"));
	bool IQuestTaskRewardInterface::Execute_TaskShowsOnlyOnceInSummary(const UObject* O, FQuestTaskPayload const& PayloadIn, FString& StringID)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UQuestTaskRewardInterface::StaticClass()));
		QuestTaskRewardInterface_eventTaskShowsOnlyOnceInSummary_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UQuestTaskRewardInterface_TaskShowsOnlyOnceInSummary);
		if (Func)
		{
			Parms.PayloadIn=PayloadIn;
			Parms.StringID=StringID;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			StringID=Parms.StringID;
		}
		else if (auto I = (const IQuestTaskRewardInterface*)(O->GetNativeInterfaceAddress(UQuestTaskRewardInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TaskShowsOnlyOnceInSummary_Implementation(PayloadIn,StringID);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestTaskRewardInterface, UQuestTaskRewardInterface::StaticClass, TEXT("UQuestTaskRewardInterface"), &Z_Registration_Info_UClass_UQuestTaskRewardInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestTaskRewardInterface), 1787775328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_88490541(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_TaskSelectReward_QuestTaskRewardInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
