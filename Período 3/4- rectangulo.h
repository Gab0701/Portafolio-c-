//Autor: Gabriel Alexander Calder�n Villeda - CV100720
//Nombre del programa: rectangulo.h

#ifndef RECTANGULO
#define RECTANGULO

// Una clase es una representaci�n de un objeto del mundo real
// Est� formada por atributos (propiedades | variables) y m�todos (acciones | funciones | procedimientos)

//Especificaci�n de la clase
class Rectangulo
{
	private:				//Atributos que solo pueden ser usados dentro de la clase
		double base;
		double altura;
	public:					//M�todos que se pueden usar desde fuera de la clase 
		Rectangulo(double b, double h);		// Constructor, tiene el mismo nombre que la clase
		double calcularArea();				// Prototipos de funciones | m�todos
		double calcularPerimetro();
		double getBase();
		double getAltura();		
};

//Implementaci�n de los m�todos
Rectangulo::Rectangulo(double b, double h)
{
	this->base = b;		// Asigno el valor que recibo como par�metro "b" a al "base" del objeto
	this->altura = h;	// Asigno el valor que recibo como par�metro "h" a la "altura" del objeto
}

// Calcular �rea de un rect�ngulo
double Rectangulo::calcularArea()
{
	return this->base * this->altura;
}

// Calcular el per�metro de un rect�ngulo
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
