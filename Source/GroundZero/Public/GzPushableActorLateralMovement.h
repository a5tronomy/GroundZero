#pragma once
#include "CoreMinimal.h"
#include "GzPushableActor.h"
#include "GzPushableActorLateralMovement.generated.h"

class UFloatingPawnMovement;

UCLASS()
class GROUNDZERO_API AGzPushableActorLateralMovement : public AGzPushableActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzPushableActorLateralMovement_Statics;
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFloatingPawnMovement* PushMovement;
    
public:
    AGzPushableActorLateralMovement(const FObjectInitializer& ObjectInitializer);

};

