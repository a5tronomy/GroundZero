#include "CombatMusic.h"

FCombatMusic::FCombatMusic() {
    this->Music = NULL;
    this->MusicAfterStopping = NULL;
    this->StopMusicIfGoThroughDoor = false;
    this->MusicFadeOutTime = 0.00f;
    this->NewMusicFadeInTime = 0.00f;
}

