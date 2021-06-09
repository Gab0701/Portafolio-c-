//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: pila.h

#ifndef pila_h
#define pila_h
#include "lista_generica.hpp"

template<typename TIPODATO>
class Pila : private Lista<TIPODATO>{
	public:
		Pila();
		void push(TIPODATO item);
		TIPODATO pop();
		bool estaPilaVacia();
		string comoCadenaPila();
};

template<typename TIPODATO>
Pila<TIPODATO>::Pila()
{
	Lista<TIPODATO> Lista;
}

template<typename TIPODATO>
void Pila<TIPODATO>::push(TIPODATO item)
{
	this->adjuntar(item);
}

template<typename TIPODATO>
TIPODATO Pila<TIPODATO>::pop()
{
	return this->remover(this->tamanio() - 1);
}

template<typename TIPODATO>
bool Pila<TIPODATO>::estaPilaVacia()
{
	return this->estaVacia();
}

template<typename TIPODATO>
string Pila<TIPODATO>::comoCadenaPila()
{
	return this->comoCadena();
}


#endif
