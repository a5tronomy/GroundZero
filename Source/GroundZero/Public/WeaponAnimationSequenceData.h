#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponAnimationSequenceData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FWeaponAnimationSequenceData : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FWeaponAnimationSequenceData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* NotAimingSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* AimingSequence;
    
    GROUNDZERO_API FWeaponAnimationSequenceData();
};

