#include "GzUniversityProjector.h"

AGzUniversityProjector::AGzUniversityProjector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HasShuffled = false;
    this->FirstSlideLocationActor = NULL;
    this->SecondSlideLocationActor = NULL;
    this->ThirdSlideLocationActor = NULL;
    this->DebugNoShuffle = false;
    this->FirstItemIndex = -1;
    this->SecondItemIndex = -1;
    this->ThirdItemIndex = -1;
    this->InsertedFirstItem = false;
    this->InsertedSecondItem = false;
    this->InsertedThirdItem = false;
}

bool AGzUniversityProjector::TryAndInsertItem(const FString& ItemName) {
    return false;
}


void AGzUniversityProjector::PackBoolForCollectionParameter(const TArray<bool>& BoolArray, float& OutFloat1, float& OutFloat2) {
}

TArray<bool> AGzUniversityProjector::GenerateCurrentPattern(const TArray<bool>& Array1, const TArray<bool>& Array2, const TArray<bool>& Array3) {
    return TArray<bool>();
}


