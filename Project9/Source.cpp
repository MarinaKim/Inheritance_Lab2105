#include"Human.h"
#include "Students.h"
#include"CircleInSquare.h"


int main() {
	int n;
	cout << "enter task num:";
	cin >>n;
	switch (n) {
	case 1: {
		Human h;
	
		ifstream in_file("in.txt");
		if (!in_file) {
			cerr<< "File open error" << endl;
		}
		else {
			while (!in_file.eof()) {
				in_file >> h;
				cout << h;
			}
		}
		in_file.close();
	}break;

	case 2: {
		Student s;
		ifstream in_file("int_stud.txt");
		
		if (!in_file) {
			cerr << "File open error" << endl;
		}
		else {
			while (!in_file.eof()) {
				in_file >> s;
				cout << s;
			}
		}
		in_file.close();
	}break;

		case 3:{
			CircleInSquare sq;
			ifstream in_file("SQ.txt");

			if (!in_file) {
				cerr << "File open error" << endl;
			}
			else {
				while (!in_file.eof()) {
					in_file >> sq;
					cout << sq;
				}
			}
			in_file.close();
	
		}break;
	}

	system("pause");
	return 0;
}