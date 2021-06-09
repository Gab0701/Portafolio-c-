//Autor: Gabriel Alexander Calderón Vileda - CV100720
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


class Rectangulo: public Poligono		// Rectángulo depende de Polígono (es una declaración de herencia) Herencia pública
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
	
	miRectangulo.setValores(3.5, 8.2);			// Método heredado de polígono 
	miTriangulo.setValores(3.5, 8.2);
	
	cout << "Rectangulo area = " << miRectangulo.area() << endl;
	cout << "Triangulo area = " << miTriangulo.area() << endl;
	
	return 0;
}
