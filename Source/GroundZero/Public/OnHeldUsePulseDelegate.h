#pragma once
#include "CoreMinimal.h"
#include "OnHeldUsePulseDelegate.generated.h"

class AGzCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHeldUsePulse, AGzCharacter*, InteractCharacter, float, Time);

