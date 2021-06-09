//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: Arreglos Multidimensionales

#include <iostream>

using namespace std;

int main()
{
	//3 filas y 2 columnas
	int test[3][2] = {{2, -5},			//Fila 0
					  {4, 0},			//Fila 1
					  {9, 1}};			//Fila 2
					  
	
	//Se utiliza un bucle anidado
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << "Test[" << i << "][" << j << "] = " << test[i][j] << endl;
		}
	}				  
					  
					  
	return 0;
}
