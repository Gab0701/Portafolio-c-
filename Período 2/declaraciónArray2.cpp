//Autor del programa: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: declaraciónArray2

#include <iostream>
#include <iomanip>

using namespace std;


//ARGument Count y ARGument Vector
int main(int argc, const char * argv[])
{
	using namespace std; 
	
	int numeros[10] = {23, 7, 9, 52, 41, -4, 35, 16, 0, 18};

	//Imprimir valores del arreglo
	cout << "Indice\tValor\n------\t-----\n";
	for(int i = 0; i < 10; i++)
	{
		cout << setw(6) << right << i << "\t";
		cout << setw(5) << right << numeros[i] << endl;
	}
	
	
	return 0;
}
