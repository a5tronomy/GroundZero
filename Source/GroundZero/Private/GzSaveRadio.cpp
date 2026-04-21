#include "GzSaveRadio.h"

AGzSaveRadio::AGzSaveRadio(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->SavePointUnlocked = false;
}

void AGzSaveRadio::OnUsedByPlayer_Implementation(AGzCharacter* Player) {
}



