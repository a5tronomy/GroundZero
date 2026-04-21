#pragma once
#include "CoreMinimal.h"
#include "EChaosChatTriggerRules.generated.h"

UENUM()
enum EChaosChatTriggerRules {
    AllChatters,
    OnlyFollowersOrSubscribers,
    OnlySubscribers,
};

