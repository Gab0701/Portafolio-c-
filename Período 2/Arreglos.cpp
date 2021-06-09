//Autor del programa: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: Arreglos

#include <iostream>

using namespace std;

void imprimirArreglo(int numeros[])
{
	for(int i = 0; i < 5; ++i)
	{
		cout << "numeros[" << i << "]";
		cout << numeros[i] << " " << endl;
	}
}

int main()
{
	int numeros[5] = {19, 10, 8, 35, 23};
	
	/*for(int i = 0; i < 5; ++i)
	{
		cout << "numeros[" << i << "]";
		cout << numeros[i] << " " << endl;
	}*/
	
	imprimirArreglo(numeros);
	
	//Cambiando el elemento en la posición 3 (cuarto elemento)
	numeros[3] = 45;
	
	cout << endl;
	
	/*for(int i = 0; i < 5; ++i)
	{
		cout << "numeros[" << i << "]";
		cout << numeros[i] << " " << endl;
	}*/
	
	imprimirArreglo(numeros);
	
	cout << "Ingrese el valor de numeros[4]: ";
	cin >> numeros[4];
	cout << endl;
	
	for(int i = 0; i < 5; ++i)
	{
		cout << "numeros[" << i << "]";
		cout << numeros[i] << " " << endl;
	}
	
	//A partir de C++ 11 se introdujo el bucle basado en rango 
	cout << endl;
	
	for(int n: numeros)
	{
		cout << n << " " << endl;
	}
	
	return 0;
}
