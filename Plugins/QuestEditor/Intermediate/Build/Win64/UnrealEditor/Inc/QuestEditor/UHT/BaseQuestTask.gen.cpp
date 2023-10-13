// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditor/Public/Task/BaseQuestTask.h"
#include "QuestEditor/Public/Quest/QuestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuestTask() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UBaseQuestTask_NoRegister();
	QUESTEDITOR_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
	QUESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTaskPayload();
	UPackage* Z_Construct_UPackage__Script_QuestEditor();
// End Cross Module References
	DEFINE_FUNCTION(UBaseQuestTask::execGetCustomPayloadDataByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CustomPayloadSlotIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCustomPayloadDataByIndex(Z_Param_CustomPayloadSlotIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execGetCustomPayloadData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetCustomPayloadData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execEndQuestTask)
	{
		P_GET_UBOOL(Z_Param_Result);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndQuestTask(Z_Param_Result,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execGetTaskScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTaskScore_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execActivateCondition)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_TARRAY_REF(FString,Z_Param_Out_CustomPayloadDataIn);
		P_GET_OBJECT(UQuestManager,Z_Param_QuestManagerIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateCondition_Implementation(Z_Param_Out_PayloadIn,Z_Param_Out_CustomPayloadDataIn,Z_Param_QuestManagerIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execOnQuestTaskDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskDestroyed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execOnQuestTaskFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskFailed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execOnQuestTaskDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskDisabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execOnQuestTaskCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskCompleted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execOnQuestTaskSaved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskSaved_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execOnQuestTaskLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execOnQuestTaskActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestTaskActivated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execReduceQuestSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceQuestSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execGetTaskActivationCondition)
	{
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIn);
		P_GET_TARRAY_REF(FString,Z_Param_Out_CustomPayloadDataIn);
		P_GET_OBJECT(UQuestManager,Z_Param_QuestManagerIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTaskActivationCondition(Z_Param_Out_PayloadIn,Z_Param_Out_CustomPayloadDataIn,Z_Param_QuestManagerIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execGetTaskConditionOnlyStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTaskConditionOnlyStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execGetParticularTaskScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetParticularTaskScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execDestroyQuestTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyQuestTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execFailQuestTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FailQuestTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execDisableQuestTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableQuestTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execCompleteQuestTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteQuestTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execSaveQuestTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveQuestTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execLoadQuestTask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestSlotIN);
		P_GET_PROPERTY(FIntProperty,Z_Param_TaskSlotIN);
		P_GET_UBOOL(Z_Param_IsDialogTaskIN);
		P_GET_OBJECT(AActor,Z_Param_QuestManagerOwnerIN);
		P_GET_OBJECT(UQuestManager,Z_Param_QuestManagerReferenceIN);
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIN);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadQuestTask(Z_Param_QuestSlotIN,Z_Param_TaskSlotIN,Z_Param_IsDialogTaskIN,Z_Param_QuestManagerOwnerIN,Z_Param_QuestManagerReferenceIN,Z_Param_Out_PayloadIN);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseQuestTask::execStartQuestTask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestSlotIN);
		P_GET_PROPERTY(FIntProperty,Z_Param_TaskSlotIN);
		P_GET_UBOOL(Z_Param_IsDialogTaskIN);
		P_GET_OBJECT(AActor,Z_Param_QuestManagerOwnerIN);
		P_GET_OBJECT(UQuestManager,Z_Param_QuestManagerReferenceIN);
		P_GET_STRUCT_REF(FQuestTaskPayload,Z_Param_Out_PayloadIN);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartQuestTask(Z_Param_QuestSlotIN,Z_Param_TaskSlotIN,Z_Param_IsDialogTaskIN,Z_Param_QuestManagerOwnerIN,Z_Param_QuestManagerReferenceIN,Z_Param_Out_PayloadIN);
		P_NATIVE_END;
	}
	struct BaseQuestTask_eventActivateCondition_Parms
	{
		FQuestTaskPayload PayloadIn;
		TArray<FString> CustomPayloadDataIn;
		const UQuestManager* QuestManagerIn;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestTask_eventActivateCondition_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct BaseQuestTask_eventGetTaskScore_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		BaseQuestTask_eventGetTaskScore_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UBaseQuestTask_ActivateCondition = FName(TEXT("ActivateCondition"));
	bool UBaseQuestTask::ActivateCondition(FQuestTaskPayload const& PayloadIn, TArray<FString> const& CustomPayloadDataIn, const UQuestManager* QuestManagerIn) const
	{
		BaseQuestTask_eventActivateCondition_Parms Parms;
		Parms.PayloadIn=PayloadIn;
		Parms.CustomPayloadDataIn=CustomPayloadDataIn;
		Parms.QuestManagerIn=QuestManagerIn;
		const_cast<UBaseQuestTask*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_ActivateCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestTask_GetTaskScore = FName(TEXT("GetTaskScore"));
	int32 UBaseQuestTask::GetTaskScore()
	{
		BaseQuestTask_eventGetTaskScore_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_GetTaskScore),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseQuestTask_OnQuestTaskActivated = FName(TEXT("OnQuestTaskActivated"));
	void UBaseQuestTask::OnQuestTaskActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_OnQuestTaskActivated),NULL);
	}
	static FName NAME_UBaseQuestTask_OnQuestTaskCompleted = FName(TEXT("OnQuestTaskCompleted"));
	void UBaseQuestTask::OnQuestTaskCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_OnQuestTaskCompleted),NULL);
	}
	static FName NAME_UBaseQuestTask_OnQuestTaskDestroyed = FName(TEXT("OnQuestTaskDestroyed"));
	void UBaseQuestTask::OnQuestTaskDestroyed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_OnQuestTaskDestroyed),NULL);
	}
	static FName NAME_UBaseQuestTask_OnQuestTaskDisabled = FName(TEXT("OnQuestTaskDisabled"));
	void UBaseQuestTask::OnQuestTaskDisabled()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_OnQuestTaskDisabled),NULL);
	}
	static FName NAME_UBaseQuestTask_OnQuestTaskFailed = FName(TEXT("OnQuestTaskFailed"));
	void UBaseQuestTask::OnQuestTaskFailed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_OnQuestTaskFailed),NULL);
	}
	static FName NAME_UBaseQuestTask_OnQuestTaskLoaded = FName(TEXT("OnQuestTaskLoaded"));
	void UBaseQuestTask::OnQuestTaskLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_OnQuestTaskLoaded),NULL);
	}
	static FName NAME_UBaseQuestTask_OnQuestTaskSaved = FName(TEXT("OnQuestTaskSaved"));
	void UBaseQuestTask::OnQuestTaskSaved()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseQuestTask_OnQuestTaskSaved),NULL);
	}
	void UBaseQuestTask::StaticRegisterNativesUBaseQuestTask()
	{
		UClass* Class = UBaseQuestTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateCondition", &UBaseQuestTask::execActivateCondition },
			{ "CompleteQuestTask", &UBaseQuestTask::execCompleteQuestTask },
			{ "DestroyQuestTask", &UBaseQuestTask::execDestroyQuestTask },
			{ "DisableQuestTask", &UBaseQuestTask::execDisableQuestTask },
			{ "EndQuestTask", &UBaseQuestTask::execEndQuestTask },
			{ "FailQuestTask", &UBaseQuestTask::execFailQuestTask },
			{ "GetCustomPayloadData", &UBaseQuestTask::execGetCustomPayloadData },
			{ "GetCustomPayloadDataByIndex", &UBaseQuestTask::execGetCustomPayloadDataByIndex },
			{ "GetParticularTaskScore", &UBaseQuestTask::execGetParticularTaskScore },
			{ "GetTaskActivationCondition", &UBaseQuestTask::execGetTaskActivationCondition },
			{ "GetTaskConditionOnlyStatus", &UBaseQuestTask::execGetTaskConditionOnlyStatus },
			{ "GetTaskScore", &UBaseQuestTask::execGetTaskScore },
			{ "LoadQuestTask", &UBaseQuestTask::execLoadQuestTask },
			{ "OnQuestTaskActivated", &UBaseQuestTask::execOnQuestTaskActivated },
			{ "OnQuestTaskCompleted", &UBaseQuestTask::execOnQuestTaskCompleted },
			{ "OnQuestTaskDestroyed", &UBaseQuestTask::execOnQuestTaskDestroyed },
			{ "OnQuestTaskDisabled", &UBaseQuestTask::execOnQuestTaskDisabled },
			{ "OnQuestTaskFailed", &UBaseQuestTask::execOnQuestTaskFailed },
			{ "OnQuestTaskLoaded", &UBaseQuestTask::execOnQuestTaskLoaded },
			{ "OnQuestTaskSaved", &UBaseQuestTask::execOnQuestTaskSaved },
			{ "ReduceQuestSlot", &UBaseQuestTask::execReduceQuestSlot },
			{ "SaveQuestTask", &UBaseQuestTask::execSaveQuestTask },
			{ "StartQuestTask", &UBaseQuestTask::execStartQuestTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomPayloadDataIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadDataIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomPayloadDataIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManagerIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventActivateCondition_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_CustomPayloadDataIn_Inner = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_CustomPayloadDataIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_CustomPayloadDataIn = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventActivateCondition_Parms, CustomPayloadDataIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_CustomPayloadDataIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_CustomPayloadDataIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_QuestManagerIn_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_QuestManagerIn = { "QuestManagerIn", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventActivateCondition_Parms, QuestManagerIn), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_QuestManagerIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_QuestManagerIn_MetaData)) };
	void Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestTask_eventActivateCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_eventActivateCondition_Parms), &Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_CustomPayloadDataIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_CustomPayloadDataIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_QuestManagerIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**\n\x09*\x09Overrideable function with the task logic for the task condition check on activate. \n\x09*\x09This function needs to function without spawning the object, therefore cant use variables from the task. Only inputs of this function.\n\x09*\x09When task mets all required nodes states, it will attempt to activate. \n\x09*\x09If the condition is met, the task will activate.\n\x09*\x09If the condition is not met the task will fail.\n\x09*\x09Nodes that are condition only will complete upon activation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Overrideable function with the task logic for the task condition check on activate.\nThis function needs to function without spawning the object, therefore cant use variables from the task. Only inputs of this function.\nWhen task mets all required nodes states, it will attempt to activate.\nIf the condition is met, the task will activate.\nIf the condition is not met the task will fail.\nNodes that are condition only will complete upon activation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "ActivateCondition", nullptr, nullptr, sizeof(BaseQuestTask_eventActivateCondition_Parms), Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_ActivateCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_ActivateCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_CompleteQuestTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_CompleteQuestTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Callend when the task is completed*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Callend when the task is completed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_CompleteQuestTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "CompleteQuestTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_CompleteQuestTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_CompleteQuestTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_CompleteQuestTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_CompleteQuestTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_DestroyQuestTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_DestroyQuestTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Callend when the task is destroyed*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Callend when the task is destroyed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_DestroyQuestTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "DestroyQuestTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_DestroyQuestTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_DestroyQuestTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_DestroyQuestTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_DestroyQuestTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_DisableQuestTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_DisableQuestTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Callend when the task is disabled while being active. If the task is not active, this will not execute, even when the task is internally disabled. Tasks are disabled by other tasks or when fail*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Callend when the task is disabled while being active. If the task is not active, this will not execute, even when the task is internally disabled. Tasks are disabled by other tasks or when fail" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_DisableQuestTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "DisableQuestTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_DisableQuestTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_DisableQuestTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_DisableQuestTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_DisableQuestTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics
	{
		struct BaseQuestTask_eventEndQuestTask_Parms
		{
			bool Result;
			int32 Amount;
		};
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((BaseQuestTask_eventEndQuestTask_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_eventEndQuestTask_Parms), &Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventEndQuestTask_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**\n\x09* Called when the task ends. Must always be called in the task execution.\n\x09* If returns true, the task track will be updated acording to the amount value. Negative values can decrease the track.\n\x09* If returns false, the task will fail. The amount does not matter in this case.\n\x09* WARNING - This function should be called last in the execution. If you connect something after this node it is possible that it does NOT work correctly or even crashes.\n\x09* @Param Amount This is the amount that the track considers when updates the task current value. It can be usefull to check several tasks at once and commit only one time the final value. It can also be negative.\n\x09* The value on track can't go below 0 or past max. The value will be clamped if that is the case.\n\x09*/" },
		{ "CPP_Default_Amount", "1" },
		{ "CPP_Default_Result", "true" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Called when the task ends. Must always be called in the task execution.\nIf returns true, the task track will be updated acording to the amount value. Negative values can decrease the track.\nIf returns false, the task will fail. The amount does not matter in this case.\nWARNING - This function should be called last in the execution. If you connect something after this node it is possible that it does NOT work correctly or even crashes.\n@Param Amount This is the amount that the track considers when updates the task current value. It can be usefull to check several tasks at once and commit only one time the final value. It can also be negative.\nThe value on track can't go below 0 or past max. The value will be clamped if that is the case." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "EndQuestTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::BaseQuestTask_eventEndQuestTask_Parms), Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_EndQuestTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_EndQuestTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_FailQuestTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_FailQuestTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Callend when the task fails*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Callend when the task fails" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_FailQuestTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "FailQuestTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_FailQuestTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_FailQuestTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_FailQuestTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_FailQuestTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics
	{
		struct BaseQuestTask_eventGetCustomPayloadData_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventGetCustomPayloadData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/*Retrieves Custom Payload data for this task.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Retrieves Custom Payload data for this task." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "GetCustomPayloadData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::BaseQuestTask_eventGetCustomPayloadData_Parms), Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics
	{
		struct BaseQuestTask_eventGetCustomPayloadDataByIndex_Parms
		{
			int32 CustomPayloadSlotIn;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CustomPayloadSlotIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::NewProp_CustomPayloadSlotIn = { "CustomPayloadSlotIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventGetCustomPayloadDataByIndex_Parms, CustomPayloadSlotIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventGetCustomPayloadDataByIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::NewProp_CustomPayloadSlotIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/*Retrieves Custom Payload data for this task with a specific index. If the index is invalid returns empty string.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Retrieves Custom Payload data for this task with a specific index. If the index is invalid returns empty string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "GetCustomPayloadDataByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::BaseQuestTask_eventGetCustomPayloadDataByIndex_Parms), Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics
	{
		struct BaseQuestTask_eventGetParticularTaskScore_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventGetParticularTaskScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Gets the task score.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Gets the task score." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "GetParticularTaskScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::BaseQuestTask_eventGetParticularTaskScore_Parms), Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics
	{
		struct BaseQuestTask_eventGetTaskActivationCondition_Parms
		{
			FQuestTaskPayload PayloadIn;
			TArray<FString> CustomPayloadDataIn;
			UQuestManager* QuestManagerIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomPayloadDataIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadDataIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomPayloadDataIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManagerIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_PayloadIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_PayloadIn = { "PayloadIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventGetTaskActivationCondition_Parms, PayloadIn), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_PayloadIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_PayloadIn_MetaData)) }; // 4258527549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_CustomPayloadDataIn_Inner = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_CustomPayloadDataIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_CustomPayloadDataIn = { "CustomPayloadDataIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventGetTaskActivationCondition_Parms, CustomPayloadDataIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_CustomPayloadDataIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_CustomPayloadDataIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_QuestManagerIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_QuestManagerIn = { "QuestManagerIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventGetTaskActivationCondition_Parms, QuestManagerIn), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_QuestManagerIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_QuestManagerIn_MetaData)) };
	void Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestTask_eventGetTaskActivationCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_eventGetTaskActivationCondition_Parms), &Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_PayloadIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_CustomPayloadDataIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_CustomPayloadDataIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_QuestManagerIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Gets the task Activate Condition check.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Gets the task Activate Condition check." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "GetTaskActivationCondition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::BaseQuestTask_eventGetTaskActivationCondition_Parms), Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics
	{
		struct BaseQuestTask_eventGetTaskConditionOnlyStatus_Parms
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
	void Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseQuestTask_eventGetTaskConditionOnlyStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_eventGetTaskConditionOnlyStatus_Parms), &Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Gets the task ActivateConditionOnly status.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Gets the task ActivateConditionOnly status." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "GetTaskConditionOnlyStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::BaseQuestTask_eventGetTaskConditionOnlyStatus_Parms), Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventGetTaskScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**\n\x09*\x09Overrideable function to determine this task score. Task score is used to calculate quest score.\n\x09*\x09Quest score can be useful for determining quest rewards or dificiulty. Only completed tasks will be considered.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Overrideable function to determine this task score. Task score is used to calculate quest score.\nQuest score can be useful for determining quest rewards or dificiulty. Only completed tasks will be considered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "GetTaskScore", nullptr, nullptr, sizeof(BaseQuestTask_eventGetTaskScore_Parms), Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_GetTaskScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_GetTaskScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics
	{
		struct BaseQuestTask_eventLoadQuestTask_Parms
		{
			int32 QuestSlotIN;
			int32 TaskSlotIN;
			bool IsDialogTaskIN;
			AActor* QuestManagerOwnerIN;
			UQuestManager* QuestManagerReferenceIN;
			FQuestTaskPayload PayloadIN;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestSlotIN;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TaskSlotIN;
		static void NewProp_IsDialogTaskIN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogTaskIN;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerOwnerIN;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManagerReferenceIN_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerReferenceIN;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIN_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIN;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_QuestSlotIN = { "QuestSlotIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventLoadQuestTask_Parms, QuestSlotIN), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_TaskSlotIN = { "TaskSlotIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventLoadQuestTask_Parms, TaskSlotIN), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_IsDialogTaskIN_SetBit(void* Obj)
	{
		((BaseQuestTask_eventLoadQuestTask_Parms*)Obj)->IsDialogTaskIN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_IsDialogTaskIN = { "IsDialogTaskIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_eventLoadQuestTask_Parms), &Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_IsDialogTaskIN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_QuestManagerOwnerIN = { "QuestManagerOwnerIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventLoadQuestTask_Parms, QuestManagerOwnerIN), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_QuestManagerReferenceIN_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_QuestManagerReferenceIN = { "QuestManagerReferenceIN", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventLoadQuestTask_Parms, QuestManagerReferenceIN), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_QuestManagerReferenceIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_QuestManagerReferenceIN_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_PayloadIN_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_PayloadIN = { "PayloadIN", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventLoadQuestTask_Parms, PayloadIN), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_PayloadIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_PayloadIN_MetaData)) }; // 4258527549
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_QuestSlotIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_TaskSlotIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_IsDialogTaskIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_QuestManagerOwnerIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_QuestManagerReferenceIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::NewProp_PayloadIN,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**Called when the quest manager loads from a previous save game. Will only execute for active tasks. This event will trigger everytime a active task is loaded*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Called when the quest manager loads from a previous save game. Will only execute for active tasks. This event will trigger everytime a active task is loaded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "LoadQuestTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::BaseQuestTask_eventLoadQuestTask_Parms), Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskActivated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**Overrideable function with the task logic on Activation. Always has to end with a call to EndQuestTask. If not this tasks will remain active. This event will only trigger once*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Overrideable function with the task logic on Activation. Always has to end with a call to EndQuestTask. If not this tasks will remain active. This event will only trigger once" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "OnQuestTaskActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**Overrideable function with the task logic when completed.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Overrideable function with the task logic when completed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "OnQuestTaskCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDestroyed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**Overrideable function with the task logic for when the task is destroyed.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Overrideable function with the task logic for when the task is destroyed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "OnQuestTaskDestroyed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDisabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**\n\x09*\x09Overrideable function with the task logic for when is disabled while being active. \n\x09*\x09If the task is not active, this will not execute, even when the task is internally disabled. \n\x09*\x09Tasks are disabled by other tasks.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Overrideable function with the task logic for when is disabled while being active.\nIf the task is not active, this will not execute, even when the task is internally disabled.\nTasks are disabled by other tasks." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "OnQuestTaskDisabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskFailed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskFailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**\n\x09*\x09Overrideable function with the task logic for when the task fails.\n\x09*\x09Tasks fails when end in false or when other tasks that disables them fail. \n\x09*\x09""Also fails if it not mets the Activation Condition on ActivateAttempt.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Overrideable function with the task logic for when the task fails.\nTasks fails when end in false or when other tasks that disables them fail.\nAlso fails if it not mets the Activation Condition on ActivateAttempt." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "OnQuestTaskFailed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**Overrideable function with the task logic when loading the game. Will only execute for loaded Active tasks.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Overrideable function with the task logic when loading the game. Will only execute for loaded Active tasks." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "OnQuestTaskLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskSaved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskSaved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**Overrideable function with the task logic when saving the game. Will only execute for loaded Active tasks.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Overrideable function with the task logic when saving the game. Will only execute for loaded Active tasks." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "OnQuestTaskSaved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskSaved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskSaved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskSaved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskSaved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_ReduceQuestSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_ReduceQuestSlot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09*\x09Update Quest Slot.\n\x09*\x09Reduces Quest Slot in one.\n\x09*\x09""Called when a quest is removed. Higher Quests need to reduce their quest slot value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Update Quest Slot.\nReduces Quest Slot in one.\nCalled when a quest is removed. Higher Quests need to reduce their quest slot value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_ReduceQuestSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "ReduceQuestSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_ReduceQuestSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_ReduceQuestSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_ReduceQuestSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_ReduceQuestSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_SaveQuestTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_SaveQuestTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**Callend when the task is saved.*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Callend when the task is saved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_SaveQuestTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "SaveQuestTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_SaveQuestTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_SaveQuestTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_SaveQuestTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_SaveQuestTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics
	{
		struct BaseQuestTask_eventStartQuestTask_Parms
		{
			int32 QuestSlotIN;
			int32 TaskSlotIN;
			bool IsDialogTaskIN;
			AActor* QuestManagerOwnerIN;
			UQuestManager* QuestManagerReferenceIN;
			FQuestTaskPayload PayloadIN;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestSlotIN;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TaskSlotIN;
		static void NewProp_IsDialogTaskIN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDialogTaskIN;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerOwnerIN;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManagerReferenceIN_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerReferenceIN;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadIN_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadIN;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_QuestSlotIN = { "QuestSlotIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventStartQuestTask_Parms, QuestSlotIN), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_TaskSlotIN = { "TaskSlotIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventStartQuestTask_Parms, TaskSlotIN), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_IsDialogTaskIN_SetBit(void* Obj)
	{
		((BaseQuestTask_eventStartQuestTask_Parms*)Obj)->IsDialogTaskIN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_IsDialogTaskIN = { "IsDialogTaskIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseQuestTask_eventStartQuestTask_Parms), &Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_IsDialogTaskIN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_QuestManagerOwnerIN = { "QuestManagerOwnerIN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventStartQuestTask_Parms, QuestManagerOwnerIN), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_QuestManagerReferenceIN_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_QuestManagerReferenceIN = { "QuestManagerReferenceIN", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventStartQuestTask_Parms, QuestManagerReferenceIN), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_QuestManagerReferenceIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_QuestManagerReferenceIN_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_PayloadIN_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_PayloadIN = { "PayloadIN", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseQuestTask_eventStartQuestTask_Parms, PayloadIN), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_PayloadIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_PayloadIN_MetaData)) }; // 4258527549
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_QuestSlotIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_TaskSlotIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_IsDialogTaskIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_QuestManagerOwnerIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_QuestManagerReferenceIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::NewProp_PayloadIN,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**Called when this object is activated. This event will only trigger once*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Called when this object is activated. This event will only trigger once" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuestTask, nullptr, "StartQuestTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::BaseQuestTask_eventStartQuestTask_Parms), Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuestTask_StartQuestTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuestTask_StartQuestTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseQuestTask);
	UClass* Z_Construct_UClass_UBaseQuestTask_NoRegister()
	{
		return UBaseQuestTask::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuestTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManagerOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManagerReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManagerReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseActivateConditionOnly_MetaData[];
#endif
		static void NewProp_UseActivateConditionOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseActivateConditionOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuestTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseQuestTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseQuestTask_ActivateCondition, "ActivateCondition" }, // 628383180
		{ &Z_Construct_UFunction_UBaseQuestTask_CompleteQuestTask, "CompleteQuestTask" }, // 2078394393
		{ &Z_Construct_UFunction_UBaseQuestTask_DestroyQuestTask, "DestroyQuestTask" }, // 2808619266
		{ &Z_Construct_UFunction_UBaseQuestTask_DisableQuestTask, "DisableQuestTask" }, // 2543242592
		{ &Z_Construct_UFunction_UBaseQuestTask_EndQuestTask, "EndQuestTask" }, // 4277354525
		{ &Z_Construct_UFunction_UBaseQuestTask_FailQuestTask, "FailQuestTask" }, // 383540925
		{ &Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadData, "GetCustomPayloadData" }, // 2762801521
		{ &Z_Construct_UFunction_UBaseQuestTask_GetCustomPayloadDataByIndex, "GetCustomPayloadDataByIndex" }, // 1291130203
		{ &Z_Construct_UFunction_UBaseQuestTask_GetParticularTaskScore, "GetParticularTaskScore" }, // 3083195400
		{ &Z_Construct_UFunction_UBaseQuestTask_GetTaskActivationCondition, "GetTaskActivationCondition" }, // 3734087402
		{ &Z_Construct_UFunction_UBaseQuestTask_GetTaskConditionOnlyStatus, "GetTaskConditionOnlyStatus" }, // 263129560
		{ &Z_Construct_UFunction_UBaseQuestTask_GetTaskScore, "GetTaskScore" }, // 1383631902
		{ &Z_Construct_UFunction_UBaseQuestTask_LoadQuestTask, "LoadQuestTask" }, // 2733140044
		{ &Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskActivated, "OnQuestTaskActivated" }, // 2960009368
		{ &Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskCompleted, "OnQuestTaskCompleted" }, // 1011824207
		{ &Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDestroyed, "OnQuestTaskDestroyed" }, // 1754853148
		{ &Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskDisabled, "OnQuestTaskDisabled" }, // 3379724175
		{ &Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskFailed, "OnQuestTaskFailed" }, // 3330412117
		{ &Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskLoaded, "OnQuestTaskLoaded" }, // 3847323797
		{ &Z_Construct_UFunction_UBaseQuestTask_OnQuestTaskSaved, "OnQuestTaskSaved" }, // 1874609442
		{ &Z_Construct_UFunction_UBaseQuestTask_ReduceQuestSlot, "ReduceQuestSlot" }, // 2800837527
		{ &Z_Construct_UFunction_UBaseQuestTask_SaveQuestTask, "SaveQuestTask" }, // 1271597636
		{ &Z_Construct_UFunction_UBaseQuestTask_StartQuestTask, "StartQuestTask" }, // 3647623979
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is the basic object for any task for quests. \n * \n * \n * The execution logic must always end with a call to the EndTask Function.\n */" },
		{ "DisplayName", "Base Quest Task" },
		{ "IncludePath", "Task/BaseQuestTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "This is the basic object for any task for quests.\n\n\nThe execution logic must always end with a call to the EndTask Function." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestSlot_MetaData[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "//--------------------------------------------Variables\n" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "--------------------------------------------Variables" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestSlot = { "QuestSlot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestTask, QuestSlot), METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_TaskSlot_MetaData[] = {
		{ "Category", "Base Quest Task" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_TaskSlot = { "TaskSlot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestTask, TaskSlot), METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_TaskSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_TaskSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_IsDialogTask_MetaData[] = {
		{ "Category", "Base Quest Task" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
	};
#endif
	void Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_IsDialogTask_SetBit(void* Obj)
	{
		((UBaseQuestTask*)Obj)->IsDialogTask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_IsDialogTask = { "IsDialogTask", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseQuestTask), &Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_IsDialogTask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_IsDialogTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_IsDialogTask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestManagerOwner_MetaData[] = {
		{ "Category", "Base Quest Task" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestManagerOwner = { "QuestManagerOwner", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestTask, QuestManagerOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestManagerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestManagerOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestManagerReference_MetaData[] = {
		{ "Category", "Base Quest Task" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestManagerReference = { "QuestManagerReference", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestTask, QuestManagerReference), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestManagerReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestManagerReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_InitialPayload_MetaData[] = {
		{ "Category", "Base Quest Task" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_InitialPayload = { "InitialPayload", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseQuestTask, InitialPayload), Z_Construct_UScriptStruct_FQuestTaskPayload, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_InitialPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_InitialPayload_MetaData)) }; // 4258527549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_UseActivateConditionOnly_MetaData[] = {
		{ "Category", "Base Quest Task" },
		{ "Comment", "/**\n\x09*\x09""Determines if the task is only a condition check.\n\x09*\x09If true task will complete immediatly after meeting activation condition. Any other logic in the task will be ignored.\n\x09*\x09If they task only performs a condition check via ActivateCondition function, this should be true, to increase performance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Task/BaseQuestTask.h" },
		{ "ToolTip", "Determines if the task is only a condition check.\nIf true task will complete immediatly after meeting activation condition. Any other logic in the task will be ignored.\nIf they task only performs a condition check via ActivateCondition function, this should be true, to increase performance." },
	};
#endif
	void Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_UseActivateConditionOnly_SetBit(void* Obj)
	{
		((UBaseQuestTask*)Obj)->UseActivateConditionOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_UseActivateConditionOnly = { "UseActivateConditionOnly", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseQuestTask), &Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_UseActivateConditionOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_UseActivateConditionOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_UseActivateConditionOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseQuestTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_TaskSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_IsDialogTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestManagerOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_QuestManagerReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_InitialPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuestTask_Statics::NewProp_UseActivateConditionOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuestTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuestTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuestTask_Statics::ClassParams = {
		&UBaseQuestTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseQuestTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuestTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuestTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuestTask()
	{
		if (!Z_Registration_Info_UClass_UBaseQuestTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuestTask.OuterSingleton, Z_Construct_UClass_UBaseQuestTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseQuestTask.OuterSingleton;
	}
	template<> QUESTEDITOR_API UClass* StaticClass<UBaseQuestTask>()
	{
		return UBaseQuestTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuestTask);
	UBaseQuestTask::~UBaseQuestTask() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseQuestTask, UBaseQuestTask::StaticClass, TEXT("UBaseQuestTask"), &Z_Registration_Info_UClass_UBaseQuestTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuestTask), 2666582233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_1218609040(TEXT("/Script/QuestEditor"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditor_Public_Task_BaseQuestTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
