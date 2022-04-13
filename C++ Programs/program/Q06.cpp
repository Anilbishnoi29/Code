//Q6. Find the length of a string. Compare two strings, Concatenate two strings, Reverse a string, copy a string to another location.
#include<iostream>
#include<string>
using namespace std;
class MyString {
private:
    string a, b;
public:
    MyString( string a, string b ) {
        this->a = a;
        this->b = b;
    }
    void MyStringLength() {
        cout << "First string length : " << this->a.length() << endl;
        cout << "Second string length : " << this->b.length() << endl;
    }
    void MyStrComaper() {
        int CompareREsult = this->a.compare( this->b );
        string result = (CompareREsult != 0) ? " not " : " is ";
        cout << "Both string" << result << "equal" << endl;
    }
    string MyStringConact() {
        return this->a + " " + this->b;
    }
    void MyStringReverse( string s ) {
        if (s.length() == 0) { return; };
        string rev = s.substr( 1 );
        MyStringReverse( rev );
        cout << s [ 0 ];
    };
};
int main() {
    string s1, s2;
    cout << "Enter first string : ";
    getline( cin, s1 );
    cout << "Enter Second string : ";
    getline( cin, s2 );
    MyString MyStr( s1, s2 );
    cout << "length of strings" << endl;
    MyStr.MyStringLength();
    cout << "compare strings" << endl;
    MyStr.MyStrComaper();
    cout << "Concatenate strings : " << MyStr.MyStringConact() << endl;
    cout << "Reverse strings" << endl;
    MyStr.MyStringReverse( s1 );
    MyStr.MyStringReverse( s2 );
    return 0;
}