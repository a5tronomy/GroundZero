#include "GzEnemyAiDoorChaseComponent.h"

UGzEnemyAiDoorChaseComponent::UGzEnemyAiDoorChaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastUsedPlayerDoor = NULL;
    this->ResetActorLocationTag = TEXT("EnemyResetPoint");
    this->CanChase = true;
    this->ChaseBlockTime = 0.00f;
    this->ActiveDoor = NULL;
}

void UGzEnemyAiDoorChaseComponent::OnPlayerGoneThroughDoor(AActor* Door) {
}


