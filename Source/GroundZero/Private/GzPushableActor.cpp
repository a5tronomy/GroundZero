#include "GzPushableActor.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GzInteractComponent.h"

AGzPushableActor::AGzPushableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PushCollision"));
    this->IsPulling = false;
    this->ResetPositionOnRoomChange = false;
    this->MovingTowardCamera_WithS_Capsule = NULL;
    this->MovingLeft_WithA_Capsule = NULL;
    this->MovingRight_WithD_Capsule = NULL;
    this->CapsuleNearestToCamera = NULL;
    this->ObjectIsMoving = false;
    this->PreviousObjectIsMoving = false;
    this->PushPullSwitchDisabledTime = 0.00f;
    this->NextPushTime = 0.00f;
    this->ActiveCapsuleComponent = NULL;
    this->PushingDisabled = false;
    this->ActivePlayer = NULL;
    this->NoPull = false;
    this->PushRotatesObject = false;
    this->RotateSpeed = 0.00f;
    this->MoveSpeed = 10.00f;
    this->ConstantPushing = false;
    this->IsShortObject = false;
    this->IsRotatingObject = false;
    this->IgnoreCollisionSafetyChecks = false;
    this->CurrentPressedInput = 0.00f;
    this->PushCollision = (UBoxComponent*)RootComponent;
    this->PushToPullMontage = NULL;
    this->PullToPushMontage = NULL;
    this->PushToPullShortMontage = NULL;
    this->PullToPushShortMontage = NULL;
    this->PushStartMontage = NULL;
    this->PushStopMontage = NULL;
    this->PushStartShortMontage = NULL;
    this->PushStopShortMontage = NULL;
    this->PushableRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PushableRootComponent"));
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->NorthCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("NorthCapsule"));
    this->NorthArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("NorthArrow"));
    this->NorthInteract = CreateDefaultSubobject<UGzInteractComponent>(TEXT("NorthInteract"));
    this->EastCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("EastCapsule"));
    this->EastInteract = CreateDefaultSubobject<UGzInteractComponent>(TEXT("EastInteract"));
    this->EastArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("EastArrow"));
    this->SouthCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SouthCapsule"));
    this->SouthInteract = CreateDefaultSubobject<UGzInteractComponent>(TEXT("SouthInteract"));
    this->SouthArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("SouthArrow"));
    this->WestCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("WestCapsule"));
    this->WestInteract = CreateDefaultSubobject<UGzInteractComponent>(TEXT("WestInteract"));
    this->WestArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("WestArrow"));
    this->EastArrow->SetupAttachment(EastCapsule);
    this->EastCapsule->SetupAttachment(PushableRootComponent);
    this->EastInteract->SetupAttachment(PushableRootComponent);
    this->MeshComponent->SetupAttachment(PushableRootComponent);
    this->NorthArrow->SetupAttachment(NorthCapsule);
    this->NorthCapsule->SetupAttachment(PushableRootComponent);
    this->NorthInteract->SetupAttachment(PushableRootComponent);
    this->PushableRootComponent->SetupAttachment(RootComponent);
    this->SouthArrow->SetupAttachment(SouthCapsule);
    this->SouthCapsule->SetupAttachment(PushableRootComponent);
    this->SouthInteract->SetupAttachment(PushableRootComponent);
    this->WestArrow->SetupAttachment(WestCapsule);
    this->WestCapsule->SetupAttachment(PushableRootComponent);
    this->WestInteract->SetupAttachment(PushableRootComponent);
}

void AGzPushableActor::StopPushingObject(const bool ForceStop) {
}

void AGzPushableActor::StartPushingObject(AGzCharacter* Character, UCapsuleComponent* CapsuleComponent) {
}

void AGzPushableActor::SetResetPositionAndLocation(const FVector& Location, const FRotator& Rotation) {
}

void AGzPushableActor::SetPushingDisabled(const bool Disabled) {
}

void AGzPushableActor::SetAnimInstancePushingObject(UGzPlayerAnimInstance* AnimInstance, bool IsPushing, bool StopRotating) const {
}

void AGzPushableActor::ResetPosition() {
}



bool AGzPushableActor::IsTeleportLocationSafe(ACharacter* Character, const FVector& TargetLocation) {
    return false;
}

UCapsuleComponent* AGzPushableActor::FindNearestCapsuleToActor(const AActor* Actor) {
    return NULL;
}

UCapsuleComponent* AGzPushableActor::FindNearestCapsule(const AGzCharacter* Character) {
    return NULL;
}

void AGzPushableActor::AttachPlayerToObject(UCapsuleComponent* Capsule, AGzCharacter* Character) const {
}

void AGzPushableActor::ApplyForwardVelocity(const float Multiplier) {
}


