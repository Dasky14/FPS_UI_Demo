// Fill out your copyright notice in the Description page of Project Settings.

#include "UtilBPFunctionLibrary.h"

bool UUtilBPFunctionLibrary::IsPlayingInEditor(UObject* Object)
{
    if (!Object)
    {
        return false;
    }

    if (auto world = Object->GetWorld())
    {
        return world->IsEditorWorld();
    }

    return false;
}
