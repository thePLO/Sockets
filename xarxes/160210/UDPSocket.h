#pragma once
#include"GenericSocket.h"

class UDPSocket: 
	public GenericSocket
{
public:
	UDPSocket();
	~UDPSocket();
	void SendTo(const void* data, int lenData, SocketAddress& to);
	void RecieveFrom(const void* data, int lenData, SocketAddress& from);
};

