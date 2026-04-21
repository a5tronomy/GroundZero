#include "EMSAsyncStream.h"

UEMSAsyncStream::UEMSAsyncStream() {
    this->StreamingLevel = NULL;
    this->EMS = NULL;
}

bool UEMSAsyncStream::InitStreamingLoadTask(UEMSObject* EMSObject, const ULevel* InLevel) {
    return false;
}


