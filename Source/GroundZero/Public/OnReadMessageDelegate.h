#pragma once
#include "CoreMinimal.h"
#include "OnReadMessageDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadMessage, int32, MessageIndex);

