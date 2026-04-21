#pragma once
#include "CoreMinimal.h"
#include "EmsLoadPartitionCompleteDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEmsLoadPartitionComplete, const TArray<TSoftObjectPtr<AActor>>&, LoadedActors);

