#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupBase.generated.h"

class UStaticMeshComponent;

UCLASS()
class RPG_API APickupBase : public AActor
{
	GENERATED_BODY()
	
public:	
	APickupBase();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Name")
	FText PickupName;

	virtual void BeginPlay() override;

public:	
};
