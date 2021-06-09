//Clase: 01-02-2021
//Nombre del programa: N�meros Aleatorios
//Autor: Gabriel Alexander Calder�n Villeda

#include <iostream>
#include <cstdlib> // Numeros aleatorios
#include <ctime> // Hora
using namespace std;

int main()
{
	// Genera un numero aleatorio entre 1 y 10
	int magico;  // N�mero m�gico
	int intento; // intento del usuario
	char respuesta = 'n';
	
	// Funci�n que inicializa la generaci�n de numeros aleatorios
	srand(time(0));
	
	// N�mero aleatorio generalizado por la funci�n en un rango de 10 a 1
	magico = rand() % 10 + 1;
	
	//Da al uruario la oportunidad de adivinar el numero
	
	cout << "Adivina el numero: ";
	cin >> intento;
	
	// Condici�n para evaluar el n�mero ingresado
	if(magico == intento)
	{
		cout << "Correcto!, c�mo lo supisteee?" << endl;
	} else if (magico > intento){
		cout << "Lo siento, el numero es mayor que  " << intento << endl; 
	} 
	
	else {
	    cout << "Lo siento, el numero es menor que " << intento << endl; 
	}
	
	cout << "Quieres saber cual era el numero? (y/n): ";
	cin >> respuesta;
	if (respuesta == 'y')
	{
		cout << "El numero secreto era: " << magico << endl;
	}
	else {
		cout << "Bueno, esta bien, intentalo de nuevo" << endl;
	}
	
	return 0;	
}
