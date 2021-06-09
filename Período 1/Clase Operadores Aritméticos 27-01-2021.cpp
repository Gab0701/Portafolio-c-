//Clase del 27-01-2021
//Autor: Gabriel Alexander Calder�n Villeda
//Nombre del programa: Uso de operadores aritm�ticos 1

#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	
	//double x;
	//double y;

	cout << "*** Calcula operaciones aritmeticas de dos numeros *** \n";
	 
	cout << "Inserte un numero: ";
	cin >> x;
	
	cout << "Inserte el otro numero: ";
	cin >> y;
	
	cout << "Suma: " << x + y << endl; 					//Suma de x + y
	cout << "Resta: " << x - y << endl; 				//Resta de x - y
	cout << "Multiplicacion: " << x * y << endl;		//Multiplicaci�n de x por y
	cout << "Division: " << x / y << endl; 				//Divisi�n de x entre y
	
	cout << "Residuo de division: " << x % y << endl;  	//Residio de la divisi�n entre x y y, el % es un operador inv�lido en variable de tipo double
	
	//Conversi�nn impl�cita, teniendo un valor de tipo double, le asigno ese valor a una varible de tipo integer 
	
	/*int z = x;
	int w = y;
	
	cout << "Residuo de division por conversion implicita: " << x % y << endl; */
	
	++x;
	cout << "Incremento en uno: " << x << endl; 
	
	--x;
	cout << "Decrece en uno: " << x << endl;
	
	return 0;
	
}

