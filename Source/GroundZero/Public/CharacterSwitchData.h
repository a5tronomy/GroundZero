#pragma once
#include "CoreMinimal.h"
#include "EPlayerType.h"
#include "HeldInventoryItem.h"
#include "CharacterSwitchData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSwitchData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCharacterSwitchData_Statics;
public:
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
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString ActiveCharacterSwitchRowName;
    
    GROUNDZERO_API FCharacterSwitchData();
};

