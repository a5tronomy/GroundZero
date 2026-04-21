#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraCaptureData.h"
#include "GzAnimatedCameraData.generated.h"

UCLASS(BlueprintType)
class GROUNDZERO_API UGzAnimatedCameraData : public UObject {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimatedCameraData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FrameOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CaptureFrameRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CaptureDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCameraCaptureData> CameraCaptureDatas;
    
    UGzAnimatedCameraData();

};

