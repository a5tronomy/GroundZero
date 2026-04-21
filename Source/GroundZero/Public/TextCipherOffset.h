#pragma once
#include "CoreMinimal.h"
#include "TextCipherOffset.generated.h"

USTRUCT(BlueprintType)
struct FTextCipherOffset {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FTextCipherOffset_Statics;
public:
    UPROPERTY()
    int32 Index;
    
    UPROPERTY()
    int32 Offset;
    
    GROUNDZERO_API FTextCipherOffset();
};

