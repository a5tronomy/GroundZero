#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzPushableObject.generated.h"

class UGzInteractComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class GROUNDZERO_API AGzPushableObject : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzPushableObject_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGzInteractComponent* InteractVolume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* StaticMeshComponent;
    
    AGzPushableObject(const FObjectInitializer& ObjectInitializer);

};

