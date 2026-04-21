#pragma once
#include "CoreMinimal.h"
#include "MontageTranslation.h"
#include "PlayerEquipmentModelMeshParameter.h"
#include "PlayerModelMeshParameter.h"
#include "Templates/SubclassOf.h"
#include "PlayerModelParameters.generated.h"

class UAnimInstance;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FPlayerModelParameters {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FPlayerModelParameters_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AllowHats;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAnimInstance> CustomAnimClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMontageTranslation> TranslatedMontages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayerModelMeshParameter SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayerModelMeshParameter HeadMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPlayerEquipmentModelMeshParameter> ExtraEquipment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BlinkMaterialIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* CustomBlinkMaterial;
    
    GROUNDZERO_API FPlayerModelParameters();
};

