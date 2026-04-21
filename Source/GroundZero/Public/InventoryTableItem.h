#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "CombineInfo.h"
#include "EInventoryItemType.h"
#include "Templates/SubclassOf.h"
#include "InventoryTableItem.generated.h"

class AActor;
class UMaterialInterface;
class USkeletalMesh;
class USoundCue;
class UStaticMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct FInventoryTableItem : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FInventoryTableItem_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName DebugName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<EInventoryItemType> ItemType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USkeletalMesh* Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxCarry;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GiveAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool WeaponExhaustible;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Exhaustible;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FCombineInfo> CombineInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* PickupSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* InventoryIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> AssociatedBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ItemFlags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumberOfUses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DoorUnlockGroup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DoorUnlockGroupUses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* InspectMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* InspectStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> MaterialOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector InspectOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator InspectAdditionalRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AdditionalInspectDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsSeoYeonOnlyWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsEvanOnlyWeapon;
    
    GROUNDZERO_API FInventoryTableItem();
};

