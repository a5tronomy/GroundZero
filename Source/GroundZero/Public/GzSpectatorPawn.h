#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "GzSpectatorPawn.generated.h"

UCLASS()
class GROUNDZERO_API AGzSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSpectatorPawn_Statics;
public:
    AGzSpectatorPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMaxSpeed(const float Speed) const;
    
};

