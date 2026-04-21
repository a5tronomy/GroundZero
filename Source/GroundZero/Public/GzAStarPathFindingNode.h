#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzAStarPathFindingNode.generated.h"

class AGzAStarPathFindingNode;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzAStarPathFindingNode : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzAStarPathFindingNode_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AGzAStarPathFindingNode*> Neighbours;
    
    UPROPERTY(BlueprintReadWrite)
    AGzAStarPathFindingNode* Parent;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    USceneComponent* SquareRootTest;
    
    UPROPERTY(BlueprintReadWrite)
    float FCost;
    
    UPROPERTY(BlueprintReadWrite)
    float GCost;
    
    UPROPERTY(BlueprintReadWrite)
    float HCost;
    
    UPROPERTY(BlueprintReadWrite)
    float SquareSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Obstacle;
    
    AGzAStarPathFindingNode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SquareIsDiagonalFrom(AGzAStarPathFindingNode* TargetSquare);
    
    UFUNCTION(BlueprintCallable)
    bool IsObstacleSquare();
    
};

