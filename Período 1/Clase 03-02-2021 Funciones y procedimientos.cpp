//Clase del 03-02-2021
//Autor: Gabriel Alexander Calderón Villeda
//Nombre del programa: Funciones y procedimientos

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string obtenerMovimientoComputadora()
{
	string movimientoComp;
	int numeroMovimiento = rand() % 3 + 1;
	switch(numeroMovimiento)
	{
		case 1:
			movimientoComp = "Piedra";
			break;
		case 2:
			movimientoComp = "Papel";
			break;
		case 3:
			movimientoComp = "Tijeras";
			break;
	}
	return movimientoComp;
}

int main()
{
	srand(time(0));
	// #1
	/*cout << obtenerMovimientoComputadora() << endl;
	cout << obtenerMovimientoComputadora() << endl;
	cout << obtenerMovimientoComputadora() << endl;
	cout << obtenerMovimientoComputadora() << endl;
	cout << obtenerMovimientoComputadora() << endl;
	cout << obtenerMovimientoComputadora() << endl;
	cout << obtenerMovimientoComputadora() << endl;
	cout << obtenerMovimientoComputadora() << endl;
	cout << obtenerMovimientoComputadora() << endl;
	cout << obtenerMovimientoComputadora() << endl;*/
	
	// #2
	/*string movimientoComputadora;
	movimientoComputadora = obtenerMovimientoComputadora();
	cout << movimientoComputadora << endl;
	
	movimientoComputadora = obtenerMovimientoComputadora();
	cout << movimientoComputadora << endl;
	
	movimientoComputadora = obtenerMovimientoComputadora();
	cout << movimientoComputadora << endl;*/
	
	// #3
	string movimientoJugador;
	string movimientoComputadora;
	
	movimientoComputadora = obtenerMovimientoComputadora();
	cout << "Jugador: " << movimientoComputadora;
	
	movimientoJugador = obtenerMovimientoComputadora();
	cout << "	Computadora: " << movimientoJugador;
	
	
	return 0;
}
