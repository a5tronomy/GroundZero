#include "PlayerDodgingData.h"

FPlayerDodgingData::FPlayerDodgingData() {
    this->BasicDodgeAnimation = NULL;
    this->DontDodgeAgainTime = 0.00f;
    this->MinimumAimingTime = 0.00f;
    this->DodgeChance = 0;
    this->DodgeRerollTime = 0.00f;
    this->TimeUntilWeCanDodgeAgain = 0.00f;
    this->TimeUntilNextDodgeReroll = 0.00f;
}

