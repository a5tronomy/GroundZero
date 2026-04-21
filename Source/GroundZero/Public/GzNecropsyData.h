#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GzNecropsyData.generated.h"

class UAnimationAsset;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FGzNecropsyData : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGzNecropsyData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UClass* AssociatedBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UClass*> AdditionalAssociatedBlueprints;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText MedicalName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ZoomDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator ExtraRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OrthoWidth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScaleMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* AdditionalStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString StaticMeshTransformSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform AdditionalStaticMeshTransform;
    
    FGzNecropsyData();
};

