#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "Camera/PlayerCameraManager.h"
#include "GzInteractInterface.h"
#include "GzRenderInterface.h"
#include "OnCodeCompleteDelegate.h"
#include "GzKeypad.generated.h"

class AGzCharacter;
class UCameraComponent;
class UGzInteractComponent;
class UMaterialInstance;
class USceneComponent;
class USoundBase;
class UStaticMeshComponent;

UCLASS()
class GROUNDZERO_API AGzKeypad : public AActor, public IGzRenderInterface, public IGzInteractInterface, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzKeypad_Statics;
public:
    UPROPERTY(EditAnywhere)
    FString LetterKeypadLetters;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FViewTargetTransitionParams CameraTransitionParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGzInteractComponent* InteractComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UCameraComponent* KeypadCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsSymbolKeypad;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsLetterKeypad;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString KeypadSolvedMessage;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool DoorUnlocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CorrectNumber;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString CurrentCode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInstance* RedLightOffMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInstance* RedLightOnMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInstance* GreenLightOffMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInstance* GreenLightOnMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInstance* KeypadBlankNumberMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UMaterialInstance*> KeypadNumberMaterials;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* KeypadPressSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* KeypadWrongCodeSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* KeypadRightCodeSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadLightGreen;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadLightRed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_0;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_4;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_5;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_6;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_7;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_8;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_9;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_Hash;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadButton_Star;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* KeypadScreenMesh;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool KeypadPressTemporarilyLocked;
    
    UPROPERTY(BlueprintAssignable)
    FOnCodeComplete OnCodeCorrect;
    
    AGzKeypad(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowKeypadUI();
    
    UFUNCTION(BlueprintCallable)
    void PressButton(const UStaticMeshComponent* Button);
    
    UFUNCTION()
    void OnUsedByPlayer_Implementation(AGzCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIGotCodeWrong();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIGotCodeRight();
    
    UFUNCTION(BlueprintCallable)
    int32 MoveOnKeypad(int32 CurrentIndex, int32 Direction);
    
    UFUNCTION(BlueprintPure)
    UStaticMeshComponent* GetMeshForButtonIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetIndexForButtonMesh(const UStaticMeshComponent* Mesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitKeypadFromUI();
    
    UFUNCTION(BlueprintCallable)
    void EraseDigit();
    
    UFUNCTION(BlueprintCallable)
    void EnterDigit(int32 Digit);
    

    // Fix for true pure virtual functions not being implemented
};

