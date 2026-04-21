#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponAnimationMeshSequenceData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FWeaponAnimationMeshSequenceData : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FWeaponAnimationMeshSequenceData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* PlayerMeshMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* WeaponMeshMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    GROUNDZERO_API FWeaponAnimationMeshSequenceData();
};

