//Autor: Gabriel Alexander Calder�n Villeda - CV100720
//Nombre del programa: Clase amigo

#include <iostream>

using namespace std;

class Cuadrado;		//Prototipo de clase

class Rectangulo
{
		double ancho, alto;
	public:
		double area(){ return (ancho * alto);}		// Calcular el area de un rect�ngulo
		void convertir(Cuadrado a);					// Convertir un cuadrado en rect�ngulo
		
};


class Cuadrado
{
	friend class Rectangulo;						// Es una clase relacionada que puede acceder elementos de la otra
	private: 
		double lado;
	public: 
		Cuadrado(double a) : lado(a) {}				// Constructor
};

void Rectangulo::convertir(Cuadrado a)				// Convertir un cuadrado en rect�ngulo
{
	ancho = a.lado;
	alto = a.lado;	
}

int main()
{
	Rectangulo r1;		// Creamos un rect�ngulo vac�o
	Cuadrado c1(4);		// Creamos un cuadrado con cada lado midiendo 4 unidades
	
	r1.convertir(c1);	// Convertirmos el cuadrado en un rect�ngulo
	cout << r1.area();	// Ahora podemos utilizar los m�todos de la clase rect�ngulo
	
	
	
	
	return 0;
}




