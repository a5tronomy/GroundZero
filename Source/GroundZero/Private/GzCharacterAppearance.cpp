#include "GzCharacterAppearance.h"

UGzCharacterAppearance::UGzCharacterAppearance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AppearanceDataTable = NULL;
    this->PropDataTable = NULL;
    this->DoNotCreateComponents = false;
    this->DisableAppearanceChange = false;
    this->AppearanceAsset = NULL;
    this->PropDataAsset = NULL;
    this->DisableAnimationClassOverride = false;
    this->PlayerType = PlayerTypeSeoYeon;
    this->OverridePlayerType = false;
    this->AppearanceIndex = 0;
    this->PropIndex = 0;
}

bool UGzCharacterAppearance::SetupAppearance(TEnumAsByte<EPlayerType> TypeOfPlayer, const int32 Index, FPlayerModelParameters& PlayerModelParameters) {
    return false;
}


void UGzCharacterAppearance::ApplyCharacterProp(const int32 Index) {
}


