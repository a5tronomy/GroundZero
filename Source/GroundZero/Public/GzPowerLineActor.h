#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzPowerLineActor.generated.h"

class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzPowerLineActor : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzPowerLineActor_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* PowerLineRoot;
    
    AGzPowerLineActor(const FObjectInitializer& ObjectInitializer);

};

