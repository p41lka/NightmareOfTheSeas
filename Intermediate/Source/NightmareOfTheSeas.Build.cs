using UnrealBuildTool;

public class NightmareOfTheSeas : ModuleRules
{
	public NightmareOfTheSeas(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDependencyModuleNames.Add("Core");
		PrivateDependencyModuleNames.Add("Core");
	}
}
