//Autor: Gabriel Alexander Calderón Villeda
//Nombre del programa: Determinar si los caracteres de una cadena son dígitos 

#include <iostream> 
#include <string> 
#include <cctype>

using namespace std; 
 
int main()
{ 
 	  string cadena;
 	  
 	  
      cout <<  "Introduce una cadena de texto: "; 
      getline(cin, cadena);  
  	  
 	  char caracter;
 	  int i = 0;
	  while (i < cadena.length())
		{
			caracter = cadena.at(i);
			if(isdigit(caracter))
			{
			cout << caracter << endl;
			}
			i++;
		}
		
		cout << "\nQuieres saber que caracteres son vocales? (y/n): ";
		char respuesta;
		cin >> respuesta;
		if(respuesta == 'y')
		{
			int j = 0;
			while(j < cadena.length())
			{
				caracter = cadena.at(j);
				if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' || caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U')	
				{			
					cout << caracter << endl;
				}
				j++;
			}
		}
		else 
		{
			cout << "\nGracias por probrar el programa :)" << endl;
		}
 
      return 0;
 
} 
