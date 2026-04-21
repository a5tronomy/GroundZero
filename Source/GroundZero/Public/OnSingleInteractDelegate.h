#pragma once
#include "CoreMinimal.h"
#include "OnSingleInteractDelegate.generated.h"

class AGzCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSingleInteract, AGzCharacter*, InteractCharacter);

