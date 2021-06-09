//Clase: 01-02-2021
//Nombre del programa: Números Aleatorios
//Autor: Gabriel Alexander Calderón Villeda

#include <iostream>
#include <cstdlib> // Numeros aleatorios
#include <ctime> // Hora
using namespace std;

int main()
{
	// Genera un numero aleatorio entre 1 y 10
	int magico;  // Número mágico
	int intento; // intento del usuario
	char respuesta = 'n';
	
	// Función que inicializa la generación de numeros aleatorios
	srand(time(0));
	
	// Número aleatorio generalizado por la función en un rango de 10 a 1
	magico = rand() % 10 + 1;
	
	//Da al uruario la oportunidad de adivinar el numero
	
	cout << "Adivina el numero: ";
	cin >> intento;
	
	// Condición para evaluar el número ingresado
	if(magico == intento)
	{
		cout << "Correcto!, cómo lo supisteee?" << endl;
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
