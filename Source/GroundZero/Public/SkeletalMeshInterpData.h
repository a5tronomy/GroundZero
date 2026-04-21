#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SkeletalMeshInterpData.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FSkeletalMeshInterpData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshInterpData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DesiredLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator DesiredRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<USkeletalMeshComponent*> Meshes;
    
    GROUNDZERO_API FSkeletalMeshInterpData();
};

