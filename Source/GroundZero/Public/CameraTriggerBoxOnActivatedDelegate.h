#pragma once
#include "CoreMinimal.h"
#include "CameraTriggerBoxOnActivatedDelegate.generated.h"

class AGzCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraTriggerBoxOnActivated, AGzCharacter*, Viewer);

