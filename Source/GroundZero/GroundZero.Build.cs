using UnrealBuildTool;
using System.IO;

public class GroundZero : ModuleRules {
    public GroundZero(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
        PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AudioSynesthesia",
            "CableComponent",
            "Core",
            "CoreUObject",
            "DiscordRpc",
            "EasyMultiSave",
            "Engine",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "Niagara",
            "NiagaraAnimNotifies",
            "PhysicsCore",
            "SlateCore",
            "UMG",
        });
    }
}
