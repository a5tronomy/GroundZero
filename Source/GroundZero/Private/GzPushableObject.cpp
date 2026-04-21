#include "GzPushableObject.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GzInteractComponent.h"

AGzPushableObject::AGzPushableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->InteractVolume = CreateDefaultSubobject<UGzInteractComponent>(TEXT("InteractVolume"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->InteractVolume->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}


