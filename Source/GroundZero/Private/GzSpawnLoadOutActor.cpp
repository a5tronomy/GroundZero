#include "GzSpawnLoadOutActor.h"

AGzSpawnLoadOutActor::AGzSpawnLoadOutActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManualGiveOnly = false;
}

TArray<FSpawnLoadOutItem> AGzSpawnLoadOutActor::GetLoadOutForCharacter(TEnumAsByte<EPlayerType> PlayerType) {
    return TArray<FSpawnLoadOutItem>();
}


