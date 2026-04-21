#include "QueuedIngameDialogue.h"

FQueuedIngameDialogue::FQueuedIngameDialogue() {
    this->Dialogue = NULL;
    this->Montage = NULL;
    this->IsPlayerTalking = false;
    this->OverrideDialogueLength = 0.00f;
    this->AdditionalTimeUntilNextDialogue = 0.00f;
    this->IsNPCTalking = false;
}

