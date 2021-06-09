//Clase del 27-01-2021
//Autor: Gabriel Alexander Calderón Villeda
//Nombre del programa: Uso de operadores aritméticos 1

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
	cout << "Multiplicacion: " << x * y << endl;		//Multiplicación de x por y
	cout << "Division: " << x / y << endl; 				//División de x entre y
	
	cout << "Residuo de division: " << x % y << endl;  	//Residio de la división entre x y y, el % es un operador inválido en variable de tipo double
	
	//Conversiónn implícita, teniendo un valor de tipo double, le asigno ese valor a una varible de tipo integer 
	
	/*int z = x;
	int w = y;
	
	cout << "Residuo de division por conversion implicita: " << x % y << endl; */
	
	++x;
	cout << "Incremento en uno: " << x << endl; 
	
	--x;
	cout << "Decrece en uno: " << x << endl;
	
	return 0;
	
}

