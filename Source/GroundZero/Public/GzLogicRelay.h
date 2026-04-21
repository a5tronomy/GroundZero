#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzLogicRelay.generated.h"

UCLASS()
class GROUNDZERO_API AGzLogicRelay : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzLogicRelay_Statics;
public:
    AGzLogicRelay(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

