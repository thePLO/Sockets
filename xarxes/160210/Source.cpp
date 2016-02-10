#include "GenericSocket.h"

int main() {
	SocketTools::CargarLibreria();

	GenericSocket* socketU = new GenericSocket(0);
	GenericSocket* socketT = new GenericSocket(1);
	GenericSocket* socketE = new GenericSocket(2);

	delete socketU;
	delete socketT;
	delete socketE;

	SocketTools::DescargarLibreria();
	int a;
	std::cin >> a;
}