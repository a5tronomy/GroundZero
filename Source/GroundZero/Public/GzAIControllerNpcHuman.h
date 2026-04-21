#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "ActorFollowTask.h"
#include "CharacterMontage.h"
#include "EHumanVoiceLine.h"
#include "HumanTaskThrowGrenade.h"
#include "Templates/SubclassOf.h"
#include "TemporaryFocus.h"
#include "GzAIControllerNpcHuman.generated.h"

class AActor;
class AGzAIControllerNpcHuman;
class AGzHumanNpcCharacter;
class UAISenseConfig_Hearing;
class UAISenseConfig_Sight;

UCLASS()
class GROUNDZERO_API AGzAIControllerNpcHuman : public AAIController {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzAIControllerNpcHuman_Statics;
public:
    UPROPERTY()
    TArray<AActor*> TargetsToShootAt;
    
    UPROPERTY()
    TArray<AGzAIControllerNpcHuman*> RalliedAllies;
    
    UPROPERTY()
    float NextTargetSwitchTime;
    
    UPROPERTY(BlueprintReadWrite)
    bool ChasingPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool FaceDirectionOfMovement;
    
    UPROPERTY(BlueprintReadWrite)
    FVector FocusLocation;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* TrackingTarget;
    
    UPROPERTY(BlueprintReadWrite)
    FActorFollowTask ActiveActorFollowingTask;
    
    UPROPERTY(BlueprintReadWrite)
    FTemporaryFocus ActiveTemporaryFocus;
    
private:
    UPROPERTY()
    TArray<AGzHumanNpcCharacter*> AllFellowNpcs;
    
    UPROPERTY()
    float NextStatusUpdateTime;
    
    UPROPERTY()
    float PatrolBlockTime;
    
    UPROPERTY()
    bool IsPatrolling;
    
    UPROPERTY()
    FVector PatrolDestination;
    
    UPROPERTY()
    float TimeUntilNextPatrolDestinationChange;
    
    UPROPERTY()
    float PatrolTime;
    
    UPROPERTY()
    float NextGrenadeThrowTime;
    
    UPROPERTY()
    float NextGrenadeThrowCheckTime;
    
    UPROPERTY()
    float NextBackUpTime;
    
    UPROPERTY()
    float NextMeleeHitTime;
    
    UPROPERTY()
    FVector EnemyLKP;
    
    UPROPERTY()
    bool EnemyLkpSet;
    
    UPROPERTY()
    float LoseEnemyTime;
    
    UPROPERTY()
    bool EnemyCurrentlyVisible;
    
    UPROPERTY(SaveGame)
    float NextEnemySpottedTime;
    
    UPROPERTY(SaveGame)
    float NextHumanSpottedTime;
    
    UPROPERTY(SaveGame)
    bool CurrentlyInCombat;
    
    UPROPERTY(SaveGame)
    float TimeSinceLastCombatEncounter;
    
    UPROPERTY(SaveGame)
    float TimeToReloadAfterCombatEnds;
    
    UPROPERTY()
    AActor* EnemyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDistanceForAllyToBeInSameRoom;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UAISenseConfig_Sight* SightSense3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UAISenseConfig_Hearing* HearingSense3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothFocusInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float NextRetreatTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AngleThresholdBeforeTurning;
    
    UPROPERTY(EditDefaultsOnly)
    float DistanceBeforeRetreat;
    
    UPROPERTY()
    FTimerHandle ChainedActionHandle;
    
    UPROPERTY()
    FTimerHandle GrenadeThrowHandle;
    
    UPROPERTY(EditAnywhere)
    bool AllowFiringPositionChecks;
    
    UPROPERTY(EditDefaultsOnly)
    float ProbeRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxProbeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float ProbeHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float RepositionInterval;
    
    UPROPERTY()
    float NextRepositionCheckTime;
    
public:
    AGzAIControllerNpcHuman(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TryRetreatFromActor(const AActor* Actor, const float DistanceToRetreat);
    
    UFUNCTION(BlueprintCallable)
    void ThrowGrenade(TSubclassOf<AActor> GrenadeToThrow, FCharacterMontage ThrowAnimation, FVector Location, const float ZOffset, const float DelayBeforeRelease, const float Speed, const bool BlindThrow, TEnumAsByte<EHumanVoiceLine> VoiceLine);
    
    UFUNCTION(BlueprintCallable)
    void StopSpeaking();
    
    UFUNCTION(BlueprintCallable)
    void StartFollowingActor(AActor* ActorToFollow, const float AcceptanceRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpeakLineDelayed(TEnumAsByte<EHumanVoiceLine> VoiceLine, const float Delay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpeakLine(TEnumAsByte<EHumanVoiceLine> VoiceLine) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void SpawnThrownGrenade(FHumanTaskThrowGrenade TaskInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackingTarget(AActor* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTemporaryFocus(FVector Location, const float duration, AActor* FocusActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetRunning(const bool Running) const;
    
    UFUNCTION(BlueprintCallable)
    void SetFocusLocation(const FVector Location);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnemyTarget(AActor* Target, AActor* PreviousTarget, const bool ToldByAlly);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetFocusStraightForward();
    
private:
    UFUNCTION()
    void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);
    
protected:
    UFUNCTION()
    void InternalThrowGrenade(FHumanTaskThrowGrenade TaskInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetEnemyTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FaceTarget(AActor* ActorToFace, float ForTime);
    
    UFUNCTION(BlueprintCallable)
    void FaceLocation(const FVector LocationToFace, float ForTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearTemporaryFocus();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool CheckProjectilePathValidity(FVector StartLocation, FVector EndLocation, float Speed, FVector& OutputVelocity);
    
private:
    UFUNCTION()
    void CheckIfKilledEnemy(AActor* Enemy);
    
};

