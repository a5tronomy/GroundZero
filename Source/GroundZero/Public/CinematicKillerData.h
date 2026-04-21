#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CinematicKillerData.generated.h"

class AActor;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FCinematicKillerData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCinematicKillerData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    AActor* Killer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkeletalMeshComponent* KillerMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector AdditionalMeshLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator AdditionalMeshRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseMeshTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector DeathLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator DeathRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform ForceAdditionalPlayerTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform ForceAdditionalEnemyTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ForceAlignment;
    
    GROUNDZERO_API FCinematicKillerData();
};

