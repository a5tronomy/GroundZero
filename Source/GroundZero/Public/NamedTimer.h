#pragma once
#include "CoreMinimal.h"
#include "NamedTimer.generated.h"

USTRUCT(BlueprintType)
struct FNamedTimer {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FNamedTimer_Statics;
public:
    UPROPERTY(SaveGame)
    FString TimerName;
    
    UPROPERTY(SaveGame)
    bool IsValid;
    
    UPROPERTY(SaveGame)
    float Value;
    
    GROUNDZERO_API FNamedTimer();
};

