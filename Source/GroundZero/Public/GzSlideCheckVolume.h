#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PhysicsVolume.h"
#include "GzSlideCheckVolume.generated.h"

class AActor;
class AGzCharacter;

UCLASS()
class GROUNDZERO_API AGzSlideCheckVolume : public APhysicsVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSlideCheckVolume_Statics;
public:
protected:
    UPROPERTY()
    AGzCharacter* SlidingCharacter;
    
    UPROPERTY(EditAnywhere)
    float TimeOutFailTime;
    
public:
    AGzSlideCheckVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

