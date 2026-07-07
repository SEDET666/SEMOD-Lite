#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Costume.generated.h"

UCLASS(BlueprintType)
class BACKROOMS_API UCostume : public UDataAsset
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        FText CostumeDisplayName;
};