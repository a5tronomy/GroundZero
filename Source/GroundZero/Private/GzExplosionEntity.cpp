#include "GzExplosionEntity.h"
#include "Components/SphereComponent.h"

AGzExplosionEntity::AGzExplosionEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("DeathSphere"));
    this->WhoShotMeLast = NULL;
    this->ExplosionRoot = NULL;
    this->DeathSphere = (USphereComponent*)RootComponent;
    this->DamageSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DamageSphere"));
    this->RadialDamage = 200.00f;
    this->PlayerDamageIfHitWall = 15.00f;
    this->DamageSphere->SetupAttachment(RootComponent);
}

void AGzExplosionEntity::Explode() {
}


