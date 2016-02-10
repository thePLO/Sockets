#pragma once
#include <iostream>
#define WIN32_LEAN_AND_MEAN
#include <WinSock2.h>
#include <Windows.h>

class SocketTools
{
public:
	SocketTools();
	~SocketTools();
	static void CargarLibreria();
	static void DescargarLibreria();
	static void MostrarError();
};

