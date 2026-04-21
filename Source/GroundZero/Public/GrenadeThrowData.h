#pragma once
#include "CoreMinimal.h"
#include "CharacterMontage.h"
#include "EHumanVoiceLine.h"
#include "Templates/SubclassOf.h"
#include "GrenadeThrowData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGrenadeThrowData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGrenadeThrowData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> GrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ThrowChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCharacterMontage> GrenadeThrowAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrenadeSpawnZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrenadeThrowSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrenadeThrowDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHumanVoiceLine> VoiceLine;
    
    GROUNDZERO_API FGrenadeThrowData();
};

