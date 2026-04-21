#include "GzDeathResetter.h"
#include "Components/SceneComponent.h"

AGzDeathResetter::AGzDeathResetter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AssociatedEnemy = NULL;
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->TriggerVolume = NULL;
}


