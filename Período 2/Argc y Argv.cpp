//Autor: Gabriel Alexander Calderón Villeda - CV100720
//Nombre del programa: Uso de argc y argv

#include <iostream>

int main(int argc, char** argv)
{
	std::cout << "Tengo " << argc << " argumentos: " << std::endl;
	
	for(int i = 0; i < argc; i++)
	{
		std::cout << argv[i] << std::endl;
	}	
	
	return 0;
}
