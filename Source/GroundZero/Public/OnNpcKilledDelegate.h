#pragma once
#include "CoreMinimal.h"
#include "OnNpcKilledDelegate.generated.h"

class AGzCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNpcKilled, AGzCharacter*, Killer);

