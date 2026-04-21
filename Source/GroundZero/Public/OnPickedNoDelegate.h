#pragma once
#include "CoreMinimal.h"
#include "OnPickedNoDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickedNo, int32, MessageIndex);

