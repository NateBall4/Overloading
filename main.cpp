#include "Vector.h"
#include <conio.h>
#include <iostream>

int main() {
	Vector myFirstVector(4, 5);
	Vector mySecondVector; 
	mySecondVector = myFirstVector;

	cout << myFirstVector << endl;

	_getch();
	return 0;
}
