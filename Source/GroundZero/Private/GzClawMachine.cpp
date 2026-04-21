#include "GzClawMachine.h"
#include "Components/AudioComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "GzPoseableMeshComponent.h"

AGzClawMachine::AGzClawMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ClawMachineRoot"));
    this->ClawMovingAutomatically = false;
    this->ClawMovementSpeed = 4.00f;
    this->ClawInputSpeedMultiplier = 0.10f;
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->PreRenderedCamera = NULL;
    this->ClawMachineMesh = CreateDefaultSubobject<UGzPoseableMeshComponent>(TEXT("ClawMachineMesh"));
    this->ClawMachineRoot = (USceneComponent*)RootComponent;
    this->ClawMachineMusic = CreateDefaultSubobject<UAudioComponent>(TEXT("ClawMachineMusic"));
    this->ClawMachineSound = CreateDefaultSubobject<UAudioComponent>(TEXT("ClawMachineSound"));
    this->ClawMovementStateValue = 0.00f;
    this->ClawFingerState = 0.00f;
    this->DesiredClawFingerState = 1.00f;
    this->CurrentClawHeight = 0.00f;
    this->DesiredClawHeight = 0.00f;
    this->ClawDescentSpeed = 0.00f;
    this->ClawFingerSpeed = 0.00f;
    this->JoystickMoveSpeed = 4.00f;
    this->CarriedPrize = NULL;
    this->ClawMachineState = Idle;
    this->ClawDescentDistance = 0.00f;
    this->ActivePlayer = NULL;
    this->PauseTime = 0.00f;
    this->CurrentJoystickLeftRight = 0.00f;
    this->CurrentJoystickUpDown = 0.00f;
    this->WaitingToDropItem = NULL;
    this->DesiredJoystickLeftRight = 0.00f;
    this->DesiredJoystickUpDown = 0.00f;
    this->CameraComponent->SetupAttachment(RootComponent);
    this->ClawMachineMesh->SetupAttachment(RootComponent);
    this->ClawMachineMusic->SetupAttachment(RootComponent);
    this->ClawMachineSound->SetupAttachment(RootComponent);
}

void AGzClawMachine::StartUsingClawMachine(AGzCharacter* Player) {
}

void AGzClawMachine::OnUsedByPlayer_Implementation(AGzCharacter* Player) {
}



float AGzClawMachine::GetMovementSpeedForClawMachineState_Implementation() {
    return 0.0f;
}





