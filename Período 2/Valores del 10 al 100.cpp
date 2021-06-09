//Autor del programa: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: declaraciónArray
#include <iostream>
#include <iomanip>

using namespace std;

/*int main(int num_args, char** arg_string)
{
	
}*/

//ARGument Count y ARGument Vector
int main(int argc, const char * argv[])
{
	using namespace std; 
	
	//Declarar arreglo de 10 números 
	int numeros[10];
	
	//Llenar arreglo con valores del 10 al 100
	for(int i = 0; i < 10; i++)
	{
		numeros[i] = 10 * (i + 1);
	}	
	
	//Recordatorio: Se puede usar sin corchetes ya que solo tiene una línea
	
	//Imprimir valores del arreglo
	cout << "Indice\tValor\n------\t-----\n";
	for(int i = 0; i < 10; i++)
	{
		cout << setw(6) << i << "\t" << setw(5) << numeros[i] << endl;
	}
	
	
	return 0;
}
