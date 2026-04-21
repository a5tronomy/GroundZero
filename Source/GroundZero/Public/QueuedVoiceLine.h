#pragma once
#include "CoreMinimal.h"
#include "EHumanVoiceLine.h"
#include "QueuedVoiceLine.generated.h"

USTRUCT(BlueprintType)
struct FQueuedVoiceLine {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FQueuedVoiceLine_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EHumanVoiceLine> VoiceLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayBeforeSpeak;
    
    GROUNDZERO_API FQueuedVoiceLine();
};

