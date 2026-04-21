#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GzSkeletalMeshInterpolator.generated.h"

class USkeletalMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzSkeletalMeshInterpolator : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzSkeletalMeshInterpolator_Statics;
public:
private:
    UPROPERTY()
    TMap<USkeletalMeshComponent*, FTransform> DefaultRelativeTransforms;
    
    UPROPERTY()
    TMap<USkeletalMeshComponent*, FTransform> TargetRelativeTransforms;
    
    UPROPERTY()
    TMap<USkeletalMeshComponent*, FName> OriginalCollisionProfiles;
    
public:
    UGzSkeletalMeshInterpolator(const FObjectInitializer& ObjectInitializer);

};

