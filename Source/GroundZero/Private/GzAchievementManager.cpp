#include "GzAchievementManager.h"

UGzAchievementManager::UGzAchievementManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NextAchievementHeartbeat = 0.00f;
    this->HasGotWorseThanGoodQualityGenomeSample = false;
    this->TookDamageAsEvan = false;
    this->NumberOfCriticalShots = 0;
    this->HasTakenAnyDamage = false;
    this->SmashedApocalypseCrisisTimer = false;
    this->TimesSaved = 0;
    this->HasOpenedASafe = false;
    this->HasVisitedAShop = false;
    this->HasHealed = false;
    this->ItemsPickedUp = 0;
    this->HasFiredGunOrFlamethrowerOrRocketLauncher = false;
    this->HasPutItemInSafe = false;
    this->HasKilledEnemyOutsideOfForcedEncounters = false;
}

bool UGzAchievementManager::SetEndingSeen(int32 EndingIndex) const {
    return false;
}

bool UGzAchievementManager::SetCoinCollected(int32 CoinIndex) const {
    return false;
}


void UGzAchievementManager::GetEndingsStatValueAsEndings(int32 BitMask, TArray<bool>& EndingsSeen) {
}

int32 UGzAchievementManager::GetEndingsAsEndingsStatValue(TArray<bool>& EndingsSeen) {
    return 0;
}

int32 UGzAchievementManager::GetCoinsAsAchievementStatValue(TArray<bool>& Coins) {
    return 0;
}

void UGzAchievementManager::GetCoinAchievementStatValueAsCoins(int32 BitMask, TArray<bool>& OutCoins) {
}


