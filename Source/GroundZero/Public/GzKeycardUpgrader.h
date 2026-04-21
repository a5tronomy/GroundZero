#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzKeycardUpgrader.generated.h"

UCLASS()
class GROUNDZERO_API AGzKeycardUpgrader : public AActor, public IGzInteractInterface, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzKeycardUpgrader_Statics;
public:
    AGzKeycardUpgrader(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

