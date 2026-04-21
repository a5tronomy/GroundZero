#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MalformationCustomKeyBinding.h"
#include "GzUserSettingsSave.generated.h"

UCLASS()
class GROUNDZERO_API UGzUserSettingsSave : public USaveGame {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzUserSettingsSave_Statics;
public:
    UPROPERTY(SaveGame)
    float MasterVolume;
    
    UPROPERTY(SaveGame)
    float MusicVolume;
    
    UPROPERTY(SaveGame)
    float SoundEffectsVolume;
    
    UPROPERTY(SaveGame)
    float DialogueVolume;
    
    UPROPERTY(SaveGame)
    bool bPosterizeEnabled;
    
    UPROPERTY(SaveGame)
    float PosterizeAmount;
    
    UPROPERTY(SaveGame)
    bool bDownscaleEnabled;
    
    UPROPERTY(SaveGame)
    float DownscaleAmount;
    
    UPROPERTY(SaveGame)
    bool bSharpenEnabled;
    
    UPROPERTY(SaveGame)
    float ScreenPercentage;
    
    UPROPERTY(SaveGame)
    bool bPopupsEnabled;
    
    UPROPERTY(SaveGame)
    bool bSubtitlesEnabled;
    
    UPROPERTY(SaveGame)
    bool bModernControlsEnabled;
    
    UPROPERTY(SaveGame)
    float FlashlightStrength;
    
    UPROPERTY(SaveGame)
    int32 FlashlightCookieIndex;
    
    UPROPERTY(SaveGame)
    bool bDrawCutsceneTime;
    
    UPROPERTY(SaveGame)
    float AimTurnHorizontalSensitivity;
    
    UPROPERTY(SaveGame)
    float AimTurnVerticalSensitivity;
    
    UPROPERTY(SaveGame)
    TArray<FMalformationCustomKeyBinding> ControlBindings;
    
    UPROPERTY(SaveGame)
    FString CurrentCulture;
    
    UPROPERTY(SaveGame)
    bool DoneFirstTimeSetUp;
    
    UPROPERTY(SaveGame)
    bool AutoRun;
    
    UPROPERTY(SaveGame)
    bool RunToggle;
    
    UPROPERTY(SaveGame)
    bool ShowSpeedRunningGhost;
    
    UPROPERTY(SaveGame)
    bool HideLensFlare;
    
    UPROPERTY(SaveGame)
    bool DisableDPadMovement;
    
    UPROPERTY(SaveGame)
    bool InvertPitchAiming;
    
    UPROPERTY(SaveGame)
    bool AutoEquipNewWeapons;
    
    UPROPERTY(SaveGame)
    int32 FPSMaxCapIndex;
    
    UGzUserSettingsSave();

};

