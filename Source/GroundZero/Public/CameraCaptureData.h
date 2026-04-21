#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraCaptureData.generated.h"

USTRUCT(BlueprintType)
struct FCameraCaptureData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCameraCaptureData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Timestamp;
    
    GROUNDZERO_API FCameraCaptureData();
};

