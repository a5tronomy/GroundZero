#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EFileSaveMethod.h"
#include "ELoadMethod.h"
#include "EMultiLevelSaveMethod.h"
#include "EOldPackageEngine.h"
#include "EThumbnailImageFormat.h"
#include "EWorldPartitionInit.h"
#include "EWorldPartitionMethod.h"
#include "EMSPluginSettings.generated.h"

UCLASS(DefaultConfig, Config = EMSPluginSettings)
class EASYMULTISAVE_API UEMSPluginSettings : public UObject {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UEMSPluginSettings_Statics;
public:
    UPROPERTY(Config, EditAnywhere)
    FString DefaultSaveGameName;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath SlotInfoSaveGameClass;
    
    UPROPERTY(Config, EditAnywhere)
    EFileSaveMethod FileSaveMethod;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAdvancedSpawnCheck;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoSaveStructs;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoDestroyActors;
    
    UPROPERTY(Config, EditAnywhere)
    bool bMultiThreadSaving;
    
    UPROPERTY(Config, EditAnywhere)
    ELoadMethod LoadMethod;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 DeferredLoadStackSize;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float AsyncWaitDelay;
    
    UPROPERTY(Config, EditAnywhere)
    EMultiLevelSaveMethod MultiLevelSaving;
    
    UPROPERTY(Config, EditAnywhere)
    bool bPersistentPlayer;
    
    UPROPERTY(Config, EditAnywhere)
    bool bPersistentGameMode;
    
    UPROPERTY(Config, EditAnywhere)
    EWorldPartitionMethod WorldPartitionSaving;
    
    UPROPERTY(Config, EditAnywhere)
    EWorldPartitionInit WorldPartitionInit;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float WorldPartitionInitTime;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float WorldPartitionInitThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    EThumbnailImageFormat ThumbnailFormat;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 SaveGameVersion;
    
    UPROPERTY(Config, EditAnywhere)
    EOldPackageEngine MigratedSaveEngineVersion;
    
    UPROPERTY(Config, EditAnywhere)
    bool bMigratedSaveActorVersionCheck;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FSoftClassPath> RuntimeClasses;
    
    UPROPERTY(Config)
    float WorldPartitionInitPollingRate;
    
    UEMSPluginSettings();

};

