#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EMaximumDamageAmount.h"
#include "EWeaponType.h"
#include "Templates/SubclassOf.h"
#include "WeaponImpactData.h"
#include "WeaponData.generated.h"

class UAimOffsetBlendSpace1D;
class UAnimBlueprint;
class UAnimInstance;
class UDamageType;
class UNiagaraSystem;
class USkeletalMesh;
class USoundBase;
class USoundCue;

USTRUCT(BlueprintType)
struct FWeaponData : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FWeaponData_Statics;
public:
    UPROPERTY()
    FName RowName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 InventorySlot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USkeletalMesh* WeaponMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USkeletalMesh* MagazineMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UClass* EjectedShellBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector ProjectileSpawnOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ProjectileSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UClass* ThrownProjectileBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimBlueprint* WeaponAnimationBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UAnimInstance> NewWeaponAnimClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAimOffsetBlendSpace1D* WeaponAimBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UClass* DroppedMagazineBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* MuzzleFlashParticles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* SilencedMuzzleFlashParticles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* UnderwaterMuzzleFlashParticles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* TracerParticle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TracerSpawnChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MeleeAttackDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CloseQuartersDecapitates;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator MuzzleFlashRotator;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MuzzleFlashScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AnimationRowName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> CustomAnimationRowName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DoesNotReload;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool PickupIncrementsMagazine;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanMoveAndShoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InfiniteAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InfiniteReloads;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsHeavyWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CloseQuartersDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D MeleeImpactShake;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D FidgetTimesMinMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName WeaponID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AmmoID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<EWeaponType> WeaponType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamagePerAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool HasSecondaryStance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseSequentialAttackSequences;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* AttackSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* SilencedAttackSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* EmptySound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AimTimeOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimePerPrimaryAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LockPlayerAfterAttackTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MagazineCapacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumBulletsPerShot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeBetweenBurstShots;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ReloadsSingly;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DecapitationBaseChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CriticalShotBaseChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AimLockTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PlayerHandSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SilencerSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ScopeSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MuzzleFlashSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SilencerMuzzleFlashSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FlinchBaseChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DontTraceLaserSightLocationOnShoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AttackDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* AttackHitSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DistanceForMaxDamageDecay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxDamageDecayPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageDistanceDecayStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector ShootDimensionsOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumShootTracesHorizontal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumShootTracesVertical;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<EMaximumDamageAmount> MaximumEnemyDamageAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* SpinLoopStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* SpinLoop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* SpinLoopEnd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* ShootLoopStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* ShootLoop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* ShootLoopEnd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* CriticalShotNoise;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* CriticalShotNoiseSilenced;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* ShootSilencedLoopStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* ShootSilencedLoop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* ShootSilencedLoopEnd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* FlamethrowerParticles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UClass* FlamethrowerFlameActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FlamethrowerMaxLengthTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ShootLoopFadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FWeaponImpactData> WeaponImpactData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* BaseImpactSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseFullAutoSounds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FullAutoFadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool RetriggerLoopAnimationEveryShot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AutoEjectShell;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BarrelSpinSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpinUpTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpinDownTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseLineTraces;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* CriticalHitOverrideSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanHighNoon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool NoCriticalAim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanUseUnderwater;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool NoAttachments;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ImpactPushback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeBeforeScopeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UNiagaraSystem*> MeleeImpactEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanSliceHeadOff;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector FirstPersonRecoilKick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CompensatorIgnitionChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ProjectileUseLaserStartPosition;
    
    GROUNDZERO_API FWeaponData();
};

