//Autor: Gabriel Alexander Calderón Villeda
//Clase del 15-02-2021 
//Nombre del programa: Condicionales 2

#include <iostream>

using namespace std;

int main()
{
	/*
		Operador ternario es una alternativa a if ... else if ... else
		Sintaxis es:
		
			condicion ? expresion1 : expresion2
		
		Si la condicion es true, se ejecuta la expresion 1
		y si es false se ejecuta la expresion 2
	*/
	
	double nota;
	cout << "Ingresa la notsa que obtuviste en el examen: ";
	cin >> nota;
	
	string resultado;
	
	resultado = (nota >= 6) ? "Aprobo" : "reprobo";
	
	cout << "Usted " << resultado << " el examen." << endl;
	
	resultado = (nota == 0) ? "No tienen nota en" : ((nota >= 6) ? "aprobo" : "reprobo");
	cout << "Usted " << resultado << " el examen" << endl;
	
	
	
	
	return 0;
}
