/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/

#pragma once

#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(DialogueEditor, All, All);

class FDialogueEditor : public IModuleInterface
{
	public:
	
	static uint32 GameAssetCategory;
	
	
	/* Called when the module is loaded */
	virtual void StartupModule() override;

	/* Called when the module is unloaded */
	virtual void ShutdownModule() override;
};