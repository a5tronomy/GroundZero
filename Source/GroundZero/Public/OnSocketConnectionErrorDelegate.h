#pragma once
#include "CoreMinimal.h"
#include "OnSocketConnectionErrorDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSocketConnectionError, const FString&, Error);

