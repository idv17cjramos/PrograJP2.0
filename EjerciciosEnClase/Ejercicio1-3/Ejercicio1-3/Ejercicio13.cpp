// Ejercicio13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

void sumaDeN();

int main()
{
	sumaDeN();
    return 0;
}

void sumaDeN()
{
	int input;
	int resultado = 0;
	std::cout << "Cuantos numeros quieres imprimir?" << std::endl;
	std::cin >> input;

	for (int i = 0; i <= input; ++i)
		resultado += i;
		std::cout << resultado << std::endl;

	system("pause");
}

