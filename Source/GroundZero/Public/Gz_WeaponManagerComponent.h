#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/TimerHandle.h"
#include "WeaponAnimationData.h"
#include "WeaponAnimationMeshSequenceData.h"
#include "WeaponData.h"
#include "Gz_WeaponManagerComponent.generated.h"

class ACharacter;
class AGzCharacter;
class UAnimMontage;
class UAudioComponent;
class UDataTable;
class UNiagaraComponent;
class USoundCue;
class UStaticMesh;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGz_WeaponManagerComponent : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGz_WeaponManagerComponent_Statics;
public:
    UPROPERTY()
    UAnimMontage* ActiveMeleeAttackAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    bool CurrentShotIsCriticalShot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CriticalShotNextAttackTime;
    
    UPROPERTY(BlueprintReadOnly)
    float KnifeChargeAmount;
    
    UPROPERTY(BlueprintReadOnly)
    bool KnifeChargedFullyState;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<ACharacter*> HighNoonVictims;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumberOfSwordAttacks;
    
    UPROPERTY()
    FTimerHandle ReloadFinishHandle;
    
    UPROPERTY()
    UAnimMontage* ActiveReloadMontage;
    
    UPROPERTY()
    float DesiredBarrelSpinSpeed;
    
    UPROPERTY()
    float CurrentBarrelSpinSpeed;
    
    UPROPERTY()
    int32 NumShotsWaitingToShoot;
    
    UPROPERTY(SaveGame)
    int32 RandomAnimationNameIndex;
    
    UPROPERTY(SaveGame)
    bool InSingleReload;
    
    UPROPERTY()
    float NextFidgetSequence;
    
    UPROPERTY()
    bool CanFidget;
    
    UPROPERTY()
    bool InSecondaryStance;
    
    UPROPERTY()
    bool HasPerformedInitialAttack;
    
    UPROPERTY()
    int32 AttackSequenceIndex;
    
    UPROPERTY()
    UAnimMontage* ActivePlayerFidget;
    
    UPROPERTY()
    UAnimMontage* ActiveWeaponFidget;
    
    UPROPERTY(Instanced)
    UAudioComponent* ActiveFidgetSoundEffect;
    
    UPROPERTY(SaveGame)
    FWeaponAnimationMeshSequenceData WaitingAnimationSequenceData;
    
    UPROPERTY(SaveGame)
    float WaitingAnimationMontageTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* CriticalShotSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* WeaponAnimationDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector DefaultShootDimensions;
    
protected:
    UPROPERTY()
    AGzCharacter* WeaponOwner;
    
    UPROPERTY()
    bool SpinUpState;
    
    UPROPERTY()
    float ResetHasPerformedInitialAttackTime;
    
    UPROPERTY(Instanced)
    TArray<UNiagaraComponent*> ActiveFlamethrowerEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* SilencerMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* ScopeMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* CompensatorMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* WeaponDataTable;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<int32> OwnedWeaponIDs;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FWeaponData ActiveWeaponData;
    
    UPROPERTY(BlueprintReadOnly)
    FWeaponAnimationData ActiveWeaponAnimationData;
    
private:
    UPROPERTY()
    float LastShotTime;
    
    UPROPERTY()
    float ShotStartTime;
    
    UPROPERTY()
    FTimerHandle TimerBurstShots;
    
    UPROPERTY()
    FTimerHandle TimerFullAuto;
    
    UPROPERTY()
    FTimerHandle TimerMinigunSpin;
    
    UPROPERTY(Instanced)
    TArray<UAudioComponent*> ActiveWeaponSoundAudio;
    
public:
    UGz_WeaponManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WeaponHasInfiniteAmmo() const;
    
    UFUNCTION()
    void ShootHighNoonVictim();
    
    UFUNCTION(BlueprintCallable)
    void SetRandomAnimationNameIndex(const bool InstallData);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomAnimationNameIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void PopulateWeaponData();
    
    UFUNCTION()
    void PlayShootLoop() const;
    
    UFUNCTION(BlueprintPure)
    float PlayMontage(UAnimMontage* PlayerMontage, UAnimMontage* WeaponMontage, const int32 PlayerMontagePriority) const;
    
    UFUNCTION(BlueprintPure)
    bool HasInfiniteReloads() const;
    
    UFUNCTION(BlueprintPure)
    bool GetWeaponInfoForWeapon(const FName ID, int32& MagazineCount, int32& SpareAmmo, bool& InfiniteAmmo) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMagazineCount() const;
    
    UFUNCTION()
    void FireGun();
    
    UFUNCTION()
    void FireFlamethrower();
    
    UFUNCTION()
    void FinishReload();
    
    UFUNCTION()
    void FaceHighNoonEnemy(const float InterpTime);
    
    UFUNCTION()
    void ExecuteHighNoonVictims();
    
    UFUNCTION(BlueprintCallable)
    void DrawWeapon(FName ID, const int32 InventorySlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CheckAttachmentMeshes() const;
    
    UFUNCTION()
    void BeginMinigunShooting();
    
};

