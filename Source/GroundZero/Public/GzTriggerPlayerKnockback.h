#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzTriggerPlayerKnockback.generated.h"

UCLASS()
class GROUNDZERO_API AGzTriggerPlayerKnockback : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTriggerPlayerKnockback_Statics;
public:
    AGzTriggerPlayerKnockback(const FObjectInitializer& ObjectInitializer);

};

