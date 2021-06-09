//Clase del 08-02-2021
//Autor del programa: Gabriel Alexander Calderón Villeda
//Nombre del programa: Bucles

#include <iostream>
#include <string>

using namespace std;

void obtenerLong()
{
	string s = "Hola Mundo!";
	int longitud = s.length();
	for(int i = 0; i < longitud; i++)
	{
		char c = s.at(i);	
		cout << c << endl;
	}
	
}
void operarConX()
{
	int x = 1;
	int i = 1;
	while(i <= 4)
	{
		x = x + 2*i;
		i++;
	}
	cout << x << endl;
}

void imprimirAlfabeto()
{
	char letra = 'A';
	int numLetra = letra;
	while (letra <= 'Z')
	{
		cout << letra << " " << numLetra << " ";
		letra ++;
		numLetra = letra;
	}
	cout << endl;
}

int factorial(int n)
	{
		
		int factorial = 1;
		int numFact = n;
		int i = 1;
		while (i <= numFact)
		{
			factorial *= i;
			i++;
		}
		return factorial;
	}
	
void DoWhile()
{
	int i = 0;
	do {
		cout << i << endl;
		i++;
	}
	while (i < 5);
}

void IngresarNumero()
{
	int num = 0;
	do 
	{
		cout << "Ingresa un numero entre 0 y 10" << endl;
		cin >> num; 
	}
	while ((num > 10) || (num < 0));
}

void AbecedarioFOR ()
{
	for (int i = 0; i < 10; i++)
	{
		for(char c = 'a'; c < 'z'; c++)
		{
			cout << c;
		}
		cout << endl; 
	}
}

//Tarea
/*void Divisores()
{
	for(i = 1; i <= 1000; i++)
	{
		
	}
}*/

void BreakContinue()
{
	int a = 5;
	for(int i = 1; i <= 10; i++)
	{
		cout << "a : " << a << endl;
		cout << "i : " << i << endl;
		if(i % 2 == 0)
		continue;
		a = a + i;
		if(a > 20)
		break; 
		cout << "a + i : " << a << endl;
	}
}
int main()
{
	/*int Contador = 1;				// inicicalización 
	while (Contador < 6)			//Condición
	{
		cout << Contador << " : Hola" << endl;
		Contador ++;				//Modificación
	}*/
	
	/*int Contador = 1;
	while (Contador != 10)
	{
		cout << Contador << endl;
		Contador += 2;
	}*/
	
	/*int Contador = 1;
	while (Contador != 10)
	{
		cout << Contador << endl;
		Contador += 2;
	} */
	
	/*int HolaMundo = 1;
	while(HolaMundo <= 10)
	{
		cout << "Hola Mundo" << endl;
		HolaMundo ++;
	}*/
	
	//imprimirAlfabeto();
	
	//operarConX();
	
	/*int n;
	cout << "Calcula el factorial de un numero, introduce un entero: " << endl;
	cin >> n;
	cout << factorial(n);*/
	
	//DoWhile();
	
	//IngresarNumero();
	//AbecedarioFOR();
	
	//BreakContinue();
	
	obtenerLong();
	
	//Con los bucles anidados hay que tener cuidados, cuando usamos 3 for anidado, se convierte en una complejidad cuadrática 
	
	return 0;
}
