//Autor: Gabriel Alexander Calderón Villeda
//Clase del 15-02-2021
//Conversión de tipos de varaibles

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num_int = 15;
	double num_double;
	
	//Conversión implícita 
	cout << "Conversion implicita" << endl;
	num_double = num_int;
	cout << "num_int = " << num_int << endl;
	cout << "num_double = " << num_double << endl;
	
	num_double = 84.56;
	num_int = num_double;
	cout << "Conversion implicita de un double a un entero" << endl;
	cout << "num_double = " << num_double << endl;
	cout << "num_int = " << num_int << endl; 
	
	//Conversión explícita 
	cout << "Conversion explicita o Typecasting" << endl;
	num_double = 16.47;
	
	int num_int1 = (int)num_double; // Estilo C
	
	int num_int2 = int(num_double); // Estilo función
	
	cout << "num_double = " << num_double << endl;
	cout << "num_int1 = " << num_int1 << endl;
	cout << "num_int2 = " << num_int2 << endl;
	
	bool bool1 = (bool)num_double;
	bool bool2 = bool(num_double);
	bool bool3 = false;
	bool bool4 = bool(-5.3);
	
	cout << "bool1 = " << bool1 << endl;
	cout << "bool2 = " << bool2 << endl;
	cout << "bool3 = " << bool3 << endl;
 	cout << "bool4 = " << bool4 << endl;
	
	
	
	
	
	
	
	return 0;
}
