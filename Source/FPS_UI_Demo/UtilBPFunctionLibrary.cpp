// Fill out your copyright notice in the Description page of Project Settings.

#include "UtilBPFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

bool UUtilBPFunctionLibrary::IsPlayingInEditor(UObject* WorldContextObject)
{
    if (!WorldContextObject)
    {
        return false;
    }

    if (auto world = WorldContextObject->GetWorld())
    {
        return world->IsEditorWorld();
    }

    return false;
}
