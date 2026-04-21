#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PowerLineSlackValues.generated.h"

USTRUCT(BlueprintType)
struct FPowerLineSlackValues {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FPowerLineSlackValues_Statics;
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid ComponentGuid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SlackMultiplier;
    
    GROUNDZERO_API FPowerLineSlackValues();
};

