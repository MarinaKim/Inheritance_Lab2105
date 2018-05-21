#ifndef _HUMAN_
#define _HUMAN_
#include"Library.h"
class Human {
protected:
	string name;
	string sname;
	int age;
	string address;

public:
	Human() = default;
	Human(string, string, int, string);
	friend istream&operator >> (istream& is, Human &obj);
	friend ostream&operator << (ostream& os, Human obj);
};
#endif