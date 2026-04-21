#include "GzHowitzer.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GzInteractComponent.h"

AGzHowitzer::AGzHowitzer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HowitzerRoot"));
    this->ActivelyRaisingCannon = false;
    this->HasBeenLoaded = false;
    this->HasBeenCranked = false;
    this->TimesFired = 0;
    this->ActivePlayer = NULL;
    this->HowitzerRoot = (USceneComponent*)RootComponent;
    this->PlayerShootAlign = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerShootAlign"));
    const FProperty* p_SkeletalMesh_Parent = GetClass()->FindPropertyByName("SkeletalMesh");
    this->PlayerReloadAlign = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerReloadAlign"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->ShootInteractVolume = CreateDefaultSubobject<UGzInteractComponent>(TEXT("ShootInteractVolume"));
    this->ReloadInteractVolume = CreateDefaultSubobject<UGzInteractComponent>(TEXT("ReloadInteractVolume"));
    this->ReloadInteractVolume->SetupAttachment(SkeletalMesh);
    this->ShootInteractVolume->SetupAttachment(SkeletalMesh);
    this->SkeletalMesh->SetupAttachment(RootComponent);
}



