#include "ProceduralController.h"

UProceduralController::UProceduralController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UProceduralController::Server_RequestTunnelData_Implementation() {
}



void UProceduralController::SendRequestedPLSData() {
}

void UProceduralController::SendRequestedCarverData(EDebrisItemPass pass) {
}





void UProceduralController::Client_SendTunnelData_Implementation(const TArray<FTunnelNode>& tunnels) {
}

void UProceduralController::Client_SendRoomData_Implementation(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& Obstacles) {
}

void UProceduralController::Client_RecieveCarverSizes_Implementation(int32 pass, int32 carverCount) {
}

void UProceduralController::Client_ReceivePLSLevelCarver_Implementation(int32 pass, const FLevelGenerationCarverLists& levelCarvers) {
}

void UProceduralController::Client_ReceivePLSInfluencers_Implementation(const FGeneratedInfluenceSets& influenceSet) {
}

void UProceduralController::Client_ReceivePLSDebris_Implementation(const TArray<FGeneratedDebrisItem>& levelDebris) {
}


