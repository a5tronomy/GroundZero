#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzElevatorGenerator.generated.h"

class AGzCharacter;
class AGzPreRenderedCamera;

UCLASS()
class GROUNDZERO_API AGzElevatorGenerator : public AActor, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzElevatorGenerator_Statics;
public:
private:
    UPROPERTY(EditAnywhere)
    AGzPreRenderedCamera* Camera;
    
public:
    AGzElevatorGenerator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartUsingCrane(AGzCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MoveCraneArm(bool Forward);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LowerCraneArm();
    
    UFUNCTION(BlueprintPure)
    AGzPreRenderedCamera* GetCamera() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ExitGenerator(const AGzCharacter* Character);
    

    // Fix for true pure virtual functions not being implemented
};

