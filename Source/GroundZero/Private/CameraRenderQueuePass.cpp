#include "CameraRenderQueuePass.h"

FCameraRenderQueuePass::FCameraRenderQueuePass() {
    this->TaskType = Waiting;
    this->WorkBegan = false;
    this->TicksToWait = 0;
}

