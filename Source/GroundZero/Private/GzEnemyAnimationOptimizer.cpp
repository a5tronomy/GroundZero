#include "GzEnemyAnimationOptimizer.h"

UGzEnemyAnimationOptimizer::UGzEnemyAnimationOptimizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsEnabled = false;
    this->PlayerActor = NULL;
    this->CloseDistSq = 9000000.00f;
    this->MediumDistSq = 25000000.00f;
    this->UpdateInterval = 0.25f;
}


