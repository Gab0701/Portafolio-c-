//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Programa: Arbol Binario
//Manero de 2 de mostrar el arbol (mediante función)

#include <iostream>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;	
};

// Prototipos
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);

Nodo *arbol = NULL;


int main()
{
	menu();
	
	return 0;
}

void menu()
{
	int dato, opcion, contador=0;
	do
	{
		cout << "\t.:MENU:." << endl;
		cout << "1. Insertar un nuevo nodo" << endl;
		cout << "2. Mostrar el arbol completo" << endl;
		cout << "3. Buscar un elemento en el arbol" << endl;
		cout << "4. Salir" << endl;
		cout << "Opcion: ";
		cin >> opcion;
		
		switch(opcion)
		{
			case 1:
				cout << "Digite un nuevo numero: ";
				cin >> dato;
				insertarNodo(arbol, dato);
				cout << "\n";
				break;
			case 2: 
				cout << "\nMostrando el arbol completo:\n\n" << endl;
				mostrarArbol(arbol, contador);
				cout << endl;
				break;
			case 3:
				cout << "\nDigite el elemento a buscar: ";
				cin >> dato;
				if(busqueda(arbol, dato) == true)
				{
					cout << "\nEl elemento " << dato << " ha sido encontrado en el arbol\n";
				}
				else {
					cout << "\nElemento no encontrado\n";
				}
				cout << endl;
				break;
		}
	}while(opcion != 4);
}


Nodo *crearNodo(int n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	
	return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n)
{
	if(arbol == NULL)
	{
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}	
	else 
	{
		int valorRaiz = arbol->dato;
		if(n < valorRaiz)
		{
			insertarNodo(arbol->izq, n);
		}
		else
		{
			insertarNodo(arbol->der, n);
		}
	}
}

// Función mostrar arbol
void mostrarArbol(Nodo *arbol, int contador)
{
	if(arbol==NULL)
	{
		return;
	} else {
		mostrarArbol(arbol->der, contador+1);
		for(int i=0; i < contador; i++)
		{
		cout<<"   ";
		}
		cout<<"  "<< arbol->dato << endl;
		mostrarArbol(arbol->izq, contador+1);
	}
}

// Función para buscar un elemento en el árbol

bool busqueda(Nodo *arbol, int n)
{
	if(arbol == NULL)
	{
		return false;
	} else if(arbol->dato == n)
	{
		return true;
	} else if(n < arbol->dato)
	{
		return busqueda(arbol->izq, n);
	} else 
	{
		return busqueda(arbol->der, n);
	}	
}

