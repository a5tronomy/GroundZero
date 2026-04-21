#include "GzSafeActor.h"

AGzSafeActor::AGzSafeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovingDirection = ESafeMovingDirection::SafeMovingDirectionNone;
    this->CurrentNumber = 1;
    this->SolvedPuzzle = false;
}

void AGzSafeActor::TurnRight() {
}

void AGzSafeActor::TurnLeft() {
}

void AGzSafeActor::ResetSafeInput() {
}

void AGzSafeActor::OnBeginUsingSafe() {
}

TArray<int32> AGzSafeActor::GetRightAnswer() {
    return TArray<int32>();
}


