//Autor: Gabriel Alexander Calderón Vilelda - CV100720
//Nombre del programa: ordenamientoMezcla

//Ordenamiento por mezcla en C++

#include <iostream>

using namespace std;

//Combinar dos subarreglos L y M en arr
void merge(int arr[], int low, int med, int high)
{
	//Crear L ? A[low...med] y M ? A[med + 1...high]
	int n1 = med - low + 1;
	int n2 = high - med;
	
	int L[n1], M[n2];
	
	for(int i = 0; i < n1; i++)
	{
		L[i] = arr[low + i];
	}
	
	for(int j = 0; j < n2; j++)
	{
		M[j] = arr[med + 1 + j];
	}
	
	//Mantener los índices actuales de los subarreglos y el arreglo principal
	
	int i, j, k;
	i = 0;
	j = 0;
	k = low;
	
	// Hasta que alcancemos el final de L o de M, escoger el mayor numero
	// de elementos L y M colocarlos en la posición correcta arr[Low...High]
	
	while(i < n1 && j < n2)
	{
		if(L[i] < M[i])
		{
			arr[k] = L[i];
		} else 
		{
			arr[k] = M[j];
			j++;
		}
		k++;
	}
	
	
	//Cuando se nos terminan los elementos en L o M
	//Seleccionar los elementos restantes y colocarlos en arr[low...high]
	
	while(i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while(j < n2)
	{
		arr[k] = M[j];
		j++;
		k++;
	}
}

//Dividir el arreglo en dos sub arreglos, ordenarlos y combinarlos
void mergeSort(int arr[], int low, int high)
{
	if(low < high)
	{
		cout << low << " " << high << endl;
		int med = low + (high - low)/2;
		// El punto medio es donde el arreglo será dividido entre dos subs arrays
		mergeSort(arr, low, med);
		mergeSort(arr, med + 1, high);
		
		//Mezclar los arreglos ordenados
		merge(arr, low, med, high);
	}
}

//Imprimir el arreglo
void imprimirArreglo(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		cout << endl;
	}
}

int main()
{
	int arr[] = {6, 5, 12, 10, 9, 1};
	
	int size = sizeof(arr) / sizeof(arr[0]);
	
	mergeSort(arr, 0 , size - 1);
	
	cout << "Arreglo ordenado: \n";
	
	imprimirArreglo(arr, size);
	
	return 0;
}
