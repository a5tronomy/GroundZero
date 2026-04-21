#pragma once
#include "CoreMinimal.h"
#include "ERenderingTask.h"
#include "CameraRenderQueuePass.generated.h"

USTRUCT()
struct FCameraRenderQueuePass {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCameraRenderQueuePass_Statics;
public:
    UPROPERTY()
    TEnumAsByte<ERenderingTask> TaskType;
    
    UPROPERTY()
    bool WorkBegan;
    
    UPROPERTY()
    int32 TicksToWait;
    
    GROUNDZERO_API FCameraRenderQueuePass();
};

