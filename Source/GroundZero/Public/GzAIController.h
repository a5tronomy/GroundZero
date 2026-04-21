#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GzAIController.generated.h"

class AActor;
class UAISenseConfig_Hearing;
class UAISenseConfig_Sight;
class UBehaviorTree;
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS()
class GROUNDZERO_API AGzAIController : public AAIController {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzAIController_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    float MovementLockTime;
    
    UPROPERTY()
    float LoseEnemyTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAISenseConfig_Sight* SightSense4;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAISenseConfig_Hearing* HearingSense4;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<AActor> TargetEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBehaviorTree* BehaviourTree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UBehaviorTreeComponent* BehaviourTreeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UBlackboardComponent* BlackboardComponent;
    
public:
    AGzAIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanSeeActor(const AActor* Item) const;
    
};

