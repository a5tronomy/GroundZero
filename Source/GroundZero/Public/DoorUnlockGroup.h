#pragma once
#include "CoreMinimal.h"
#include "DoorUnlockGroup.generated.h"

USTRUCT(BlueprintType)
struct FDoorUnlockGroup {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FDoorUnlockGroup_Statics;
public:
    UPROPERTY(SaveGame)
    FString UnlockGroupName;
    
    UPROPERTY(SaveGame)
    int32 UnlockAmount;
    
    GROUNDZERO_API FDoorUnlockGroup();
};

