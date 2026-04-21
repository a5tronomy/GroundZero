#include "GzCutsceneRouter.h"

AGzCutsceneRouter::AGzCutsceneRouter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KeepPlayerVisible = false;
    this->StopMusicAfterSceneEnded = false;
    this->HideCutsceneActorsAfterCutscene = true;
    this->MakeCutsceneActorsNonSolidAfterCutscene = true;
    this->MusicToPlay = NULL;
    this->MusicAfterCutsceneEnds = NULL;
    this->DontStopMusicWhenCutsceneEnds = false;
    this->MusicCrossfadeTime = 0.00f;
    this->CrossfadeMusic = false;
    this->DisableCutsceneSkip = false;
    this->MusicAfterCutsceneFadesCrossFadeTime = 1.50f;
    this->DelayAfterNewCutsceneMusicPlays = 0.00f;
    this->DelayBeforeMusicStart = 0.00f;
    this->ShowBlackBarsOnCutsceneStart = true;
    this->FreezePlayerOnCutsceneStart = true;
    this->UnhideCutsceneActorsOnCutsceneStart = false;
    this->CutsceneFinished = false;
    this->PlayerFlashlightState = false;
    this->PlayerNotargetState = false;
    this->PlayerGodState = false;
}

void AGzCutsceneRouter::UnfreezePlayer() const {
}

void AGzCutsceneRouter::StartPostCutsceneMusic() {
}

void AGzCutsceneRouter::StartMusic() {
}

void AGzCutsceneRouter::SkipCutscene() {
}

void AGzCutsceneRouter::ShowBlackBars() const {
}

void AGzCutsceneRouter::PlayCutscene() {
}


void AGzCutsceneRouter::HideBlackBars() const {
}

void AGzCutsceneRouter::FreezePlayer() const {
}

void AGzCutsceneRouter::FireNextWorldAffectingEvent() {
}

void AGzCutsceneRouter::CleanUpEntities() {
}


