#include <iostream>

using namespace std;

int main()
{
	int *p;
	int i;
	int k;
	i = 42;
	k = i;
	p = &i;
	
	cout << "i = " << i << " &i = " << (void*)&i << endl;
	cout << "k = " << k << " &k = " << (void*)&k << endl;
	cout << "p = " << p << " &p = " << (void*)&p << " *p = " << *p << endl;
	
	cout << endl;
	
	cout << i << endl;
	*p = 75;
	cout << i << endl;
	
	char c = 'A';		//El puntero debe ser del mismo tipo que la variable a apuntar
	double *pe = &c;
	
	return 0;
}
