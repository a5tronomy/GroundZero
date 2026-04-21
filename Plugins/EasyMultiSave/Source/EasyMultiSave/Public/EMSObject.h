#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActorSaveData.h"
#include "ControllerSaveData.h"
#include "EmsLoadLevelCompleteDelegate.h"
#include "EmsLoadPartitionCompleteDelegate.h"
#include "EmsLoadPlayerCompleteDelegate.h"
#include "GameObjectSaveData.h"
#include "LevelArchive.h"
#include "LevelScriptSaveData.h"
#include "MultiLevelStreamingData.h"
#include "PawnSaveData.h"
#include "PlayerStackArchive.h"
#include "EMSObject.generated.h"

class AActor;
class UEMSCustomSaveGame;
class UEMSInfoSaveGame;
class USavesMetadata;

UCLASS(ConfigDoNotCheckDefaults, Config=EmsUser)
class EASYMULTISAVE_API UEMSObject : public UGameInstanceSubsystem {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UEMSObject_Statics;
public:
    UPROPERTY(Config)
    FString CurrentSaveGameName;
    
    UPROPERTY(Config)
    FString CurrentSaveUserName;
    
    UPROPERTY(BlueprintAssignable)
    FEmsLoadPlayerComplete OnPlayerLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FEmsLoadLevelComplete OnLevelLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FEmsLoadPartitionComplete OnPartitionLoaded;
    
private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> ActorList;
    
    UPROPERTY(Transient)
    TMap<FName, TWeakObjectPtr<AActor>> ActorMap;
    
    UPROPERTY(Transient)
    TArray<FLevelArchive> LevelArchiveList;
    
    UPROPERTY(Transient)
    FMultiLevelStreamingData MultiLevelStreamData;
    
    UPROPERTY(Transient)
    FPlayerStackArchive PlayerStackData;
    
    UPROPERTY(Transient)
    TArray<FActorSaveData> SavedActors;
    
    UPROPERTY(Transient)
    TArray<FActorSaveData> SavedActorsPruned;
    
    UPROPERTY(Transient)
    TArray<FLevelScriptSaveData> SavedScripts;
    
    UPROPERTY(Transient)
    FGameObjectSaveData SavedGameMode;
    
    UPROPERTY(Transient)
    FGameObjectSaveData SavedGameState;
    
    UPROPERTY(Transient)
    FControllerSaveData SavedController;
    
    UPROPERTY(Transient)
    FPawnSaveData SavedPawn;
    
    UPROPERTY(Transient)
    FGameObjectSaveData SavedPlayerState;
    
    UPROPERTY(Transient)
    TMap<FString, UEMSInfoSaveGame*> CachedSaveSlots;
    
    UPROPERTY(Transient)
    TMap<FString, UEMSCustomSaveGame*> CachedCustomSaves;
    
    UPROPERTY(Transient)
    USavesMetadata* CachedSavesMetadata;
    
    UPROPERTY(Transient)
    TArray<FActorSaveData> WorldPartitionActors;
    
    UPROPERTY(Transient)
    TArray<FActorSaveData> DestroyedActors;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<AActor>, FGameObjectSaveData> RawObjectData;
    
    UPROPERTY(Transient)
    TArray<TSoftObjectPtr<AActor>> RealLoadedActors;
    
public:
    UEMSObject();

};

