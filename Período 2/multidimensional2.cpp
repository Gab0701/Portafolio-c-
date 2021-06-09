//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: Arreglos Multidimensionales 2

#include <iostream>

using namespace std;

int main()
{
	//2 filas y 3 columnas
	int numeros[2][3];					  
	
	cout << "Ingrese 6 numeros:" << endl;
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin >> numeros[i][j];
		}
	}
	
	cout << "Los numeros ingresados son: " << endl;
	
	//Se utiliza un bucle anidado
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << "numeros[" << i << "][" << j << "] = " << numeros[i][j] << endl;
		}
	}				  
					  
					  
	return 0;
}
