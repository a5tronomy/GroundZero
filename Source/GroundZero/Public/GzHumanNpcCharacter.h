#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Engine/TimerHandle.h"
#include "CharacterMontage.h"
#include "EHumanNPCType.h"
#include "EHumanVoiceLine.h"
#include "EMaximumDamageAmount.h"
#include "EnemyDamageTaken.h"
#include "GrenadeThrowData.h"
#include "GzDifficultyModifierInterface.h"
#include "OnHumanNpcKilledDelegate.h"
#include "QueuedVoiceLine.h"
#include "Templates/SubclassOf.h"
#include "GzHumanNpcCharacter.generated.h"

class AActor;
class UAnimMontage;
class UAudioComponent;
class UNiagaraSystem;
class USceneComponent;
class USkeletalMeshComponent;
class USoundBase;

UCLASS()
class GROUNDZERO_API AGzHumanNpcCharacter : public ACharacter, public IEMSActorSaveInterface, public IGzDifficultyModifierInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzHumanNpcCharacter_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    FVector2D NormalizedMovementDirections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NoExtractedMovementSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RootBoneTranslationCurveName;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeWithActiveHostile;
    
    UPROPERTY(EditAnywhere)
    bool AllowCinematicKill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreDeathForPacifistAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NewGamePlusOnly;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool RemovedDueToNewGamePlus;
    
    UPROPERTY()
    TEnumAsByte<EMovementMode> DefaultMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool AlwaysRunWhenChasingEnemy;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool DesiredAnimationsPaused;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool InCinematicKillMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool FullyDisabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ShowInDifficulty;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool RemovedDueToDifficulty;
    
    UPROPERTY(BlueprintReadWrite)
    float ScanBodyTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TEnumAsByte<EMaximumDamageAmount> CurrentDamageAmount;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FEnemyDamageTaken> DamageTakenTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 AIGuid;
    
    UPROPERTY(SaveGame)
    float MovementDisabledTime;
    
    UPROPERTY()
    float CurrentTimeWithActiveHostileBeforeGrenadeThrow;
    
private:
    UPROPERTY()
    FTransform LastDamagePointInfo;
    
    UPROPERTY()
    float MeleeDuration;
    
    UPROPERTY()
    FTimerHandle ShootHandle;
    
    UPROPERTY()
    float NextReloadTime;
    
    UPROPERTY()
    AActor* ActorWhoLastDamagedMe;
    
    UPROPERTY(BlueprintAssignable)
    FOnHumanNpcKilled OnNpcKilled;
    
    UPROPERTY()
    bool InReload;
    
    UPROPERTY()
    float NextPainSoundTime;
    
    UPROPERTY(SaveGame)
    float Health;
    
    UPROPERTY()
    int32 NumberOfQueuedShotsRemaining;
    
    UPROPERTY()
    float NextShootTime;
    
    UPROPERTY(SaveGame)
    int32 Magazine;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EyeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BloodParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> ShootSounds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMontage> GrenadeThrowAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMontage> MeleeAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMontage> DeathAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMontage> FlinchAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMontage> ReloadAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMontage> ReloadEmptyAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMontage> ShootAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TimeWithHostileBeforeGrenadeThrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrenadeThrowData FragGrenadeData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrenadeThrowData FlashGrenadeData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrenadeThrowData IncendiaryGrenadeData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrenadeThrowData GrenadeLauncherGrenadeData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GrenadeThrowCheckFrequencyMinMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GrenadeNoThrowTimeMinMax;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float ActiveMeleeTrackTime;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    AActor* MeleeTrackTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeTrackingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrenadeThrowChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PhysicalBulletClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysicalBulletSpawnSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootDelayWhenSpottedEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagazineCapacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinMaxTimeToReloadAfterCombat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinMaxDelaysPerShot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinMaxDelaysPerVolley;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinMaxShotsPerVolley;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ThoughtsOnKilledEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumMeleeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenMeleeAttacks;
    
    UPROPERTY(SaveGame)
    FVector SpawnLocation;
    
    UPROPERTY(SaveGame)
    FRotator SpawnRotation;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FQueuedVoiceLine QueuedVoiceLine;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHostileCharacter;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsRunning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceBeforeBackingAwayFromEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WalkWhenNearFollowingActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistanceToWalkWhenFollowingActor;
    
    UPROPERTY()
    float DefaultMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHumanNPCType> HumanType;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, meta=(AllowPrivateAccess=true))
    bool UseAlternateVoiceLine;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* VocalSoundPlayer;
    
public:
    AGzHumanNpcCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StopSpeaking() const;
    
    UFUNCTION(BlueprintCallable)
    void StopShooting();
    
    UFUNCTION()
    void StartReloadWeapon();
    
    UFUNCTION(BlueprintCallable)
    void SpeakLineDelayed(EHumanVoiceLine VoiceLine, const float Delay);
    
    UFUNCTION(BlueprintNativeEvent)
    void SpeakLine(EHumanVoiceLine VoiceLine);
    virtual void SpeakLine_Implementation(EHumanVoiceLine VoiceLine);
    
protected:
    UFUNCTION()
    void ShootWeapon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTemporaryFocus(FVector Location, const float duration) const;
    
    UFUNCTION(BlueprintCallable)
    void SetRunning(const bool Running);
    
    UFUNCTION(BlueprintCallable)
    void SetResetPositionAndLocation(const FVector& Location, const FRotator& Rotation, const bool UseAsFootPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetFullyDisabled(const bool Disabled);
    
    UFUNCTION(BlueprintCallable)
    float PlayRandomCharacterMontage(TArray<FCharacterMontage> Montages, bool ShouldFreezeMovement);
    
    UFUNCTION(BlueprintCallable)
    float PlayMontage(UAnimMontage* Montage, bool ShouldFreezeMovement);
    
    UFUNCTION(BlueprintCallable)
    float PlayCharacterMontage(FCharacterMontage Montage, bool ShouldFreezeMovement);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShotWeapon();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReloadedWeapon();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnNpcExploded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlashbanged(const AActor* FlashbangActor, const FVector FlashbangOrigin);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamageAmountChanged(EMaximumDamageAmount Amount);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EMaximumDamageAmount> GetMostDamagedAmount();
    
    UFUNCTION(BlueprintPure)
    bool GetIsAlive() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAIGuid() const;
    
    UFUNCTION(BlueprintCallable)
    void FreezeMovement(const float duration, bool DurationCantBeLowerThanCurrent);
    
protected:
    UFUNCTION()
    void FinishReloadWeapon();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExplodeNpc(const AActor* WhoDidIt);
    
    UFUNCTION(BlueprintCallable)
    void DifficultyModeCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearTemporaryFocus() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void CinematicKillPlayer();
    
    UFUNCTION()
    bool CanThrowGrenade() const;
    
    UFUNCTION(BlueprintCallable)
    void AddDamage(TEnumAsByte<EMaximumDamageAmount> DamageType, float Amount);
    

    // Fix for true pure virtual functions not being implemented
};

