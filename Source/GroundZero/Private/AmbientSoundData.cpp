#include "AmbientSoundData.h"

FAmbientSoundData::FAmbientSoundData() {
    this->Sound = NULL;
    this->SoundCue = NULL;
    this->NextRandomTime = 0.00f;
    this->Volume = 0.00f;
}

