#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameInstance.h"
#include "Engine/TimerHandle.h"
#include "Fonts/SlateFontInfo.h"
#include "EControlSelectionObjective.h"
#include "EDifficultyMode.h"
#include "GamepadKeyFunctionMapping.h"
#include "MusicTrackVolumeControl.h"
#include "Templates/SubclassOf.h"
#include "GzGameInstance.generated.h"

class AGzCharacter;
class UAudioComponent;
class UDataTable;
class UDiscordRpc;
class UGzSoundAmbienceAsset;
class UMusicDataAsset;
class USoundBase;
class UUserWidget;

UCLASS(NonTransient)
class GROUNDZERO_API UGzGameInstance : public UGameInstance {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzGameInstance_Statics;
public:
    UPROPERTY()
    FDateTime DiscordRpcStartTimestamp;
    
    UPROPERTY()
    UDiscordRpc* DiscordRpc;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EDifficultyMode> FromMainMenuDifficultyMode;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EDifficultyMode> FromMainMenuPuzzleDifficultyMode;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsNewGamePlus;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsReshiftMode;
    
    UPROPERTY(EditAnywhere)
    UDataTable* GlobalShopPrices;
    
    UPROPERTY(EditAnywhere)
    UDataTable* GlobalShopPricesOverrideEasy;
    
    UPROPERTY(EditAnywhere)
    UDataTable* GlobalShopPricesOverrideNormal;
    
    UPROPERTY(EditAnywhere)
    UDataTable* GlobalShopPricesOverrideHard;
    
    UPROPERTY(EditAnywhere)
    UDataTable* GlobalShopPricesOverrideVeryHard;
    
    UPROPERTY(EditAnywhere)
    UDataTable* GlobalShopPricesOverrideExtreme;
    
    UPROPERTY(EditAnywhere)
    UDataTable* GlobalShopPricesOverrideSuperExtreme;
    
    UPROPERTY(EditAnywhere)
    UDataTable* NewGamePlusGlobalShopPrices;
    
    UPROPERTY(EditAnywhere)
    UDataTable* NewGamePlusGlobalShopPricesOverrideEasy;
    
    UPROPERTY(EditAnywhere)
    UDataTable* NewGamePlusGlobalShopPricesOverrideNormal;
    
    UPROPERTY(EditAnywhere)
    UDataTable* NewGamePlusGlobalShopPricesOverrideHard;
    
    UPROPERTY(EditAnywhere)
    UDataTable* NewGamePlusGlobalShopPricesOverrideVeryHard;
    
    UPROPERTY(EditAnywhere)
    UDataTable* NewGamePlusGlobalShopPricesOverrideExtreme;
    
    UPROPERTY(EditAnywhere)
    UDataTable* NewGamePlusGlobalShopPricesOverrideSuperExtreme;
    
    UPROPERTY(EditAnywhere)
    UDataTable* GamepadKeyFunctionDataTable;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FGamepadKeyFunctionMapping> GamepadKeyFunctionMapping;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> LoadingThrobberWidget;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> LoadingCompleteWidget;
    
    UPROPERTY(BlueprintReadOnly)
    bool AutoSkipMovies;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateFontInfo MovieSubtitleFont;
    
    UPROPERTY(EditAnywhere)
    USoundBase* CoreMusicSound;
    
    UPROPERTY(EditAnywhere)
    float BaseMusicVolume;
    
    UPROPERTY()
    AGzCharacter* PlayerCharacter;
    
    UPROPERTY()
    float NextRandomAmbienceSoundTime;
    
    UPROPERTY()
    USoundBase* QueuedAmbientSound;
    
    UPROPERTY()
    UGzSoundAmbienceAsset* ActiveSoundAmbience;
    
    UPROPERTY(SaveGame)
    float ActiveMusicFadeInTime;
    
    UPROPERTY(SaveGame)
    bool UsingSecondaryPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* MusicPlayerPrimary;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* MusicPlayerSecondary;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* MusicPlayerProximityLayer1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* MusicPlayerTransition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* AmbiencePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* RoomTonePlayer;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FMusicTrackVolumeControl Layer1VolumeControl;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FMusicTrackVolumeControl Layer2VolumeControl;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FMusicTrackVolumeControl Layer3VolumeControl;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FMusicTrackVolumeControl Layer4VolumeControl;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FMusicTrackVolumeControl Layer5VolumeControl;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TSoftObjectPtr<UMusicDataAsset> ActiveMusicTrack;
    
    UPROPERTY()
    FTimerHandle MusicPlayHandle;
    
    UPROPERTY()
    float DesiredProximityLayer1Volume;
    
    UPROPERTY()
    float CurrentProximityLayer1Volume;
    
    UGzGameInstance();

    UFUNCTION(BlueprintCallable)
    void StopMusic(const float FadeTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetLoadingMovie(const FString& MoviePath, const bool AutoSkipMovie);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDesiredVolumeForLayer(const int32 LayerNumber, const float Volume, const float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayMusic(UMusicDataAsset* Track, float FadeOutTime, const float FadeInTime, const bool CrossFade, const float DelayBeforeStartingNewMusic, const bool DontPlaySameMusic, const bool ApocalypseCrisis);
    
private:
    UFUNCTION()
    void OnMovieTick(float DeltaTime);
    
    UFUNCTION()
    void OnFinishLoadingScreen();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCompletedControlSelectionObjective(EControlSelectionObjective Objective);
    
private:
    UFUNCTION()
    void OnBeginLoadingScreen();
    
    UFUNCTION()
    void HandlePrepareLoadingScreen();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyAudioSettings();
    
};

