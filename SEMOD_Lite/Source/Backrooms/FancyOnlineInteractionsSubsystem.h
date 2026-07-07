#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AdvancedSessionsLibrary.h"
#include "FancyOnlinePlayerStatusHelper.h"
#include "FancyOnlineInteractionsSubsystem.generated.h"

UCLASS(BlueprintType)
class BACKROOMS_API UFancyOnlineInteractionsSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    UFancyOnlinePlayerStatusHelper* CreatePlayerStateBoundStatusHelper(
        FBPUniqueNetId NetId
    );
};