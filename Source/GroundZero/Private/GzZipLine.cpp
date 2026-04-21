#include "GzZipLine.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GzInteractComponent.h"

AGzZipLine::AGzZipLine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ZipRootComponent"));
    this->ActivePlayer = NULL;
    this->ZipLineInUse = false;
    this->ZipLineAlpha = 0.00f;
    this->EndingZipLine = false;
    this->PreviousNoTargetValue = false;
    this->UseConstantSplineVelocity = false;
    this->TimeWhenPlayerDetachesZipline = 1.00f;
    this->ZipLineTimeInSeconds = 6.00f;
    this->ZipLineAttachmentPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ZipLineAttachmentPoint"));
    const FProperty* p_ZipLineMesh_Parent = GetClass()->FindPropertyByName("ZipLineMesh");
    this->ZipLineSplineMesh = NULL;
    this->ZipLineSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ZipLineSpline"));
    this->ZipRootComponent = (USceneComponent*)RootComponent;
    this->ZipLineMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZipLineMesh"));
    this->InteractVolume = CreateDefaultSubobject<UGzInteractComponent>(TEXT("InteractVolume"));
    this->AlignCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AlignCapsule"));
    this->SpeedCurve = NULL;
    this->AlignCapsule->SetupAttachment(RootComponent);
    this->InteractVolume->SetupAttachment(RootComponent);
    this->ZipLineAttachmentPoint->SetupAttachment(p_ZipLineMesh_Parent->ContainerPtrToValuePtr<UStaticMeshComponent>(this));
    this->ZipLineMesh->SetupAttachment(RootComponent);
    this->ZipLineSpline->SetupAttachment(RootComponent);
}

void AGzZipLine::UseZipLine(AGzCharacter* Character) {
}

void AGzZipLine::StartZipLineSequence() {
}





