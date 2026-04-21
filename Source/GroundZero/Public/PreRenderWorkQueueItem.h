#pragma once
#include "CoreMinimal.h"
#include "EPreRenderTask.h"
#include "PreRenderWorkQueueItem.generated.h"

class USceneCaptureComponent2D;
class UTexture;

USTRUCT()
struct FPreRenderWorkQueueItem {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FPreRenderWorkQueueItem_Statics;
public:
    UPROPERTY()
    TEnumAsByte<EPreRenderTask> TaskType;
    
    UPROPERTY()
    bool WorkBegan;
    
    UPROPERTY(Instanced)
    USceneCaptureComponent2D* CaptureComponent;
    
    UPROPERTY()
    int32 TicksToWait;
    
    UPROPERTY()
    FString TextureSuffix;
    
    UPROPERTY()
    UTexture* TextureToSet;
    
    GROUNDZERO_API FPreRenderWorkQueueItem();
};

