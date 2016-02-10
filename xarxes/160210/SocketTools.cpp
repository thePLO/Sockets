#include "SocketTools.h"

SocketTools::SocketTools(){}
SocketTools::~SocketTools(){}


void SocketTools::CargarLibreria(){
	LPWSADATA asdf=NULL;
	int errM = WSAStartup(MAKEWORD(2, 2), asdf);
	if (errM != 0) MostrarError();
}

void SocketTools::DescargarLibreria(){
	int errM = WSACleanup();
	if (errM != 0) MostrarError();
}

void SocketTools::MostrarError(){
	std::cout<<WSAGetLastError();
}
