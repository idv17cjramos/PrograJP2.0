// Ejercicio15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

void escalera();

int main()
{
	escalera();
    return 0;
}

void escalera()
{
	int Escalones;
	std::cout << "cuantos escalones quieres imprimir" << std::endl;
	std::cin >> Escalones;
	for (int i = 1; i <= Escalones; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			std::cout << j << " ";
		}
		std::cout << "\n";
	}
	system("pause");

}
