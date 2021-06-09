//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre: Array tres dimensiones

#include <iostream>

using namespace std;

void imprimirArreglo(int arr[][3][2], int filas, int columnas, int profundidad)
{
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			for(int k = 0; k < profundidad; k++)
			cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << "\t";
			cout << endl;
		}
		cout << endl;
	}
}



int main()
{
	int tres[2][3][2] = {
							{
								{1,2},
								{3,4},
								{5,6}
								},
								{					
	
								{7,8},
								{9,10},
								{11,12}
								}
						};
						
	int tresArray2[2][3][2] = {{{1,2}, {3,4}, {5.6}},{{7,8},{9, 10}, {11, 12}}};
	int arr3[2][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12};
	
	cout << "Los valores del arreglo 1 son: " << endl;
	imprimirArreglo(tres, 2, 3, 2);
	cout << "Los valores del arreglo 2 son: " << endl;
	imprimirArreglo(tresArray2, 2, 3, 2);
	cout << "Los valores del arreglo 3 son: " << endl;
	imprimirArreglo(arr3, 2, 3, 2);
	
	
	return 0;
}
