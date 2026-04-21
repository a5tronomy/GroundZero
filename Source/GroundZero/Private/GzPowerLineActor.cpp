#include "GzPowerLineActor.h"
#include "Components/SceneComponent.h"

AGzPowerLineActor::AGzPowerLineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Powerline Root"));
    this->PowerLineRoot = (USceneComponent*)RootComponent;
}


