#include "EMSPluginSettings.h"

UEMSPluginSettings::UEMSPluginSettings() {
    this->DefaultSaveGameName = TEXT("Slot_0");
    this->FileSaveMethod = EFileSaveMethod::FM_Console;
    this->bAdvancedSpawnCheck = false;
    this->bAutoSaveStructs = true;
    this->bAutoDestroyActors = true;
    this->bMultiThreadSaving = false;
    this->LoadMethod = ELoadMethod::LM_Deferred;
    this->DeferredLoadStackSize = 20;
    this->AsyncWaitDelay = 10.00f;
    this->MultiLevelSaving = EMultiLevelSaveMethod::ML_Full;
    this->bPersistentPlayer = false;
    this->bPersistentGameMode = false;
    this->WorldPartitionSaving = EWorldPartitionMethod::Enabled;
    this->WorldPartitionInit = EWorldPartitionInit::Default;
    this->WorldPartitionInitTime = 1.00f;
    this->WorldPartitionInitThreshold = 1.00f;
    this->ThumbnailFormat = EThumbnailImageFormat::Png;
    this->SaveGameVersion = 1000;
    this->MigratedSaveEngineVersion = EOldPackageEngine::EN_UE54;
    this->bMigratedSaveActorVersionCheck = false;
    this->WorldPartitionInitPollingRate = 0.05f;
}


