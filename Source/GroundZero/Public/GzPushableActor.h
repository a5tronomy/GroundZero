#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Pawn.h"
#include "GzPushableActor.generated.h"

class AActor;
class ACharacter;
class AGzCharacter;
class UAnimMontage;
class UArrowComponent;
class UBoxComponent;
class UCapsuleComponent;
class UGzInteractComponent;
class UGzPlayerAnimInstance;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class GROUNDZERO_API AGzPushableActor : public APawn, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzPushableActor_Statics;
public:
    UPROPERTY(BlueprintReadWrite)
    bool IsPulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool ResetPositionOnRoomChange;
    
    UPROPERTY(Instanced)
    UCapsuleComponent* MovingTowardCamera_WithS_Capsule;
    
    UPROPERTY(Instanced)
    UCapsuleComponent* MovingLeft_WithA_Capsule;
    
    UPROPERTY(Instanced)
    UCapsuleComponent* MovingRight_WithD_Capsule;
    
    UPROPERTY(Instanced)
    UCapsuleComponent* CapsuleNearestToCamera;
    
    UPROPERTY()
    bool ObjectIsMoving;
    
    UPROPERTY()
    bool PreviousObjectIsMoving;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    float PushPullSwitchDisabledTime;
    
    UPROPERTY(EditAnywhere)
    FTransform LastKnownGoodLocation;
    
    UPROPERTY(SaveGame)
    FVector SpawnLocation;
    
    UPROPERTY(SaveGame)
    FRotator SpawnRotation;
    
    UPROPERTY()
    float NextPushTime;
    
    UPROPERTY(Instanced)
    UCapsuleComponent* ActiveCapsuleComponent;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool PushingDisabled;
    
    UPROPERTY(BlueprintReadOnly)
    AGzCharacter* ActivePlayer;
    
    UPROPERTY(EditAnywhere)
    bool NoPull;
    
    UPROPERTY(EditAnywhere)
    bool PushRotatesObject;
    
    UPROPERTY(EditAnywhere)
    float RotateSpeed;
    
    UPROPERTY(EditAnywhere)
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ConstantPushing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsShortObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsRotatingObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreCollisionSafetyChecks;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentPressedInput;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* PushCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PushToPullMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PullToPushMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PushToPullShortMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PullToPushShortMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PushStartMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PushStopMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PushStartShortMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PushStopShortMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* PushableRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCapsuleComponent* NorthCapsule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UArrowComponent* NorthArrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGzInteractComponent* NorthInteract;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCapsuleComponent* EastCapsule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGzInteractComponent* EastInteract;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UArrowComponent* EastArrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCapsuleComponent* SouthCapsule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGzInteractComponent* SouthInteract;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UArrowComponent* SouthArrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCapsuleComponent* WestCapsule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGzInteractComponent* WestInteract;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UArrowComponent* WestArrow;
    
public:
    AGzPushableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopPushingObject(const bool ForceStop);
    
    UFUNCTION(BlueprintCallable)
    void StartPushingObject(AGzCharacter* Character, UCapsuleComponent* CapsuleComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetResetPositionAndLocation(const FVector& Location, const FRotator& Rotation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPushingDisabled(const bool Disabled);
    
    UFUNCTION()
    void SetAnimInstancePushingObject(UGzPlayerAnimInstance* AnimInstance, bool IsPushing, bool StopRotating) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetPosition();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPushed();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectPushed();
    
    UFUNCTION(BlueprintCallable)
    bool IsTeleportLocationSafe(ACharacter* Character, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintPure)
    UCapsuleComponent* FindNearestCapsuleToActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    UCapsuleComponent* FindNearestCapsule(const AGzCharacter* Character);
    
    UFUNCTION()
    void AttachPlayerToObject(UCapsuleComponent* Capsule, AGzCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyForwardVelocity(const float Multiplier);
    

    // Fix for true pure virtual functions not being implemented
};

