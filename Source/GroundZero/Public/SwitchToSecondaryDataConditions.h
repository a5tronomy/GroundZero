#pragma once
#include "CoreMinimal.h"
#include "SwitchToSecondaryDataConditions.generated.h"

USTRUCT(BlueprintType)
struct FSwitchToSecondaryDataConditions {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSwitchToSecondaryDataConditions_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OnlyCheckOnce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Chance;
    
    GROUNDZERO_API FSwitchToSecondaryDataConditions();
};

