#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "MalformationCustomKeyBinding.h"
#include "GzGameUserSettings.generated.h"

class UGzGameUserSettings;

UCLASS()
class GROUNDZERO_API UGzGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzGameUserSettings_Statics;
public:
    UPROPERTY(BlueprintReadOnly, Config)
    float MasterVolume;
    
    UPROPERTY(BlueprintReadOnly, Config)
    float MusicVolume;
    
    UPROPERTY(BlueprintReadOnly, Config)
    float SoundEffectsVolume;
    
    UPROPERTY(BlueprintReadOnly, Config)
    float DialogueVolume;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bPosterizeEnabled;
    
    UPROPERTY(BlueprintReadOnly, Config)
    float PosterizeAmount;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bDownscaleEnabled;
    
    UPROPERTY(BlueprintReadOnly, Config)
    float DownscaleAmount;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bSharpenEnabled;
    
    UPROPERTY(BlueprintReadOnly, Config)
    float ScreenPercentage;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bPopupsEnabled;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bSubtitlesEnabled;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bModernControlsEnabled;
    
    UPROPERTY(BlueprintReadOnly, Config)
    float FlashlightStrength;
    
    UPROPERTY(BlueprintReadOnly, Config)
    int32 FlashlightCookieIndex;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bDrawCutsceneTime;
    
    UPROPERTY(BlueprintReadOnly, Config)
    float AimTurnHorizontalSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Config)
    float AimTurnVerticalSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Config)
    TArray<FMalformationCustomKeyBinding> ControlBindings;
    
    UPROPERTY(BlueprintReadOnly, Config)
    FString CurrentCulture;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool DoneFirstTimeSetUp;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool AutoRun;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool RunToggle;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool ShowSpeedRunningGhost;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool HideLensFlare;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool DisableDPadMovement;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool InvertPitchAiming;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool AutoEquipNewWeapons;
    
    UPROPERTY(BlueprintReadOnly, Config)
    int32 FPSMaxCapIndex;
    
    UGzGameUserSettings();

    UFUNCTION(BlueprintCallable)
    bool SetSubtitlesEnabled(const bool bNewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetSoundEffectsVolume(const float NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetShowSpeedRunningGhost(const bool NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetSharpenEnabled(const bool bNewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetScreenPercentage(const float NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetRunToggle(const bool NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetPosterizeEnabled(const bool bNewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetPosterizeAmount(const float NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetPopupsEnabled(const bool bNewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetMusicVolume(const float NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetModernControlsEnabled(const bool bNewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetMasterVolume(const float NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetInvertPitchAiming(const bool NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetHideLensFlare(const bool NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetFPSMaxCapIndex(const int32 NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetFlashlightStrength(const float NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetFlashlightCookieIndex(const int32 NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetDrawCutsceneTime(const bool bNewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetDownscaleEnabled(const bool bNewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetDownscaleAmount(const float NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetDoneFirstTimeSetUp(const bool NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisableDPadMovement(const bool NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetDialogueVolume(const float NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentCulture(const FString& NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlBindings(TArray<FMalformationCustomKeyBinding> NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetAutoRun(const bool NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetAutoEquipNewWeapons(const bool NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetAimTurnVerticalSensitivity(const float NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    bool SetAimTurnHorizontalSensitivity(const float NewValue, const bool bSave);
    
    UFUNCTION(BlueprintCallable)
    static UGzGameUserSettings* GetGzGameUserSettings();
    
};

