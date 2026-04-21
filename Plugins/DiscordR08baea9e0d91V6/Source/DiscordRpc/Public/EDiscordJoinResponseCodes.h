#pragma once
#include "CoreMinimal.h"
#include "EDiscordJoinResponseCodes.generated.h"

UENUM()
enum class EDiscordJoinResponseCodes {
    DISCORD_REPLY_NO,
    DISCORD_REPLY_YES,
    DISCORD_REPLY_IGNORE,
};

