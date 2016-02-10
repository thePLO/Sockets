#include "GenericSocket.h"

int main() {
	SocketTools::CargarLibreria();

	GenericSocket* socketU = new GenericSocket(0);
	GenericSocket* socketT = new GenericSocket(1);

	delete socketU;
	delete socketT;

	SocketTools::DescargarLibreria();
}