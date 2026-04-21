#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "DoorUseMessageInfo.h"
#include "EnvironmentAudioControlSound.h"
#include "GzInteractInterface.h"
#include "MusicTrackVolumeControl.h"
#include "OnDoorOpenedDelegate.h"
#include "OnDoorTransitionCompleteDelegate.h"
#include "OnDoorUnlockedDelegate.h"
#include "OnGoingThroughDoorDelegate.h"
#include "SublevelLoadInfo.h"
#include "GzInterDoor.generated.h"

class AGzCharacter;
class AGzDoorLightObject;
class AGzInterDoor;
class AGzPreRenderedCamera;
class AGzSubLevelLoader;
class ANiagaraActor;
class AStaticMeshActor;
class UAnimMontage;
class UArrowComponent;
class UCapsuleComponent;
class UGzInteractComponent;
class UGzSoundAmbienceAsset;
class UMusicDataAsset;
class USceneComponent;
class USoundBase;
class UWorld;

UCLASS()
class GROUNDZERO_API AGzInterDoor : public AActor, public IGzInteractInterface, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzInterDoor_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBeforeTeleport;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HideLastUsedDoorEntrance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DoNotSetLastUsedDoorEntrance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DontTeleportNPCs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool TriggerOnOpenDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsShrineDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsShrineExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool HasUsedShrineDoor;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool OpenedDoorBefore;
    
    UPROPERTY(BlueprintAssignable)
    FOnDoorOpened OnDoorOpened;
    
    UPROPERTY(BlueprintAssignable)
    FOnGoingThroughDoor OnGoingThroughDoor;
    
    UPROPERTY(BlueprintAssignable)
    FOnDoorTransitionComplete OnDoorTransitionComplete;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* NPCTeleportLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzSubLevelLoader> SubLevelLoader;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSublevelLoadInfo> SubLevelsToUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LockedColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor UnlockedColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool NeverShownOnMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSublevelLoadInfo> SubLevelsToLoad;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DoorUnlockGroup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AmbientSoundFadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzSoundAmbienceAsset* AmbientSoundInNextRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SilentInstantTransition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AmbientSoundFadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DontPlaySameAmbientSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool DoorEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ThoughtsOnUnlockedDoor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ThoughtsOnUseWhenLocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RequireManualInventoryUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* OpenSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* CloseSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* UnlockedSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* LockedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString DoorLockedMessage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DoorUnlockedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyUnlockedByTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LockedInApocalypseCrisis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ApocalypseCrisisDoorLockedMessage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText NewLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowLocationEvenIfAlreadyVisited;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool MinorLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowMinorLocationIfAlreadyVisited;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MinorLocationIfNewLocationVisitedAlready;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName LockedBy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FName> AdditionalLockedBy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayBeforeFadeBackIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeToBlackTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor FadeToBlackColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 ChapterEndNumber;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StopMusic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMusicDataAsset* RoomMusic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMusicDataAsset*> AlternateRoomMusic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverrideLayer1Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMusicTrackVolumeControl Layer1VolumeOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverrideLayer2Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMusicTrackVolumeControl Layer2VolumeOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverrideLayer3Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMusicTrackVolumeControl Layer3VolumeOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverrideLayer4Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMusicTrackVolumeControl Layer4VolumeOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverrideLayer5Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMusicTrackVolumeControl Layer5VolumeOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AStaticMeshActor> AssociatedDoorMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzPreRenderedCamera> CameraToViewOnDoorLocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzPreRenderedCamera> CameraToViewOnDoorUnlocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzPreRenderedCamera> CameraToViewOnDoorUsedUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeCurrentMusicTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UWorld> NewLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanNeverBeOpened;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 AlternateMusicIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CrossfadeMusic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AGzDoorLightObject*> DoorLightObjects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEnvironmentAudioControlSound> SoundsForVolumeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool DoorLocked;
    
    UPROPERTY(BlueprintAssignable)
    FOnDoorUnlocked OnDoorUnlocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxDoorUses;
    
    UPROPERTY(SaveGame)
    int32 TimesUsed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* UseSoundWhenUsedUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDoorUseMessageInfo> MaxDoorUseMessageInfos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MessageToDisplayWhenDoorUsedUp;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzPreRenderedCamera> CameraAfterDoor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGzInteractComponent* InteractComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* AlignPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCapsuleComponent* DoorExitPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UArrowComponent* DoorExitArrowComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* OpenDoorAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AGzInterDoor*> ExtraDoorsToUnlockOnUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AGzInterDoor* DoorToUnlockOnUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<ANiagaraActor>> EmittersToDeactivateOnUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<ANiagaraActor>> EmittersToActivateOnUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzInterDoor> StreamedDoorToUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NoScreenFade;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AlignPlayer;
    
    UPROPERTY()
    bool UnlockedStreamedDoor;
    
public:
    AGzInterDoor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void TeleportPlayer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StreamOutSublevels();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StreamInSubLevels();
    
    UFUNCTION(BlueprintCallable)
    void SetDoorLocked(bool Locked);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAlternateRoomMusicIndex(int32 Index, bool DisableAlternateMusic);
    
    UFUNCTION()
    void PreTeleportPlayer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayDoorSound(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void PerformFadeIn(AGzCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnUsedByPlayer_Implementation(AGzCharacter* Player);
    
    UFUNCTION()
    void GoThroughDoor();
    
    UFUNCTION(BlueprintCallable)
    void ForceDoorUnlocked(AGzCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    bool CanGoThroughDoor(AGzCharacter* Player);
    

    // Fix for true pure virtual functions not being implemented
};

