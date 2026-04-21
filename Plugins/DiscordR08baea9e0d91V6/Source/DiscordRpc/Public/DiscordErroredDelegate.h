#pragma once
#include "CoreMinimal.h"
#include "DiscordErroredDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordErrored, int32, ErrorCode, const FString&, ErrorMessage);

