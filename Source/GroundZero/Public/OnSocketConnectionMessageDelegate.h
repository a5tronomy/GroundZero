#pragma once
#include "CoreMinimal.h"
#include "OnSocketConnectionMessageDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSocketConnectionMessage, const FString&, Message);

