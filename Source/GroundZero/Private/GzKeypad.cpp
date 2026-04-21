#include "GzKeypad.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GzInteractComponent.h"

AGzKeypad::AGzKeypad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->LetterKeypadLetters = TEXT("LABCDEFGHI");
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->InteractComponent = CreateDefaultSubobject<UGzInteractComponent>(TEXT("InteractComponent"));
    this->KeypadCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("KeypadCamera"));
    this->IsSymbolKeypad = false;
    this->IsLetterKeypad = false;
    this->DoorUnlocked = false;
    this->RedLightOffMaterial = NULL;
    this->RedLightOnMaterial = NULL;
    this->GreenLightOffMaterial = NULL;
    this->GreenLightOnMaterial = NULL;
    this->KeypadBlankNumberMaterial = NULL;
    this->KeypadPressSound = NULL;
    this->KeypadWrongCodeSound = NULL;
    this->KeypadRightCodeSound = NULL;
    this->KeypadLightGreen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadLightGreen"));
    this->KeypadLightRed = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadLightRed"));
    this->KeypadButton_0 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_0"));
    this->KeypadButton_1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_1"));
    this->KeypadButton_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_2"));
    this->KeypadButton_3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_3"));
    this->KeypadButton_4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_4"));
    this->KeypadButton_5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_5"));
    this->KeypadButton_6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_6"));
    this->KeypadButton_7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_7"));
    this->KeypadButton_8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_8"));
    this->KeypadButton_9 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_9"));
    this->KeypadButton_Hash = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_Hash"));
    this->KeypadButton_Star = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadButton_Star"));
    this->KeypadScreenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeypadScreenMesh"));
    this->KeypadPressTemporarilyLocked = false;
    this->InteractComponent->SetupAttachment(RootComponent);
    this->KeypadButton_0->SetupAttachment(RootComponent);
    this->KeypadButton_1->SetupAttachment(RootComponent);
    this->KeypadButton_2->SetupAttachment(RootComponent);
    this->KeypadButton_3->SetupAttachment(RootComponent);
    this->KeypadButton_4->SetupAttachment(RootComponent);
    this->KeypadButton_5->SetupAttachment(RootComponent);
    this->KeypadButton_6->SetupAttachment(RootComponent);
    this->KeypadButton_7->SetupAttachment(RootComponent);
    this->KeypadButton_8->SetupAttachment(RootComponent);
    this->KeypadButton_9->SetupAttachment(RootComponent);
    this->KeypadButton_Hash->SetupAttachment(RootComponent);
    this->KeypadButton_Star->SetupAttachment(RootComponent);
    this->KeypadCamera->SetupAttachment(RootComponent);
    this->KeypadLightGreen->SetupAttachment(RootComponent);
    this->KeypadLightRed->SetupAttachment(RootComponent);
    this->KeypadScreenMesh->SetupAttachment(RootComponent);
}


void AGzKeypad::PressButton(const UStaticMeshComponent* Button) {
}

void AGzKeypad::OnUsedByPlayer_Implementation(AGzCharacter* Player) {
}



int32 AGzKeypad::MoveOnKeypad(int32 CurrentIndex, int32 Direction) {
    return 0;
}

UStaticMeshComponent* AGzKeypad::GetMeshForButtonIndex(int32 Index) const {
    return NULL;
}

int32 AGzKeypad::GetIndexForButtonMesh(const UStaticMeshComponent* Mesh) const {
    return 0;
}


void AGzKeypad::EraseDigit() {
}

void AGzKeypad::EnterDigit(int32 Digit) {
}


