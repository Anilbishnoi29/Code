// Write a C++ program to create a class called STUDENT with data members roll number, Nameand Age.Using inheritance, create the classes UGSTUDENTand PGSTUDENT having fields as Semester, Feesand Stipend.Enter display the data for at least 5 students.
#include<string.h>
#include<iostream>
using namespace std;
class Student {
protected:
    int rollno, age;
    char name [ 20 ];
};
class UGstudent :protected Student {
protected:
    int sem, fees, stipend;
public:
    void read() {
        cout << "Enter the roll number, name, age, semester, fees, stipend for UG student:  \n";
        cin >> rollno >> name >> age >> sem >> fees >> stipend;
    }
    void show() {
        cout << "Roll no.:- " << rollno << endl;
        cout << "Name:- " << name << endl;
        cout << "Age:- " << age << endl;
        cout << "semester:- " << sem << endl;
        cout << "fees:- " << fees << endl;
        cout << "stipend:- " << stipend << endl;
    }
};
class PGstudent :protected UGstudent {
public:
    void read() {
        cout << "Enter the roll number, name, age, semester, fees, stipend for PG student:  \n";
        cin >> rollno >> name >> age >> sem >> fees >> stipend;
    }
    void show() {
        cout << "Roll no.:- " << rollno << endl;
        cout << "Name:- " << name << endl;
        cout << "Age:- " << age << endl;
        cout << "semester:- " << sem << endl;
        cout << "fees:- " << fees << endl;
        cout << "stipend:- " << stipend << endl;
    }
};
int main() {
    UGstudent ug [ 3 ];
    PGstudent pg [ 2 ];
    for (int i = 0;i < 3;i++) {
        cout << "Enter the ug student " << i + 1 << endl;
        ug [ i ].read();
    };
    for (int i = 0;i < 2;i++) {
        cout << "Enter the pg student " << i + 1 << endl;
        pg [ i ].read();
    };
    for (int i = 0;i < 3;i++) {
        cout << "UG student " << i + 1 << endl;
        ug [ i ].show();
    };
    for (int i = 0;i < 2;i++) {
        cout << "PG student " << i + 1 << endl;
        ug [ i ].show();
    };
    return 0;
}