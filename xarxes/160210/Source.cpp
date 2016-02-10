#include "GenericSocket.h"

void run() {
	GenericSocket socketU = GenericSocket(0);
	GenericSocket socketT = GenericSocket(1);
	//al salir del ambito de run se llama a los destructores de geneic
}

int main() {
	SocketTools::CargarLibreria();
	run();
	SocketTools::DescargarLibreria();

	system("pause");
}