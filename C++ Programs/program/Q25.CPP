#include<iostream>
using namespace std;
class Student {
private:
    int rollNumber;
    char name [ 20 ];
public:
    virtual void read() {
        cout << "Enter Name and Rollno" << endl;
        cin >> name;
        cin >> rollNumber;
    };
    virtual void show() {
        cout << "Name : " << name << "RollNo. : " << rollNumber << endl;
    };
};
class InternalExam : public Student {
protected:
    int I_sub1, I_sub2;
public:
    void read() {
        cout << "Enter internal marks of sub1 and sub2 : " << endl;
        cin >> I_sub1 >> I_sub2;
    };
    void show() {
        cout << "Internal marks of sub1 : " << I_sub1 << " and sub2 : " << I_sub2 << endl;
    };
};
class ExternalExam : public Student {
protected:
    int E_sub1, E_sub2;
public:
    void read() {
        cout << "Enter External marks of sub1 and sub2 : " << endl;
        cin >> E_sub1 >> E_sub2;
    };
    void show() {
        cout << "External marks of sub1 : " << E_sub1 << " and sub2 : " << E_sub2 << endl;
    };
};
class Result : public InternalExam, public ExternalExam {
private:
    int totalMarks;
public:
    void total() {
        totalMarks = I_sub1 + I_sub2 + E_sub1 + E_sub2;
        cout << "Total marks : " << totalMarks << endl;
    };
    void show() {
        InternalExam::show();
        ExternalExam::show();
        total();
    };
};
int main() {
    Result R;
    R.InternalExam::read();
    R.ExternalExam::read();
    R.show();
    return 0;
}