#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzMainMenuCharacterActor.generated.h"

UCLASS()
class GROUNDZERO_API AGzMainMenuCharacterActor : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMainMenuCharacterActor_Statics;
public:
    AGzMainMenuCharacterActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusOnCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginFadeMusic(const float Time);
    
};

