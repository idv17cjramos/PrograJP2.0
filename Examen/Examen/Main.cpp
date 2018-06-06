#include <iostream>
#include <vector>
#include <Windows.h>
#include <algorithm>
#include <cmath>

using namespace std;

void examen();

int main()
{
	examen();

	return 0;
}


void examen()
{
	int input;
	int modulo;
	int contador =0;

	vector <int> valores_input;
	cout << "pon un numero" << endl;
	cin >> input;
	
	while (input > 0)
	{
		modulo = input % 10;
		valores_input.push_back(modulo);
		input = input / 10;
	}
	
	
	for (int i = valores_input.size()-1; i >= 0; i--)
	{
		cout << valores_input[i] * 10 << endl;
	}
	
	
	
	
	
	system("pause");

}

