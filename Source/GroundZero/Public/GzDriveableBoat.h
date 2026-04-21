#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "GzDriveableBoat.generated.h"

class AGzCharacter;
class UBoxComponent;
class UFloatingPawnMovement;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS()
class GROUNDZERO_API AGzDriveableBoat : public APawn {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzDriveableBoat_Statics;
public:
    UPROPERTY(EditAnywhere)
    bool UseModernControls;
    
    UPROPERTY()
    float FlashlightLocationBlendAlpha;
    
    UPROPERTY()
    FRotator DesiredModernDirection;
    
    UPROPERTY()
    FVector2D ModernMovementValues;
    
    UPROPERTY()
    AGzCharacter* ActiveModernControlsPlayer;
    
private:
    UPROPERTY()
    float StaminaRecoverBlockTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraReorientJoystickValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModernControlsType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAlternateModernControlsInterp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebugDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatMoveInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatMoveInterpolationSpeedModern;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatMoveInterpolationSpeedNotMoving;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatMoveInterpolationSpeedNotMovingModern;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatTurnInterpolationSpeedModern;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatTurnInterpolationSpeedNotMovingModern;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatTurnInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatTurnInterpolationSpeedNotMoving;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BoatMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* BoatFlashlightLocation;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoatCollision;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFloatingPawnMovement* BoatMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSpeedTurnMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatTurnSpeedModernMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoatForwardSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float DesiredForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CurrentForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float DesiredTurnSpeed;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool BoatControlsLocked;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CurrentTurnSpeed;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool BoatActive;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsBoosting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoatUpgraded;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float BoatStamina;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSprintTimeWhenNotUpgraded;
    
public:
    AGzDriveableBoat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpgradeBoat();
    
    UFUNCTION(BlueprintCallable)
    void StopMovingImmediately();
    
    UFUNCTION(BlueprintCallable)
    void StopMoving();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartBoat(AGzCharacter* Rider);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBoatControlsLocked(const bool Locked);
    
    UFUNCTION(BlueprintCallable)
    void SetBoatActive(const bool Active);
    
    UFUNCTION(BlueprintNativeEvent)
    void RunOutOfStamina();
    
};

