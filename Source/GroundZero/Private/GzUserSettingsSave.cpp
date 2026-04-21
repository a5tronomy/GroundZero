#include "GzUserSettingsSave.h"

UGzUserSettingsSave::UGzUserSettingsSave() {
    this->MasterVolume = 0.00f;
    this->MusicVolume = 0.00f;
    this->SoundEffectsVolume = 0.00f;
    this->DialogueVolume = 0.00f;
    this->bPosterizeEnabled = false;
    this->PosterizeAmount = 0.00f;
    this->bDownscaleEnabled = false;
    this->DownscaleAmount = 0.00f;
    this->bSharpenEnabled = false;
    this->ScreenPercentage = 0.00f;
    this->bPopupsEnabled = false;
    this->bSubtitlesEnabled = false;
    this->bModernControlsEnabled = false;
    this->FlashlightStrength = 0.00f;
    this->FlashlightCookieIndex = 0;
    this->bDrawCutsceneTime = false;
    this->AimTurnHorizontalSensitivity = 0.00f;
    this->AimTurnVerticalSensitivity = 0.00f;
    this->DoneFirstTimeSetUp = false;
    this->AutoRun = false;
    this->RunToggle = false;
    this->ShowSpeedRunningGhost = false;
    this->HideLensFlare = false;
    this->DisableDPadMovement = false;
    this->InvertPitchAiming = false;
    this->AutoEquipNewWeapons = false;
    this->FPSMaxCapIndex = 0;
}


