#include <iostream>

using namespace std;

int main(){

	char bloques[3] = {'A', 'B', 'C'};
	char *ptr = &bloques[0];
	char temp;
	
	temp = bloques[0];
	cout << "1- temp = bloques[0] = " << temp << endl;
	temp = *(bloques + 2);
	cout << "2- temp = *(bloques + 2) = " << temp << endl;
	temp = *(ptr + 1);
	cout << "3- temp = *(ptr + 1) = " << temp << endl;
	temp = *ptr;
	cout << "4- temp = *ptr = " << temp << endl;
	
	cout << endl;
	
	ptr = bloques + 1;
	cout << "1- ptr = bloques + 1 = " << ptr << endl;
	cout << "1- ptr = bloques + 1 = " << *ptr << endl;
	cout << "1- ptr = bloques + 1 = " << &ptr << endl;
	temp = *ptr;
	cout << "2- temp = *ptr = " << temp << endl;
	temp = *(ptr + 1);
	cout << "3- temp = *(ptr + 1) = " << temp << endl;
	
	cout << endl;
	
	ptr = bloques;
	cout << "1- ptr = bloques = " << ptr << endl;
	cout << "1- ptr = bloques = " << *ptr << endl;
	cout << "1- ptr = bloques = " << &ptr << endl;
	temp = *++ptr;
	cout << "2- temp = *++ptr = " << temp << endl;
	temp = ++*ptr; 
	cout << "3- temp = ++*ptr = " << temp << endl;
	temp = *ptr++;
	cout << "4- temp = *ptr++ = " << temp << endl;
	temp = *ptr;
	cout << "5- temp = *ptr = " << temp << endl;
	
	
	return 0;
}
