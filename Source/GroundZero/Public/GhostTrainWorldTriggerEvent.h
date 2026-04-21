#pragma once
#include "CoreMinimal.h"
#include "GhostTrainWorldTriggerEvent.generated.h"

USTRUCT(BlueprintType)
struct FGhostTrainWorldTriggerEvent {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGhostTrainWorldTriggerEvent_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlphaToTriggerAt;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool HasTriggered;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WorldFunctionToFire;
    
    GROUNDZERO_API FGhostTrainWorldTriggerEvent();
};

