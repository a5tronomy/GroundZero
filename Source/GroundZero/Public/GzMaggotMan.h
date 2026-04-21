#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "EHeuristicTypes.h"
#include "GzMaggotMan.generated.h"

class AGzAStarPathFindingNode;
class AGzMaggotManRailManager;

UCLASS()
class GROUNDZERO_API AGzMaggotMan : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMaggotMan_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AGzMaggotManRailManager* SplineManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaggotManLength;
    
    UPROPERTY(EditAnywhere)
    int32 MaxMovementIterations;
    
    UPROPERTY()
    TArray<AGzAStarPathFindingNode*> MovementSquares;
    
public:
    AGzMaggotMan(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool AStarPathfindTo(AGzAStarPathFindingNode* Start, AGzAStarPathFindingNode* End, TArray<AGzAStarPathFindingNode*>& OutputPath, bool AllowDiagonalMovement, EHeuristicTypes Heuristic);
    

    // Fix for true pure virtual functions not being implemented
};

