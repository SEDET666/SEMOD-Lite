// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BackroomsBPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class BACKROOMS_API UBackroomsBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Backrooms|Clipboard")
	static void SaveToClipboard(const FString& ToClipboard);
};
