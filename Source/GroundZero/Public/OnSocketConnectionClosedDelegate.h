#pragma once
#include "CoreMinimal.h"
#include "OnSocketConnectionClosedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSocketConnectionClosed, int32, status, const FString&, Reason, bool, bWasClean);

