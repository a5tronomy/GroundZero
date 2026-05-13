using UnrealBuildTool;

public class GroundZeroGameTarget : TargetRules {
	public GroundZeroGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		
		DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_6;
        CppStandard = CppStandardVersion.Cpp20;

		ExtraModuleNames.AddRange(new string[] {
			"GroundZero",
		});
	}
}
