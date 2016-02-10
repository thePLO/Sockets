#pragma once
#include <iostream>
#include <string>
#define WIN32_LEAN_AND_MEAN
#include <WinSock2.h>
#include <Windows.h>
#include <WS2tcpip.h>

class SocketTools
{
public:
	SocketTools();
	~SocketTools();
	static void CargarLibreria();
	static void DescargarLibreria();
	static void MostrarError(std::string a);
};

