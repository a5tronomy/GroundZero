#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "GzNPCController.generated.h"

class AActor;
class UAISenseConfig_Hearing;
class UAISenseConfig_Sight;
class UBehaviorTree;
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS()
class GROUNDZERO_API AGzNPCController : public AAIController {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzNPCController_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothFocusInterpSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DontShoot;
    
    UPROPERTY(EditAnywhere)
    UAISenseConfig_Sight* SightSense2;
    
    UPROPERTY(EditAnywhere)
    UAISenseConfig_Hearing* HearingSense2;
    
private:
    UPROPERTY()
    float EnemySwitchBlockTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHostileToPlayer;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    AActor* Enemy;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    AActor* Player;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float LoseEnemyTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviourTree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviourTreeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComponent;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FVector EnemyLKP;
    
    UPROPERTY()
    float RetreatTime;
    
    UPROPERTY()
    float RetreatBlockTime;
    
    UPROPERTY()
    float TargetSwitchBlockTime;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float DistanceToPlayer;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float AngleToPlayer;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float MovementLockTime;
    
public:
    AGzNPCController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMovementLocked(const float Seconds);
    
private:
    UFUNCTION()
    void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);
    
};

