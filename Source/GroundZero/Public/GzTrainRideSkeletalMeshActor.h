#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/SkeletalMeshActor.h"
#include "GzTrainRideSkeletalMeshActor.generated.h"

UCLASS()
class GROUNDZERO_API AGzTrainRideSkeletalMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTrainRideSkeletalMeshActor_Statics;
public:
    UPROPERTY()
    float MoveDirection;
    
    UPROPERTY()
    float MoveSpeed;
    
    UPROPERTY()
    FVector MoveForwardDirection;
    
    AGzTrainRideSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

};

