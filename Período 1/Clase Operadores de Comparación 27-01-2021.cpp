//Clase del 27-01-2021
//Autor: Gabriel Alexander Calderón Villeda
//Nombre del programa: operadores de comparación 

#include <iostream>
using namespace std;

int main()
{
	int x; 
	int y;
	
	cout << "Inserte valor para x" << endl;
	cin >> x;
	cout << "Inserte valor para y" << endl;
	cin >> y;
	
	bool var1 = true;
	bool var2 = true;
	
	cout << "\nvar1: " << var1 << endl;
	cout << "var2: " << var2 << endl;
	
	// 0 = False ( Falso ) y 1 = True ( Verdadero )
	
	cout << "\nx es menor que y:\n" << ( x < y ) << endl;				// Menor que
	cout << "\nx es mayor que y:\n" << ( x > y ) << endl;				// Mayor que
	cout << "\nx es menor o igual que y:\n" << ( x <= y ) << endl;		// Menor o igual que
	cout << "\nx es mayor o igual que y:\n" << ( x >= y ) << endl;		// Mayor o igual que
	cout << "\nx es diferente que y:\n" << ( x != y ) << endl;			// Diferente que 
	cout << "\nx es igual que y:\n" << ( x == y ) << endl;				// Igual que 
	
	return 0;	
}
