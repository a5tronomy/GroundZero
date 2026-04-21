#pragma once
#include "CoreMinimal.h"
#include "OnSwitchedCameraDelegate.generated.h"

class AGzPreRenderedCamera;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSwitchedCamera, AGzPreRenderedCamera*, Camera);

