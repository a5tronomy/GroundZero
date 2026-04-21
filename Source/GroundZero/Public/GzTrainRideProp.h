#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzTrainRideProp.generated.h"

UCLASS()
class GROUNDZERO_API AGzTrainRideProp : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTrainRideProp_Statics;
public:
    AGzTrainRideProp(const FObjectInitializer& ObjectInitializer);

};

