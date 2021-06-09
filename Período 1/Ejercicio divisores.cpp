//Autor: Gabriel Alexander Calderón Villeda
//Nombre del programa: Ejercicio de divisores

//Nota: no pude realizar la operación de mostrar el número con mayor divisores :(

#include <iostream>

using namespace std;

int divisor(int num)
{
	int residuo;
	int resultado;
	for(int i = 1; i <= num; i++)
	{
		residuo = num % i;
		if(residuo == 0)
		{
			resultado = 1;
		}
		else if(residuo != 0)
		{
			resultado = 0;
		}
	}
	return resultado;
}

void imprimir(int num)
{
	cout << "\nLos divisores de " << num << " son: " << endl;
	for(int i = 1; i <= num; i++)
	{
		if(num % i == 0)
		{
			cout << i << "\t";
		}
	}
}

int main()
{
	int procedimiento;
	for(int i = 1; i <= 1000; i++)
	{
		procedimiento = divisor(i);
		if(procedimiento == 1)
		{
			imprimir(i);
		}
	}
	return 0;
}
