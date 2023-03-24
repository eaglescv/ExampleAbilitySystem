// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "CharacterBase.generated.h"

class UGameplayAbility;
class UAttributeSetBase;

UCLASS()
class EXAMPLEABILITYSYSTEM_API ACharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "CharacterBase")
	UAbilitySystemComponent* AbilitySystemComp = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "CharacterBase")
	UAttributeSetBase* AttributeSetBase = nullptr;

	UFUNCTION(BlueprintCallable, Category = "CharacterBase")
	void AquireAbilty(TSubclassOf<UGameplayAbility> AbilityToAquire);

};
