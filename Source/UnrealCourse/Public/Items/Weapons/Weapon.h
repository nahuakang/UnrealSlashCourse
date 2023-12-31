// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Item.h"
#include "Weapon.generated.h"

/**
 * Forward Declarations
 */

class USoundBase;

UCLASS()
class UNREALCOURSE_API AWeapon : public AItem
{
	GENERATED_BODY()

public:
	void AttachMeshToSocket(USceneComponent* InParent, FName InSocketName);
	void Equip(USceneComponent* InParent, FName InSocketName);

protected:
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

private:
	/**
	 * Metasounds
	 */

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	USoundBase* EquipSound;
};
