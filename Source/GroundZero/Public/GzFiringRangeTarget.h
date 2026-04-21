#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnExplodedThreeTargetsDelegate.h"
#include "OnGotCriticalShotDelegate.h"
#include "GzFiringRangeTarget.generated.h"

UCLASS()
class GROUNDZERO_API AGzFiringRangeTarget : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzFiringRangeTarget_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FOnGotCriticalShot OnGotCriticalShot;
    
    UPROPERTY(BlueprintAssignable)
    FOnExplodedThreeTargets OnExplodedThreeTargets;
    
    AGzFiringRangeTarget(const FObjectInitializer& ObjectInitializer);

};

