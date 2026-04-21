#include "GzTrainRideStaticMeshActor.h"

AGzTrainRideStaticMeshActor::AGzTrainRideStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->MoveDirection = 0.00f;
    this->MoveSpeed = 0.00f;
    this->IsTerrain = false;
    this->TerrainIndex = 0;
    this->VistaIndex = 0;
    this->DistanceBeforeReset = 0.00f;
    this->InvisibleUntilReset = false;
    this->IsTunnel = false;
    this->IsRightSide = false;
    this->HasBeenDestroyed = false;
}


