#include "GzSwimVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AGzSwimVolume::AGzSwimVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SwimRootComponent"));
    this->ActivePlayer = NULL;
    this->FootDistanceBelowOriginToStartSwimming = 32.00f;
    this->SwimRootComponent = (USceneComponent*)RootComponent;
    this->SwimCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("SwimCollision"));
    this->MeshOverlapFraction = 0.00f;
    this->IsDisabled = false;
    this->SwimCollision->SetupAttachment(RootComponent);
}

void AGzSwimVolume::SetDisabled(const bool Disabled) {
}

void AGzSwimVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGzSwimVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


