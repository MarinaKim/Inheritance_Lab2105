#pragma once
#include"Library.h"

class Circle {
private:
	double x;
	double y;
protected:
	double R;	
public:
	Circle() = default;
	Circle(double R) {this->R = R;}
	Circle(double R, double x, double y) {
		this->R = R;
		this->x = x;
		this->y = y;
	};
};