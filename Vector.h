#ifndef __VECTOR__ 
#define __VECTOR__ 

#include <iostream> 
#include <math.h> 

using namespace std;

// CLASS SPECIFICATION 
class Vector {
private:
	// DATA MEMBERS 
	double _v_x;
	double _v_y;
	double _magnitude;

	// HELPER METHODS 
	void CalculateMagnitude();

public:
	// CONSTRUCTOR(S) 
	Vector();
	Vector(double _v_x, double _v_y);

	// SETTERS
	void SetVX(double _v_x);
	void SetVY(double _v_y);

	// GETTERS 
	double GetVX();
	double GetVY();
	double GetMagnitude();

	// OPERATIONS 
	Vector operator+(Vector addMe);
	Vector operator-(Vector subtractMe);

	// overloading the stream output and input operators is a little different
	friend ostream& operator<<(ostream& outputStream, Vector& theVector) {
		outputStream << "<" << theVector._v_x << ", " << theVector._v_y << ">";
		return outputStream;
	}

	// DISPLAY METHODS 
	void Display();
};
#endif

