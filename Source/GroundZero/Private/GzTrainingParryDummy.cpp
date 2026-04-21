#include "GzTrainingParryDummy.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AGzTrainingParryDummy::AGzTrainingParryDummy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRoot"));
    this->DummyRoot = (USceneComponent*)RootComponent;
    this->CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));
    this->DummyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DummyMesh"));
    this->AttackBox = CreateDefaultSubobject<UBoxComponent>(TEXT("AttackBox"));
    this->ForceCounterAttackTime = 0.50f;
    this->AttackStartTime = 0.00f;
    this->AttackParryWindow = 0.35f;
    this->PlayerHitSound = NULL;
    this->PlayerHitMontage = NULL;
    this->AttackBox->SetupAttachment(RootComponent);
    this->CapsuleCollision->SetupAttachment(RootComponent);
    this->DummyMesh->SetupAttachment(RootComponent);
}


void AGzTrainingParryDummy::AttackPlayer() {
}


