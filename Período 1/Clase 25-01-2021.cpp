//Nombre del programa: Uso de variables de tipo double y string, y uso de constantes
//Clase 25-01-2021

#include <iostream>
#include <string>
using namespace std;

/*const string Autor = "Gabriel Alexander Calderon Villeda";
const double pi = 3.14159;
const char NuevaLinea = '\n'; */

int main ()
{
	//Ejemplo de string
	
	/*string MiTexto;
	MiTexto = "Este es un mensaje";
	MiTexto = "Este\n mensaje\n ha sido\n \"reasignado\"";
	
	cout << "Este texto ira primero \n";
	cout << MiTexto << endl; */
	
	//Ejemplo del perímetro de un círculo
	
	/*double radio = 5.0;
	double circulo; 
	
	circulo = 2 * pi * radio;
	cout << circulo;
	cout << NuevaLinea ;
	cout << Autor << endl;*/
	
	//Ejemplo de operaciones aritméticas entre diferentes tipos de variables
	
	/*int semana = 7; 
	
	int HorasDia = 24;
	int minutos = 60;
	int segundos = 60;
	
	double DiasTrabajados = 4.3;
	cout << "Total en horas: " << (DiasTrabajados * HorasDia) * minutos << endl; */
	
	//Ejemplo 2 de operaciones aritméticas entre diferentes tipos de variables
	
	int Numero1 = 5;
	double Numero2 = 5.0;
	int Numero3 = 37;
	
	cout << "El resultado de dividir " << Numero3 << " entre " << Numero2 << " es igual a: " << Numero3 / Numero2 << endl;
	
	
	return 0;
}
