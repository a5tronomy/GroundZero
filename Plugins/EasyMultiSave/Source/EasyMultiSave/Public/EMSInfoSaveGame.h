#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveSlotInfo.h"
#include "EMSInfoSaveGame.generated.h"

UCLASS(BlueprintType)
class EASYMULTISAVE_API UEMSInfoSaveGame : public USaveGame {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UEMSInfoSaveGame_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FSaveSlotInfo SlotInfo;
    
    UEMSInfoSaveGame();

};

