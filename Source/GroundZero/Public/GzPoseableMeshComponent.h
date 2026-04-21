#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/PoseableMeshComponent.h"
#include "GzPoseableMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzPoseableMeshComponent : public UPoseableMeshComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzPoseableMeshComponent_Statics;
public:
    UGzPoseableMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBoneLocalTransformByName(FName BoneName, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetBoneLocalTransformByName(FName BoneName);
    
};

