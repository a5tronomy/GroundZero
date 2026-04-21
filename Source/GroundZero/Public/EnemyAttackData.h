#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "EPlayerDamageType.h"
#include "EnemyAIGrapplingData.h"
#include "QueuedEnemyMontageData.h"
#include "TriggerOnAttack.h"
#include "EnemyAttackData.generated.h"

class UAnimMontage;
class USoundBase;

USTRUCT(BlueprintType)
struct FEnemyAttackData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnemyAttackData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AttackStartsLocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PreAttackMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForcedByTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MustBeAtAttackLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumDistanceToAttackLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyWhenMindControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MindControlSecondaryAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MovingAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyWhileMoving;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AttackHitSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CannotKill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Damage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CooldownTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackTimeOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MindControlAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ResetAnimationTranslator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OnlyWithActiveAnimationTranslatorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyAgainstNpcs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HeightAttackFallbackIfPlayerTooHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumZValueDifference;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClearDistanceAhead;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ClearDistanceAheadBoxCheckSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanAttackThroughWalls;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumAngleToTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D MinimumAngleConeToTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CheckBehindActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackTurnSpeedOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinimumAttackDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AttackDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AttackWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AttackForwardOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttackVolumeTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PoisonChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackFacePlayerTimeSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DrawDebugTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEnemyAIGrapplingData GrapplingData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LaunchVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LaunchVictimOnHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LaunchVictimVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageWhenVictimHitWall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQueuedEnemyMontageData MontageIfAttackHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EPlayerDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PostAttackRetreatTimeInSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString BloodSpawnLocationBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTriggerOnAttack TriggerOnAttackHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UClass* AttackProjectileBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttackProjectileBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AttackProjectilePathMustBeValid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GlobalProjectileCooldownTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverrideGlobalProjectileCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChanceMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FinalChanceCheck;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CinematicKillIfKillsPlayer;
    
    GROUNDZERO_API FEnemyAttackData();
};

