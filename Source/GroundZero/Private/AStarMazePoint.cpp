#include "AStarMazePoint.h"

FAStarMazePoint::FAStarMazePoint() {
    this->FloorType = EMazeFloorType::Wall;
    this->Direction = EPathDirectionOfMovement::UP;
    this->Disabled = false;
}

