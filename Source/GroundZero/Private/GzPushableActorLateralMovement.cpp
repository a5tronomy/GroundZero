#include "GzPushableActorLateralMovement.h"
#include "GameFramework/FloatingPawnMovement.h"

AGzPushableActorLateralMovement::AGzPushableActorLateralMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PushMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PushMovement"));
}


