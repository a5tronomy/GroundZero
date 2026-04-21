#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/DamageType.h"
#include "GzDamageType.generated.h"

UCLASS()
class GROUNDZERO_API UGzDamageType : public UDamageType {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzDamageType_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly)
    int32 WeaponID;
    
    UPROPERTY(BlueprintReadOnly)
    bool KickDamage;
    
    UPROPERTY(BlueprintReadOnly)
    FVector DamageDirection;
    
public:
    UGzDamageType();

};

