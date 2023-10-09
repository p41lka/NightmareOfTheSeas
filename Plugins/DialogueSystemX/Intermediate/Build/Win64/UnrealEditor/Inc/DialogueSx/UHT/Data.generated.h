// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Data.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGUESX_Data_generated_h
#error "Data.generated.h already included, missing '#pragma once' in Data.h"
#endif
#define DIALOGUESX_Data_generated_h

#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_Data_Data_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdgeStruct_Statics; \
	DIALOGUESX_API static class UScriptStruct* StaticStruct();


template<> DIALOGUESX_API UScriptStruct* StaticStruct<struct FEdgeStruct>();

#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_Data_Data_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataStruct_Statics; \
	DIALOGUESX_API static class UScriptStruct* StaticStruct();


template<> DIALOGUESX_API UScriptStruct* StaticStruct<struct FDataStruct>();

#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_Data_Data_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueDataStruct_Statics; \
	DIALOGUESX_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DIALOGUESX_API UScriptStruct* StaticStruct<struct FDialogueDataStruct>();

#define FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_Data_Data_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyStruct_Statics; \
	DIALOGUESX_API static class UScriptStruct* StaticStruct();


template<> DIALOGUESX_API UScriptStruct* StaticStruct<struct FPropertyStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NightmareOfTheSeas_Plugins_DialogueSystemX_Source_DialogueSx_Public_Data_Data_h


#define FOREACH_ENUM_ESIGN(op) \
	op(ESign::None) \
	op(ESign::More) \
	op(ESign::Less) \
	op(ESign::Equal) \
	op(ESign::NotEqual) \
	op(ESign::LessAndEqual) \
	op(ESign::MoreAndEqual) 

enum class ESign : uint8;
template<> struct TIsUEnumClass<ESign> { enum { Value = true }; };
template<> DIALOGUESX_API UEnum* StaticEnum<ESign>();

#define FOREACH_ENUM_ETYPE(op) \
	op(EType::Integer) \
	op(EType::Float) \
	op(EType::String) \
	op(EType::Bool) 

enum class EType : uint8;
template<> struct TIsUEnumClass<EType> { enum { Value = true }; };
template<> DIALOGUESX_API UEnum* StaticEnum<EType>();

#define FOREACH_ENUM_ENODETYPE(op) \
	op(ENodeType::Player) \
	op(ENodeType::NPC) \
	op(ENodeType::If) \
	op(ENodeType::Branch) \
	op(ENodeType::Commands) \
	op(ENodeType::Random) 

enum class ENodeType : uint8;
template<> struct TIsUEnumClass<ENodeType> { enum { Value = true }; };
template<> DIALOGUESX_API UEnum* StaticEnum<ENodeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
