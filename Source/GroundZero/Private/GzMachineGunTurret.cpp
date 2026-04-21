#include "GzMachineGunTurret.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AGzMachineGunTurret::AGzMachineGunTurret(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TurretRootComponent"));
    this->AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
    this->SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
    this->BeepBlockTime = false;
    this->LoseSightOfPlayerTime = 0.00f;
    this->ActivePlayer = NULL;
    this->NextShootDamageTime = 0.00f;
    this->IsShooting = false;
    this->ReverseLookDirection = false;
    this->NextReverseLookTime = 0.00f;
    this->ShootBlockTime = 0.00f;
    this->TurretTurning = false;
    this->TurretTurningAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("TurretTurningAudio"));
    this->EyePosition = CreateDefaultSubobject<USceneComponent>(TEXT("EyePosition"));
    this->TurretAimingForwardReference = CreateDefaultSubobject<USceneComponent>(TEXT("TurretAimingForwardReference"));
    this->TurretRootComponent = (USceneComponent*)RootComponent;
    this->CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    this->GunFrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunFrameMesh"));
    this->GunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunMesh"));
    this->MuzzleFlashSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleFlashSpawnLocation"));
    this->HotAndColdVolume = NULL;
    this->TimeBetweenEachIdleTurnWhenHot = 1.00f;
    this->TimeBetweenEachIdleTurn = 0.00f;
    this->IdleGunTurnSpeed = 1.00f;
    this->GunTurnSpeed = 4.00f;
    this->GunShootSpread = 8.00f;
    this->MaxGunRotationInAngles = 45.00f;
    this->TimeBeforeStartShooting = 1.00f;
    this->PhysicalBulletClass = NULL;
    this->CollisionBox->SetupAttachment(RootComponent);
    this->EyePosition->SetupAttachment(RootComponent);
    this->GunFrameMesh->SetupAttachment(RootComponent);
    this->GunMesh->SetupAttachment(GunFrameMesh);
    this->MuzzleFlashSpawnLocation->SetupAttachment(GunMesh);
    this->TurretAimingForwardReference->SetupAttachment(GunFrameMesh);
    this->TurretTurningAudio->SetupAttachment(GunFrameMesh);
}

bool AGzMachineGunTurret::TurretIsHot() const {
    return false;
}









