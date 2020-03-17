#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilitySystemActorComponent.generated.h"

UENUM(Blueprintable)
enum class ESelectedAbility : uint8 { None, Basic_Melee, Jump_Attack, Fireball, Bow_and_Arrow, Warhammer};

UCLASS(Blueprintable)
class RPG_API UAbilitySystemActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilitySystemActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacking")
	bool bIsAttacking;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
