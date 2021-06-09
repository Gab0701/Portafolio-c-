//Autor: Gabriel Alexander Calderón Villeda
//Clase del 10-02-2021

/*Este programa recibe una "lista" de numero y nos devuelve el valor maximo 
encontrado entre dichos numeros*/ 
#include <iostream>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

void calcularMaxSqrt()
{
	int numero;
	int maximo; 
	double raizCuadrada;
	
	for(int i = 0; i < 10; i++)
	{
		cout << "Ingrese el numero " << (i+1) << ": ";
		cin >> numero;
		cin.clear();
		cin.ignore(10, '\n');
		if(i == 0)
		maximo = numero;
		if(numero > maximo)
		maximo = numero;
	}
	raizCuadrada = sqrt(maximo);
	cout << "El valor maximo es: " << maximo << endl; 
	cout << "Su raiz cuadrada es: " << raizCuadrada << endl;	
}

void obtenerDigitos()
{
	cout << "Ingrese una cadena de texto o digitos" << endl;
	string cadena;
	char caracter;
	getline(cin, cadena);
	int i = 0;
	while (i < cadena.length())
	{
		caracter = cadena.at(i);
		if(isdigit(caracter))
			cout << caracter << endl;
			i++;
	}
}


int main()
{
	//calcularMaxSqrt();
	obtenerDigitos();
	return 0;
}


