#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Character.h"
#include "InteractableInterface.h"
#include "InteractableActor.generated.h"

UCLASS()
class BACKROOMS_API AInteractableActor : public AActor, public IInteractableInterface
{
	GENERATED_BODY()

public:
	AInteractableActor();

public:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "InteractableActor")
	USceneComponent* Scene;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "InteractableActor")
	UStaticMeshComponent* StaticMesh;

public:
	UFUNCTION(BlueprintCallable, Category = "InteractableActor")
	void BlockUsage();

public:
	virtual void OnActorUsed_Implementation(ACharacter* Character) override;
};