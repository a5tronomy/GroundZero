#pragma once
#include "CoreMinimal.h"
#include "TypewriterTag.generated.h"

USTRUCT(BlueprintType)
struct FTypewriterTag {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FTypewriterTag_Statics;
public:
    UPROPERTY()
    FString Tag;
    
    UPROPERTY()
    int32 Position;
    
    GROUNDZERO_API FTypewriterTag();
};

