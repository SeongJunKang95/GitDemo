#include "AActor.h"


AAActor::AAActor()
{
 	
	PrimaryActorTick.bCanEverTick = false;

}

void AAActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Log, TEXT("Written by KUJ!!!"));
}

