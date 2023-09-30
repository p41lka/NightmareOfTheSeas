/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/

#include "DialogueEditor.h"
#include "AssetToolsModule.h"
#include "Actions/Actions.h"
#include "Actions/FunctionsActions.h"

class IAssetTypeActions;
DEFINE_LOG_CATEGORY(DialogueEditor);

#define LOCTEXT_NAMESPACE "FDialogueEditor"


uint32 FDialogueEditor::GameAssetCategory;

void FDialogueEditor::StartupModule()
{
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();


	//Create Category in the Advantage Assets Category
	GameAssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Dialogue")),
	                                                             LOCTEXT("DialogueCategory", "Dialogue System"));

	const TSharedRef<IAssetTypeActions> Actions = MakeShareable(new FActions(GameAssetCategory));
	const TSharedRef<IAssetTypeActions> FunctionActions = MakeShareable(new FFunctionsActions(GameAssetCategory));


	AssetTools.RegisterAssetTypeActions(Actions);
	AssetTools.RegisterAssetTypeActions(FunctionActions);

}

void FDialogueEditor::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDialogueEditor, DialogueEditor)
