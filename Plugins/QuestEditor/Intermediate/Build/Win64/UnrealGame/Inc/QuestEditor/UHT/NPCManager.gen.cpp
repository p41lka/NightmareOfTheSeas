// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Npc/NPCManager.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UNPCManager();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UNPCManager_NoRegister();
	QUESTEDITOR_API UFunction* Z_Construct_UDelegateFunction_QuestEditor_NoParamsDelegateNPCManager__DelegateSignature();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestDefRep();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestRep();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestEditor_NoParamsDelegateNPCManager__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditor_NoParamsDelegateNPCManager__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------DISPATCHERS DEFINITIONS-----------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "------------------------------------------DISPATCHERS DEFINITIONS-----------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditor_NoParamsDelegateNPCManager__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditor, nullptr, "NoParamsDelegateNPCManager__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditor_NoParamsDelegateNPCManager__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditor_NoParamsDelegateNPCManager__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditor_NoParamsDelegateNPCManager__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditor_NoParamsDelegateNPCManager__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FNoParamsDelegateNPCManager_DelegateWrapper(const FMulticastScriptDelegate& NoParamsDelegateNPCManager)
{
	NoParamsDelegateNPCManager.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UNPCManager::execGetNPCName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNPCName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCManager::execGetNPCQuestDefRep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNPCQuestDefRep*)Z_Param__Result=P_THIS->GetNPCQuestDefRep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCManager::execGetNPCDialogsRep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestRep>*)Z_Param__Result=P_THIS->GetNPCDialogsRep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCManager::execGetNPCDialogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuest>*)Z_Param__Result=P_THIS->GetNPCDialogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCManager::execGetNPCQuestsRep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuestRep>*)Z_Param__Result=P_THIS->GetNPCQuestsRep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCManager::execGetNPCQuests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuest>*)Z_Param__Result=P_THIS->GetNPCQuests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCManager::execSetManagerNPC)
	{
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_NPCIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManagerNPC(Z_Param_Out_NPCIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCManager::execStartManagerFromDef)
	{
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_NPCIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartManagerFromDef(Z_Param_Out_NPCIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCManager::execOnRep_NPCDef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NPCDef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCManager::execROS_StartNPCManager)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_NPCIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ROS_StartNPCManager_Validate(Z_Param_NPCIn))
		{
			RPC_ValidateFailed(TEXT("ROS_StartNPCManager_Validate"));
			return;
		}
		P_THIS->ROS_StartNPCManager_Implementation(Z_Param_NPCIn);
		P_NATIVE_END;
	}
	struct NPCManager_eventROS_StartNPCManager_Parms
	{
		FDataTableRowHandle NPCIn;
	};
	static FName NAME_UNPCManager_ROS_StartNPCManager = FName(TEXT("ROS_StartNPCManager"));
	void UNPCManager::ROS_StartNPCManager(FDataTableRowHandle const& NPCIn)
	{
		NPCManager_eventROS_StartNPCManager_Parms Parms;
		Parms.NPCIn=NPCIn;
		ProcessEvent(FindFunctionChecked(NAME_UNPCManager_ROS_StartNPCManager),&Parms);
	}
	void UNPCManager::StaticRegisterNativesUNPCManager()
	{
		UClass* Class = UNPCManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNPCDialogs", &UNPCManager::execGetNPCDialogs },
			{ "GetNPCDialogsRep", &UNPCManager::execGetNPCDialogsRep },
			{ "GetNPCName", &UNPCManager::execGetNPCName },
			{ "GetNPCQuestDefRep", &UNPCManager::execGetNPCQuestDefRep },
			{ "GetNPCQuests", &UNPCManager::execGetNPCQuests },
			{ "GetNPCQuestsRep", &UNPCManager::execGetNPCQuestsRep },
			{ "OnRep_NPCDef", &UNPCManager::execOnRep_NPCDef },
			{ "ROS_StartNPCManager", &UNPCManager::execROS_StartNPCManager },
			{ "SetManagerNPC", &UNPCManager::execSetManagerNPC },
			{ "StartManagerFromDef", &UNPCManager::execStartManagerFromDef },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics
	{
		struct NPCManager_eventGetNPCDialogs_Parms
		{
			TArray<FQuest> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCManager_eventGetNPCDialogs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "Comment", "/*Get NPC dialogs.*/" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "Get NPC dialogs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCManager, nullptr, "GetNPCDialogs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::NPCManager_eventGetNPCDialogs_Parms), Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCManager_GetNPCDialogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCManager_GetNPCDialogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics
	{
		struct NPCManager_eventGetNPCDialogsRep_Parms
		{
			TArray<FQuestRep> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCManager_eventGetNPCDialogsRep_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCManager, nullptr, "GetNPCDialogsRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::NPCManager_eventGetNPCDialogsRep_Parms), Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCManager_GetNPCName_Statics
	{
		struct NPCManager_eventGetNPCName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCManager_eventGetNPCName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCManager, nullptr, "GetNPCName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::NPCManager_eventGetNPCName_Parms), Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCManager_GetNPCName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCManager_GetNPCName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics
	{
		struct NPCManager_eventGetNPCQuestDefRep_Parms
		{
			FNPCQuestDefRep ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCManager_eventGetNPCQuestDefRep_Parms, ReturnValue), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(nullptr, 0) }; // 3466971976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCManager, nullptr, "GetNPCQuestDefRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::NPCManager_eventGetNPCQuestDefRep_Parms), Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics
	{
		struct NPCManager_eventGetNPCQuests_Parms
		{
			TArray<FQuest> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCManager_eventGetNPCQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1952640410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "Comment", "/*Get NPC quests.*/" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "Get NPC quests." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCManager, nullptr, "GetNPCQuests", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::NPCManager_eventGetNPCQuests_Parms), Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCManager_GetNPCQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCManager_GetNPCQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics
	{
		struct NPCManager_eventGetNPCQuestsRep_Parms
		{
			TArray<FQuestRep> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestRep, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCManager_eventGetNPCQuestsRep_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2639361420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCManager, nullptr, "GetNPCQuestsRep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::NPCManager_eventGetNPCQuestsRep_Parms), Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCManager_OnRep_NPCDef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_OnRep_NPCDef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCManager_OnRep_NPCDef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCManager, nullptr, "OnRep_NPCDef", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_OnRep_NPCDef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_OnRep_NPCDef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCManager_OnRep_NPCDef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCManager_OnRep_NPCDef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::NewProp_NPCIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::NewProp_NPCIn = { "NPCIn", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCManager_eventROS_StartNPCManager_Parms, NPCIn), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::NewProp_NPCIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::NewProp_NPCIn_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::NewProp_NPCIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Server Events" },
		{ "Comment", "/**\n\x09*\x09""Changes the Npc information and load all the variables needed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "Changes the Npc information and load all the variables needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCManager, nullptr, "ROS_StartNPCManager", nullptr, nullptr, sizeof(NPCManager_eventROS_StartNPCManager_Parms), Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics
	{
		struct NPCManager_eventSetManagerNPC_Parms
		{
			FDataTableRowHandle NPCIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::NewProp_NPCIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::NewProp_NPCIn = { "NPCIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCManager_eventSetManagerNPC_Parms, NPCIn), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::NewProp_NPCIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::NewProp_NPCIn_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::NewProp_NPCIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC Start" },
		{ "Comment", "/**\n\x09*\x09""Changes the npc datatable handle dinamically.\n\x09*\x09Safe to call from construct, before loading is completed, use ROS_StartNPCManager otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "Changes the npc datatable handle dinamically.\nSafe to call from construct, before loading is completed, use ROS_StartNPCManager otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCManager, nullptr, "SetManagerNPC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::NPCManager_eventSetManagerNPC_Parms), Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCManager_SetManagerNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCManager_SetManagerNPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics
	{
		struct NPCManager_eventStartManagerFromDef_Parms
		{
			FDataTableRowHandle NPCIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::NewProp_NPCIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::NewProp_NPCIn = { "NPCIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCManager_eventStartManagerFromDef_Parms, NPCIn), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::NewProp_NPCIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::NewProp_NPCIn_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::NewProp_NPCIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------FUNCTIONS------------------------------------------------------\x09\n//-----------------------------------------Manager\x09\n" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "------------------------------------------FUNCTIONS------------------------------------------------------\n-----------------------------------------Manager" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCManager, nullptr, "StartManagerFromDef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::NPCManager_eventStartManagerFromDef_Parms), Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCManager_StartManagerFromDef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCManager_StartManagerFromDef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCManager);
	UClass* Z_Construct_UClass_UNPCManager_NoRegister()
	{
		return UNPCManager::StaticClass();
	}
	struct Z_Construct_UClass_UNPCManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NPCUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCQuestDefRep_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCQuestDefRep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleStartAutomatically_MetaData[];
#endif
		static void NewProp_HandleStartAutomatically_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HandleStartAutomatically;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNPCManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCManager_GetNPCDialogs, "GetNPCDialogs" }, // 4173800799
		{ &Z_Construct_UFunction_UNPCManager_GetNPCDialogsRep, "GetNPCDialogsRep" }, // 897369472
		{ &Z_Construct_UFunction_UNPCManager_GetNPCName, "GetNPCName" }, // 108758475
		{ &Z_Construct_UFunction_UNPCManager_GetNPCQuestDefRep, "GetNPCQuestDefRep" }, // 2863599107
		{ &Z_Construct_UFunction_UNPCManager_GetNPCQuests, "GetNPCQuests" }, // 3879777384
		{ &Z_Construct_UFunction_UNPCManager_GetNPCQuestsRep, "GetNPCQuestsRep" }, // 1846190550
		{ &Z_Construct_UFunction_UNPCManager_OnRep_NPCDef, "OnRep_NPCDef" }, // 3633022877
		{ &Z_Construct_UFunction_UNPCManager_ROS_StartNPCManager, "ROS_StartNPCManager" }, // 3894602280
		{ &Z_Construct_UFunction_UNPCManager_SetManagerNPC, "SetManagerNPC" }, // 3946263662
		{ &Z_Construct_UFunction_UNPCManager_StartManagerFromDef, "StartManagerFromDef" }, // 4033681716
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Npc/NPCManager.h" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCUpdated_MetaData[] = {
		{ "Category", "Notify" },
		{ "Comment", "/*Called when the NPC is updated on repnotify.*/" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "Called when the NPC is updated on repnotify." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCUpdated = { "NPCUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCManager, NPCUpdated), Z_Construct_UDelegateFunction_QuestEditor_NoParamsDelegateNPCManager__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCUpdated_MetaData)) }; // 1437495927
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCQuestDefRep_MetaData[] = {
		{ "Comment", "//------------------------------------------NPC\n" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "------------------------------------------NPC" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCQuestDefRep = { "NPCQuestDefRep", "OnRep_NPCDef", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCManager, NPCQuestDefRep), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCQuestDefRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCQuestDefRep_MetaData)) }; // 3466971976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCManager_Statics::NewProp_HandleStartAutomatically_MetaData[] = {
		{ "Category", "NPC Start" },
		{ "Comment", "/*If true, the starting will be handled automatically using NPCInfo data on Begin play*/" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "If true, the starting will be handled automatically using NPCInfo data on Begin play" },
	};
#endif
	void Z_Construct_UClass_UNPCManager_Statics::NewProp_HandleStartAutomatically_SetBit(void* Obj)
	{
		((UNPCManager*)Obj)->HandleStartAutomatically = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCManager_Statics::NewProp_HandleStartAutomatically = { "HandleStartAutomatically", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNPCManager), &Z_Construct_UClass_UNPCManager_Statics::NewProp_HandleStartAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNPCManager_Statics::NewProp_HandleStartAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCManager_Statics::NewProp_HandleStartAutomatically_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCInfo_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09Npc def to start manager automatically.\n\x09*\x09""DEPRECATED - This variable should not be available to set anymore. It is hidden now from bps. Deleting it could cause data loss.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "Npc def to start manager automatically.\nDEPRECATED - This variable should not be available to set anymore. It is hidden now from bps. Deleting it could cause data loss." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCInfo = { "NPCInfo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCManager, NPCInfo), Z_Construct_UScriptStruct_FNPCQuestDefRep, METADATA_PARAMS(Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCInfo_MetaData)) }; // 3466971976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCManager_Statics::NewProp_NPC_MetaData[] = {
		{ "Category", "NPC Start" },
		{ "Comment", "/*The NPC handle*/" },
		{ "ModuleRelativePath", "Public/Npc/NPCManager.h" },
		{ "ToolTip", "The NPC handle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCManager_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCManager, NPC), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UNPCManager_Statics::NewProp_NPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCManager_Statics::NewProp_NPC_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCQuestDefRep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCManager_Statics::NewProp_HandleStartAutomatically,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCManager_Statics::NewProp_NPCInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCManager_Statics::NewProp_NPC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCManager_Statics::ClassParams = {
		&UNPCManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNPCManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNPCManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNPCManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNPCManager()
	{
		if (!Z_Registration_Info_UClass_UNPCManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCManager.OuterSingleton, Z_Construct_UClass_UNPCManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCManager.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UNPCManager>()
	{
		return UNPCManager::StaticClass();
	}

	void UNPCManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NPCQuestDefRep(TEXT("NPCQuestDefRep"));

		const bool bIsValid = true
			&& Name_NPCQuestDefRep == ClassReps[(int32)ENetFields_Private::NPCQuestDefRep].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNPCManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCManager);
	UNPCManager::~UNPCManager() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNPCManager)
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCManager, UNPCManager::StaticClass, TEXT("UNPCManager"), &Z_Registration_Info_UClass_UNPCManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCManager), 2116281686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_388831757(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditor_Public_Npc_NPCManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
