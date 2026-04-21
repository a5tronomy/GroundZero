#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDifficultyMode.h"
#include "CrossLevelSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCrossLevelSaveData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCrossLevelSaveData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 SessionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FTransform PlayerTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool SaveActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString CurrentLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TEnumAsByte<EDifficultyMode> CurrentDifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TEnumAsByte<EDifficultyMode> CurrentPuzzleDifficultyLevel;
    
    GROUNDZERO_API FCrossLevelSaveData();
};

