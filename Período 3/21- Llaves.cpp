//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: Llaves

#include <iostream>
#include <string>
#include "pila.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

bool estanLlavesBalanceadas(string expresion)
{
	Pila<char> unaPila;
	for(size_t i = 0; i < expresion.length(); i++)
	{
		char caracter = expresion[i];
		cout << caracter << endl;
		if(caracter == '{')
		{
			unaPila.push(caracter);
			cout << unaPila.comoCadenaPila();
		}
		else if(caracter == '}')
		{
			if(unaPila.estaPilaVacia())
			{
				return false;
			}
			unaPila.pop();
			cout << unaPila.comoCadenaPila();
		}
	}
	return unaPila.estaPilaVacia();
}


int main()
{
	string cadena;
	cout << "Ingrese una expresion: " << endl;
	getline(cin, cadena);
	if(estanLlavesBalanceadas(cadena))
	{
		cout << endl;
		cout << "Las llaves estan balanceadas" << endl;
	} else {
		cout << endl;
		cout << "Las llaves no estan balanceadas" << endl;
	}
	
	
	return 0; 
}
