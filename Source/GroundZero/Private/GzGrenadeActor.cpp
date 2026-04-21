#include "GzGrenadeActor.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

AGzGrenadeActor::AGzGrenadeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->InWater = false;
    this->InDeepWater = false;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->ExplosionRoot = NULL;
    this->DeathSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DeathSphere"));
    this->DontHurtPlayer = false;
    this->DontKillPlayer = false;
    this->PlayerDamageCap = 0.00f;
    this->NoDeathSphere = false;
    this->DamageSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DamageSphere"));
    this->RadialDamage = 200.00f;
    this->PlayerDamageIfHitWall = 15.00f;
    this->FuzeTime = 3.00f;
    this->GrenadeType = Flashbang;
    this->DamageSphere->SetupAttachment(RootComponent);
    this->DeathSphere->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
}



void AGzGrenadeActor::Explode() {
}


