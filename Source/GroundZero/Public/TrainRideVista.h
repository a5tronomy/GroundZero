#pragma once
#include "CoreMinimal.h"
#include "TrainRideTerrainProp.h"
#include "TrainRideVistaProp.h"
#include "TrainRideVista.generated.h"

class AVolume;

USTRUCT(BlueprintType)
struct FTrainRideVista {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FTrainRideVista_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool Enabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SpawnRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AVolume* StartingSpawnVolumeLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AVolume* StartingSpawnVolumeRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTrainRideVistaProp> Props;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTrainRideTerrainProp TerrainData;
    
    GROUNDZERO_API FTrainRideVista();
};

