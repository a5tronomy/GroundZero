#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GzLaserSightComponent.generated.h"

class AGzCharacter;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzLaserSightComponent : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzLaserSightComponent_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UNiagaraSystem* BeamEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UNiagaraSystem* BeamImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLinearColor LaserColour;
    
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* LaserBeamComponent;
    
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* LaserImpactComponent;
    
    UPROPERTY()
    AGzCharacter* LaserSightOwner;
    
    UPROPERTY()
    bool LaserSightEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool LaserSightDisabled;
    
    UGzLaserSightComponent(const FObjectInitializer& ObjectInitializer);

};

