#pragma once
#include "CoreMinimal.h"
#include "SafeCombinationInfo.generated.h"

USTRUCT(BlueprintType)
struct FSafeCombinationInfo {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSafeCombinationInfo_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool TurnLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Number;
    
    GROUNDZERO_API FSafeCombinationInfo();
};

