#pragma once
#include "CoreMinimal.h"
#include "DiscordUserData.generated.h"

USTRUCT(BlueprintType)
struct FDiscordUserData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FDiscordUserData_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    FString UserId;
    
    UPROPERTY(BlueprintReadOnly)
    FString Username;
    
    UPROPERTY(BlueprintReadOnly)
    FString discriminator;
    
    UPROPERTY(BlueprintReadOnly)
    FString avatar;
    
    DISCORDRPC_API FDiscordUserData();
};

