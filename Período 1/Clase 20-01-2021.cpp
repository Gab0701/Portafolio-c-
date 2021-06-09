//Mi primer programa
//Explicación de mi primer programa
//Autor: Gabriel Alexander Calderón Villeda
//Clase 20-01-2021

#include <iostream>
using namespace std;

int main()
	{
	int NumeroCualquiera;
	int ValorNumero = 2;
	
	//STanDar Character OUpuT
	// "<<" indica que se inserte en la salida estándar
	// \n = significa salto de línea
	// std::endl = se puede utilizar en lugar de \n y significa "en línea"
	
	cout << "Hola Mundo \n";
	cout << "Estoy usando C++ \n";
	cout << "Nah, de locos esto eh\n";
	cout << "_____________________________" << endl;
	cout << "Por favor ingrese un numero\n";
	cin >> NumeroCualquiera;
	cin.ignore();
	int Suma = NumeroCualquiera + ValorNumero;
	cout << "El numero seleccionado es: " << NumeroCualquiera << " Var suma: " << Suma << endl;
	cout << "Numero selecionado por dos: " << NumeroCualquiera * ValorNumero << " Var suma: " << Suma << endl;
	
	ValorNumero = 3;
	Suma = NumeroCualquiera + ValorNumero;
	cout << "Numero seleccionado entre 3: " << NumeroCualquiera / ValorNumero << " Var suma es: " << Suma << endl;
	cout << "Numero selccionado mas 3: " << NumeroCualquiera + ValorNumero << " Var suma es: " << Suma << endl;
	
	
	return 0;
	
}

