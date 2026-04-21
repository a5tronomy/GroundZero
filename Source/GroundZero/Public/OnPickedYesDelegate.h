#pragma once
#include "CoreMinimal.h"
#include "OnPickedYesDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickedYes, int32, MessageIndex);

