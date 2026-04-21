#pragma once
#include "CoreMinimal.h"
#include "EGZNetworkSwitch.generated.h"

UENUM()
enum class EGZNetworkSwitch : uint8 {
    ServerSide,
    ClientSide,
};

