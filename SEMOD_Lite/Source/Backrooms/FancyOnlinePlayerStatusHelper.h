#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FancyOnlinePlayerStatusHelper.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
    FOnFancyOnlineInteractionsPlayerStatusChanged,
    UFancyOnlinePlayerStatusHelper*,
    StatusAccessor
);

UCLASS(BlueprintType)
class BACKROOMS_API UFancyOnlinePlayerStatusHelper : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FOnFancyOnlineInteractionsPlayerStatusChanged OnStatusChanged;

    UFUNCTION(BlueprintCallable)
    FString GetPlayerName();

    UFUNCTION(BlueprintCallable)
    FString GetPlayerRichTextPlatform();

    UFUNCTION(BlueprintCallable)
    bool GetIsPlayerTalking();
};