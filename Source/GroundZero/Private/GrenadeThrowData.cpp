#include "GrenadeThrowData.h"

FGrenadeThrowData::FGrenadeThrowData() {
    this->GrenadeClass = NULL;
    this->ThrowChance = 0;
    this->GrenadeSpawnZOffset = 0.00f;
    this->GrenadeThrowSpeed = 0.00f;
    this->GrenadeThrowDelay = 0.00f;
    this->VoiceLine = VoiceLine_None;
}

