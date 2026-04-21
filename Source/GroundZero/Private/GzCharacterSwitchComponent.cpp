#include "GzCharacterSwitchComponent.h"

UGzCharacterSwitchComponent::UGzCharacterSwitchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultEvanAppearanceIndex = 0;
    this->AppearanceIndex = 0;
    this->Health = 100.00f;
    this->MaxHealth = 100.00f;
    this->Infected = false;
    this->PlayerType = PlayerTypeSeoYeon;
    this->MaxInventorySlots = 6;
    this->UpgradedScanner = false;
    this->GenomePoints = 0;
    this->InfectionPermanentLikelihoodBooster = 0.00f;
    this->DamageDefence = 0.00f;
    this->MaxStamina = 0.00f;
    this->InfectionDamageReductionMultiplier = 0.00f;
}

void UGzCharacterSwitchComponent::SwitchToSeoYeonFromEvan(int32 ToAppearanceOverride) {
}

void UGzCharacterSwitchComponent::SwitchToEvanFromSeonYeon(int32 ToAppearanceOverride) {
}

void UGzCharacterSwitchComponent::SwitchToCharacter(const FString& RowName, const bool DontSetupData) {
}


