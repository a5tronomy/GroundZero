#include "GzMusicPlayer.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"

AGzMusicPlayer::AGzMusicPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MusicRoot"));
    this->PlayerCharacter = NULL;
    this->MusicRoot = (USceneComponent*)RootComponent;
    this->ActiveMusicFadeInTime = 0.00f;
    this->UsingSecondaryPlayer = false;
    this->MusicPlayerPrimary = CreateDefaultSubobject<UAudioComponent>(TEXT("MusicPlayerPrimary"));
    this->MusicPlayerSecondary = CreateDefaultSubobject<UAudioComponent>(TEXT("MusicPlayerSecondary"));
    this->MusicPlayerTransition = CreateDefaultSubobject<UAudioComponent>(TEXT("MusicPlayerTransition"));
    this->AmbiencePlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("AmbiencePlayer"));
    this->AmbiencePlayer->SetupAttachment(RootComponent);
    this->MusicPlayerPrimary->SetupAttachment(RootComponent);
    this->MusicPlayerSecondary->SetupAttachment(RootComponent);
    this->MusicPlayerTransition->SetupAttachment(RootComponent);
}

void AGzMusicPlayer::StopMusic(const float FadeTime) {
}



void AGzMusicPlayer::SetDesiredVolumeForLayer(const int32 LayerNumber, const float Volume, const float FadeTime) {
}

void AGzMusicPlayer::PlayMusic(UMusicDataAsset* Track, float FadeOutTime, const float FadeInTime, const bool CrossFade, const float DelayBeforeStartingNewMusic) {
}


