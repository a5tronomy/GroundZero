#include "GzInventoryItem.h"

AGzInventoryItem::AGzInventoryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StimuliSourceComponent = NULL;
    this->NewGamePlusOnly = false;
    this->RemovedDueToNewGamePlus = false;
    this->ShowInDifficulty = 255;
    this->UseYesNoForPickUp = false;
    this->NoItemFlash = false;
    this->SecretItem = false;
    this->ItemIsSidePack = false;
    this->AmountOverride = 0;
    this->CoinType = Untyped;
    this->FlagsOverride = 0;
    this->ItemIsTemporarilyHidden = false;
    this->DontShowOnMap = false;
}


void AGzInventoryItem::OnUsedByPlayer_Implementation(AGzCharacter* Player) {
}



void AGzInventoryItem::DifficultyModeCheck() {
}

void AGzInventoryItem::DespawnItem_Implementation() {
}

void AGzInventoryItem::CheckDespawnItem() {
}


