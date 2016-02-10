#include "SocketTools.h"

SocketTools::SocketTools(){}
SocketTools::~SocketTools(){}


void SocketTools::CargarLibreria(){
	WSADATA a;
	int errM = WSAStartup(MAKEWORD(2, 2), &a);
	if (errM != 0) MostrarError();
}

void SocketTools::DescargarLibreria(){
	int errM = WSACleanup();
	if (errM != 0) MostrarError();
}

void SocketTools::MostrarError(){
	std::cout<<WSAGetLastError()<<std::endl;
}
