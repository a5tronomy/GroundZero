#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzInventoryItemTrigger.generated.h"

class AGzCharacter;

UCLASS()
class GROUNDZERO_API AGzInventoryItemTrigger : public AActor, public IEMSActorSaveInterface, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzInventoryItemTrigger_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DoorUnlockGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool InteractDisabled;
    
    AGzInventoryItemTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    bool TryUnlockWithKey(AGzCharacter* Player, int32 InventorySlot, const FString& KeyToTry, TArray<FString> KeysRequiredToUnlock, FString& KeyUsed) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisabled(const bool Disabled);
    

    // Fix for true pure virtual functions not being implemented
};

