#include "GzLastBossManager.h"
#include "Components/SkeletalMeshComponent.h"

AGzLastBossManager::AGzLastBossManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LastBossRoot"));
    this->CurrentStage = 0;
    this->MaxActiveShitBoys = 10;
    this->LastBossRoot = (USceneComponent*)RootComponent;
    this->LastBossMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LastBossMesh"));
    this->CurrentHeadExtension = 0.00f;
    this->DesiredHeadExtension = 0.00f;
    this->HeadExtensionInterpSpeed = 4.00f;
    this->HeadRevealed = false;
    this->LastBossMesh->SetupAttachment(RootComponent);
}


