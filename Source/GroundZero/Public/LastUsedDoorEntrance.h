#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LastUsedDoorEntrance.generated.h"

class ULevel;

USTRUCT(BlueprintType)
struct FLastUsedDoorEntrance {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FLastUsedDoorEntrance_Statics;
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool IsHidden;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float Rotation;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TSoftObjectPtr<ULevel> Level;
    
    GROUNDZERO_API FLastUsedDoorEntrance();
};

