#pragma once
#include "SocketTools.h"

class GenericSocket
{
public:
	//type: 0 UDP | 1 TCP
	GenericSocket(int type);
	~GenericSocket();
private:
	SOCKET sock;
};

