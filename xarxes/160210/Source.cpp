#include "UDPSocket.h"


void run(const char* argv[]) {
	UDPSocket socket;
	SocketAddress a;
	a.SetAddress(argv[1]);
	socket.Bind(a);

	if (strcmp(argv[0], "server")) {
		std::cout << "ure a server" << std::endl;
		const char * data;
		socket.RecieveFrom(&data, 1300, a);
		while (!strcmp(data, "exit")) {
			std::cout << data << std::endl;
		}
	}else {
		std::cout << "ure a client" << std::endl;
		std::string data;
		std::cin >> data;
		while (!strcmp(data.c_str(), "exit")) {
			socket.RecieveFrom(&data, 1300, a);
			std::cin >> data;
		}
	}
}

int main(int argc, const char* argv[]) {
	SocketTools::CargarLibreria();
	run(argv);
	SocketTools::DescargarLibreria();
}