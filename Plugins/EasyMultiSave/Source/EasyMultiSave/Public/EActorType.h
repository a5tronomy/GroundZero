#pragma once
#include "CoreMinimal.h"
#include "EActorType.generated.h"

UENUM()
enum class EActorType {
    AT_Runtime,
    AT_Placed,
    AT_LevelScript,
    AT_PlayerActor,
    AT_PlayerPawn,
    AT_GameObject,
    AT_Persistent,
    AT_Destroyed,
};

