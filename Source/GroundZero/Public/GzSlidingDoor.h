#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzSlidingDoor.generated.h"

UCLASS()
class GROUNDZERO_API AGzSlidingDoor : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSlidingDoor_Statics;
public:
    AGzSlidingDoor(const FObjectInitializer& ObjectInitializer);

};

