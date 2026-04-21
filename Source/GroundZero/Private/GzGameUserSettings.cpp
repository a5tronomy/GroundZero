#include "GzGameUserSettings.h"

UGzGameUserSettings::UGzGameUserSettings() {
    this->MasterVolume = 1.00f;
    this->MusicVolume = 1.00f;
    this->SoundEffectsVolume = 1.00f;
    this->DialogueVolume = 1.00f;
    this->bPosterizeEnabled = false;
    this->PosterizeAmount = 36.00f;
    this->bDownscaleEnabled = true;
    this->DownscaleAmount = 2.00f;
    this->bSharpenEnabled = false;
    this->ScreenPercentage = 1.00f;
    this->bPopupsEnabled = true;
    this->bSubtitlesEnabled = true;
    this->bModernControlsEnabled = false;
    this->FlashlightStrength = 2.00f;
    this->FlashlightCookieIndex = 0;
    this->bDrawCutsceneTime = false;
    this->AimTurnHorizontalSensitivity = 0.45f;
    this->AimTurnVerticalSensitivity = 0.45f;
    this->ControlBindings.AddDefaulted(55);
    this->CurrentCulture = TEXT("en");
    this->DoneFirstTimeSetUp = true;
    this->AutoRun = false;
    this->RunToggle = false;
    this->ShowSpeedRunningGhost = false;
    this->HideLensFlare = true;
    this->DisableDPadMovement = false;
    this->InvertPitchAiming = false;
    this->AutoEquipNewWeapons = false;
    this->FPSMaxCapIndex = 0;
}

bool UGzGameUserSettings::SetSubtitlesEnabled(const bool bNewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetSoundEffectsVolume(const float NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetShowSpeedRunningGhost(const bool NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetSharpenEnabled(const bool bNewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetScreenPercentage(const float NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetRunToggle(const bool NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetPosterizeEnabled(const bool bNewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetPosterizeAmount(const float NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetPopupsEnabled(const bool bNewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetMusicVolume(const float NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetModernControlsEnabled(const bool bNewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetMasterVolume(const float NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetInvertPitchAiming(const bool NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetHideLensFlare(const bool NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetFPSMaxCapIndex(const int32 NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetFlashlightStrength(const float NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetFlashlightCookieIndex(const int32 NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetDrawCutsceneTime(const bool bNewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetDownscaleEnabled(const bool bNewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetDownscaleAmount(const float NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetDoneFirstTimeSetUp(const bool NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetDisableDPadMovement(const bool NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetDialogueVolume(const float NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetCurrentCulture(const FString& NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetControlBindings(TArray<FMalformationCustomKeyBinding> NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetAutoRun(const bool NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetAutoEquipNewWeapons(const bool NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetAimTurnVerticalSensitivity(const float NewValue, const bool bSave) {
    return false;
}

bool UGzGameUserSettings::SetAimTurnHorizontalSensitivity(const float NewValue, const bool bSave) {
    return false;
}

UGzGameUserSettings* UGzGameUserSettings::GetGzGameUserSettings() {
    return NULL;
}


