#pragma once
#include "CoreMinimal.h"
#include "WeaponImpactData.generated.h"

class UNiagaraSystem;
class UPhysicalMaterial;
class USoundBase;

USTRUCT(BlueprintType)
struct FWeaponImpactData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FWeaponImpactData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UPhysicalMaterial*> MaterialTypes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* ImpactParticle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* ImpactSound;
    
    GROUNDZERO_API FWeaponImpactData();
};

