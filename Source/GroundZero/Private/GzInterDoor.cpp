#include "GzInterDoor.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "GzInteractComponent.h"

AGzInterDoor::AGzInterDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->TimeBeforeTeleport = 2.00f;
    this->HideLastUsedDoorEntrance = false;
    this->DoNotSetLastUsedDoorEntrance = false;
    this->DontTeleportNPCs = false;
    this->TriggerOnOpenDoor = false;
    this->IsShrineDoor = false;
    this->IsShrineExit = false;
    this->HasUsedShrineDoor = false;
    this->OpenedDoorBefore = false;
    this->NPCTeleportLocation = NULL;
    this->NeverShownOnMap = false;
    this->AmbientSoundFadeOutTime = -1.00f;
    this->AmbientSoundInNextRoom = NULL;
    this->SilentInstantTransition = false;
    this->AmbientSoundFadeInTime = 0.00f;
    this->DontPlaySameAmbientSound = false;
    this->DoorEnabled = true;
    this->RequireManualInventoryUnlock = false;
    this->OpenSound = NULL;
    this->CloseSound = NULL;
    this->UnlockedSound = NULL;
    this->LockedSound = NULL;
    this->OnlyUnlockedByTrigger = false;
    this->LockedInApocalypseCrisis = false;
    this->ShowLocationEvenIfAlreadyVisited = false;
    this->MinorLocation = false;
    this->ShowMinorLocationIfAlreadyVisited = false;
    this->DelayBeforeFadeBackIn = 0.00f;
    this->FadeToBlackTime = 0.60f;
    this->ChapterEndNumber = -1;
    this->StopMusic = false;
    this->RoomMusic = NULL;
    this->OverrideLayer1Volume = false;
    this->OverrideLayer2Volume = false;
    this->OverrideLayer3Volume = false;
    this->OverrideLayer4Volume = false;
    this->OverrideLayer5Volume = false;
    this->FadeCurrentMusicTime = 0.00f;
    this->CanNeverBeOpened = false;
    this->AlternateMusicIndex = -1;
    this->CrossfadeMusic = false;
    this->DoorLocked = false;
    this->MaxDoorUses = 0;
    this->TimesUsed = 0;
    this->UseSoundWhenUsedUp = NULL;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->InteractComponent = CreateDefaultSubobject<UGzInteractComponent>(TEXT("InteractComponent"));
    this->AlignPosition = CreateDefaultSubobject<USceneComponent>(TEXT("AlignPosition"));
    this->DoorExitPosition = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DoorExitPosition"));
    this->DoorExitArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("DoorExitArrowComponent"));
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->OpenDoorAnimation = NULL;
    this->DoorToUnlockOnUse = NULL;
    this->NoScreenFade = false;
    this->AlignPlayer = true;
    this->UnlockedStreamedDoor = false;
    this->AlignPosition->SetupAttachment(RootComponent);
    this->ArrowComponent->SetupAttachment(AlignPosition);
    this->DoorExitArrowComponent->SetupAttachment(DoorExitPosition);
    this->DoorExitPosition->SetupAttachment(RootComponent);
    this->InteractComponent->SetupAttachment(RootComponent);
}

void AGzInterDoor::TeleportPlayer() {
}



void AGzInterDoor::SetDoorLocked(bool Locked) {
}

void AGzInterDoor::SetDoorEnabled(const bool Enabled) {
}

void AGzInterDoor::SetAlternateRoomMusicIndex(int32 Index, bool DisableAlternateMusic) {
}

void AGzInterDoor::PreTeleportPlayer() {
}


void AGzInterDoor::PerformFadeIn(AGzCharacter* PlayerCharacter) {
}

void AGzInterDoor::OnUsedByPlayer_Implementation(AGzCharacter* Player) {
}

void AGzInterDoor::GoThroughDoor() {
}

void AGzInterDoor::ForceDoorUnlocked(AGzCharacter* Character) {
}

bool AGzInterDoor::CanGoThroughDoor(AGzCharacter* Player) {
    return false;
}


