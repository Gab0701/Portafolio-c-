//Clase del 27-01-2021
//Autor: Gabriel Alexander Calderón Villeda
//Nombre del programa: Uso de operadores aritméticos 2

#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	
	cout << "Inserte un numero" << endl;
	cin >> x;
	cout << "Inserte el otro numero" << endl;
	cin >> y;
	
	x += y;		            //equivale a x = x + 3
	cout << x << endl;
	
	x -= y;					//equivale a x = x - 3
	cout << x << endl;
	
	x *= y;					//equivale a x = x * 3
	cout << x << endl;
	
	x /= y;					//equivale a x = x / 3
	cout << x << endl;
	
	x %= y;					//equivale a x = x % 3
	cout << x << endl; 
	
	return 0;
}
