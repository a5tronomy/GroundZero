#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzFlashlightLightingActor.generated.h"

class APointLight;
class UDirectionalLightComponent;
class USkyLightComponent;

UCLASS()
class GROUNDZERO_API AGzFlashlightLightingActor : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzFlashlightLightingActor_Statics;
public:
    UPROPERTY(EditAnywhere)
    APointLight* LightningLight;
    
protected:
    UPROPERTY(EditAnywhere, Instanced)
    USkyLightComponent* SkyLight;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDirectionalLightComponent* DirectionalLight;
    
public:
    AGzFlashlightLightingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TurnOnLightning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TurnOnFlashlightLighting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TurnOffLightning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TurnOffFlashlightLighting() const;
    
};

