#ifndef _STUDENT_H_
#define _STUDENT_H_
#include "Library.h"
#include"Human.h"

class Student:public Human {
private:
	string group;
	string subject;
	int course;

public:
	Student() = default;
	Student(string name, string sname, int age, string address, string group, string subject):Human(name,sname,age,address)// можем передавать или нет все параметры
	{
		this->group = group;
		this->subject = subject;
		this->course = course;
	};
	friend istream& operator >> (istream& is, Student& obj);
	friend ostream& operator<<(ostream& os, Student obj);
};


#endif;
