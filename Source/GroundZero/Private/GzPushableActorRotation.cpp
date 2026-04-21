#include "GzPushableActorRotation.h"
#include "GameFramework/RotatingMovementComponent.h"

AGzPushableActorRotation::AGzPushableActorRotation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PushRotatesObject = true;
    this->RotationMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotationMovement"));
    this->NorthRotationMultiplier = 1.00f;
    this->EastRotationMultiplier = 1.00f;
    this->SouthRotationMultiplier = 1.00f;
    this->WestRotationMultiplier = 1.00f;
    this->CurrentPushingCapsule = NULL;
}


