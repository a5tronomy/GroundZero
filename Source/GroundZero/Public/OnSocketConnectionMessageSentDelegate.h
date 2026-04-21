#pragma once
#include "CoreMinimal.h"
#include "OnSocketConnectionMessageSentDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSocketConnectionMessageSent, const FString&, Message);

