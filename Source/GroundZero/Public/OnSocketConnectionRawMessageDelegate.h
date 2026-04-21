#pragma once
#include "CoreMinimal.h"
#include "OnSocketConnectionRawMessageDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSocketConnectionRawMessage, const FString&, Message);

