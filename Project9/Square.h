#pragma once
#include"Library.h"
class Square {
private:
	double x, y;
protected:
	double side;
public:
	Square()= default;
	Square(double side) {this->side = side;}
	Square(double side, double x, double y) {
		this->side = side;
		this->x = x;
		this->y = y;
	}
};