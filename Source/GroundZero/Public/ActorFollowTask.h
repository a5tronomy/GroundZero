#pragma once
#include "CoreMinimal.h"
#include "ActorFollowTask.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorFollowTask {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FActorFollowTask_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* ActorToFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AcceptanceRadius;
    
    GROUNDZERO_API FActorFollowTask();
};

