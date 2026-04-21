#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyNpcEjectShell.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyNpcEjectShell : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyNpcEjectShell_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ShellEjectionSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UClass* EjectedShellBlueprint;
    
public:
    UGzAnimNotifyNpcEjectShell();

};

