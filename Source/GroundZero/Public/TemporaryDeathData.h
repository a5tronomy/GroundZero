#pragma once
#include "CoreMinimal.h"
#include "TemporaryDeathData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FTemporaryDeathData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FTemporaryDeathData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* DeathMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ActiveTime;
    
    GROUNDZERO_API FTemporaryDeathData();
};

