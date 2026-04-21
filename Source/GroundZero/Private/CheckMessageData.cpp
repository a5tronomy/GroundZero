#include "CheckMessageData.h"

FCheckMessageData::FCheckMessageData() {
    this->CameraToView = NULL;
    this->OnReadCallbackObject = NULL;
    this->YesNoMessage = false;
    this->OnYesCallbackObject = NULL;
    this->OnNoCallbackObject = NULL;
    this->Disabled = false;
    this->DisableThisMessageOnYes = false;
    this->DisableThisMessageOnNo = false;
    this->ArchiveDocumentAfterReading = NULL;
    this->InteractionAnimation = NULL;
    this->DelayBeforeShowMessage = 0.00f;
}

