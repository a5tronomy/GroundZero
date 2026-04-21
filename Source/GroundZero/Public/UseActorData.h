#pragma once
#include "CoreMinimal.h"
#include "EUseActorType.h"
#include "UseActorData.generated.h"

class AActor;
class USceneComponent;

USTRUCT()
struct FUseActorData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FUseActorData_Statics;
public:
    UPROPERTY()
    AActor* Actor;
    
    UPROPERTY(Instanced)
    USceneComponent* Component;
    
    UPROPERTY()
    TEnumAsByte<EUseActorType> ActorType;
    
    UPROPERTY()
    int32 Priority;
    
    UPROPERTY()
    float Distance;
    
    GROUNDZERO_API FUseActorData();
};

