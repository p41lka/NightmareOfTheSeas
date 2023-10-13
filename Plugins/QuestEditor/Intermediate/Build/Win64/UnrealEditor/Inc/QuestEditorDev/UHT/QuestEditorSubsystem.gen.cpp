// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestEditorDev/Public/Subsystem/QuestEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorSubsystem();
	QUESTEDITORDEV_API UClass* Z_Construct_UClass_UQuestEditorSubsystem_NoRegister();
	QUESTEDITORDEV_API UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_TESTSUBSYSTEM__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_QuestEditorDev();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestEditorDev_TESTSUBSYSTEM__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestEditorDev_TESTSUBSYSTEM__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//--------------------------------------------------------------------\n//----------------------------------DISPATCHERS DECLARATIONS\n//--------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/Subsystem/QuestEditorSubsystem.h" },
		{ "ToolTip", "----------------------------------DISPATCHERS DECLARATIONS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestEditorDev_TESTSUBSYSTEM__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestEditorDev, nullptr, "TESTSUBSYSTEM__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestEditorDev_TESTSUBSYSTEM__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestEditorDev_TESTSUBSYSTEM__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestEditorDev_TESTSUBSYSTEM__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestEditorDev_TESTSUBSYSTEM__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTESTSUBSYSTEM_DelegateWrapper(const FMulticastScriptDelegate& TESTSUBSYSTEM)
{
	TESTSUBSYSTEM.ProcessMulticastDelegate<UObject>(NULL);
}
	void UQuestEditorSubsystem::StaticRegisterNativesUQuestEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorSubsystem);
	UClass* Z_Construct_UClass_UQuestEditorSubsystem_NoRegister()
	{
		return UQuestEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TESTSUBSYSTEM_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TESTSUBSYSTEM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuestString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestEditorDev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09This is the editor subsystem for the Quest Editor\n *\x09""For now, i cannot use inside editor widgets, so is not that useful.\n *\x09""For testing purposes.\n */" },
		{ "IncludePath", "Subsystem/QuestEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/QuestEditorSubsystem.h" },
		{ "ToolTip", "This is the editor subsystem for the Quest Editor\nFor now, i cannot use inside editor widgets, so is not that useful.\nFor testing purposes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSubsystem_Statics::NewProp_TESTSUBSYSTEM_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*Called when a quest is accepted*/" },
		{ "ModuleRelativePath", "Public/Subsystem/QuestEditorSubsystem.h" },
		{ "ToolTip", "Called when a quest is accepted" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestEditorSubsystem_Statics::NewProp_TESTSUBSYSTEM = { "TESTSUBSYSTEM", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSubsystem, TESTSUBSYSTEM), Z_Construct_UDelegateFunction_QuestEditorDev_TESTSUBSYSTEM__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSubsystem_Statics::NewProp_TESTSUBSYSTEM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSubsystem_Statics::NewProp_TESTSUBSYSTEM_MetaData)) }; // 2041727102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEditorSubsystem_Statics::NewProp_QuestString_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/*Warever*/" },
		{ "ModuleRelativePath", "Public/Subsystem/QuestEditorSubsystem.h" },
		{ "ToolTip", "Warever" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestEditorSubsystem_Statics::NewProp_QuestString = { "QuestString", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestEditorSubsystem, QuestString), METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSubsystem_Statics::NewProp_QuestString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSubsystem_Statics::NewProp_QuestString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestEditorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSubsystem_Statics::NewProp_TESTSUBSYSTEM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSubsystem_Statics::NewProp_QuestString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorSubsystem_Statics::ClassParams = {
		&UQuestEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestEditorSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UQuestEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorSubsystem.OuterSingleton, Z_Construct_UClass_UQuestEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestEditorSubsystem.OuterSingleton;
	}
	template<> QUESTEDITORDEV_API UClass* StaticClass<UQuestEditorSubsystem>()
	{
		return UQuestEditorSubsystem::StaticClass();
	}
	UQuestEditorSubsystem::UQuestEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorSubsystem);
	UQuestEditorSubsystem::~UQuestEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Subsystem_QuestEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Subsystem_QuestEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorSubsystem, UQuestEditorSubsystem::StaticClass, TEXT("UQuestEditorSubsystem"), &Z_Registration_Info_UClass_UQuestEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorSubsystem), 2304490000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Subsystem_QuestEditorSubsystem_h_4076125013(TEXT("/Script/QuestEditorDev"),
		Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Subsystem_QuestEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NightmareOfTheSeas_Plugins_QuestEditor_Source_QuestEditorDev_Public_Subsystem_QuestEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
