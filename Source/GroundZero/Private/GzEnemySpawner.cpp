#include "GzEnemySpawner.h"

AGzEnemySpawner::AGzEnemySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClassToSpawn = NULL;
    this->ManuallySpawned = false;
    this->HasSpawned = false;
    this->InfiniteSpawns = false;
}

AGzEnemyAI* AGzEnemySpawner::SpawnEnemy() {
    return NULL;
}


