#pragma once
#include "SocketTools.h"

class SocketAddress
{
public:
	SocketAddress();
	~SocketAddress();
	SocketAddress(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint16_t port);
	SocketAddress(SocketAddress &a);
	int SetAddress(const std::string & inString);
	friend std::ostream& operator<<(std::ostream& os, const SocketAddress& dt);

private:
	sockaddr_in address;
	/*struct in_addr {
		union {
			struct {
				uint8_t s_b1, s_b2, s_b3, s_b4;
			}S_un_b;
			struct {
				uint16_t s_w1, s_w2;
			}S_un_w;
			uint32_t S_addr;
		}S_un;
	};*/
};

