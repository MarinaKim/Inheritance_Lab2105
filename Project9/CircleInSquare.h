#pragma once
#include "Library.h"
#include"Circle.h"
#include"Square.h"

class CircleInSquare:public Circle, public Square{
private:
	double x, y;
public:
	CircleInSquare();
	CircleInSquare(double, double, double, double);

	friend istream& operator >> (istream& is, CircleInSquare& obj);
	friend ostream& operator<<(ostream& os, CircleInSquare obj);
};