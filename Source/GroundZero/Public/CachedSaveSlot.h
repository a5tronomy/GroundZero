#pragma once
#include "CoreMinimal.h"
#include "LevelArchive.h"
#include "MultiLevelStreamingData.h"
#include "PlayerStackArchive.h"
#include "CachedSaveSlot.generated.h"

class UEMSInfoSaveGame;

USTRUCT(BlueprintType)
struct FCachedSaveSlot {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCachedSaveSlot_Statics;
public:
    UPROPERTY(Transient)
    UEMSInfoSaveGame* CachedSlotInfoSave;
    
    UPROPERTY(Transient)
    TArray<FLevelArchive> LevelArchiveList;
    
    UPROPERTY(Transient)
    FMultiLevelStreamingData MultiLevelStreamData;
    
    UPROPERTY(Transient)
    FPlayerStackArchive PlayerStackData;
    
    GROUNDZERO_API FCachedSaveSlot();
};

