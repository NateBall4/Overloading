#include "Vector.h"
#include <conio.h>
#include <iostream>

int main() {
	Vector resultVector;
	Vector myFirstVector(4, 5);
	Vector mySecondVector; 
	mySecondVector = myFirstVector;

	resultVector = myFirstVector + mySecondVector; 

	cout << resultVector << endl;

	resultVector = myFirstVector - mySecondVector;

	cout << resultVector << endl;

	cout << myFirstVector << endl;


	_getch();
	return 0;
}
