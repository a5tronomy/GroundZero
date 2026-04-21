#pragma once
#include "CoreMinimal.h"
#include "PlayerDodgingData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FPlayerDodgingData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FPlayerDodgingData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* BasicDodgeAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DontDodgeAgainTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumAimingTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DodgeChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DodgeRerollTime;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeUntilWeCanDodgeAgain;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeUntilNextDodgeReroll;
    
    GROUNDZERO_API FPlayerDodgingData();
};

