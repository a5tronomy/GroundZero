#pragma once
#include "CoreMinimal.h"
#include "GzPushableActor.h"
#include "GzPushableActorRotation.generated.h"

class UCapsuleComponent;
class URotatingMovementComponent;

UCLASS()
class GROUNDZERO_API AGzPushableActorRotation : public AGzPushableActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzPushableActorRotation_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    URotatingMovementComponent* RotationMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NorthRotationMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EastRotationMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SouthRotationMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WestRotationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCapsuleComponent* CurrentPushingCapsule;
    
public:
    AGzPushableActorRotation(const FObjectInitializer& ObjectInitializer);

};

