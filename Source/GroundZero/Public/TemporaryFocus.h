#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TemporaryFocus.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTemporaryFocus {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FTemporaryFocus_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* PreviousTrackingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* TemporaryFocusTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FocusLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusTime;
    
    GROUNDZERO_API FTemporaryFocus();
};

