#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NPCWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FNPCWeaponData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FNPCWeaponData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamagePerShot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ShotsPerVolley;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D TimePerShot;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D TimeToNextVolley;
    
    GROUNDZERO_API FNPCWeaponData();
};

