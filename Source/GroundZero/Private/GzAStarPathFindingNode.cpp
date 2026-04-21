#include "GzAStarPathFindingNode.h"

AGzAStarPathFindingNode::AGzAStarPathFindingNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Parent = NULL;
    this->SquareRootTest = NULL;
    this->FCost = 0.00f;
    this->GCost = 0.00f;
    this->HCost = 0.00f;
    this->SquareSize = 0.00f;
    this->Obstacle = false;
}

bool AGzAStarPathFindingNode::SquareIsDiagonalFrom(AGzAStarPathFindingNode* TargetSquare) {
    return false;
}

bool AGzAStarPathFindingNode::IsObstacleSquare() {
    return false;
}


