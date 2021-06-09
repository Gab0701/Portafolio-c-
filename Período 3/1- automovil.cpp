//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: automovil

#include <iostream>
#include <string>

using namespace std;

class Automovil 
{
	public: 								//Prototipos de las funciones públicas
		Automovil();
		void set_detalles();
		void set_numPuertas(int puertas);
		void get_detalles() const;
		int get_numPuertas() const;
			
	private:								//Atributos
		string fabricante;
		int numPuertas;		
		int numCilindros;
		int tamanioMotor;
};

// Implementaciones de las operaciones
// Constructor 
Automovil::Automovil()
{
	numPuertas = 0;
	numCilindros = 0;
	tamanioMotor = 0;
}

//Mutador
void Automovil::set_detalles()
{
	cout << "Introduce el fabricante: ";
	cin >> fabricante;
	cout << "Cuantas puertas? ";
	cin >> numPuertas;
	cout << "Cuantos cilindros? ";
	cin >> numCilindros;
	cout << "Que tamanio de motor? ";
	cin >> tamanioMotor;
}

//Mutador
void Automovil::set_numPuertas(int puertas)
{
	this->numPuertas = puertas;
}

//
void Automovil::get_detalles() const
{
	cout << "Fabricante: " << fabricante << endl;
	cout << "Puertas: " << numPuertas << endl;
	cout << "Cilindros: " << numCilindros << endl;
	cout << "Motor: " << tamanioMotor << endl;
}

int Automovil::get_numPuertas() const
{
	cout << "Puertas: " << numPuertas << endl;
}

int main()
{
	Automovil miCarro;
	miCarro.set_detalles();
	miCarro.get_detalles();
	
	Automovil carroDeErick;
	carroDeErick.set_detalles();
	carroDeErick.get_detalles();
	
	Automovil carroDeManuel;
	carroDeManuel.set_detalles();
	carroDeManuel.get_detalles();
	
	
	return 0;
}

