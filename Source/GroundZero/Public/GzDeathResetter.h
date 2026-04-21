#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzDeathResetter.generated.h"

class ACharacter;
class ATriggerVolume;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzDeathResetter : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzDeathResetter_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ACharacter* AssociatedEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATriggerVolume* TriggerVolume;
    
    AGzDeathResetter(const FObjectInitializer& ObjectInitializer);

};

