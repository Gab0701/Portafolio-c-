//Autor: Gabriel Alexander Calderón Villdea - CV100720
//Nombre del programa: buscarNombresArray

#include <iostream>
#include <string>
#include <array>

using namespace std;

bool busquedaSecuencial(array<string, 5> nombres, string valorBuscado)
{
	bool encontrado = false;
	for(int i = 0; i < nombres.size(); i++)
	{
		if(valorBuscado == nombres[i])
		{
			encontrado = true;
			break;
		}
	}
	
	return encontrado;
}


int main()
{
	array<string, 5> nombres = {"Jose", "Erick", "Krista", "Manuel", "Diego"};
	
	array<string, 3> valorABuscar = {"Erick", "Krista", "Gustavo"};
	
	for(int i = 0; i < valorABuscar.size(); i++)
	{
		if(busquedaSecuencial(nombres, valorABuscar[i]))
		{
			cout << valorABuscar[i] << " esta en el arreglo" << endl;
		}
		else 
		{
			cout << valorABuscar[i] << " no esta en el arreglo" << endl;
		}
	} 	
	
	return 0;
}
