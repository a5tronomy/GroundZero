#pragma once
#include "CoreMinimal.h"
#include "QueuedIngameDialogue.generated.h"

class UAnimMontage;
class USoundBase;

USTRUCT(BlueprintType)
struct FQueuedIngameDialogue {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FQueuedIngameDialogue_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Dialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlayerTalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideDialogueLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalTimeUntilNextDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsNPCTalking;
    
    GROUNDZERO_API FQueuedIngameDialogue();
};

