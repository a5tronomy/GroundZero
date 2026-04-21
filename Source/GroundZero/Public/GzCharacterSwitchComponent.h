#pragma once
#include "CoreMinimal.h"
#include "EMSCompSaveInterface.h"
#include "Components/ActorComponent.h"
#include "CharacterSwitchData.h"
#include "EPlayerType.h"
#include "HeldInventoryItem.h"
#include "GzCharacterSwitchComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzCharacterSwitchComponent : public UActorComponent, public IEMSCompSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzCharacterSwitchComponent_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FCharacterSwitchData SeoYeonData;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FCharacterSwitchData EvanData;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultEvanAppearanceIndex;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 AppearanceIndex;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float Health;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FHeldInventoryItem> InventoryItems;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FHeldInventoryItem> ItemsInSafe;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool Infected;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString EquippedWeapon;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TEnumAsByte<EPlayerType> PlayerType;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 MaxInventorySlots;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool UpgradedScanner;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 GenomePoints;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<int32> SyringeContents;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfectionPermanentLikelihoodBooster;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float DamageDefence;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float MaxStamina;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfectionDamageReductionMultiplier;
    
    UGzCharacterSwitchComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchToSeoYeonFromEvan(int32 ToAppearanceOverride);
    
    UFUNCTION(BlueprintCallable)
    void SwitchToEvanFromSeonYeon(int32 ToAppearanceOverride);
    
    UFUNCTION(BlueprintCallable)
    void SwitchToCharacter(const FString& RowName, const bool DontSetupData);
    

    // Fix for true pure virtual functions not being implemented
};

