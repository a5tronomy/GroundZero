#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TrainRideTerrainProp.generated.h"

class AGzTrainRideStaticMeshActor;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FTrainRideTerrainProp {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FTrainRideTerrainProp_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* TerrainMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumPieces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PopulateOnSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LeftTerrainScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector RightTerrainScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsTunnel;
    
    UPROPERTY()
    AGzTrainRideStaticMeshActor* LastLeftTerrainPieceInChain;
    
    UPROPERTY()
    AGzTrainRideStaticMeshActor* LastRightTerrainPieceInChain;
    
    GROUNDZERO_API FTrainRideTerrainProp();
};

