#include "GzBikeModeBike.h"
#include "Components/SkeletalMeshComponent.h"

AGzBikeModeBike::AGzBikeModeBike(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BikeMesh"));
    this->Player = NULL;
    this->BikeMesh = (USkeletalMeshComponent*)RootComponent;
    this->MoveAnimation = NULL;
    this->IdleAnimation = NULL;
}


