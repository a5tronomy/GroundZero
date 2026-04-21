#pragma once
#include "CoreMinimal.h"
#include "InteractVolumeOnSingleInteractDelegate.generated.h"

class AGzCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractVolumeOnSingleInteract, AGzCharacter*, InteractCharacter);

