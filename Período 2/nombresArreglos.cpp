//Autor del programa: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: Nombres Arreglos

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	string nombres[5] = {"Jose", "Erick", "Krista", "Manuel", "Diego"};
	
	array<string, 5> nombres2 = {"Brian", "Gustavo", "Graham", "Emmanuel", "Alejandra"};
	
	//Imprimir los nombres
	
	cout << sizeof(nombres[0]) << endl;
	
	
	int tamanio = sizeof(nombres)/sizeof(nombres[0]);
	int tamanio2 = nombres2.size();
	
	
	for (int i = 0; i < tamanio; i++)
	{
		cout << nombres[i].size() << endl;
		cout << "nombres[" << i << "] = " << nombres[i] << endl;
	}
	
	cout << endl;
	
	for(int i = 0; i < tamanio2; i++)
	{
		cout << "nombres[" << i << "] = " <<nombres2[i] << endl;
	}
	
	return 0;
}
