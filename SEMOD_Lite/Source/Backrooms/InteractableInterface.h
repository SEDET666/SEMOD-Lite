#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameFramework/Character.h"
#include "InteractableInterface.generated.h"

UINTERFACE(BlueprintType)
class BACKROOMS_API UInteractableInterface : public UInterface
{
	GENERATED_BODY()
};

class BACKROOMS_API IInteractableInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interactable")
	void OnActorUsed(ACharacter* Character);
};