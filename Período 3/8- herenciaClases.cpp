//Autor: Gabriel Alexander Calder�n Vileda - CV100720
//Nombre del programa: Herencia Clases 

//Ejemplo de herencia a clase derivada

#include <iostream>

using namespace std;

class Poligono
{
	protected:
		double ancho, alto;
	public:
		void setValores(double a, double b)
		{
			ancho = a; 
			alto = b;
		}
};


class Rectangulo: public Poligono		// Rect�ngulo depende de Pol�gono (es una declaraci�n de herencia) Herencia p�blica
{
	public:
		double area() { return ancho * alto; }
};

class Triangulo: public Poligono
{
	public:
		double area() { return (ancho * alto) / 2; }
};

int main()
{
	Rectangulo miRectangulo;
	Triangulo miTriangulo;
	
	miRectangulo.setValores(3.5, 8.2);			// M�todo heredado de pol�gono 
	miTriangulo.setValores(3.5, 8.2);
	
	cout << "Rectangulo area = " << miRectangulo.area() << endl;
	cout << "Triangulo area = " << miTriangulo.area() << endl;
	
	return 0;
}
