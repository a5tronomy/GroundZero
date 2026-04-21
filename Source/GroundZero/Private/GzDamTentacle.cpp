#include "GzDamTentacle.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AGzDamTentacle::AGzDamTentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TentacleRoot"));
    this->TraceAttackActiveTime = 0.00f;
    this->HasHitPlayerThisAttack = false;
    this->TentacleRoot = (USceneComponent*)RootComponent;
    this->TentacleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TentacleMesh"));
    this->TentacleMesh->SetupAttachment(RootComponent);
}



