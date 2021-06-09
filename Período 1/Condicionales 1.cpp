//Gabriel Alexander Calderón Villeda
//Clase del 15-02-2021
//Nombre del programa: Condicionales 1

#include <iostream>

using namespace std;

/*
	Programa que le dice al usuario que ingrese un numero y 
	le indica si el numero el positivo, negativo, cero, par o impar.
*/

int main()
{
	int number;
	
	cout << "Ingrese un numero entero: ";
	cin >> number; 
	
	if(number > 0)
	{
		cout << "El numero es positivo: " << number << endl;
		if ((number % 2) == 0)
		{
			cout << "El numero es par" << endl;
		}
		else 
		{
			cout << "El numero es impar" << endl;
		}
	}
	else if(number < 0)
	{
		cout << "El numero es negativo: " << number << endl; 
		if ((number % 2) == 0)
		{
			cout << "El numero es par" << endl;
		}
		else 
		{
			cout << "El numero es impar" << endl;
		}
	}
	else 
	{
		cout << "EL numero ingresado es cero." << endl;
	}
	

	return 0;	
}
