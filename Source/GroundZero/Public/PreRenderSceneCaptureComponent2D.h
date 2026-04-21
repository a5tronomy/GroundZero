#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneCaptureComponent2D.h"
#include "PreRenderSceneCaptureComponent2D.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UPreRenderSceneCaptureComponent2D : public USceneCaptureComponent2D {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UPreRenderSceneCaptureComponent2D_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    uint8 bConstrainAspectRatio: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    uint8 bOverrideAspectRatioAxisConstraint: 1;
    
    UPreRenderSceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer);

};

