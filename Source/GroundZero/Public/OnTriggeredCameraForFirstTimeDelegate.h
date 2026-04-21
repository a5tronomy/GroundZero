#pragma once
#include "CoreMinimal.h"
#include "OnTriggeredCameraForFirstTimeDelegate.generated.h"

class AGzCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTriggeredCameraForFirstTime, AGzCharacter*, Player);

