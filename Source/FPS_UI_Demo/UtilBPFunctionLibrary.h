// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilBPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FPS_UI_DEMO_API UUtilBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "IsPlayingInEditor", Category = "Utils"))
	static bool IsPlayingInEditor(UObject* Object);
};
