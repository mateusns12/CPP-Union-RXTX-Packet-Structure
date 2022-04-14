#include <iostream>
#include <string.h>

struct Data{
	float temperature;
	float umidity;
	float light;
};

union Packet{
	Data data;
	char buffer[sizeof(Data)];
};

union Packet packet_rx;
union Packet packet_tx;

void Send();
void Receive();
void InitPkt();

int main() {
	InitPkt();
	return 0;
}

void InitPkt(){
	std::cout << "TX Packet being initialized..." << std::endl;
	packet_tx.data.temperature = 10.2;
	packet_tx.data.umidity = 23.7;
	packet_tx.data.light = 56.3;
	std::cout << "TX Packet ready!" << std::endl;
}

void Send(){
	std::cout << "Sending TX ..." << std::endl;
	//to be implemented
}

void Receive(){
	std::cout << "Reading RX ..." << std::endl;
	//to be implemented
}
