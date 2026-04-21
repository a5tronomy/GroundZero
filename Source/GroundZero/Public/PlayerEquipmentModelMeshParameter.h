#pragma once
#include "CoreMinimal.h"
#include "PlayerModelMeshParameter.h"
#include "PlayerEquipmentModelMeshParameter.generated.h"

USTRUCT(BlueprintType)
struct FPlayerEquipmentModelMeshParameter {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FPlayerEquipmentModelMeshParameter_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayerModelMeshParameter MeshParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EquipmentTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HideEquipment;
    
    GROUNDZERO_API FPlayerEquipmentModelMeshParameter();
};

