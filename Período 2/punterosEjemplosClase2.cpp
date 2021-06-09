#include <iostream>

using namespace std;

int main()
{
	int a = 5, b = 10;
	int *p1, *p2;			//Dos punteros de tipo int
	p1 = &a;				//Apunta a la dirección de la variable a
	p2 = &b;				//Apunta a la dirección (&) de la variable b
	cout << "&a = " << &a << endl;
	cout << "&b = " << &b << endl;
	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;
	*p1 = 10;
	p1 = p2;
	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;
	*p1 = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	return 0;
}
