#pragma once
#include "CoreMinimal.h"
#include "ConsoleCompileFriendlyDiscordPresence.generated.h"

USTRUCT(BlueprintType)
struct FConsoleCompileFriendlyDiscordPresence {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FConsoleCompileFriendlyDiscordPresence_Statics;
public:
    UPROPERTY(BlueprintReadWrite)
    FString State;
    
    UPROPERTY(BlueprintReadWrite)
    FString details;
    
    UPROPERTY(BlueprintReadWrite)
    FString ImageKey;
    
    GROUNDZERO_API FConsoleCompileFriendlyDiscordPresence();
};

