#include "GzTRexWallBustManager.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AGzTRexWallBustManager::AGzTRexWallBustManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("WallBustRoot"));
    this->WallBustRoot = (USceneComponent*)RootComponent;
    this->RoomDefiner = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomDefiner"));
    this->TRexAligner = CreateDefaultSubobject<USceneComponent>(TEXT("TRexAligner"));
    this->HasBustedThroughWall = false;
    this->TRex = NULL;
    this->BustAnimation = NULL;
    this->CooldownBetweenEncounters = 60.00f;
    this->CooldownTimer = 0.00f;
    this->NoCollisionUntilBustedThrough = false;
    this->IsEnabled = false;
    this->CurrentlyActive = false;
    this->PlayerBlockingVolume = NULL;
    this->RoomDefiner->SetupAttachment(RootComponent);
    this->TRexAligner->SetupAttachment(RootComponent);
}

void AGzTRexWallBustManager::SetEnabled(const bool Enabled) {
}


bool AGzTRexWallBustManager::IsPlayerInsideRoom() const {
    return false;
}

void AGzTRexWallBustManager::BustThroughWall() {
}


