#include "TrainRideTerrainProp.h"

FTrainRideTerrainProp::FTrainRideTerrainProp() {
    this->TerrainMesh = NULL;
    this->Width = 0;
    this->NumPieces = 0;
    this->PopulateOnSpawn = false;
    this->IsTunnel = false;
    this->LastLeftTerrainPieceInChain = NULL;
    this->LastRightTerrainPieceInChain = NULL;
}

