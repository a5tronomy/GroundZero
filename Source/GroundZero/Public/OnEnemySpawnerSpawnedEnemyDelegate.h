#pragma once
#include "CoreMinimal.h"
#include "OnEnemySpawnerSpawnedEnemyDelegate.generated.h"

class AGzEnemyAI;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemySpawnerSpawnedEnemy, AGzEnemyAI*, Enemy);

