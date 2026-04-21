#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMeshActor.h"
#include "GzTrainRideStaticMeshActor.generated.h"

UCLASS()
class GROUNDZERO_API AGzTrainRideStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTrainRideStaticMeshActor_Statics;
public:
    UPROPERTY()
    FVector ResetPosition;
    
    UPROPERTY()
    FVector MoveForwardDirection;
    
    UPROPERTY()
    float MoveDirection;
    
    UPROPERTY()
    float MoveSpeed;
    
    UPROPERTY()
    bool IsTerrain;
    
    UPROPERTY()
    int32 TerrainIndex;
    
    UPROPERTY()
    int32 VistaIndex;
    
    UPROPERTY()
    float DistanceBeforeReset;
    
    UPROPERTY()
    bool InvisibleUntilReset;
    
    UPROPERTY()
    bool IsTunnel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsRightSide;
    
    UPROPERTY()
    bool HasBeenDestroyed;
    
    AGzTrainRideStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

