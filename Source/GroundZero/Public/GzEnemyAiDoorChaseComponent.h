#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GzEnemyAiDoorChaseComponent.generated.h"

class AActor;
class AGzInterDoor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzEnemyAiDoorChaseComponent : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzEnemyAiDoorChaseComponent_Statics;
public:
    UPROPERTY()
    TArray<AActor*> AllResetPoints;
    
    UPROPERTY(BlueprintReadWrite)
    AGzInterDoor* LastUsedPlayerDoor;
    
    UPROPERTY(EditAnywhere)
    FName ResetActorLocationTag;
    
    UPROPERTY(EditAnywhere)
    FName AllowedDoorTag;
    
    UPROPERTY(EditAnywhere)
    FName DisallowedDoorTag;
    
    UPROPERTY(BlueprintReadWrite)
    bool CanChase;
    
    UPROPERTY(BlueprintReadWrite)
    float ChaseBlockTime;
    
    UPROPERTY()
    AGzInterDoor* ActiveDoor;
    
    UGzEnemyAiDoorChaseComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnPlayerGoneThroughDoor(AActor* Door);
    
};

