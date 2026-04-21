#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Blueprint/UserWidget.h"
#include "GzSimpleExternCreditsWidget.generated.h"

class UDataTable;
class UVerticalBox;

UCLASS(EditInlineNew)
class GROUNDZERO_API UGzSimpleExternCreditsWidget : public UUserWidget {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzSimpleExternCreditsWidget_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TitleRichTextStyleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* RichTextStyleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle DefaultTextStyle;
    
    UPROPERTY(Instanced)
    UVerticalBox* RootVerticalBox;
    
    UGzSimpleExternCreditsWidget();

    UFUNCTION(BlueprintCallable)
    void PopulateFromCSV(const FString& FilePath);
    
};

