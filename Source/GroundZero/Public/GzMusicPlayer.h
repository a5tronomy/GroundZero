#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "Engine/TimerHandle.h"
#include "MusicTrackVolumeControl.h"
#include "GzMusicPlayer.generated.h"

class AGzCharacter;
class UAudioComponent;
class UMusicDataAsset;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzMusicPlayer : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMusicPlayer_Statics;
public:
    UPROPERTY()
    AGzCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* MusicRoot;
    
protected:
    UPROPERTY(SaveGame)
    float ActiveMusicFadeInTime;
    
    UPROPERTY(SaveGame)
    bool UsingSecondaryPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* MusicPlayerPrimary;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* MusicPlayerSecondary;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* MusicPlayerTransition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* AmbiencePlayer;
    
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
    
public:
    AGzMusicPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopMusic(const float FadeTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInternalTrackSounds();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInternalBlueprintAudioValues();
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredVolumeForLayer(const int32 LayerNumber, const float Volume, const float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayMusic(UMusicDataAsset* Track, float FadeOutTime, const float FadeInTime, const bool CrossFade, const float DelayBeforeStartingNewMusic);
    

    // Fix for true pure virtual functions not being implemented
};

