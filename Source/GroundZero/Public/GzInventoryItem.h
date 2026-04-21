#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "EZodiacCoinType.h"
#include "GzDifficultyModifierInterface.h"
#include "GzInteractInterface.h"
#include "GzRenderInterface.h"
#include "GzInventoryItem.generated.h"

class AGzCharacter;
class UAIPerceptionStimuliSourceComponent;

UCLASS()
class GROUNDZERO_API AGzInventoryItem : public AActor, public IGzRenderInterface, public IGzInteractInterface, public IEMSActorSaveInterface, public IGzDifficultyModifierInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzInventoryItem_Statics;
public:
    UPROPERTY(Instanced)
    UAIPerceptionStimuliSourceComponent* StimuliSourceComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NewGamePlusOnly;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool RemovedDueToNewGamePlus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ThoughtsOnPickedUpItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ShowInDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseYesNoForPickUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NoItemFlash;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SecretItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ItemIsSidePack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 AmountOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EZodiacCoinType> CoinType;
    
    UPROPERTY(EditAnywhere)
    uint8 FlagsOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DoNotSpawnIfHasOwnedItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool ItemIsTemporarilyHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool DontShowOnMap;
    
    AGzInventoryItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void YesNoPickUpCheck(AGzCharacter* Player);
    
    UFUNCTION()
    void OnUsedByPlayer_Implementation(AGzCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GivePlayerSecretItem(AGzCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GivePlayerItem(AGzCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void DifficultyModeCheck();
    
    UFUNCTION(BlueprintNativeEvent)
    void DespawnItem();
    
    UFUNCTION(BlueprintCallable)
    void CheckDespawnItem();
    

    // Fix for true pure virtual functions not being implemented
};

