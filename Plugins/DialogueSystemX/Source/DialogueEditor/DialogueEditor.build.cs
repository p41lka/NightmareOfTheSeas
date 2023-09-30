/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/

using UnrealBuildTool;

public class DialogueEditor : ModuleRules
{
	public DialogueEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"UnrealEd",
			"ContentBrowser",
			"DialogueSx",
		});

		PublicIncludePaths.AddRange(
			new string[]
			{
				ModuleDirectory + "/Public",
			}
		);


		PrivateIncludePaths.AddRange(
			new string[]
			{
				ModuleDirectory + "/Private",
				ModuleDirectory + "/Private/Actions",
				ModuleDirectory + "/Private/Factories",
			}
		);
	}
}