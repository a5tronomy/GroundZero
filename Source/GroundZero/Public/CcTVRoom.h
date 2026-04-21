#pragma once
#include "CoreMinimal.h"
#include "CcTVRoomCamera.h"
#include "CcTVRoom.generated.h"

USTRUCT(BlueprintType)
struct FCcTVRoom {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCcTVRoom_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FCcTVRoomCamera> cameras;
    
    GROUNDZERO_API FCcTVRoom();
};

