#pragma once
#include "CoreMinimal.h"
#include "OnPreRenderCameraTriggerActivatedDelegate.generated.h"

class AGzCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreRenderCameraTriggerActivated, AGzCharacter*, Viewer);

