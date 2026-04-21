#pragma once
#include "CoreMinimal.h"
#include "HintsSeen.generated.h"

USTRUCT(BlueprintType)
struct FHintsSeen {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FHintsSeen_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString HintName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TimesSeen;
    
    GROUNDZERO_API FHintsSeen();
};

