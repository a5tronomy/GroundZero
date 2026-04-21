#pragma once
#include "CoreMinimal.h"
#include "OnScreenTimer.generated.h"

USTRUCT(BlueprintType)
struct FOnScreenTimer {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FOnScreenTimer_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float TimeSeconds;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString FunctionToFire;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString ActorTagToFire;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float FlashRedWhenTimeLessThan;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float FlashSpeed;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float HoldOnZeroTime;
    
    GROUNDZERO_API FOnScreenTimer();
};

