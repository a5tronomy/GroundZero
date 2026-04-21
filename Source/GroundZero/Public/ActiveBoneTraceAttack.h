#pragma once
#include "CoreMinimal.h"
#include "EnemyAttackData.h"
#include "ActiveBoneTraceAttack.generated.h"

class AActor;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FActiveBoneTraceAttack {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FActiveBoneTraceAttack_Statics;
public:
    UPROPERTY()
    bool Active;
    
    UPROPERTY()
    FEnemyAttackData AttackData;
    
    UPROPERTY()
    FName StartBone;
    
    UPROPERTY()
    FName EndBone;
    
    UPROPERTY()
    TArray<AActor*> HitActors;
    
    UPROPERTY()
    UAnimMontage* AssociatedMontage;
    
    UPROPERTY()
    bool IsGrab;
    
    UPROPERTY()
    bool UsingSockets;
    
    GROUNDZERO_API FActiveBoneTraceAttack();
};

