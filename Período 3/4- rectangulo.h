//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: rectangulo.h

#ifndef RECTANGULO
#define RECTANGULO

// Una clase es una representación de un objeto del mundo real
// Está formada por atributos (propiedades | variables) y métodos (acciones | funciones | procedimientos)

//Especificación de la clase
class Rectangulo
{
	private:				//Atributos que solo pueden ser usados dentro de la clase
		double base;
		double altura;
	public:					//Métodos que se pueden usar desde fuera de la clase 
		Rectangulo(double b, double h);		// Constructor, tiene el mismo nombre que la clase
		double calcularArea();				// Prototipos de funciones | métodos
		double calcularPerimetro();
		double getBase();
		double getAltura();		
};

//Implementación de los métodos
Rectangulo::Rectangulo(double b, double h)
{
	this->base = b;		// Asigno el valor que recibo como parámetro "b" a al "base" del objeto
	this->altura = h;	// Asigno el valor que recibo como parámetro "h" a la "altura" del objeto
}

// Calcular área de un rectángulo
double Rectangulo::calcularArea()
{
	return this->base * this->altura;
}

// Calcular el perímetro de un rectángulo
double Rectangulo::calcularPerimetro()
{
	return 2 * (this->base * this->altura);
}

// Devolver la base
double Rectangulo::getBase()
{
	return this->base;
}

//Devolver la altura

double Rectangulo::getAltura()
{
	return this->altura;
}



#endif
