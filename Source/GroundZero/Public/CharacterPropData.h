#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppearanceOverride.h"
#include "EPlayerType.h"
#include "CharacterPropData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FCharacterPropData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCharacterPropData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EPlayerType> ApplyToCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* PropMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ComponentTagToApplyTo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform ComponentTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAppearanceOverride> AppearanceOverrides;
    
    GROUNDZERO_API FCharacterPropData();
};

