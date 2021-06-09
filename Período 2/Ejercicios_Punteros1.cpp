#include <iostream>

using namespace std;

//Agregamos (void*) para evitar la conversion de la dir a char

int main()
{
	char c = 'T', d = 'S';
	
	cout << "c = " << c << " &c = " << (void*)c << endl;
	cout << "d = " << d << " &d = " << (void*)d << endl;
	
	char *p1 = &c;
	char *p2 = &d;
	
	cout << "p1 = " << (void*)p1 << " &p1 = " << &p1 << " *p1 = " << *p1 << endl;
	cout << "p2 = " << (void*)p2 << " &p2 = " << &p2 << " *p2 = " << *p2 << endl;
	
	char *p3;
	
	/*int e = (int)c;
	int f = (int)d;*/
	
	cout << (void*)&c << endl;
	cout << (void*)&d << endl;
	
	p3 = &d;
	
	cout << "*p3 = " << *p3 << endl;		// (1)
	//cout << "*p1 = " << *p1 << endl;
	//cout << "*p2 = " << *p2 << endl;
	//cout << "&c = " << &e << endl;
	//cout << "&d = " << &e << endl;
	//cout << e << endl;
	//cout << f << endl;
	
	cout << endl;
	
	p3 = p1;
	cout << "*p3 = " << *p3 			// (2)
	<< ", p3 = " << (void*)p3 << endl;	// (3)
	
	*p1 = *p2;
	cout << "*p1 = " << *p1				// (4) 
	<< ", p1 = " << (void*)p1 << endl;	// (5)
	
	cout << c << endl;
	cout << d << endl;
	
	
	return 0;
}
