#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzTrainBossArmTrigger.generated.h"

UCLASS()
class GROUNDZERO_API AGzTrainBossArmTrigger : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTrainBossArmTrigger_Statics;
public:
    AGzTrainBossArmTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnTriggerArm();
    
};

