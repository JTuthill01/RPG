#include "Pickup/PickupBase.h"
#include "Components/StaticMeshComponent.h"


APickupBase::APickupBase()
{
	PrimaryActorTick.bCanEverTick = false;

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	PickupMesh->SetupAttachment(RootComponent);
}

void APickupBase::BeginPlay()
{
	Super::BeginPlay();

	PickupMesh->SetSimulatePhysics(true);
}
