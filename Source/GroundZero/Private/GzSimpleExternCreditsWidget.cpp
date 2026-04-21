#include "GzSimpleExternCreditsWidget.h"

UGzSimpleExternCreditsWidget::UGzSimpleExternCreditsWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TitleRichTextStyleSet = NULL;
    this->RichTextStyleSet = NULL;
    this->RootVerticalBox = NULL;
}

void UGzSimpleExternCreditsWidget::PopulateFromCSV(const FString& FilePath) {
}


