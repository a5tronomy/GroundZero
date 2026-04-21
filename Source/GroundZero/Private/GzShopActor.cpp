#include "GzShopActor.h"

AGzShopActor::AGzShopActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShopDataTable = NULL;
    this->ShopDataTableEasy = NULL;
    this->ShopDataTableNormal = NULL;
    this->ShopDataTableHard = NULL;
    this->ShopDataTableVeryHard = NULL;
    this->ShopDataTableAnnihilation = NULL;
    this->ShopDataTableExtremeDeathWish = NULL;
    this->NewGamePlusShopDataTable = NULL;
    this->NewGamePlusShopDataTableEasy = NULL;
    this->NewGamePlusShopDataTableNormal = NULL;
    this->NewGamePlusShopDataTableHard = NULL;
    this->NewGamePlusShopDataTableVeryHard = NULL;
    this->NewGamePlusShopDataTableAnnihilation = NULL;
    this->NewGamePlusShopDataTableExtremeDeathWish = NULL;
    this->TrainingShop = false;
}

void AGzShopActor::PopulateShopUse() {
}

void AGzShopActor::ParseAllShopData() {
}

void AGzShopActor::OnUsedByPlayer_Implementation(AGzCharacter* Player) {
}

bool AGzShopActor::ItemIsSoldOut(const int32 Index, int32& AmountLeft, bool CustomRowOverride, FGzShopData RowOverride) {
    return false;
}

FShopTableDataPair AGzShopActor::GetShopDataTablePair() const {
    return FShopTableDataPair{};
}

UDataTable* AGzShopActor::GetShopDataTable() const {
    return NULL;
}

int32 AGzShopActor::GetItemCost(const FString& ItemId, bool CustomRowOverride, FGzShopData RowOverride) {
    return 0;
}

FString AGzShopActor::GetInventoryItem(const FString& OriginalItem) {
    return TEXT("");
}

bool AGzShopActor::CanShowThisItemInShop(FGzShopData ShopData) {
    return false;
}

bool AGzShopActor::BuyItem(const int32 Index, bool& SoldOut, bool& TooExpensive, int32& AmountLeft, bool& InventoryFull, FString& ItemBought, bool CustomRowOverride, FGzShopData RowOverride) {
    return false;
}



