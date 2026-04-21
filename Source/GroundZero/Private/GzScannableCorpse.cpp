#include "GzScannableCorpse.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

AGzScannableCorpse::AGzScannableCorpse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRoot"));
    this->MeshRoot = (USceneComponent*)RootComponent;
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->ScanOverrideVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ScanOverrideVolume"));
    this->HasBeenScanned = false;
    this->MeshIsVisible = false;
    this->GenomePointsToGive = 0;
    this->TimeScanActive = 1.75f;
    this->ScanDistanceOverride = 0.00f;
    this->UseScanOverrideVolume = false;
    this->CurrentDamageAmount = DamageAmountPerfect;
    this->ScanOverrideVolume->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void AGzScannableCorpse::SetMeshVisible(const bool Visible) {
}

void AGzScannableCorpse::ScanHack() const {
}

void AGzScannableCorpse::PerformScan(AGzCharacter* Character) {
}



