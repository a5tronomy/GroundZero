#pragma once
#include "CoreMinimal.h"
#include "OnCutsceneEventFiredDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCutsceneEventFired, const FString&, EventName);

