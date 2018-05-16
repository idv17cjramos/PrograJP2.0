// Ejercicio1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>


void escribeNumeros();


int main()
{
	escribeNumeros();
    return 0;
}

void escribeNumeros()
{
	int input;
	int numeroEnconsola = 0;

	std::cout << "Cuantos numeros quieres imprimir?" << std::endl;
	std::cin >> input;

	while (input > 0)
	{
		std::cout << numeroEnconsola << std::endl;
		++numeroEnconsola;
		--input;
		
	}
	system("pause");
}

