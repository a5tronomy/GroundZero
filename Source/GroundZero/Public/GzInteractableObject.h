#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzInteractableObject.generated.h"

UCLASS()
class GROUNDZERO_API AGzInteractableObject : public AActor, public IEMSActorSaveInterface, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzInteractableObject_Statics;
public:
    AGzInteractableObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

