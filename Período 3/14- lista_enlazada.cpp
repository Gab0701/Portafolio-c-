//Autor: Gabriel Alexander Calder?n Villeda - CV100720
//Nombre del programa: lista enlazada

#include <iostream>
#include "lista_enteros.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	ListaEnteros miLista;
	
	cout << miLista.comoCadena() << endl;
	cout << (miLista.estaVacia() ? "true" : "false") << endl;
	miLista.adjuntar(41);
	miLista.adjuntar(52);
	miLista.adjuntar(63);
	
	cout << miLista.comoCadena() << endl;
	
	miLista.insertar(2, 74);
	cout << miLista.comoCadena() << endl;
	
	miLista.insertar(0, 30);
	cout << miLista.comoCadena() << endl;
	
	cout << (miLista.estaVacia() ? "true" : "false") << endl;
	cout << "Tamanio de la lista: " << miLista.tamanio() << endl;
	
	cout << miLista.obtener(4) << endl;
	
	cout << miLista.remover(3) << endl;
	cout << miLista.comoCadena() << endl;
	
	miLista.adjuntar(85);
	cout << miLista.comoCadena() << endl;
	
	
	return 0;
}
