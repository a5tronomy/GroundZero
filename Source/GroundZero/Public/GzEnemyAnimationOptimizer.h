#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GzEnemyAnimationOptimizer.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzEnemyAnimationOptimizer : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzEnemyAnimationOptimizer_Statics;
public:
    UPROPERTY(BlueprintReadWrite)
    bool IsEnabled;
    
private:
    UPROPERTY()
    AActor* PlayerActor;
    
    UPROPERTY(EditDefaultsOnly)
    float CloseDistSq;
    
    UPROPERTY(EditDefaultsOnly)
    float MediumDistSq;
    
    UPROPERTY(EditDefaultsOnly)
    float UpdateInterval;
    
public:
    UGzEnemyAnimationOptimizer(const FObjectInitializer& ObjectInitializer);

};

