#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponAnimationBlendSpaceData.h"
#include "WeaponAnimationMeshSequenceData.h"
#include "WeaponAnimationSequenceData.h"
#include "WeaponFidgetMontage.h"
#include "WeaponAnimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FWeaponAnimationData : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FWeaponAnimationData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* StartAimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* StopAimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationSequenceData Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FWeaponFidgetMontage> FidgetMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationSequenceData MoveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationBlendSpaceData MoveLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationSequenceData MoveEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData InitialAttackSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData SecondaryInitialAttackSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FWeaponAnimationMeshSequenceData> ShootSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FWeaponAnimationMeshSequenceData> SecondaryShootSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FWeaponAnimationMeshSequenceData> MeleeImpactSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FWeaponAnimationMeshSequenceData> SecondaryMeleeImpactSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData ReloadSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData ReloadEmptySequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData ReloadStartSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData ReloadLoopSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData ReloadLoopLastSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData ReloadFinishSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FWeaponAnimationMeshSequenceData> ReloadOverrideSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData ShootLoopStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData ShootLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeaponAnimationMeshSequenceData ShootLoopEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* ParryMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* StartCriticalAimMontage;
    
    GROUNDZERO_API FWeaponAnimationData();
};

