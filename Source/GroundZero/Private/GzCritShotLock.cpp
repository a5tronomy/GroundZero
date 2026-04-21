#include "GzCritShotLock.h"

AGzCritShotLock::AGzCritShotLock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LockBroken = false;
}


