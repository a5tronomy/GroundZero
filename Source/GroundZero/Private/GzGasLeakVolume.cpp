#include "GzGasLeakVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AGzGasLeakVolume::AGzGasLeakVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("GasRootComponent"));
    this->HasExploded = false;
    this->VolumeEnabled = false;
    this->DelayBeforeExplosion = 0.20f;
    this->GasRootComponent = (USceneComponent*)RootComponent;
    this->BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->BoxCollision->SetupAttachment(RootComponent);
}

void AGzGasLeakVolume::SetVolumeEnabled(const bool Enabled) {
}


void AGzGasLeakVolume::OnFiredWeaponInVolume() {
}

void AGzGasLeakVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGzGasLeakVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



