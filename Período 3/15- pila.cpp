//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: pila

#include <iostream>
#include <stack>

using namespace std;

void imprimir(stack <double> mystack)
{
	stack <double> segundaPila = mystack;
	cout << "_TOP_" << endl;
	while(!segundaPila.empty()){
		cout << "|" << segundaPila.top() << "|" << endl;
		segundaPila.pop();
	}
	cout << "_BOT_" << endl << endl;
}


int main()
{
	// Haciendo uso de la estructura stack == pila
	// Last In First Out - LIFO
	
	char continuar = 's';
	stack <double> mystack;
	double valor;
	
	mystack.push(17);
	imprimir(mystack);
	mystack.push(25);
	imprimir(mystack);
	mystack.push(78);
	imprimir(mystack);
	mystack.push(15.4);
	imprimir(mystack);
	mystack.push(98.5);
	imprimir(mystack);
	mystack.push(85);
	imprimir(mystack);
	mystack.push(1.3);
	imprimir(mystack);
	mystack.push(24);
	imprimir(mystack);
	mystack.push(3.25);
	imprimir(mystack);
	
	cout << "Tamanio de la pila: ";
	cout << mystack.size();
	cout << endl;
	
	cout << " *** Inicia proceso de extraccion: *** " << endl;
	
	while(!mystack.empty())
	{
		imprimir(mystack);
		mystack.pop();	
	}
	
	return 0;
}
