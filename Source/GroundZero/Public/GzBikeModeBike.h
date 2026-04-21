#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzBikeModeBike.generated.h"

class AGzCharacter;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS()
class GROUNDZERO_API AGzBikeModeBike : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzBikeModeBike_Statics;
public:
    UPROPERTY()
    AGzCharacter* Player;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkeletalMeshComponent* BikeMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* MoveAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* IdleAnimation;
    
    AGzBikeModeBike(const FObjectInitializer& ObjectInitializer);

};

