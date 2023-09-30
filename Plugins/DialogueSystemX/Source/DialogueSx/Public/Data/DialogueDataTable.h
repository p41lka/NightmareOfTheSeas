/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DialogueDataTable.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DIALOGUESX_API UDialogueDataTable : public UDataTable
{
	GENERATED_BODY()
	//This empty class is intended to display only datatable assets with the specified row structure class when selected in blueprints.
	//The (RequiredAssetDataTags="RowStructure=ImageRow") meta doesn't work on Expose On Spawn variables.
	
};