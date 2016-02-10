#include "GenericSocket.h"

GenericSocket::GenericSocket(int type){
	if (type == 0) sock = socket(AF_INET, SOCK_DGRAM, 0); //UDP
	else if (type == 1) sock = socket(AF_INET, SOCK_STREAM, 0); //TCP
	else std::cout<<"Not correct type"<<std::endl;

	if (sock == INVALID_SOCKET) SocketTools::MostrarError();
}

GenericSocket::~GenericSocket() {
	closesocket(sock);
}
