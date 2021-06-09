//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: vector

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char * argv[])
{
	vector<int> v;
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);
	v.push_back(7);
	v.push_back(6);
	v.push_back(5);
	
	cout << v.size() << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	
	for(int i = 0; i < v.size(); i++)
	{
		cout << "Elemento [" << i << "] = " << v[i] << endl;
	}
	
	return 0;
}
