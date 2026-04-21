#pragma once
#include "CoreMinimal.h"
#include "OnPlayerSwimStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerSwimStateChanged, bool, Swimming);

