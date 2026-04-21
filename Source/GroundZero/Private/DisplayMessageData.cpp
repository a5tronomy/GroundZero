#include "DisplayMessageData.h"

FDisplayMessageData::FDisplayMessageData() {
    this->DisplayTime = 0.00f;
    this->CreatedTime = 0.00f;
    this->FreezeWorld = false;
    this->ViewingCamera = NULL;
    this->InspectMessage = false;
    this->IsYesNoMessage = false;
    this->CallbackObject = NULL;
    this->YesCallbackObject = NULL;
    this->NoCallbackObject = NULL;
    this->CallingActor = NULL;
    this->AutoScroll = false;
    this->ArchiveDocumentAfterReading = NULL;
    this->MessageIndex = 0;
}

