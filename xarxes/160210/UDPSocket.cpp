#include "UDPSocket.h"

UDPSocket::UDPSocket():GenericSocket(0){
}

UDPSocket::~UDPSocket(){
}

void UDPSocket::SendTo(const void * data, int lenData, SocketAddress & to){
	sendto(sock, reinterpret_cast<char*>(&data), lenData, 0, to.GetAddress(), sizeof(to.GetAddress()));
}

void UDPSocket::RecieveFrom(const void * data, int lenData, SocketAddress & from){
	recvfrom(sock, reinterpret_cast<char*>(&data), lenData, 0, from.GetAddress(), reinterpret_cast<int*>(sizeof(sockaddr)));
}
