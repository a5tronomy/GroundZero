#include "GzDriveableBoat.h"
#include "Components/BoxComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AGzDriveableBoat::AGzDriveableBoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->UseModernControls = false;
    this->FlashlightLocationBlendAlpha = 0.00f;
    this->ActiveModernControlsPlayer = NULL;
    this->StaminaRecoverBlockTime = 0.00f;
    this->CameraReorientJoystickValue = 0.30f;
    this->ModernControlsType = 0;
    this->UseAlternateModernControlsInterp = false;
    this->DrawDebugDirection = false;
    this->BoatMoveInterpolationSpeed = 8.00f;
    this->BoatMoveInterpolationSpeedModern = 8.00f;
    this->BoatMoveInterpolationSpeedNotMoving = 2.00f;
    this->BoatMoveInterpolationSpeedNotMovingModern = 2.00f;
    this->BoatTurnInterpolationSpeedModern = 5.00f;
    this->BoatTurnInterpolationSpeedNotMovingModern = 3.00f;
    this->BoatTurnInterpolationSpeed = 0.00f;
    this->BoatTurnInterpolationSpeedNotMoving = 0.00f;
    this->BoatMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BoatMesh"));
    this->RootSceneComponent = NULL;
    this->BoatFlashlightLocation = CreateDefaultSubobject<USceneComponent>(TEXT("BoatFlashlightLocation"));
    this->BoatCollision = (UBoxComponent*)RootComponent;
    this->BoatMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("BoatMovement"));
    this->BoostSpeedMultiplier = 1.35f;
    this->BoostSpeedTurnMultiplier = 1.20f;
    this->BoatForwardSpeed = 0.00f;
    this->BoatTurnSpeed = 0.00f;
    this->BoatTurnSpeedModernMultiplier = 1.00f;
    this->BoatForwardSpeedMultiplier = 1.00f;
    this->DesiredForwardSpeed = 0.00f;
    this->CurrentForwardSpeed = 0.00f;
    this->DesiredTurnSpeed = 0.00f;
    this->BoatControlsLocked = false;
    this->CurrentTurnSpeed = 0.00f;
    this->BoatActive = false;
    this->IsBoosting = false;
    this->BoatUpgraded = false;
    this->BoatStamina = 0.00f;
    this->MaxSprintTimeWhenNotUpgraded = 4.00f;
    this->BoatFlashlightLocation->SetupAttachment(BoatMesh);
    this->BoatMesh->SetupAttachment(RootComponent);
}

void AGzDriveableBoat::UpgradeBoat() {
}

void AGzDriveableBoat::StopMovingImmediately() {
}

void AGzDriveableBoat::StopMoving() {
}


void AGzDriveableBoat::SetBoatControlsLocked(const bool Locked) {
}

void AGzDriveableBoat::SetBoatActive(const bool Active) {
}

void AGzDriveableBoat::RunOutOfStamina_Implementation() {
}


