#include "EMSAsyncLoadGame.h"

UEMSAsyncLoadGame::UEMSAsyncLoadGame() {
    this->EMS = NULL;
}

void UEMSAsyncLoadGame::FinishTaskThreadSafe(const TWeakObjectPtr<UEMSAsyncLoadGame> InTask) {
}

void UEMSAsyncLoadGame::AutoLoadLevelActors(UEMSObject* EMSObject) {
}

UEMSAsyncLoadGame* UEMSAsyncLoadGame::AsyncLoadActors(UObject* WorldContextObject, int32 Data, bool bFullReload) {
    return NULL;
}


