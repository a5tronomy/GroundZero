#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AGzLastBossTentacle.generated.h"

class AGzCharacter;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS()
class GROUNDZERO_API AAGzLastBossTentacle : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AAGzLastBossTentacle_Statics;
public:
    UPROPERTY(BlueprintReadWrite)
    float TurnBlockTime;
    
    UPROPERTY()
    AGzCharacter* Player;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* TentacleRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* TentacleMesh;
    
    AAGzLastBossTentacle(const FObjectInitializer& ObjectInitializer);

};

