#pragma once
#include "CoreMinimal.h"
#include "SubtitleLengthChecker.generated.h"

USTRUCT(BlueprintType)
struct FSubtitleLengthChecker {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSubtitleLengthChecker_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SubtitleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Length;
    
    GROUNDZERO_API FSubtitleLengthChecker();
};

