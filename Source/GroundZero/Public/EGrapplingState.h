#pragma once
#include "CoreMinimal.h"
#include "EGrapplingState.generated.h"

UENUM()
enum EGrapplingState {
    GrapplingState_None,
    GrapplingState_Started,
    GrapplingState_Looping,
    GrapplingState_Ended,
    GrapplingState_Killed,
    GrapplingState_Escaped,
};

