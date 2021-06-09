//Clase 01-02-2021 
//Nombre del programa: Piedra, papel, tijeras
//Autor: Gabriel Alexander Calderón Villeda

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int numJug;
	cout << "Jueguemos a Piedra, Papel o Tijera" << endl;
	cout << "Selecciona tu movimiento" << endl;
	cout << "1.Piedra \n2.Papel \n3.Tijera \n" << endl; 
	cin >> numJug;
	
	srand(time(0));
	string movComp;
	int numMov = rand() % 3 + 1;
	
	switch(numMov)
	{
		case 1:
	 		movComp = "Piedra";
	 		break;
	 	case 2:
	 		movComp = "Papel";
	 		break;
	 	case 3: 
	 		movComp = "Tijera";
	 		break;
	}
	
	cout << "La computadora escogio: " << movComp << endl;
	
	if(numJug == numMov)
	{
		cout << "Empate!" << endl;
	} else if ((numJug == 1) && (numMov == 3))
	{
		cout << "Ganaste!" << endl;
	} else if ((numJug == 2) && (numMov == 1))
	{
		cout << "Ganaste!" << endl;
	} else if ((numJug == 3) && (numMov == 2))
	{
		cout << "Ganaste!" << endl;
	} else {
		cout << "Perdiste" << endl;
	}
	
	
	return 0;
}
