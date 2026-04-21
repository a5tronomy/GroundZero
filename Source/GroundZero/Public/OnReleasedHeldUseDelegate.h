#pragma once
#include "CoreMinimal.h"
#include "OnReleasedHeldUseDelegate.generated.h"

class AGzCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReleasedHeldUse, AGzCharacter*, InteractCharacter, float, Time);

