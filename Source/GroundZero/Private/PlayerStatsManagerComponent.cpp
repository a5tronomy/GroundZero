#include "PlayerStatsManagerComponent.h"

UPlayerStatsManagerComponent::UPlayerStatsManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveChapterIndex = 0;
}

void UPlayerStatsManagerComponent::IncrementGenomePointsEarned(const int32 Amount) {
}

void UPlayerStatsManagerComponent::GoToNextChapter() {
}

FChapterStatData UPlayerStatsManagerComponent::GetOverallStats() {
    return FChapterStatData{};
}


