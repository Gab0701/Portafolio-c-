//Autor: Gabriel Alexander Calderón Villeda
//Clase del 15-02-2021 
//Nombre del programa: Absoluto (devuelve el valor absoluto de un numero)

#include <iostream>
using namespace std;

//Función de tipo dint que toma un parámetro int
int absoluto(int var)
{
	if(var < 0)
		var = -var;
		
	return var;
}

//funcion de tipo double que toma un parámetro double
double absoluto(double var)
{
	if(var < 0)
		var = -var;
	return var;
}

int main()
{
	//Calcular el valor absoluto de un numero
	int num1 = -496;
	double numd = -1354.268;
	
	cout << "El valor absoluto de: " << num1 << " es = " << absoluto(num1) << endl;
	cout << "El valor absoluto de: " << numd << " es = " << absoluto(numd) << endl;
	
	return 0;
}

