#include "GzMaggotMan.h"

AGzMaggotMan::AGzMaggotMan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineManager = NULL;
    this->MaggotManLength = 0.00f;
    this->MaxMovementIterations = 5000;
}

bool AGzMaggotMan::AStarPathfindTo(AGzAStarPathFindingNode* Start, AGzAStarPathFindingNode* End, TArray<AGzAStarPathFindingNode*>& OutputPath, bool AllowDiagonalMovement, EHeuristicTypes Heuristic) {
    return false;
}


