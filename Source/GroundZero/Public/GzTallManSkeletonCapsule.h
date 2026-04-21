#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzAutoAimInterface.h"
#include "GzDamageableInterface.h"
#include "GzTallManSkeletonCapsule.generated.h"

UCLASS()
class GROUNDZERO_API AGzTallManSkeletonCapsule : public AActor, public IGzDamageableInterface, public IGzAutoAimInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTallManSkeletonCapsule_Statics;
public:
    AGzTallManSkeletonCapsule(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

