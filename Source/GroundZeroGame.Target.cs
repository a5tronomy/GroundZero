using UnrealBuildTool;

public class GroundZeroGameTarget : TargetRules {
	public GroundZeroGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"GroundZero",
		});
	}
}
