#include "GenericSocket.h"

GenericSocket::GenericSocket(int type){
	if (type == 0) sock = socket(AF_INET, SOCK_DGRAM, 0); //UDP
	else if (type == 1) sock = socket(AF_INET, SOCK_STREAM, 0); //TCP
	else std::cout<<"Not correct type"<<std::endl;

	if (sock == INVALID_SOCKET) SocketTools::MostrarError("Error al crear el socket");
}

GenericSocket::~GenericSocket() {
	closesocket(sock);
}
void GenericSocket::Bind(SocketAddress & address) {
	if (bind(sock, address.GetAddress(), sizeof(sockaddr)) == -1) SocketTools::MostrarError("Error en GenericSocket::Bind");
}
