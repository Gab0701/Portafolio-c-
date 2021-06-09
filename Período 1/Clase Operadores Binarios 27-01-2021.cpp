//Clase del 27-01-2021
//Autor: Gabriel Alexander Calderón Villeda
//Nombre del programa: Uso de operadores binarios

#include <iostream>
#include <bitset>
using namespace std;

int main()
{	
	int x;
	int y;
	
	cout << "Operadores binarios" << endl;
	cout << "Como se ven tus numero en binario?" << endl;
	cout << "Introduce el primer numero" << endl;
	cin >> x;
	cout << "Introduce el segundo numero" << endl;
	cin >> y;
	
	cout << "\tDecimal" << "\t :\t Binario" << endl;
	cout << "\t" << x << " \t :\t" << bitset<8>(x) << endl;
	cout << "\t" << y << " \t :\t" << bitset<8>(y) << endl;
	
	// AND binario x & y es igual a decir x = x & y
	int z = x & y;
	cout << "x & y \t" << z << " \t :\t" << bitset<8>(z) << endl;
	
	// OR binario x |= y es igual a decir x = x | y
	z = x | y;
	cout << "x | y \t" << z << " \t :\t" << bitset<8>(z) << endl;
	
	//XOR binario x ^= y es igual a decir x = x ^ y
	z = x ^ y;
	cout << "x ^ y \t" << z << " \t :\t" << bitset<8>(z) << endl;
		
	// desplazamiento binario x <<= y seria igual a decir x = x >>y
	z = x << y;
	cout << "x << y \t" << z << " \t : \t" << bitset<8>(z) << endl;
	
	// desplazamiento binario x >>= y seria igual a decir x = x >> y
	z = x >> y;
	cout << "x >> y \t" << z << " \t : \t" << bitset<8>(z) << endl;


	return 0;
}
