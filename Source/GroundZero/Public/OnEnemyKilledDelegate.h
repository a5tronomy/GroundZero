#pragma once
#include "CoreMinimal.h"
#include "OnEnemyKilledDelegate.generated.h"

class AGzCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyKilled, AGzCharacter*, Killer);

