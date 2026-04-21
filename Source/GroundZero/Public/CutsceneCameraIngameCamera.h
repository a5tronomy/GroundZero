#pragma once
#include "CoreMinimal.h"
#include "CutsceneCameraIngameCamera.generated.h"

class AGzPreRenderedCamera;

USTRUCT(BlueprintType)
struct FCutsceneCameraIngameCamera {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCutsceneCameraIngameCamera_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    FString BoneName;
    
    UPROPERTY(BlueprintReadOnly)
    AGzPreRenderedCamera* Camera;
    
    GROUNDZERO_API FCutsceneCameraIngameCamera();
};

