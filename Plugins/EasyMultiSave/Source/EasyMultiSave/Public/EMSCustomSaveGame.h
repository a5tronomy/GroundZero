#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EMSCustomSaveGame.generated.h"

UCLASS(Abstract)
class EASYMULTISAVE_API UEMSCustomSaveGame : public USaveGame {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UEMSCustomSaveGame_Statics;
public:
    UPROPERTY(EditDefaultsOnly)
    FString SaveGameName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseSaveSlot;
    
    UEMSCustomSaveGame();

};

