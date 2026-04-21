#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemyAIGrapplingSequenceData.h"
#include "EnemyAIGrapplingData.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FEnemyAIGrapplingData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnemyAIGrapplingData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator TeleportPlayerToMeExtraRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool TeleportPlayerToMe;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool GrappleInstantlyKills;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinimumAttackLoops;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaximumAttackLoops;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* GrappleVocalLoop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* GrappleVocalEnd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* GrappleAttackLoopHitSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEnemyAIGrapplingSequenceData StartGrapple;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEnemyAIGrapplingSequenceData GrappleLoop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEnemyAIGrapplingSequenceData GrappleEnd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEnemyAIGrapplingSequenceData GrappleKill;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEnemyAIGrapplingSequenceData GrappleEscape;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrappleForwardOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GrappleInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DontGrappleAgainTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString GrappleLoopBloodSpawnLocationBoneName;
    
    GROUNDZERO_API FEnemyAIGrapplingData();
};

