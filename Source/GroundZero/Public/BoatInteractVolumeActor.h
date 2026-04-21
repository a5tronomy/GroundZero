#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "BoatInteractVolumeActor.generated.h"

UCLASS()
class GROUNDZERO_API ABoatInteractVolumeActor : public AActor, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_ABoatInteractVolumeActor_Statics;
public:
    ABoatInteractVolumeActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

