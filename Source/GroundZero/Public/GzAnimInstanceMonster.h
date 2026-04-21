#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEnemyCriticalState.h"
#include "EEnemySequenceType.h"
#include "GzAnimInstance.h"
#include "GzAnimInstanceMonster.generated.h"

class AGzEnemyAI;
class UAnimSequence;

UCLASS(NonTransient)
class GROUNDZERO_API UGzAnimInstanceMonster : public UGzAnimInstance {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimInstanceMonster_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    FVector AIDirectionalVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    float AIYawDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FVector AIDirectionalVelocityNormalized;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsBountyEnemy;
    
    UPROPERTY(BlueprintReadWrite)
    bool ExecutingEnemy;
    
    UPROPERTY(BlueprintReadOnly)
    float AdditiveFlinchAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float HeadScale;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EEnemyCriticalState> CriticalState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsAlive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool HasEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AdditiveFlinchSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CurrentMindControlSwell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkingSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookingDirectionPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookingDirectionYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableAnimationNotifies;
    
    UGzAnimInstanceMonster();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetRandomSequences() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetRandomSequence(TEnumAsByte<EEnemySequenceType> SequenceType) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLookingDirection(const float Pitch, const float Yaw);
    
protected:
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetRandomAISequence(TEnumAsByte<EEnemySequenceType> SequenceType) const;
    
    UFUNCTION(BlueprintPure)
    AGzEnemyAI* GetEnemyAIOwner() const;
    
};

