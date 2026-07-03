using UnrealBuildTool;

public class EslonCodeEditor : ModuleRules
{
	public EslonCodeEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine"
			});

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"AppFramework",
				"BlueprintGraph",
				"DesktopPlatform",
				"Json",
				"JsonUtilities",
				"KismetCompiler",
				"LevelEditor",
				"Projects",
				"PythonScriptPlugin",
				"Slate",
				"SlateCore",
				"ToolMenus",
				"UnrealEd"
			});
	}
}
