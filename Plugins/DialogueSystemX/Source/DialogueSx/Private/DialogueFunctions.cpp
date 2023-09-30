/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#include "DialogueFunctions.h"
#include "Engine/Engine.h"
#include "Misc/OutputDeviceNull.h"


UWorld* UDialogueFunctions::GetWorld() const
{
	if (GIsEditor && !GIsPlayInEditorWorld) return nullptr; 
	else if (GetOuter()) return GetOuter()->GetWorld(); 
	else return nullptr;
}

void UDialogueFunctions::CallFunctionByName(const FString Name)
{
	FOutputDeviceNull Device;
	CallFunctionByNameWithArguments(*Name, Device, this, true);
}

void UDialogueFunctions::CallAllFunctions(const TArray<FString>& FunctionNames)
{
	for (const auto& FunctionName : FunctionNames)
		CallFunctionByName(FunctionName);
}
