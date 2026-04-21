#pragma once
#include "CoreMinimal.h"
#include "EPlayerDamageDirection.h"
#include "OnPlayerTripDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerTrip, TEnumAsByte<EPlayerDamageDirection>, DamageDirection);

