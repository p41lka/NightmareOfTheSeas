// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeData() {}
// Cross Module References
	DIALOGUESX_API UEnum* Z_Construct_UEnum_DialogueSx_ENodeType();
	DIALOGUESX_API UEnum* Z_Construct_UEnum_DialogueSx_ESign();
	DIALOGUESX_API UEnum* Z_Construct_UEnum_DialogueSx_EType();
	DIALOGUESX_API UScriptStruct* Z_Construct_UScriptStruct_FDataStruct();
	DIALOGUESX_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueDataStruct();
	DIALOGUESX_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeStruct();
	DIALOGUESX_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyStruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DialogueSx();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdgeStruct;
class UScriptStruct* FEdgeStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdgeStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdgeStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdgeStruct, (UObject*)Z_Construct_UPackage__Script_DialogueSx(), TEXT("EdgeStruct"));
	}
	return Z_Registration_Info_UScriptStruct_EdgeStruct.OuterSingleton;
}
template<> DIALOGUESX_API UScriptStruct* StaticStruct<FEdgeStruct>()
{
	return FEdgeStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdgeStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetHandle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdgeStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdgeStruct, Source), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_SourceHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_SourceHandle = { "SourceHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdgeStruct, SourceHandle), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_SourceHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_SourceHandle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdgeStruct, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_TargetHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_TargetHandle = { "TargetHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdgeStruct, TargetHandle), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_TargetHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_TargetHandle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdgeStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_SourceHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewProp_TargetHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdgeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSx,
		nullptr,
		&NewStructOps,
		"EdgeStruct",
		sizeof(FEdgeStruct),
		alignof(FEdgeStruct),
		Z_Construct_UScriptStruct_FEdgeStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdgeStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_EdgeStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdgeStruct.InnerSingleton, Z_Construct_UScriptStruct_FEdgeStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdgeStruct.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESign;
	static UEnum* ESign_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESign.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESign.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DialogueSx_ESign, (UObject*)Z_Construct_UPackage__Script_DialogueSx(), TEXT("ESign"));
		}
		return Z_Registration_Info_UEnum_ESign.OuterSingleton;
	}
	template<> DIALOGUESX_API UEnum* StaticEnum<ESign>()
	{
		return ESign_StaticEnum();
	}
	struct Z_Construct_UEnum_DialogueSx_ESign_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DialogueSx_ESign_Statics::Enumerators[] = {
		{ "ESign::None", (int64)ESign::None },
		{ "ESign::More", (int64)ESign::More },
		{ "ESign::Less", (int64)ESign::Less },
		{ "ESign::Equal", (int64)ESign::Equal },
		{ "ESign::NotEqual", (int64)ESign::NotEqual },
		{ "ESign::LessAndEqual", (int64)ESign::LessAndEqual },
		{ "ESign::MoreAndEqual", (int64)ESign::MoreAndEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DialogueSx_ESign_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equal.DisplayName", "Equal ==" },
		{ "Equal.Name", "ESign::Equal" },
		{ "Less.DisplayName", "Less <" },
		{ "Less.Name", "ESign::Less" },
		{ "LessAndEqual.DisplayName", "LessAndEqual <=" },
		{ "LessAndEqual.Name", "ESign::LessAndEqual" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
		{ "More.DisplayName", "More >" },
		{ "More.Name", "ESign::More" },
		{ "MoreAndEqual.DisplayName", "MoreAndEqual >=" },
		{ "MoreAndEqual.Name", "ESign::MoreAndEqual" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ESign::None" },
		{ "NotEqual.DisplayName", "NotEqual !=" },
		{ "NotEqual.Name", "ESign::NotEqual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DialogueSx_ESign_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DialogueSx,
		nullptr,
		"ESign",
		"ESign",
		Z_Construct_UEnum_DialogueSx_ESign_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DialogueSx_ESign_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DialogueSx_ESign_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DialogueSx_ESign_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DialogueSx_ESign()
	{
		if (!Z_Registration_Info_UEnum_ESign.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESign.InnerSingleton, Z_Construct_UEnum_DialogueSx_ESign_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESign.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EType;
	static UEnum* EType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DialogueSx_EType, (UObject*)Z_Construct_UPackage__Script_DialogueSx(), TEXT("EType"));
		}
		return Z_Registration_Info_UEnum_EType.OuterSingleton;
	}
	template<> DIALOGUESX_API UEnum* StaticEnum<EType>()
	{
		return EType_StaticEnum();
	}
	struct Z_Construct_UEnum_DialogueSx_EType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DialogueSx_EType_Statics::Enumerators[] = {
		{ "EType::Integer", (int64)EType::Integer },
		{ "EType::Float", (int64)EType::Float },
		{ "EType::String", (int64)EType::String },
		{ "EType::Bool", (int64)EType::Bool },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DialogueSx_EType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "EType::Bool" },
		{ "Float.Name", "EType::Float" },
		{ "Integer.Name", "EType::Integer" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
		{ "String.Name", "EType::String" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DialogueSx_EType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DialogueSx,
		nullptr,
		"EType",
		"EType",
		Z_Construct_UEnum_DialogueSx_EType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DialogueSx_EType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DialogueSx_EType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DialogueSx_EType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DialogueSx_EType()
	{
		if (!Z_Registration_Info_UEnum_EType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EType.InnerSingleton, Z_Construct_UEnum_DialogueSx_EType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataStruct;
class UScriptStruct* FDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataStruct, (UObject*)Z_Construct_UPackage__Script_DialogueSx(), TEXT("DataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DataStruct.OuterSingleton;
}
template<> DIALOGUESX_API UScriptStruct* StaticStruct<FDataStruct>()
{
	return FDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Sign_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sign_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Sign;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Property Condition" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Property Condition" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataStruct, Type), Z_Construct_UEnum_DialogueSx_EType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Type_MetaData)) }; // 3115671074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Property Condition" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataStruct, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Sign_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Sign_MetaData[] = {
		{ "Category", "Property Condition" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Sign = { "Sign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataStruct, Sign), Z_Construct_UEnum_DialogueSx_ESign, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Sign_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Sign_MetaData)) }; // 1751508081
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Sign_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStruct_Statics::NewProp_Sign,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSx,
		nullptr,
		&NewStructOps,
		"DataStruct",
		sizeof(FDataStruct),
		alignof(FDataStruct),
		Z_Construct_UScriptStruct_FDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataStruct.InnerSingleton, Z_Construct_UScriptStruct_FDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataStruct.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeType;
	static UEnum* ENodeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENodeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DialogueSx_ENodeType, (UObject*)Z_Construct_UPackage__Script_DialogueSx(), TEXT("ENodeType"));
		}
		return Z_Registration_Info_UEnum_ENodeType.OuterSingleton;
	}
	template<> DIALOGUESX_API UEnum* StaticEnum<ENodeType>()
	{
		return ENodeType_StaticEnum();
	}
	struct Z_Construct_UEnum_DialogueSx_ENodeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DialogueSx_ENodeType_Statics::Enumerators[] = {
		{ "ENodeType::Player", (int64)ENodeType::Player },
		{ "ENodeType::NPC", (int64)ENodeType::NPC },
		{ "ENodeType::If", (int64)ENodeType::If },
		{ "ENodeType::Branch", (int64)ENodeType::Branch },
		{ "ENodeType::Commands", (int64)ENodeType::Commands },
		{ "ENodeType::Random", (int64)ENodeType::Random },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DialogueSx_ENodeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Branch.Name", "ENodeType::Branch" },
		{ "Commands.Name", "ENodeType::Commands" },
		{ "If.Name", "ENodeType::If" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
		{ "NPC.Name", "ENodeType::NPC" },
		{ "Player.Name", "ENodeType::Player" },
		{ "Random.Name", "ENodeType::Random" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DialogueSx_ENodeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DialogueSx,
		nullptr,
		"ENodeType",
		"ENodeType",
		Z_Construct_UEnum_DialogueSx_ENodeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DialogueSx_ENodeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DialogueSx_ENodeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DialogueSx_ENodeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DialogueSx_ENodeType()
	{
		if (!Z_Registration_Info_UEnum_ENodeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeType.InnerSingleton, Z_Construct_UEnum_DialogueSx_ENodeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENodeType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDialogueDataStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogueDataStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueDataStruct;
class UScriptStruct* FDialogueDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueDataStruct, (UObject*)Z_Construct_UPackage__Script_DialogueSx(), TEXT("DialogueDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueDataStruct.OuterSingleton;
}
template<> DIALOGUESX_API UScriptStruct* StaticStruct<FDialogueDataStruct>()
{
	return FDialogueDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueDataStruct>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Dialogue Data" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDataStruct, Type), Z_Construct_UEnum_DialogueSx_ENodeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Type_MetaData)) }; // 74967258
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Dialogue Data" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDataStruct, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue Data" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDataStruct, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStruct, METADATA_PARAMS(nullptr, 0) }; // 3401700650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Dialogue Data" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDataStruct, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Data_MetaData)) }; // 3401700650
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Connections_MetaData[] = {
		{ "Category", "Dialogue Data" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDataStruct, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Connections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDataStruct, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Connections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSx,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DialogueDataStruct",
		sizeof(FDialogueDataStruct),
		alignof(FDialogueDataStruct),
		Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueDataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueDataStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyStruct;
class UScriptStruct* FPropertyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyStruct, (UObject*)Z_Construct_UPackage__Script_DialogueSx(), TEXT("PropertyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyStruct.OuterSingleton;
}
template<> DIALOGUESX_API UScriptStruct* StaticStruct<FPropertyStruct>()
{
	return FPropertyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Data/Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyStruct, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSx,
		nullptr,
		&NewStructOps,
		"PropertyStruct",
		sizeof(FPropertyStruct),
		alignof(FPropertyStruct),
		Z_Construct_UScriptStruct_FPropertyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyStruct.InnerSingleton, Z_Construct_UScriptStruct_FPropertyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_Data_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_Data_h_Statics::EnumInfo[] = {
		{ ESign_StaticEnum, TEXT("ESign"), &Z_Registration_Info_UEnum_ESign, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1751508081U) },
		{ EType_StaticEnum, TEXT("EType"), &Z_Registration_Info_UEnum_EType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3115671074U) },
		{ ENodeType_StaticEnum, TEXT("ENodeType"), &Z_Registration_Info_UEnum_ENodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 74967258U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_Data_h_Statics::ScriptStructInfo[] = {
		{ FEdgeStruct::StaticStruct, Z_Construct_UScriptStruct_FEdgeStruct_Statics::NewStructOps, TEXT("EdgeStruct"), &Z_Registration_Info_UScriptStruct_EdgeStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdgeStruct), 1830242542U) },
		{ FDataStruct::StaticStruct, Z_Construct_UScriptStruct_FDataStruct_Statics::NewStructOps, TEXT("DataStruct"), &Z_Registration_Info_UScriptStruct_DataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataStruct), 3401700650U) },
		{ FDialogueDataStruct::StaticStruct, Z_Construct_UScriptStruct_FDialogueDataStruct_Statics::NewStructOps, TEXT("DialogueDataStruct"), &Z_Registration_Info_UScriptStruct_DialogueDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueDataStruct), 3055850866U) },
		{ FPropertyStruct::StaticStruct, Z_Construct_UScriptStruct_FPropertyStruct_Statics::NewStructOps, TEXT("PropertyStruct"), &Z_Registration_Info_UScriptStruct_PropertyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyStruct), 1786543212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_Data_h_2070635508(TEXT("/Script/DialogueSx"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_Data_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_Data_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_Data_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueSx_Source_DialogueSx_Public_Data_Data_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
