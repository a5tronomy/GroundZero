#pragma once
#include "CoreMinimal.h"
#include "ActiveChargeAttack.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FActiveChargeAttack {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FActiveChargeAttack_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ChargeMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ActiveTime;
    
    GROUNDZERO_API FActiveChargeAttack();
};

