#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "Camera/PlayerCameraManager.h"
#include "EClawMachineState.h"
#include "GzInteractInterface.h"
#include "GzRenderInterface.h"
#include "GzClawMachine.generated.h"

class AGzCharacter;
class AGzPreRenderedCamera;
class UAudioComponent;
class UCameraComponent;
class UGzPoseableMeshComponent;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzClawMachine : public AActor, public IGzRenderInterface, public IGzInteractInterface, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzClawMachine_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    FVector2D ClawPosition;
    
    UPROPERTY(SaveGame)
    FVector2D DesiredClawPosition;
    
    UPROPERTY(SaveGame)
    bool ClawMovingAutomatically;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D StartingClawPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D PrizeChutePosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClawMovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClawInputSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AGzPreRenderedCamera* PreRenderedCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FViewTargetTransitionParams CameraTransitionParams;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UGzPoseableMeshComponent* ClawMachineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    USceneComponent* ClawMachineRoot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UAudioComponent* ClawMachineMusic;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UAudioComponent* ClawMachineSound;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float ClawMovementStateValue;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float ClawFingerState;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float DesiredClawFingerState;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float CurrentClawHeight;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float DesiredClawHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClawDescentSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClawFingerSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float JoystickMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    AActor* CarriedPrize;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EClawMachineState> ClawMachineState;
    
    UPROPERTY(BlueprintReadOnly)
    float ClawDescentDistance;
    
    UPROPERTY(BlueprintReadOnly)
    AGzCharacter* ActivePlayer;
    
    UPROPERTY(BlueprintReadWrite)
    float PauseTime;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentJoystickLeftRight;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentJoystickUpDown;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* WaitingToDropItem;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredJoystickLeftRight;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredJoystickUpDown;
    
    AGzClawMachine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartUsingClawMachine(AGzCharacter* Player);
    
    UFUNCTION()
    void OnUsedByPlayer_Implementation(AGzCharacter* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartDescendingClaw();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractedWithClawMachine(AGzCharacter* Player);
    
    UFUNCTION(BlueprintNativeEvent)
    float GetMovementSpeedForClawMachineState();
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetHeightForClawToDescendTo();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DropGrabbedPrize();
    
    UFUNCTION(BlueprintImplementableEvent)
    AActor* CheckGrabbedPrize();
    

    // Fix for true pure virtual functions not being implemented
};

