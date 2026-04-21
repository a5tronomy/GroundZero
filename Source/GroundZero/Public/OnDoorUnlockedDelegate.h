#pragma once
#include "CoreMinimal.h"
#include "OnDoorUnlockedDelegate.generated.h"

class AGzCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoorUnlocked, AGzCharacter*, Unlocker);

