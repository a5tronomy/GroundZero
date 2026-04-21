#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzClimbVolumeActor.generated.h"

UCLASS()
class GROUNDZERO_API AGzClimbVolumeActor : public AActor, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzClimbVolumeActor_Statics;
public:
    AGzClimbVolumeActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

