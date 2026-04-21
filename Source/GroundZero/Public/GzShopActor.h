#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzGlobalShopPrices.h"
#include "GzInteractInterface.h"
#include "GzShopData.h"
#include "ShopTableDataPair.h"
#include "GzShopActor.generated.h"

class AGzCharacter;
class UDataTable;

UCLASS()
class GROUNDZERO_API AGzShopActor : public AActor, public IGzInteractInterface, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzShopActor_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FGzGlobalShopPrices> GlobalShopPrices;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FGzShopData> ParsedShopData;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FString> NewGamePlusAmmoPurchased;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<int32> ShopUseInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* ShopDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* ShopDataTableEasy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* ShopDataTableNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* ShopDataTableHard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* ShopDataTableVeryHard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* ShopDataTableAnnihilation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* ShopDataTableExtremeDeathWish;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* NewGamePlusShopDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* NewGamePlusShopDataTableEasy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* NewGamePlusShopDataTableNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* NewGamePlusShopDataTableHard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* NewGamePlusShopDataTableVeryHard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* NewGamePlusShopDataTableAnnihilation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* NewGamePlusShopDataTableExtremeDeathWish;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool TrainingShop;
    
public:
    AGzShopActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void PopulateShopUse();
    
    UFUNCTION(BlueprintCallable)
    void ParseAllShopData();
    
public:
    UFUNCTION()
    void OnUsedByPlayer_Implementation(AGzCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ItemIsSoldOut(const int32 Index, int32& AmountLeft, bool CustomRowOverride, FGzShopData RowOverride);
    
    UFUNCTION(BlueprintPure)
    FShopTableDataPair GetShopDataTablePair() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetShopDataTable() const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetItemCost(const FString& ItemId, bool CustomRowOverride, FGzShopData RowOverride);
    
    UFUNCTION(BlueprintCallable)
    FString GetInventoryItem(const FString& OriginalItem);
    
    UFUNCTION(BlueprintCallable)
    bool CanShowThisItemInShop(FGzShopData ShopData);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool BuyItem(const int32 Index, bool& SoldOut, bool& TooExpensive, int32& AmountLeft, bool& InventoryFull, FString& ItemBought, bool CustomRowOverride, FGzShopData RowOverride);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool BPIsShopSoldOut();
    

    // Fix for true pure virtual functions not being implemented
};

