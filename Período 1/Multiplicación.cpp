//Autor: Gabriel Alexander Calderón Villeda
//Clase del 15-02-2021 
//Nombre del programa: Multiplicación

#include <iostream>

using namespace std;

//Procedimiento / Funcion de tipo void (no retorna un valor) y toma un parámetro
void multiplicacion(int num)
{
	for(int i = 1; i <= 10; i++)
	{
		cout << num << " * " << i << " = " << num * i << endl;
	}
}

//Porcedimiento / Funcion de tipo void (no retorna un valor) y toma un parámetro

void multiplicacion(int num, int rango)
{
	for(int i = 1; i <= rango; i++)
	{
		cout << num << " * " << i << " = " << num * i << endl;
	}
}

int main()
{
	char opt = 'n';
	int num; 
	int rango; 
	
	cout << "Ingrese un numero positivo: ";
	cin >> num;
	
	cout << "Desea agregar un rango? (y/n): ";
	cin >> opt; 
	
	if(opt == 'y')
	{
		cout << "Ingrese un rango para sus tablas: ";
		cin >> rango;
		multiplicacion(num, rango);
	}
	else
	{
		multiplicacion(num);
	}
	
	
	
	return 0;
}
