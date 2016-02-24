#pragma once
#include "SocketTools.h"
#include "SocketAddress.h"

class GenericSocket
{
public:
	//type: 0 UDP | 1 TCP
	GenericSocket(int type);
	~GenericSocket();

	void Bind(SocketAddress & address);

protected:
	SOCKET sock;
};

