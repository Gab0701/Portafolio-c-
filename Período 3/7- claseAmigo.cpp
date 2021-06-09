//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: Clase amigo

#include <iostream>

using namespace std;

class Cuadrado;		//Prototipo de clase

class Rectangulo
{
		double ancho, alto;
	public:
		double area(){ return (ancho * alto);}		// Calcular el area de un rectángulo
		void convertir(Cuadrado a);					// Convertir un cuadrado en rectángulo
		
};


class Cuadrado
{
	friend class Rectangulo;						// Es una clase relacionada que puede acceder elementos de la otra
	private: 
		double lado;
	public: 
		Cuadrado(double a) : lado(a) {}				// Constructor
};

void Rectangulo::convertir(Cuadrado a)				// Convertir un cuadrado en rectángulo
{
	ancho = a.lado;
	alto = a.lado;	
}

int main()
{
	Rectangulo r1;		// Creamos un rectángulo vacío
	Cuadrado c1(4);		// Creamos un cuadrado con cada lado midiendo 4 unidades
	
	r1.convertir(c1);	// Convertirmos el cuadrado en un rectángulo
	cout << r1.area();	// Ahora podemos utilizar los métodos de la clase rectángulo
	
	
	
	
	return 0;
}




