#include "QueuedEnemyMontageData.h"

FQueuedEnemyMontageData::FQueuedEnemyMontageData() {
    this->Montage = NULL;
    this->FreezeMovement = false;
    this->QueuedWaitTime = 0.00f;
    this->StopAllMontages = false;
}

