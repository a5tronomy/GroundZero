#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzMirrorActor.generated.h"

class USceneComponent;
class USkeletalMeshComponent;

UCLASS()
class GROUNDZERO_API AGzMirrorActor : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMirrorActor_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* MasterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* MirrorLandmark;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* CloneMesh;
    
private:
    UPROPERTY(Instanced)
    USkeletalMeshComponent* MasterMesh;
    
public:
    AGzMirrorActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetupMesh();
    
};

