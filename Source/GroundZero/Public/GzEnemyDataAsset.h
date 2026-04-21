#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyAIAnimationData.h"
#include "EnemyAttackData.h"
#include "EnemyBackUpData.h"
#include "EnemyDirectionalDeathData.h"
#include "EnemyDirectionalFlinchData.h"
#include "PlayerDodgingData.h"
#include "GzEnemyDataAsset.generated.h"

class UAnimMontage;
class UAnimSequence;
class UNiagaraSystem;

UCLASS(BlueprintType)
class GROUNDZERO_API UGzEnemyDataAsset : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzEnemyDataAsset_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FEnemyAttackData> AttackData;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPlayerDodgingData PlayerDodgingData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEnemyBackUpData EnemyBackUpData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumCrawlHealth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumCrawlTimeBeforeRecovery;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaximumCrawlTimeBeforeRecovery;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumCriticalTimeBeforeRecovery;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaximumCriticalTimeBeforeRecovery;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CrawlChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CriticalChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinCriticalHealth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CurrentDamageTickDownMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinDamageBeforeFlinch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxDamageBeforeFlinch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool FlinchingCausesStun;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DontStunIfAlreadyStunned;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UAnimMontage*> SwitchToSecondaryDataAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UAnimMontage*> SwitchFromSecondaryDataAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* TempDeathAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* TempCriticalDeathAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* TempCrawlDeathAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseDirectionalDeathData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEnemyDirectionalDeathData DirectionalDeathData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> IdleAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> AggroIdleAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> WalkAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> ThreatenAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> WalkThreatenAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> RunAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> SprintAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEnemyDirectionalFlinchData DirectionalFlinchAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> AdditiveFlinchAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> FlashbangedAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> StunAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> MeleeAttackAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> CriticalStartAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> CriticalIdleAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> CriticalRecoverAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> CriticalDieAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> CriticalExecutedAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> FlinchKickedAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> CrawlFallStartAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> CrawlAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> CrawlFallGetUpAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* BloodParticle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxGenomePoints;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ApocalypseCrisisSecondsBonus;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ApocalypseCrisisBountyMultiplier;
    
public:
    UGzEnemyDataAsset();

    UFUNCTION(BlueprintPure)
    UAnimSequence* GetRandomAISequenceData(TArray<FEnemyAIAnimationData> SequenceData) const;
    
    UFUNCTION(BlueprintPure)
    FEnemyAIAnimationData GetRandomAIAnimationData(TArray<FEnemyAIAnimationData> SequenceData) const;
    
};

