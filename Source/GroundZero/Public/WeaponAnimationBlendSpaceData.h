#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponAnimationBlendSpaceData.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FWeaponAnimationBlendSpaceData : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FWeaponAnimationBlendSpaceData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* NotAimingBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* AimingBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* StrafingBlendSpace;
    
    GROUNDZERO_API FWeaponAnimationBlendSpaceData();
};

