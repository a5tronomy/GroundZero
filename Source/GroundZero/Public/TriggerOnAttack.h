#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TriggerOnAttack.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTriggerOnAttack {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FTriggerOnAttack_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> ActorClassToTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FunctionToTrigger;
    
    GROUNDZERO_API FTriggerOnAttack();
};

