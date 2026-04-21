#include "GzEnemyDataAsset.h"

UGzEnemyDataAsset::UGzEnemyDataAsset() {
    this->MaxHealth = 0;
    this->MinimumCrawlHealth = 0.00f;
    this->MinimumCrawlTimeBeforeRecovery = 0.00f;
    this->MaximumCrawlTimeBeforeRecovery = 0.00f;
    this->MinimumCriticalTimeBeforeRecovery = 3.00f;
    this->MaximumCriticalTimeBeforeRecovery = 10.00f;
    this->CrawlChance = 0;
    this->CriticalChance = 0;
    this->MinCriticalHealth = 0;
    this->CurrentDamageTickDownMultiplier = 2.00f;
    this->MinDamageBeforeFlinch = 0.00f;
    this->MaxDamageBeforeFlinch = 0.00f;
    this->FlinchingCausesStun = false;
    this->DontStunIfAlreadyStunned = false;
    this->TempDeathAnimation = NULL;
    this->TempCriticalDeathAnimation = NULL;
    this->TempCrawlDeathAnimation = NULL;
    this->UseDirectionalDeathData = false;
    this->BloodParticle = NULL;
    this->MaxGenomePoints = 0;
    this->ApocalypseCrisisSecondsBonus = 10.00f;
    this->ApocalypseCrisisBountyMultiplier = 1.00f;
}

UAnimSequence* UGzEnemyDataAsset::GetRandomAISequenceData(TArray<FEnemyAIAnimationData> SequenceData) const {
    return NULL;
}

FEnemyAIAnimationData UGzEnemyDataAsset::GetRandomAIAnimationData(TArray<FEnemyAIAnimationData> SequenceData) const {
    return FEnemyAIAnimationData{};
}


