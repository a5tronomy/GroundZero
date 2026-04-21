#pragma once
#include "CoreMinimal.h"
#include "OnInspectedCctvCameraDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInspectedCctvCamera, bool, FirstTimeInspecting, int32, RoomIndex, int32, CameraIndex);

