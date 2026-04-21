#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SpeedrunGhostLevelData.h"
#include "GzSpeedrunGhostManager.generated.h"

class ULevel;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzSpeedrunGhostManager : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzSpeedrunGhostManager_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float NextHeartbeat;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 HeartbeatsPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxDurationInLevel;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float TimeActiveInThisLevel;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FSpeedrunGhostLevelData> LevelData;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    ULevel* CurrentLevel;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 ActiveLevelDataIndex;
    
public:
    UGzSpeedrunGhostManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopRecording();
    
    UFUNCTION(BlueprintCallable)
    void StartRecording();
    
    UFUNCTION(BlueprintCallable)
    bool GetBreadCrumbData(const TArray<FSpeedrunGhostLevelData>& SavedData, FTransform& TransformData);
    
    UFUNCTION(BlueprintCallable)
    void ClearOutData(const bool AlsoDisable);
    
};

