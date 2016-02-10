#include "SocketTools.h"


SocketTools::SocketTools(){}
SocketTools::~SocketTools(){}


void SocketTools::CargarLibreria(){
	WSADATA a;
	int errM = WSAStartup(MAKEWORD(2, 2), &a);
	if (errM != 0) MostrarError("Error al cargar la libreria");
}

void SocketTools::DescargarLibreria(){
	int errM = WSACleanup();
	if (errM != 0) MostrarError("Error al descargar la libreria");
}

void SocketTools::MostrarError(std::string a){
	std::cout << a << ": " << WSAGetLastError() << std::endl;
}
