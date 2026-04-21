#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GzUfoPawn.generated.h"

UCLASS()
class GROUNDZERO_API AGzUfoPawn : public APawn {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzUfoPawn_Statics;
public:
    AGzUfoPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnPrimaryAttackReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPrimaryAttack();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnForwardBackward(const float Value);
    
};

