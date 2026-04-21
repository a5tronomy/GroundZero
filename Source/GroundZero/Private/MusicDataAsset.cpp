#include "MusicDataAsset.h"

UMusicDataAsset::UMusicDataAsset() {
    this->Layer1 = NULL;
    this->Layer2 = NULL;
    this->Layer3 = NULL;
    this->Layer4 = NULL;
    this->Layer5 = NULL;
    this->ForceEvenWhenMusicBlocked = false;
    this->Layer1Loops = true;
    this->Layer2Loops = true;
    this->Layer3Loops = true;
    this->Layer4Loops = true;
    this->Layer5Loops = true;
    this->Layer1LoopPoint = 0.00f;
    this->Layer2LoopPoint = 0.00f;
    this->Layer3LoopPoint = 0.00f;
    this->Layer4LoopPoint = 0.00f;
    this->Layer5LoopPoint = 0.00f;
    this->CrossFadeTransitionTrack = NULL;
    this->OnlyTransitionWhenStartingThisTrack = NULL;
    this->ProximityMusicLayer1 = NULL;
}


