#include "PreRenderWorkQueueItem.h"

FPreRenderWorkQueueItem::FPreRenderWorkQueueItem() {
    this->TaskType = PreRenderTaskWaiting;
    this->WorkBegan = false;
    this->CaptureComponent = NULL;
    this->TicksToWait = 0;
    this->TextureToSet = NULL;
}

