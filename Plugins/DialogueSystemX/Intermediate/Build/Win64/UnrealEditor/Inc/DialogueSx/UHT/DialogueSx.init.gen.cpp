// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSx_init() {}
	DIALOGUESX_API UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature();
	DIALOGUESX_API UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature();
	DIALOGUESX_API UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature();
	DIALOGUESX_API UFunction* Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DialogueSx;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DialogueSx()
	{
		if (!Z_Registration_Info_UPackage__Script_DialogueSx.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DialogueSx_OnEndDialogue__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DialogueSx_OnEndTextPrinting__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DialogueSx_OnReplyClick__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DialogueSx_OnStartTextPrinting__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DialogueSx",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4B07595C,
				0xE1FFED7B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DialogueSx.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DialogueSx.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DialogueSx(Z_Construct_UPackage__Script_DialogueSx, TEXT("/Script/DialogueSx"), Z_Registration_Info_UPackage__Script_DialogueSx, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4B07595C, 0xE1FFED7B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
