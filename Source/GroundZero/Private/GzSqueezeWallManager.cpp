#include "GzSqueezeWallManager.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "GzInteractComponent.h"

AGzSqueezeWallManager::AGzSqueezeWallManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SqueezeRootComponent"));
    this->EntranceCapsuleComponent = NULL;
    this->ActivePlayer = NULL;
    this->PreviousNoTargetValue = false;
    this->SequenceStarted = false;
    this->EndingSequence = false;
    this->IsPipeClimb = false;
    this->SqueezeStartMontage = NULL;
    this->SqueezeEndMontage = NULL;
    this->SqueezeEndBackwardsMontage = NULL;
    this->SqueezeRootComponent = (USceneComponent*)RootComponent;
    this->FirstInteract = CreateDefaultSubobject<UGzInteractComponent>(TEXT("FirstInteract"));
    const FProperty* p_FirstCapsule_Parent = GetClass()->FindPropertyByName("FirstCapsule");
    this->SecondInteract = CreateDefaultSubobject<UGzInteractComponent>(TEXT("SecondInteract"));
    const FProperty* p_SecondCapsule_Parent = GetClass()->FindPropertyByName("SecondCapsule");
    this->FirstCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("FirstCapsule"));
    this->SecondCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SecondCapsule"));
    this->FirstExitTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("FirstExitTrigger"));
    this->SecondExitTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("SecondExitTrigger"));
    this->FirstCapsule->SetupAttachment(RootComponent);
    this->FirstExitTrigger->SetupAttachment(FirstCapsule);
    this->FirstInteract->SetupAttachment(p_FirstCapsule_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->SecondCapsule->SetupAttachment(RootComponent);
    this->SecondExitTrigger->SetupAttachment(SecondCapsule);
    this->SecondInteract->SetupAttachment(p_SecondCapsule_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
}

void AGzSqueezeWallManager::StopSqueezeWall(const bool Backwards) {
}

void AGzSqueezeWallManager::StartSqueezeWall(AGzCharacter* Player) {
}

void AGzSqueezeWallManager::PostSequenceCleanUp() {
}

UCapsuleComponent* AGzSqueezeWallManager::FindNearestCapsule(const AGzCharacter* Character) const {
    return NULL;
}

void AGzSqueezeWallManager::BeginSequence() {
}


