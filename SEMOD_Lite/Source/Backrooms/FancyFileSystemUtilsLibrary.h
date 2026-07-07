// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FancyFileSystemUtilsLibrary.generated.h"

/**
 * 
 */
UCLASS()
class BACKROOMS_API UFancyFileSystemUtilsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "FancyFileSystem")
	static bool WriteStringToSaveFile(const FString& Filename, const FString& Content, int32 UserIndex);
};
