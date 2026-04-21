#include "CharacterSwitchData.h"

FCharacterSwitchData::FCharacterSwitchData() {
    this->AppearanceIndex = 0;
    this->Health = 0.00f;
    this->MaxHealth = 0.00f;
    this->Infected = false;
    this->PlayerType = PlayerTypeSeoYeon;
    this->MaxInventorySlots = 0;
    this->UpgradedScanner = false;
    this->GenomePoints = 0;
    this->InfectionPermanentLikelihoodBooster = 0.00f;
    this->DamageDefence = 0.00f;
    this->MaxStamina = 0.00f;
    this->InfectionDamageReductionMultiplier = 0.00f;
}

