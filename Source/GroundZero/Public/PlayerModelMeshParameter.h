#pragma once
#include "CoreMinimal.h"
#include "PlayerModelMeshParameter.generated.h"

class UMaterialInterface;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPlayerModelMeshParameter {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FPlayerModelMeshParameter_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> MaterialOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HideMesh;
    
    GROUNDZERO_API FPlayerModelMeshParameter();
};

