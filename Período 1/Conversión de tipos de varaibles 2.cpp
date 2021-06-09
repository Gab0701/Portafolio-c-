//Autor: Gabriel Alexander Calderón Villeda
//Conversión de tipos de varaibles 2
//Nombre del programa: Conversión de tipos de variables 2

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "123";
	int num = stoi(str);		//String to Integer
	cout << num + 321 << endl;

	num = 456;
	str = to_string(num);		//Tipo de dato o string
	cout << str << endl;

	str = "546328.324";
	float num_float = stof(str);		//String to Float
	cout << num_float << endl;
	
	double num_double = stod(str);		//String a double
	cout << num_double << endl;

	num_float = 79856.665F;
	num_double = 53489.477F;
	
	string str1 = to_string(num_float);
	string str2 = to_string(num_double);
	
	cout << "Float to String = " << str1 << endl;
	cout << " Double to String = " << str2 << endl;

	return 0;
}
