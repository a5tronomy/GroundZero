#pragma once
#include "CoreMinimal.h"
#include "OnHumanNpcKilledDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHumanNpcKilled, AActor*, Killer);

