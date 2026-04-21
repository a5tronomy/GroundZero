#include "MusicTrackVolumeControl.h"

FMusicTrackVolumeControl::FMusicTrackVolumeControl() {
    this->CurrentVolume = 0.00f;
    this->DesiredVolume = 0.00f;
    this->FadeTimeInSeconds = 0.00f;
    this->VolumeWhenStartedFade = 0.00f;
    this->Alpha = 0.00f;
}

