#pragma once
#include "CoreMinimal.h"
#include "ActorSaveData.generated.h"

USTRUCT(BlueprintType)
struct FActorSaveData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FActorSaveData_Statics;
public:
    EASYMULTISAVE_API FActorSaveData();
};

