#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AStarMazePoint.h"
#include "AStarMazePoints.h"
#include "EPathDirectionOfMovement.h"
#include "GzWaterPumpPuzzlePathFinder.generated.h"

UCLASS()
class GROUNDZERO_API AGzWaterPumpPuzzlePathFinder : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzWaterPumpPuzzlePathFinder_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    FIntPoint StartPoint;
    
    UPROPERTY(BlueprintReadOnly)
    FIntPoint Endpoint;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FAStarMazePoints> CurrentMaze;
    
    AGzWaterPumpPuzzlePathFinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateFloorTypes(TArray<FAStarMazePoints>& Maze);
    
    UFUNCTION(BlueprintCallable)
    FString PrintMazeToLog(const TArray<FAStarMazePoints>& Maze);
    
    UFUNCTION(BlueprintCallable)
    bool PipesCanConnect(const int32 PipeAColumn, const int32 PipeARow, const float PipeARotation, const int32 PipeBColumn, const int32 PipeBRow, const float PipeBRotation, const EPathDirectionOfMovement Direction);
    
    UFUNCTION(BlueprintCallable)
    bool IsWithinBounds(int32 X, int32 Y, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    void GetConnections(const FAStarMazePoint PipeA, const float PipeARotation, bool& Up, bool& Right, bool& Down, bool& Left);
    
    UFUNCTION(BlueprintCallable)
    void GenerateMaze(int32 Width, int32 Height, TArray<FAStarMazePoints>& OutMaze, FIntPoint& Start, FIntPoint& End);
    
    UFUNCTION(BlueprintCallable)
    TArray<EPathDirectionOfMovement> GenerateDirectionEnumArray(const TArray<FIntPoint>& OutPath);
    
    UFUNCTION(BlueprintCallable)
    FString GenerateCompactDirectionString(const TArray<FIntPoint>& OutPath);
    
    UFUNCTION(BlueprintCallable)
    bool FindPathAStar(const TArray<FAStarMazePoints>& Maze, TArray<FIntPoint>& OutPath, TArray<FAStarMazePoints>& OutPathArray, FIntPoint Start, const FIntPoint Goal, const bool bAllowDiagonal, TArray<int32>& PathIndexOrder);
    
    UFUNCTION(BlueprintCallable)
    void DivideMazeIntoSections(UPARAM(Ref) TArray<FAStarMazePoints>& OriginalMaze, TArray<FIntPoint>& Array1, TArray<FIntPoint>& Array2, TArray<FIntPoint>& Array3, TArray<FIntPoint>& Array4, TArray<FIntPoint>& Array5, const int32 ItemsPerArray);
    
    UFUNCTION(BlueprintCallable)
    void CarveMaze(TArray<FAStarMazePoints>& Maze, int32 X, int32 Y);
    
};

