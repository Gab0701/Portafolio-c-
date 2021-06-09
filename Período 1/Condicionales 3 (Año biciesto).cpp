//Autor: Gabriel ALexander Calderón Villeda
//Clase del 15-02-2021
//Nombre del programa: Año biciesto

#include <iostream>

using namespace std;

//Calcular si un año dado es biciesto o no

int main(){
	int year;
	cout << "Please give a year: ";
	cin >> year; 

	if ((year % 4) == 0)
		{
			if(year % 100 == 0)
			{
				if(year % 400 == 0)
				
					cout << year << " It's a leap year! (Anio biciesto)." << endl;
				else 
					cout << year << " It's not a leap year! (No es anio biciesto)." << endl;		
			}
			else{
			
			cout << year << " It's a leap year! (Anio biciesto)." << endl;
			}
		}
			else
			{
					cout << year << " It's not a leap year! (No es anio biciesto)." << endl;
			}
			
	return 0;
}
