#include "GzGameInstance.h"

UGzGameInstance::UGzGameInstance() {
    this->DiscordRpc = NULL;
    this->FromMainMenuDifficultyMode = DifficultyNormal;
    this->FromMainMenuPuzzleDifficultyMode = DifficultyNormal;
    this->IsNewGamePlus = false;
    this->IsReshiftMode = false;
    this->GlobalShopPrices = NULL;
    this->GlobalShopPricesOverrideEasy = NULL;
    this->GlobalShopPricesOverrideNormal = NULL;
    this->GlobalShopPricesOverrideHard = NULL;
    this->GlobalShopPricesOverrideVeryHard = NULL;
    this->GlobalShopPricesOverrideExtreme = NULL;
    this->GlobalShopPricesOverrideSuperExtreme = NULL;
    this->NewGamePlusGlobalShopPrices = NULL;
    this->NewGamePlusGlobalShopPricesOverrideEasy = NULL;
    this->NewGamePlusGlobalShopPricesOverrideNormal = NULL;
    this->NewGamePlusGlobalShopPricesOverrideHard = NULL;
    this->NewGamePlusGlobalShopPricesOverrideVeryHard = NULL;
    this->NewGamePlusGlobalShopPricesOverrideExtreme = NULL;
    this->NewGamePlusGlobalShopPricesOverrideSuperExtreme = NULL;
    this->GamepadKeyFunctionDataTable = NULL;
    this->LoadingThrobberWidget = NULL;
    this->LoadingCompleteWidget = NULL;
    this->AutoSkipMovies = false;
    this->CoreMusicSound = NULL;
    this->BaseMusicVolume = 1.00f;
    this->PlayerCharacter = NULL;
    this->NextRandomAmbienceSoundTime = 0.00f;
    this->QueuedAmbientSound = NULL;
    this->ActiveSoundAmbience = NULL;
    this->ActiveMusicFadeInTime = 0.00f;
    this->UsingSecondaryPlayer = false;
    this->MusicPlayerPrimary = NULL;
    this->MusicPlayerSecondary = NULL;
    this->MusicPlayerProximityLayer1 = NULL;
    this->MusicPlayerTransition = NULL;
    this->AmbiencePlayer = NULL;
    this->RoomTonePlayer = NULL;
    this->DesiredProximityLayer1Volume = 0.00f;
    this->CurrentProximityLayer1Volume = 0.00f;
}

void UGzGameInstance::StopMusic(const float FadeTime) {
}

void UGzGameInstance::SetLoadingMovie(const FString& MoviePath, const bool AutoSkipMovie) {
}

void UGzGameInstance::SetDesiredVolumeForLayer(const int32 LayerNumber, const float Volume, const float FadeTime) {
}

void UGzGameInstance::PlayMusic(UMusicDataAsset* Track, float FadeOutTime, const float FadeInTime, const bool CrossFade, const float DelayBeforeStartingNewMusic, const bool DontPlaySameMusic, const bool ApocalypseCrisis) {
}

void UGzGameInstance::OnMovieTick(float DeltaTime) {
}

void UGzGameInstance::OnFinishLoadingScreen() {
}


void UGzGameInstance::OnBeginLoadingScreen() {
}

void UGzGameInstance::HandlePrepareLoadingScreen() {
}



