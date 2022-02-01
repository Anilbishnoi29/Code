// Q14. Create a student class to read and display data of five students, which
// has roll number and name of student as data member and read and display as
// member functions.

#include <iostream>
using namespace std;

class Student {
private:
    string studentName;
    int studentRollNo;

public:
 //    setter method
    void setStudentData( string name, int roll ) {
        this->studentName = name;
        this->studentRollNo = roll;
    };

    // getter method
    void setStudentData() {
        cout << this->studentRollNo << " : " << this->studentName << endl;
    };
};

int main() {
    // variables
    int numberOfStudent;
    int studentRoll;
    string studentName;

    // Number of student
    cout << "How many student : " << endl;
    cin >> numberOfStudent;

    Student objStudentArr[ numberOfStudent ];  // arr for storing student objects

    // set Data
    for (int i = 0; i < numberOfStudent; i++) {
        cout << "Enter the " << i + 1 << " student Rollnumber" << endl;
        cin >> studentRoll;
        cout << "Enter the " << i + 1 << " student Name" << endl;
        getline( cin >> ws, studentName );
        objStudentArr[ i ].setStudentData( studentName, studentRoll );
    };

    // Get Data
    cout << "Student Data : " << endl;
    for (int i = 0; i < numberOfStudent; i++) {
        objStudentArr[ i ].setStudentData();
    };
    return 0;
}