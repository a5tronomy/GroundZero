#include "AGzLastBossTentacle.h"
#include "Components/SkeletalMeshComponent.h"

AAGzLastBossTentacle::AAGzLastBossTentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TentacleRoot"));
    this->TurnBlockTime = 0.00f;
    this->Player = NULL;
    this->TentacleRoot = (USceneComponent*)RootComponent;
    this->TentacleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TentacleMesh"));
    this->TentacleMesh->SetupAttachment(RootComponent);
}


