#pragma once
#include "CoreMinimal.h"
#include "DiscordJoinDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordJoin, const FString&, joinSecret);

