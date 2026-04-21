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
#include "ActiveBoneTraceAttack.h"
#include "ActiveChargeAttack.h"
#include "EEnemyCriticalState.h"
#include "EEnemyHitbox.h"
#include "EEnemySequenceType.h"
#include "EGrapplingState.h"
#include "EMaximumDamageAmount.h"
#include "EPlayerDamageType.h"
#include "EnemyAIAnimationData.h"
#include "EnemyAIGrapplingData.h"
#include "EnemyAnimTranslatorMontage.h"
#include "EnemyAnimTranslatorSequence.h"
#include "EnemyAttackData.h"
#include "EnemyDamageTaken.h"
#include "GzDifficultyModifierInterface.h"
#include "GzInteractInterface.h"
#include "GzRenderInterface.h"
#include "OnEnemyKilledDelegate.h"
#include "OnKilledCheckMeltAwayDelegate.h"
#include "OnScriptedSequenceStartedDelegate.h"
#include "OnScriptedSequenceTriggeredDelegate.h"
#include "QueuedEnemyMontageData.h"
#include "SwitchToSecondaryDataConditions.h"
#include "Templates/SubclassOf.h"
#include "TemporaryDeathData.h"
#include "GzEnemyAI.generated.h"

class AActor;
class AGzCharacter;
class AGzMapSegmentEntity;
class ATriggerVolume;
class UAIPerceptionStimuliSourceComponent;
class UAnimMontage;
class UAnimSequence;
class UAudioComponent;
class UGzDamageType;
class UGzEnemyAlternateAnimationData;
class UGzEnemyAnimationTranslator;
class UGzEnemyDataAsset;
class UMaterialInterface;
class USceneComponent;
class USoundBase;

UCLASS()
class GROUNDZERO_API AGzEnemyAI : public ACharacter, public IGzRenderInterface, public IGzInteractInterface, public IEMSActorSaveInterface, public IGzDifficultyModifierInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzEnemyAI_Statics;
public:
    UPROPERTY(Instanced)
    UAIPerceptionStimuliSourceComponent* StimuliSourceComponent;
    
    UPROPERTY()
    bool ExplodeOnLand;
    
    UPROPERTY()
    float ExplodeOnLandTimer;
    
    UPROPERTY(EditAnywhere)
    float TimeToDeaggro;
    
    UPROPERTY(EditAnywhere)
    bool CanDeAggroAfterTime;
    
    UPROPERTY()
    float DeaggroTimer;
    
    UPROPERTY(EditAnywhere)
    bool NoOptimizations;
    
    UPROPERTY(EditAnywhere)
    bool UseTimerTickOptimizations;
    
    UPROPERTY()
    float InitialGagTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreDeathForPacifistAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NewGamePlusOnly;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool RemovedDueToNewGamePlus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DebugThroughWallAttacks;
    
    UPROPERTY()
    float CheckThroughWallAttackCooldown;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsInvisibleEnemy;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool HasBeenKilled;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float AcidBurnTime;
    
    UPROPERTY(SaveGame)
    float NextAcidTickTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExecutionYawHack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ImpactPushbackMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimePerAcidTick;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamagePerAcidTick;
    
    UPROPERTY()
    FString StoredAcidDamageBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanBeFrozen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FrozenDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* FrozenOverlay;
    
    UPROPERTY(SaveGame)
    float FrozenTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsFrozen;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool DesiredAnimationsPaused;
    
    UPROPERTY(BlueprintReadOnly)
    UGzEnemyAnimationTranslator* ActiveAnimationTranslator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UGzEnemyAnimationTranslator*> AnimationTranslators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 ActiveAnimationTranslatorIndex;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FEnemyAnimTranslatorSequence> CachedTranslatedSequences;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FEnemyAnimTranslatorMontage> CachedTranslatedMontages;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> CachedTranslatedDisabledAttacks;
    
    UPROPERTY()
    float DontAttackBeginPlayTime;
    
    UPROPERTY()
    float CurrentCrippleMultiplier;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool HasExploded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisablePerceptionOptimizations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsBossEnemy;
    
    UPROPERTY(BlueprintReadOnly)
    FVector ReachableEnemyLkp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ShowInDifficulty;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeInFrontOfPlayerDoingNothing;
    
    UPROPERTY()
    FActiveBoneTraceAttack ActiveBoneTraceAttack;
    
    UPROPERTY()
    FTemporaryDeathData ActiveTemporaryDeath;
    
    UPROPERTY()
    FTimerHandle ActiveBoneTraceAttackHandle;
    
    UPROPERTY()
    FTimerHandle StopActiveBoneTraceAttackHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FActiveChargeAttack ActiveChargeAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool IsBountyEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UClass* SliceOffHeadBlueprint;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsHeadless;
    
    UPROPERTY()
    FVector StoredProjectileVelocity;
    
    UPROPERTY(SaveGame)
    bool ScriptedSequenceStarted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DebugMe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool IgnorePathFindingChecksForAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool OnlyValidTargetIfGrapplingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool ForceIntoExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool InvincibleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> AttacksDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> OverridenAttackDistances;
    
    UPROPERTY(BlueprintReadOnly)
    bool ExecutingPlayer;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FEnemyDamageTaken> DamageTakenTotal;
    
    UPROPERTY(SaveGame)
    bool AwardedApocalypseCrisisPoints;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPlayerDamageType> LastDamagedPlayerType;
    
    UPROPERTY()
    FQueuedEnemyMontageData QueuedMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSwitchToSecondaryDataConditions SecondaryDataConditions;
    
    UPROPERTY(SaveGame)
    bool SecondaryDataConditionsExpired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ResetAggroOnPositionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* ScriptedSequenceIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* ScriptedSequenceActionAnimation;
    
    UPROPERTY(EditAnywhere)
    bool NoExtractedMovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ThoughtsOnKilledEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool CantBeCrippled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowVocalizeWhenHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float ForceChasePlayerTimeAfterScriptedSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool InScriptedSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TakeDamageWhenPlayingScriptedSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanVocalizeInScriptedSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ScriptedSequenceInterruptFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CannotBeExploded;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool BuddhaMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HiddenBeforeScriptedSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BuddhaModeInScriptedSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverrideMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool IsIgnited;
    
    UPROPERTY(BlueprintReadWrite)
    float ScanBodyTime;
    
    UPROPERTY()
    FEnemyAttackData StoredAttackData;
    
    UPROPERTY()
    FVector ExecutionLocation;
    
    UPROPERTY()
    FRotator ExecutionRotation;
    
    UPROPERTY()
    float DamageBeforeFlinch;
    
    UPROPERTY(SaveGame)
    float CriticalRecoverTime;
    
    UPROPERTY()
    float RotationLockTime;
    
    UPROPERTY()
    float FlinchLockTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float CurrentAccumulatedDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealthMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool FullyDisabled;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool RemovedDueToDifficulty;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool KilledByBarrel;
    
    UPROPERTY()
    TEnumAsByte<EMovementMode> DefaultMovementMode;
    
    UPROPERTY()
    float GrappleInterpolationSpeed;
    
    UPROPERTY()
    float DesiredGrappleMeshOffset;
    
    UPROPERTY()
    float CurrentGrappleMeshOffset;
    
    UPROPERTY()
    AGzMapSegmentEntity* ActiveMapSegment;
    
    UPROPERTY()
    FEnemyAIGrapplingData ActiveGrapplingData;
    
    UPROPERTY()
    TEnumAsByte<EGrapplingState> PreviousGrapplingState;
    
    UPROPERTY()
    TEnumAsByte<EGrapplingState> GrapplingState;
    
    UPROPERTY()
    float NextGrappleTime;
    
    UPROPERTY()
    float NextFlinchTime;
    
    UPROPERTY()
    float StartingMeshOffset;
    
    UPROPERTY()
    FRotator StartingMeshRotation;
    
    UPROPERTY()
    float EnemyRetreatTime;
    
    UPROPERTY()
    FVector EnemyRetreatPosition;
    
    UPROPERTY()
    float QueuedRetreatTime;
    
    UPROPERTY()
    int32 DesiredGrapplingAttackLoops;
    
    UPROPERTY()
    int32 CurrentGrapplingAttackLoops;
    
    UPROPERTY(BlueprintReadOnly)
    AGzCharacter* GrappleVictim;
    
    UPROPERTY()
    bool ForceGrappleDetach;
    
    UPROPERTY()
    float NextGrappleStateTime;
    
    UPROPERTY()
    float NextDistanceAheadCheck;
    
    UPROPERTY()
    float NextIdleSound;
    
    UPROPERTY(BlueprintReadWrite)
    float AttackFacePlayerTime;
    
    UPROPERTY()
    float GrappleBlendBackTimeDelay;
    
    UPROPERTY(SaveGame)
    float CriticalStateBlockTime;
    
    UPROPERTY(SaveGame)
    float CrawlRecoverTime;
    
    UPROPERTY(SaveGame)
    bool InCrawlState;
    
    UPROPERTY(BlueprintReadOnly)
    float MindControlNextAttackTime;
    
    UPROPERTY(BlueprintReadOnly)
    float InActiveAttackTime;
    
    UPROPERTY(BlueprintReadOnly)
    float AngleToMovementTarget;
    
    UPROPERTY()
    TArray<ATriggerVolume*> AttackForcedByTriggerVolumes;
    
    UPROPERTY()
    TArray<AActor*> AttackLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UsesTriggerForceAttacks;
    
    UPROPERTY(EditDefaultsOnly)
    float DeadBurnOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    float BurnDamagePerTick;
    
    UPROPERTY(EditDefaultsOnly)
    float BurnTickDelay;
    
    UPROPERTY()
    float NextThreatenWalkCheckTime;
    
    UPROPERTY()
    float NextThreatenTime;
    
    UPROPERTY(EditAnywhere)
    float ExecuteWhenPlayerHealthLessThan;
    
    UPROPERTY(EditDefaultsOnly)
    float ThreatenCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    float ThreatenWalkCheckFrequency;
    
    UPROPERTY(EditDefaultsOnly)
    float MinimumThreatenWalkDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ThreatenWalkChance;
    
    UPROPERTY(EditDefaultsOnly)
    int32 OverrideCriticalHitMaxChance;
    
    UPROPERTY(EditDefaultsOnly)
    bool CannotBeDecapitated;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxRetreatDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D IdleMinMaxRandomTimes;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* FootstepSound;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* FootstepRunningSound;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ShotSounds;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* AlertSounds;
    
    UPROPERTY()
    float NextAlertSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkSpeedMultiplier;
    
    UPROPERTY()
    float CurrentVocalTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool DontInterruptSelf;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* IdleSounds;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* PainSounds;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* DeathSounds;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* AttackSounds;
    
    UPROPERTY(EditDefaultsOnly)
    bool NoIdleSoundsIfAggroed;
    
    UPROPERTY(EditDefaultsOnly)
    bool PlayAttackSoundOnAttackStart;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TSubclassOf<UGzDamageType> LastDamageInfo;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool HasBeenExecuted;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TEnumAsByte<EEnemyCriticalState> CriticalState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPassive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NPCLookAtSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MovementTranslationCurveName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeadPopChanceMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CannotDodgePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzEnemyAlternateAnimationData* AlternateAnimationData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* VocalSoundPlayer;
    
    UPROPERTY(BlueprintReadOnly)
    float DefaultMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float CrawlFallAnimationTime;
    
    UPROPERTY()
    AGzCharacter* WaitingToDetachFromGrapple;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<int32> LockedAttackSequences;
    
    UPROPERTY(BlueprintReadWrite)
    float NextPainSound;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float StunnedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool AutoToggleSmoothRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool CanSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool ForceTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, SaveGame)
    bool AIDisabled;
    
    UPROPERTY(BlueprintAssignable)
    FOnEnemyKilled OnEnemyKilled;
    
    UPROPERTY(BlueprintAssignable)
    FOnScriptedSequenceTriggered OnScriptedSequenceTriggered;
    
    UPROPERTY(BlueprintAssignable)
    FOnScriptedSequenceStarted OnScriptedSequenceStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnKilledCheckMeltAway OnKilledCheckMeltAway;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float Health;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TEnumAsByte<EMaximumDamageAmount> CurrentDamageAmount;
    
    UPROPERTY(BlueprintReadOnly)
    AGzCharacter* MindController;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentMindControlSwell;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredMindControlSwell;
    
    UPROPERTY()
    FVector LastDamageOriginLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LastHitLocation;
    
    UPROPERTY()
    FVector LastHitDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 AIGuid;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FRotator MovementOrientation;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsAggroed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NoAggroOnEasyMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AttackingCausesAggroRunning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DamageCausedAggroRunning;
    
    UPROPERTY()
    float BackUpBlockTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeAfterBackUpUntilNextBackUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanBeDecapitatedCloseQuarters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzEnemyDataAsset* EnemyAIData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzEnemyDataAsset* EnemyAIDataSecondary;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzEnemyDataAsset* EnemyCrawlAIDataSecondary;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzEnemyDataAsset* EnemyCrawlAIData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* EyeLocation;
    
    UPROPERTY()
    float NextAdditiveFlinch;
    
private:
    UPROPERTY()
    float DeathAlpha;
    
    UPROPERTY(SaveGame)
    int32 AlternateAnimationDataIndex;
    
    UPROPERTY(SaveGame)
    FVector SpawnLocation;
    
    UPROPERTY(SaveGame)
    FRotator SpawnRotation;
    
    UPROPERTY()
    TArray<UAnimSequence*> RandomSequences;
    
    UPROPERTY(SaveGame)
    bool UsingSecondaryDataAsset;
    
    UPROPERTY(SaveGame)
    float NextBurnTick;
    
    UPROPERTY()
    float NextAttackTime;
    
    UPROPERTY()
    float SwitchToSecondaryAnimationTime;
    
    UPROPERTY(SaveGame)
    float HeadScale;
    
    UPROPERTY()
    int32 LongestAttackDistance;
    
    UPROPERTY(SaveGame)
    int32 ActiveAttackDataIndex;
    
public:
    AGzEnemyAI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stunned(bool MeleeKicked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopIgnite(const float Delay);
    
    UFUNCTION(BlueprintCallable)
    void StopAggro();
    
    UFUNCTION(BlueprintCallable)
    void SpawnBloodPool();
    
    UFUNCTION(BlueprintCallable)
    void SetupVariablesForLivingEnemy();
    
    UFUNCTION(BlueprintCallable)
    void SetSmoothRotationModeEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationLockTime(const float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetResetPositionAndLocation(const FVector& Location, const FRotator& Rotation, const bool UseAsFootPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomSequences();
    
    UFUNCTION(BlueprintCallable)
    void SetRandomSequence(TEnumAsByte<EEnemySequenceType> SequenceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMovementLockTime(const float Time) const;
    
    UFUNCTION(BlueprintCallable)
    void SetHeadScale(const float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetFullyDisabled(const bool Disabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFlinchLockTime(const float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCapsuleDynamicObstacleEnabled(const bool Enabled) const;
    
    UFUNCTION(BlueprintCallable)
    void SetAttackLocked(const bool Locked, const int32 AttackIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAggroed();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveAnimationTranslator(const int32 Index, const bool PlayStartSequence, const bool PlayEndSequence);
    
    UFUNCTION(BlueprintCallable)
    void ResetPosition();
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(USoundBase* Sound, bool Vocal, const float FadeInTime, const bool ForcePlay);
    
    UFUNCTION(BlueprintCallable)
    void PlayScriptedSequence();
    
    UFUNCTION(BlueprintCallable)
    float PlayMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool StopAllMontages, bool StopMovement, bool DisableAttacks, bool DisableRotation, bool DisableFlinches);
    
    UFUNCTION(BlueprintCallable)
    void PerformSpecificAttack(const int32 Index);
    
    UFUNCTION(BlueprintPure)
    bool PerformingKillingBlow() const;
    
    UFUNCTION()
    void PerformActiveBoneTraceAttack();
    
    UFUNCTION(BlueprintCallable)
    void ParryStunned(const bool Kicked, UAnimMontage* CustomAnimation);
    
    UFUNCTION(BlueprintCallable)
    void ParriedByPlayer(UAnimMontage* CustomFlinchAnimation);
    
    UFUNCTION(BlueprintNativeEvent)
    float OverrideHitboxDamageMultiplier(EEnemyHitbox HitBox);
    virtual float OverrideHitboxDamageMultiplier_Implementation(EEnemyHitbox HitBox);
    
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnfrozen();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTriggerCinematicKill(const int32 AttackIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnBloodPool(const FVector Location);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShotByCompensator(FVector Location);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnProjectileSpawned(const FVector ProjectileSpawnLocation, const FVector Velocity, FEnemyAttackData AttackData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitByWeapon(const FVector Location, const FRotator Rotation, const FName WeaponID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitByMeleeWeapon();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitByElectricKnife(FVector Location, const float Charge);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitByAcidKnife(FVector Location);
    
    UFUNCTION()
    void OnHeadExplodeFallOverDead(AActor* WhoDitIt);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeadExploded(const bool SliceHeadOff);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFrozen();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnExecutePlayerFromAttack(const AGzCharacter* Player);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEnemyExploded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamageAmountChanged(EMaximumDamageAmount Amount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCriticalHit(FVector HitLocation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttackedPlayer(const int32 AttackIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAcidBurnTick(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void LaunchEnemy(const FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    bool IsPointWithinFacingAngle(const FVector& Point, float MinAngleDegrees, float MaxAngleDegrees, bool bDrawDebug, float DebugDuration);
    
    UFUNCTION(BlueprintCallable)
    bool IsAlive();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool InWater();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Ignite();
    
    UFUNCTION(BlueprintNativeEvent)
    bool HasSpaceFreeInFront(FVector BoxDimensions, const float Distance, const bool MustIncludePlayer, FEnemyAttackData& AttackData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GzEnemyTick(const float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    float GetTurnSpeed() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetTranslatedSequence(UAnimSequence* From) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetTranslatedMontage(UAnimMontage* From) const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeWalk() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeStun() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeIdle() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeFlinchKicked() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeFlinch() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeFlashbanged() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeCriticalStart() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeCriticalRecover() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeCriticalIdle() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeCriticalExecuted() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeCriticalDie() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeCrawlGetUp() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeCrawlFall() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceTypeCrawl() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetSequenceForSequenceType(TEnumAsByte<EEnemySequenceType> SequenceType) const;
    
    UFUNCTION(BlueprintPure)
    float GetRotationLockTime() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetRandomAISequence(TEnumAsByte<EEnemySequenceType> SequenceType) const;
    
    UFUNCTION(BlueprintPure)
    FEnemyAIAnimationData GetRandomAIAnimationData(const TEnumAsByte<EEnemySequenceType> SequenceType) const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EMaximumDamageAmount> GetMostDamagedAmount();
    
    UFUNCTION(BlueprintPure)
    float GetFlinchLockTime() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetAutoAimLocation() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAIGuid() const;
    
    UFUNCTION(BlueprintCallable)
    void Freeze();
    
    UFUNCTION(BlueprintCallable)
    void ForceGrappleStop();
    
    UFUNCTION(BlueprintCallable)
    void ForceEnemyRetreat(const float Time, const FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ForceChasePlayer(const float LoseTime) const;
    
    UFUNCTION(BlueprintCallable)
    void Flinch(const bool Additive);
    
    UFUNCTION(BlueprintCallable)
    void ExplodeHead(AActor* WhoDidIt, const bool SliceHeadOff);
    
    UFUNCTION(BlueprintCallable)
    void ExplodeEnemy(AActor* WhoDidIt);
    
    UFUNCTION()
    void EnemyRetreat();
    
    UFUNCTION()
    void EndActiveBoneTraceAttack();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugConeFan(float MinAngleDegrees, float MaxAngleDegrees, float Radius, int32 Segments, FColor LineColor, float duration);
    
    UFUNCTION(BlueprintPure)
    bool DoesPathExist(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable)
    void DifficultyModeCheck();
    
    UFUNCTION(BlueprintCallable)
    void ClearActiveAnimationTranslator();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CheckProjectilePathValidity(FVector StartLocation, FVector EndLocation, FEnemyAttackData AttackData, FVector& OutputVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckAudioComponentVolumes();
    
    UFUNCTION(BlueprintCallable)
    bool CanVocalize();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CannotBeTargeted();
    
    UFUNCTION()
    void BecomeVisibleAfterSpawn();
    
    UFUNCTION(BlueprintCallable)
    void AddDamage(TEnumAsByte<EMaximumDamageAmount> DamageType, float Amount);
    

    // Fix for true pure virtual functions not being implemented
};

