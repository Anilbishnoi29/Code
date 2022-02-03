//Q6. Find the length of a string. Compare two strings, Concatenate two strings, Reverse a string, copy a string to another location.
#include<iostream>
#include<string>
using namespace std;

class MyString {
private:
    string a;
    string b;

public:
    MyString( string a, string b ) {
        this->a = a;
        this->b = b;
    }

    // length of a string
    void MyStringLength() {
        cout << "First string length : " << this->a.length() << endl;
        cout << "Second string length : " << this->b.length() << endl;
    }

    // Compare two strings
    int MyStringCompare() {
        return this->a.compare( this->b );
    }
    void MyStrComaper() {
        int CompareREsult = MyStringCompare();
        if (CompareREsult != 0) {
            cout << "Both string are not equal";
        }
        else {
            cout << "Both string are equal";
        }
    }

    // Concatenate two strings
    string MyStringConact() {
        return this->a + " " + this->b;
    }
// , Reverse a string
    void MyStringReverse( string s ) {
        if (s.length() == 0) {
            return;
        }
        string rev = s.substr( 1 );
        MyStringReverse( rev );
        cout << s[ 0 ];
    };
};

int main() {
    // string input
    string s1, s2;
    cout << "Enter first string : ";
    getline( cin, s1 );
    cout << "Enter Second string : ";
    getline( cin, s2 );

    // Obj of MyString class
    MyString MyStr( s1, s2 );
    while (true) {
        int userInput;
        cout << endl << "=======================" << endl;
        cout << "1 -> For length of strings" << endl;
        cout << "2 -> For compare strings" << endl;
        cout << "3 -> For Concatenate strings" << endl;
        cout << "4 -> For Reverse string" << endl;
        cin >> userInput;
        cout << endl << "=======================" << endl;
        switch (userInput) {
            case 1:
                MyStr.MyStringLength();
                break;
            case 2:
                MyStr.MyStrComaper();
                break;
            case 3:
                cout << MyStr.MyStringConact() << endl;
                break;
            case 4:
                int x;
                cout << "Reverse first string enter 1 or for second enter 2 " << endl;
                cin >> x;
                if (x == 1) {
                    MyStr.MyStringReverse( s1 );
                }
                else if (x == 2) {
                    MyStr.MyStringReverse( s2 );
                }
                else {
                    cout << "Invaild input..." << endl;
                }
                break;

            default:
                break;
        }
    }


    return 0;
}