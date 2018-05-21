#include "Students.h"

istream & operator >> (istream & is, Student & obj)
{
	string s;
	getline(is, obj.name, '/');
	getline(is, obj.sname, '/');
	is >> obj.age;
	getline(is, s, ' ');
	getline(is, obj.address, '/');
	getline(is, obj.group, '/');
	getline(is, obj.subject);
	return is;
}

ostream & operator<<(ostream & os, Student obj)
{
	os << obj.name << "\t" << obj.sname << "\t" << obj.age << "\t" << obj.address << "\t" << obj.group << "\t" << obj.subject << endl;
	return os;
}
