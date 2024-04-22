using UnrealBuildTool;

public class NightmareOfTheSeasTarget : TargetRules
{
	public NightmareOfTheSeasTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V2;
		Type = TargetType.Game;
		ExtraModuleNames.Add("NightmareOfTheSeas");
	}
}
