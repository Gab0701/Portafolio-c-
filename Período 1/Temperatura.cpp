//Autor: Gabriel Alexander Calderón Villeda
//Clase del 10-02-2021
//Nombre del programa: Temperatura

#include "Temperatura.h" // modulo personalizado se colocan entre comillas
#include <iostream> // modulo o libreria de C++ se coloca entre <>

using namespace std;

int main()
{
	char continuar;
	do 
	{
	int tipo = SeleccionUsuario();
	double temperatura = leerTemperatura();
	convertirTemperatura(tipo, temperatura);
	cout << "\nDesea convertir otra temperatura? (y/n): ";
		while(!(cin >> continuar))
	{
		cout << "Selecciones 'y' para continuar, 'n' para terminar: ";
		cin.clear();					// Limpiar la entrada erronea
		cin.ignore(1000, '\n'); 		// Ignorar hasta mil valores
	}
	}
	while (continuar == 'y');
	
	return 0;
}
