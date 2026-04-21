#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModelChangeParameters.generated.h"

class UMaterialInterface;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FModelChangeParameters {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FModelChangeParameters_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* SkeletalMeshToSwitchTo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> ComponentsToHide;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> ComponentsToShow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVector2D> PrimitiveMeshData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> NewMaterials;
    
    GROUNDZERO_API FModelChangeParameters();
};

