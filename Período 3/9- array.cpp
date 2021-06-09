//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: array

#include <iostream>
#include <array>

using namespace std;

int main(int argc, char * argv[])
{
	array<int, 3> a = {8,9,10};
	
	cout << a.size() << endl;
	cout << a.front() << endl;
	cout << a.back() << endl;
	
	
	
	for(int i = 0; i < a.size(); i++)
	{
		cout << "Elemento [" << i << "] = " << a[i] << endl; 
	}
	
	return 0;
}
