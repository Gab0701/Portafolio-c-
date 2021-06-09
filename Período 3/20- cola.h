//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: cola.h

#ifndef cola_h
#define cola_h
#include "lista_generica.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

template<typename TIPODATO>
class Cola : private Lista<TIPODATO>
{
	public:
		Cola();
		enqueue(TIPODATO item);
		TIPODATO dequeue();
		bool estaColaVacia();
		string comoCadenaCola();
}; 
 
template<typename TIPODATO> 
Cola<TIPODATO>::Cola(){
	Lista<TIPODATO> Lista; 
}

template<typename TIPODATO>
Cola<TIPODATO>::enqueue(TIPODATO item)
{
	this->adjuntar(item);
}

template<typename TIPODATO>
TIPODATO Cola<TIPODATO>::dequeue()
{
	return this->remover(0);
}

template<typename TIPODATO>
bool Cola<TIPODATO>::estaColaVacia()
{
	return this->estaVacia();
}


template<typename TIPODATO>
string Cola<TIPODATO>::comoCadenaCola()
{
	return this->comoCadena();
}


#endif 
