#pragma once
#include "CoreMinimal.h"
#include "RichPresenceKeyValuePair.generated.h"

USTRUCT(BlueprintType)
struct FRichPresenceKeyValuePair {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FRichPresenceKeyValuePair_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString Value;
    
    GROUNDZERO_API FRichPresenceKeyValuePair();
};

