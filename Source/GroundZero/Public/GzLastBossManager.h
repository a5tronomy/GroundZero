#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzLastBossManager.generated.h"

class AGzEnemyAI;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS()
class GROUNDZERO_API AGzLastBossManager : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzLastBossManager_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CurrentStage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxActiveShitBoys;
    
    UPROPERTY()
    TArray<AGzEnemyAI*> ActiveShitBoys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* LastBossRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* LastBossMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentHeadExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DesiredHeadExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadExtensionInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HeadRevealed;
    
public:
    AGzLastBossManager(const FObjectInitializer& ObjectInitializer);

};

