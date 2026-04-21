#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "GzSceneCapture2D.generated.h"

UCLASS()
class GROUNDZERO_API AGzSceneCapture2D : public ASceneCapture2D {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSceneCapture2D_Statics;
public:
    AGzSceneCapture2D(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetCaptureEveryFrameEnabled(const bool Enabled);
    
};

