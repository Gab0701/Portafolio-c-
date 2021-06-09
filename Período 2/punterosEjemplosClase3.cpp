#include <iostream>

using namespace std;

int main()
{
	int c[5] = {16,25,67,34,91};
	int *p3;
	int *p4;
	p4 = c;
	
	p3 = &c[0];	//obtiene la dirección de este elemento
	cout << "*p3 = " << *p3 << endl;
	//p3 += 4;		//apunta al siguiente elemento
	//cout << "*p3 = " << *p3 << endl;
	
	int sam;
	sam = *(p3 + 3);
	cout << "*p3 = " << *p3 << endl;
	cout << "sam = " << sam << endl;
	
	cout << "p4 = " << p4 << endl;
	cout << "c = " << c << endl;
	
	return 0;
}
