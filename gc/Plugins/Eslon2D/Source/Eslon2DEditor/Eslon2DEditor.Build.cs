using UnrealBuildTool;

public class Eslon2DEditor : ModuleRules
{
	public Eslon2DEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Eslon2D"
			});

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"AssetTools",
				"ApplicationCore",
				"ContentBrowser",
				"EditorFramework",
				"InputCore",
				"LevelEditor",
				"Projects",
				"Paper2D",
				"Slate",
				"SlateCore",
				"ToolMenus",
				"UnrealEd"
			});
	}
}
