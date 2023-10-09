// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/QuestEditorSettings.h"
#include "QuestEditorDev/Public/QuestEditor/QuestTypesDev.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorSettings();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorSettings_NoRegister();
	QUESTEDITORDEV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEditorKeyBind();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	DEFINE_FUNCTION(UQuestEditorSettings::execSetQEVersion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQEVersion(Z_Param_NewVersion);
		P_NATIVE_END;
	}
	void UQuestEditorSettings::StaticRegisterNativesUQuestEditorSettings()
	{
		UClass* Class = UQuestEditorSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetQEVersion", &UQuestEditorSettings::execSetQEVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics
	{
		struct QuestEditorSettings_eventSetQEVersion_Parms
		{
			int32 NewVersion;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::NewProp_NewVersion = { "NewVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestEditorSettings_eventSetQEVersion_Parms, NewVersion), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::NewProp_NewVersion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestEditorSettings, nullptr, "SetQEVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::QuestEditorSettings_eventSetQEVersion_Parms), Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorSettings);
	UClass* Z_Construct_UClass_UQuestEditorSettings_NoRegister()
	{
		return UQuestEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowExampleContent_MetaData[];
#endif
		static void NewProp_ShowExampleContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExampleContent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatatablesPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatatablesPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatatablesPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTalkMode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultTalkMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorGridDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorGridDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailsPanelSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DetailsPanelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowsSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowsSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutosaveFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutosaveFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseNPCNameAsRowName_MetaData[];
#endif
		static void NewProp_UseNPCNameAsRowName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseNPCNameAsRowName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseQuestNameAsRowName_MetaData[];
#endif
		static void NewProp_UseQuestNameAsRowName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseQuestNameAsRowName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorNPCSelector_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EditorNPCSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorQuestSelector_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EditorQuestSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorTaskSelector_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EditorTaskSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TasksBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TalkTasksBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TalkTasksBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestEditorShortcuts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestEditorShortcuts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestEditorShortcuts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousQEVersion_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PreviousQEVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestEditorSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestEditorSettings_SetQEVersion, "SetQEVersion" }, // 727497264
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestEditorSettings.h" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ShowExampleContent_MetaData[] = {
		{ "Category", "Quest Editor Content" },
		{ "Comment", "/**\n\x09*\x09If you want to include the example quests, dialogs and npcs in the quest editor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "If you want to include the example quests, dialogs and npcs in the quest editor." },
	};
#endif
	void Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ShowExampleContent_SetBit(void* Obj)
	{
		((UQuestEditorSettings*)Obj)->ShowExampleContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ShowExampleContent = { "ShowExampleContent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UQuestEditorSettings), &Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ShowExampleContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ShowExampleContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ShowExampleContent_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DatatablesPaths_Inner = { "DatatablesPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DatatablesPaths_MetaData[] = {
		{ "Category", "Quest Editor Content" },
		{ "Comment", "/**\n\x09*\x09Path for all the folders that contains datatables for quest editor.\n\x09*\x09This includes quest, dialogs, npcdef, taskinfo and talktaskinfo.\n\x09*\x09Try to keep this folders with only this content and the path to be as precise as possible. This will improve the performance when searching for them.\n\x09*\x09If a folder is invalid it wil crash the editor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Path for all the folders that contains datatables for quest editor.\nThis includes quest, dialogs, npcdef, taskinfo and talktaskinfo.\nTry to keep this folders with only this content and the path to be as precise as possible. This will improve the performance when searching for them.\nIf a folder is invalid it wil crash the editor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DatatablesPaths = { "DatatablesPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, DatatablesPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DatatablesPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DatatablesPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultTalkMode_MetaData[] = {
		{ "Category", "Quest Editor" },
		{ "Comment", "/**\n\x09*\x09The talk mode name that will be used by default in the Quest Editor. If invalid, conversation mode will be used. \n\x09*\x09If there are two modes with the same name, the first will be used.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "The talk mode name that will be used by default in the Quest Editor. If invalid, conversation mode will be used.\nIf there are two modes with the same name, the first will be used." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultTalkMode = { "DefaultTalkMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, DefaultTalkMode), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultTalkMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultTalkMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorGridDimensions_MetaData[] = {
		{ "Category", "Quest Editor" },
		{ "Comment", "/**\n\x09*\x09The editor invisible grid size. This is used when aligning nodes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "The editor invisible grid size. This is used when aligning nodes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorGridDimensions = { "EditorGridDimensions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, EditorGridDimensions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorGridDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorGridDimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DetailsPanelSize_MetaData[] = {
		{ "Category", "Quest Editor" },
		{ "Comment", "/**\n\x09*\x09The details panel size in pixels. \n\x09*\x09The width will determine the scale. \n\x09*\x09The height will determine when the scrollbar will be shown.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "The details panel size in pixels.\nThe width will determine the scale.\nThe height will determine when the scrollbar will be shown." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DetailsPanelSize = { "DetailsPanelSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, DetailsPanelSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DetailsPanelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DetailsPanelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ArrowsSensitivity_MetaData[] = {
		{ "Category", "Quest Editor" },
		{ "Comment", "/**\n\x09*\x09How much sensitivity in units should be used by each arrow key press.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "How much sensitivity in units should be used by each arrow key press." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ArrowsSensitivity = { "ArrowsSensitivity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, ArrowsSensitivity), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ArrowsSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ArrowsSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ZoomSensitivity_MetaData[] = {
		{ "Category", "Quest Editor" },
		{ "Comment", "/**\n\x09*\x09How much sensitivity the scrolling wheel zoom should have.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "How much sensitivity the scrolling wheel zoom should have." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ZoomSensitivity = { "ZoomSensitivity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, ZoomSensitivity), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ZoomSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ZoomSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_AutosaveFrequency_MetaData[] = {
		{ "Category", "Quest Editor" },
		{ "Comment", "/**\n\x09*\x09""Autosave frequency for the editor in seconds.\n\x09*\x09If set to 0, it will disable the editor autosaving.\n\x09*\x09If less than 30 seconds, it will get set to 30 seconds, to avoid too frequent autosaves.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Autosave frequency for the editor in seconds.\nIf set to 0, it will disable the editor autosaving.\nIf less than 30 seconds, it will get set to 30 seconds, to avoid too frequent autosaves." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_AutosaveFrequency = { "AutosaveFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, AutosaveFrequency), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_AutosaveFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_AutosaveFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseNPCNameAsRowName_MetaData[] = {
		{ "Category", "Quest Editor" },
		{ "Comment", "/**\n\x09*\x09Use the NPC name as the rowname for the datatable instead of generating one.\n\x09*\x09WARNING - This might generate problems if using two names that are equal and potentially lose data. \n\x09*\x09WARNING - The user must ensure the names provided are eligible for datatable row name.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Use the NPC name as the rowname for the datatable instead of generating one.\nWARNING - This might generate problems if using two names that are equal and potentially lose data.\nWARNING - The user must ensure the names provided are eligible for datatable row name." },
	};
#endif
	void Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseNPCNameAsRowName_SetBit(void* Obj)
	{
		((UQuestEditorSettings*)Obj)->UseNPCNameAsRowName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseNPCNameAsRowName = { "UseNPCNameAsRowName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UQuestEditorSettings), &Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseNPCNameAsRowName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseNPCNameAsRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseNPCNameAsRowName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseQuestNameAsRowName_MetaData[] = {
		{ "Category", "Quest Editor" },
		{ "Comment", "/**\n\x09*\x09Use the Quest name as the rowname for the datatable instead of generating one.\n\x09*\x09WARNING - This might generate problems if using two names that are equal and potentially lose data.\n\x09*\x09WARNING - The user must ensure the names provided are eligible for datatable row name.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Use the Quest name as the rowname for the datatable instead of generating one.\nWARNING - This might generate problems if using two names that are equal and potentially lose data.\nWARNING - The user must ensure the names provided are eligible for datatable row name." },
	};
#endif
	void Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseQuestNameAsRowName_SetBit(void* Obj)
	{
		((UQuestEditorSettings*)Obj)->UseQuestNameAsRowName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseQuestNameAsRowName = { "UseQuestNameAsRowName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UQuestEditorSettings), &Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseQuestNameAsRowName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseQuestNameAsRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseQuestNameAsRowName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorNPCSelector_MetaData[] = {
		{ "Category", "Quest Editor Widgets" },
		{ "Comment", "/**\n\x09*\x09Selector to use in the editor for NPCs.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Selector to use in the editor for NPCs." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorNPCSelector = { "EditorNPCSelector", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, EditorNPCSelector), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorNPCSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorNPCSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorQuestSelector_MetaData[] = {
		{ "Category", "Quest Editor Widgets" },
		{ "Comment", "/**\n\x09*\x09Selector to use in the editor for quests.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Selector to use in the editor for quests." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorQuestSelector = { "EditorQuestSelector", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, EditorQuestSelector), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorQuestSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorQuestSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorTaskSelector_MetaData[] = {
		{ "Category", "Quest Editor Widgets" },
		{ "Comment", "/**\n\x09*\x09Selector to use in the editor for tasks objects.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Selector to use in the editor for tasks objects." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorTaskSelector = { "EditorTaskSelector", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, EditorTaskSelector), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorTaskSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorTaskSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TasksBackgroundColor_MetaData[] = {
		{ "Category", "Quest Editor Style" },
		{ "Comment", "/**\n\x09*\x09""Color for the task nodes background.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Color for the task nodes background." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TasksBackgroundColor = { "TasksBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, TasksBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TasksBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TasksBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TalkTasksBackgroundColor_MetaData[] = {
		{ "Category", "Quest Editor Style" },
		{ "Comment", "/**\n\x09*\x09""Color for the talk task nodes background.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Color for the talk task nodes background." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TalkTasksBackgroundColor = { "TalkTasksBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, TalkTasksBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TalkTasksBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TalkTasksBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ArrowSize_MetaData[] = {
		{ "Category", "Quest Editor Style" },
		{ "Comment", "/**\n\x09*\x09How big the arrows should be draw in the editor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "How big the arrows should be draw in the editor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, ArrowSize), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ArrowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ArrowSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "Quest Editor Style" },
		{ "Comment", "/**\n\x09*\x09How thick the lines should be draw in the editor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "How thick the lines should be draw in the editor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, LineThickness), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_LineThickness_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestEditorShortcuts_Inner = { "QuestEditorShortcuts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestEditorKeyBind, METADATA_PARAMS(nullptr, 0) }; // 3996454201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestEditorShortcuts_MetaData[] = {
		{ "Category", "Quest Editor Shortcuts" },
		{ "Comment", "/** Shortcut key bindings that are used inside the QuestEditor.*/" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Shortcut key bindings that are used inside the QuestEditor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestEditorShortcuts = { "QuestEditorShortcuts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, QuestEditorShortcuts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestEditorShortcuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestEditorShortcuts_MetaData)) }; // 3996454201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PreviousQEVersion_MetaData[] = {
		{ "Comment", "/** Last version of the editor that was used to handle Post-Update Changes */" },
		{ "ModuleRelativePath", "Public/QuestEditorSettings.h" },
		{ "ToolTip", "Last version of the editor that was used to handle Post-Update Changes" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PreviousQEVersion = { "PreviousQEVersion", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSettings, PreviousQEVersion), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PreviousQEVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PreviousQEVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ShowExampleContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DatatablesPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DatatablesPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultTalkMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorGridDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DetailsPanelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ArrowsSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ZoomSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_AutosaveFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseNPCNameAsRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_UseQuestNameAsRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorNPCSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorQuestSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_EditorTaskSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TasksBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TalkTasksBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_ArrowSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestEditorShortcuts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestEditorShortcuts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PreviousQEVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorSettings_Statics::ClassParams = {
		&UQuestEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorSettings.OuterSingleton, Z_Construct_UClass_UQuestEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorSettings.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UQuestEditorSettings>()
	{
		return UQuestEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorSettings);
	UQuestEditorSettings::~UQuestEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorSettings, UQuestEditorSettings::StaticClass, TEXT("UQuestEditorSettings"), &Z_Registration_Info_UClass_UQuestEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorSettings), 1399979765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditorSettings_h_4106805010(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestEditor_Source_QuestEditorDev_Public_QuestEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
