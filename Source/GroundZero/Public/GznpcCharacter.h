#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "EMaximumDamageAmount.h"
#include "GzInteractInterface.h"
#include "GzRenderInterface.h"
#include "NPCWeaponData.h"
#include "OnNPCScriptedSequenceStartedDelegate.h"
#include "OnNPCScriptedSequenceTriggeredDelegate.h"
#include "OnNpcKilledDelegate.h"
#include "GznpcCharacter.generated.h"

class AActor;
class AGzCharacter;
class UAnimMontage;
class UAudioComponent;
class USoundBase;

UCLASS()
class GROUNDZERO_API AGznpcCharacter : public ACharacter, public IEMSActorSaveInterface, public IGzRenderInterface, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGznpcCharacter_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<AActor*> VisibleTargets;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsRappelling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistanceForRegisteringEnemiesAsPerceptible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverrideMinDistanceForViableTargets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CantBeGibbed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NoSemiAuto;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OnlyFullAuto;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreDeathForPacifistAchievement;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsManuallyControlled;
    
    UPROPERTY()
    float AimSwitchBlockTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool CurrentAimingState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanMoveAndShoot;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnNpcKilled OnNpcKilled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* VocalSoundPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RootBoneTranslationCurveName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ThoughtsOnKilledEnemy;
    
private:
    UPROPERTY(SaveGame)
    bool AwardedApocalypseCrisisPoints;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ApocalypseCrisisSecondsBonus;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ApocalypseCrisisBountyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsIgnited;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, meta=(AllowPrivateAccess=true))
    float DefaultMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceAllowPlayerKill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeKilled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHostileToPlayer;
    
    UPROPERTY(EditAnywhere)
    bool NoExtractedMovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool KeepGunOutDuringCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool InScriptedSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ScriptedSequenceInterruptFlags;
    
    UPROPERTY(SaveGame)
    bool ScriptedSequenceStarted;
    
    UPROPERTY()
    float NextMeleeTime;
    
    UPROPERTY()
    float MeleeDuration;
    
    UPROPERTY()
    float NextFlinchTime;
    
    UPROPERTY()
    TEnumAsByte<EMovementMode> DefaultMovementMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ScriptedSequenceIdleAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ScriptedSequenceActionAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowAutoSmoothRotationSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool TakeDamageWhenPlayingScriptedSequence;
    
    UPROPERTY(BlueprintAssignable)
    FOnNPCScriptedSequenceTriggered OnScriptedSequenceTriggered;
    
    UPROPERTY(BlueprintAssignable)
    FOnNPCScriptedSequenceStarted OnScriptedSequenceStarted;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
    bool FullyDisabled;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
    bool AIDisabled;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    AGzCharacter* PlayerToFollow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FNPCWeaponData SingleShotData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FNPCWeaponData BurstFireData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FNPCWeaponData FullAutoData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float DistanceForBurstFireSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float DistanceBetweenFullAutoSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeathAnimMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MaxMagazine;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Magazine;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentFiringMode;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool IsAiming;
    
    UPROPERTY()
    int32 ShotsRemaining;
    
    UPROPERTY()
    float NextShootTime;
    
    UPROPERTY()
    float ReloadDuration;
    
    UPROPERTY()
    bool HasStartedShooting;
    
    UPROPERTY()
    float ShootBlockTime;
    
    UPROPERTY()
    bool EnemyInSightThisTick;
    
    UPROPERTY()
    float SwitchFiringModeBlockTime;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeBetweenMelees;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeBetweenMeleesIfShootDisabled;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAnimMontage*> ShootAnimations;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* AimStartAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* AimStopAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* ReloadAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* ReloadEmptyAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* MeleeAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* FlinchAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* FiringModeSwitchAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector MeleeDimensions;
    
    UPROPERTY(EditDefaultsOnly)
    float DistanceBeforeMelee;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageForMelee;
    
    UPROPERTY(EditDefaultsOnly)
    bool DrawMeleeDebug;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* DeathVocalSound;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* PainVocalSound;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* MeleeHitSound;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EMaximumDamageAmount> DamageType;
    
public:
    AGznpcCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void SwitchFiringMode(int32 Mode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopIgnite(const float Delay);
    
    UFUNCTION(BlueprintCallable)
    void SetupVariablesForLivingEnemy();
    
    UFUNCTION(BlueprintCallable)
    void SetShootBlockTime(const float Time);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsAiming(const bool Aiming);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCapsuleDynamicObstacleEnabled(const bool Enabled) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlaySound(USoundBase* Sound, bool Vocal);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayScriptedSequence();
    
protected:
    UFUNCTION(BlueprintCallable)
    float PlayMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool StopAllMontages, const bool Force);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShoot();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReload(const bool Empty);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnNpcExploded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlashbanged(const AActor* FlashbangActor, const FVector FlashbangOrigin);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginShooting(int32 NumberOfShots);
    
    UFUNCTION(BlueprintCallable)
    void Killed();
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Ignite();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetShootTargetPosition();
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetShootAimPosition();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetAngleToLookAtTarget();
    
    UFUNCTION(BlueprintCallable)
    void ExplodeNpc();
    
    UFUNCTION(BlueprintPure)
    bool DoesPathExist(const FVector& Location) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanVocalize();
    
public:
    UFUNCTION(BlueprintCallable)
    void BuildVisibleTargets(const float DeltaTime);
    

    // Fix for true pure virtual functions not being implemented
};

