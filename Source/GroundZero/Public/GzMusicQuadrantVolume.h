#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzMusicQuadrantVolume.generated.h"

class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzMusicQuadrantVolume : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMusicQuadrantVolume_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* CentrePoint;
    
    AGzMusicQuadrantVolume(const FObjectInitializer& ObjectInitializer);

};

