#pragma once
#include "CoreMinimal.h"
#include "WeaponFidgetMontage.generated.h"

class UAnimMontage;
class USoundBase;

USTRUCT(BlueprintType)
struct FWeaponFidgetMontage {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FWeaponFidgetMontage_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* FidgetPlayerMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* FidgetWeaponMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* FidgetSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayChance;
    
    GROUNDZERO_API FWeaponFidgetMontage();
};

