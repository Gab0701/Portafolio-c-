//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: arrayArgumento

#include <iostream>
#include <iomanip>

using namespace std;

float promedio(const float arr[], const int n)
{
	float suma = 0.0;
	for(int i = 0; i < n; i++)
	suma += arr[i];
	return suma / n;
}

int main(int argc, const char * argv[])
{

	
	//Promedio de 5 números
	const int N = 5;
	float numeros[N];
	
	for(int i = 0; i < N; i++)
	{
		cout << "Numero " << (i + 1) << " : ";
		cin >> numeros[i];
	}
	
	cout << "El promedio es " << fixed << setprecision(1);
	cout << promedio(numeros, N) << endl;
	
	return 0;
}
