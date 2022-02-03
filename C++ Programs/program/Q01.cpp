// Q1. Write a C++ program to calculate average marks scored by a student for 3 subjects.

#include <iostream>
using namespace std;

class AverageMarks {
private:
	double a, b, c;

public:
	AverageMarks( double a, double b, double c ) {
		this->a = a;
		this->b = b;
		this->c = c;
	};
	double avgMarks() {
		double total = a + b + c;
		return total / 3;
	};
};

int main() {
	// get marks
	double marks1, marks2, marks3;
	cout << "Enter marks of Ist subject : ";
	cin >> marks1;
	cout << "Enter marks of IIst subject : ";
	cin >> marks2;
	cout << "Enter marks of IIIst subject : ";
	cin >> marks3;

	// Obj of AverageMarks
	AverageMarks MyAvgMarks( marks1, marks2, marks3 );

	cout << "Average marks : " << MyAvgMarks.avgMarks() << endl;
	return 0;
}
