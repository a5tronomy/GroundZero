#pragma once
#include "CoreMinimal.h"
#include "LevelEventData.generated.h"

USTRUCT(BlueprintType)
struct FLevelEventData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FLevelEventData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FString LevelEventName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    FString LevelEventValue;
    
    GROUNDZERO_API FLevelEventData();
};

