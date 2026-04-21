#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzBoatEntranceVolume.generated.h"

UCLASS()
class GROUNDZERO_API AGzBoatEntranceVolume : public AActor, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzBoatEntranceVolume_Statics;
public:
    AGzBoatEntranceVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

