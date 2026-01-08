// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "Inventory/LyraInventoryItemDefinition.h"
#include "UObject/ObjectPtr.h"

#include "InventoryFragment_PickupStMesh.generated.h"

/**
 * 
 */

class UObject;
class UStaticMesh;

UCLASS()
class LYRAGAME_API UInventoryFragment_PickupStMesh : public ULyraInventoryItemFragment
{
	GENERATED_BODY()
	
public:
	//UInventoryFragment_PickupStMesh();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
	TObjectPtr<UStaticMesh> StaticMesh;
};
