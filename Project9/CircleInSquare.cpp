#include "CircleInSquare.h"

CircleInSquare::CircleInSquare()
{
	x = 0;
	y = 0;
	side = 0;
	R = 0;
}

CircleInSquare::CircleInSquare(double x, double y, double side, double R):Square(side), Circle(R)
{
	this->x = x;
	this->y = y;
}

istream & operator >> (istream & is, CircleInSquare & obj)
{
	is >>obj.x >> obj.y >> obj.side >> obj.R;
	return is;
}

ostream & operator<<(ostream & os, CircleInSquare obj)
{
	os << obj.x << "\t" << obj.y << "\t" << obj.side << "\t" << obj.R << endl;
	return os;
}
