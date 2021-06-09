//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: Busqueda Binaria

#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 7> numeros = {1,2,3,4,5, 6, 7};
	int valorBuscado = 3, indice = -1;
	int inf = 0; 
	int sup = (int)numeros.size() - 1;
	int med;
	
	while(inf <= sup)
	{
		cout << "inf " << inf << " sup " << sup << " indx " << indice << " med " << med << " value " << numeros[med] << endl;
		med = inf + (sup - inf) / 2;
		if		(valorBuscado < numeros[med]) 	sup = med -1;
		else if	(valorBuscado > numeros[med]) 	inf = med + 1;
		else if	(valorBuscado == numeros[med])	{
		indice = med;
		break; 
	}
		else
		{
			cout << "Error";
		}
	}
	
	cout << "Indice del valor " << valorBuscado << " : " << indice << endl;
	
	
	return 0;
}
