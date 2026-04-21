#pragma once
#include "CoreMinimal.h"
#include "MontageTranslation.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FMontageTranslation {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FMontageTranslation_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* From;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* To;
    
    GROUNDZERO_API FMontageTranslation();
};

