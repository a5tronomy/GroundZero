#pragma once
#include "CoreMinimal.h"
#include "DiscordRichPresence.generated.h"

USTRUCT(BlueprintType)
struct FDiscordRichPresence {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FDiscordRichPresence_Statics;
public:
    UPROPERTY(BlueprintReadWrite)
    FString State;
    
    UPROPERTY(BlueprintReadWrite)
    FString details;
    
    UPROPERTY(BlueprintReadWrite)
    int64 startTimestamp;
    
    UPROPERTY(BlueprintReadWrite)
    int64 endTimestamp;
    
    UPROPERTY(BlueprintReadWrite)
    FString largeImageKey;
    
    UPROPERTY(BlueprintReadWrite)
    FString largeImageText;
    
    UPROPERTY(BlueprintReadWrite)
    FString smallImageKey;
    
    UPROPERTY(BlueprintReadWrite)
    FString smallImageText;
    
    UPROPERTY(BlueprintReadWrite)
    FString partyId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 partySize;
    
    UPROPERTY(BlueprintReadWrite)
    int32 partyMax;
    
    UPROPERTY(BlueprintReadWrite)
    FString matchSecret;
    
    UPROPERTY(BlueprintReadWrite)
    FString joinSecret;
    
    UPROPERTY(BlueprintReadWrite)
    FString spectateSecret;
    
    UPROPERTY(BlueprintReadWrite)
    bool Instance;
    
    DISCORDRPC_API FDiscordRichPresence();
};

