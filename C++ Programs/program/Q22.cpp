//Q22. Overload ‘+’ for concatenation of two strings?
#include<string.h>
#include<iostream>
using namespace std;
class AddStr {
private:
    string a;
    string b;
public:
    void setStr( string s1, string s2 ) {
        this->a = s1;
        this->b = s2;
    };
    void operator+() { cout << "concatenation: " << a + b << endl; };
    void showData() { cout << this->a << this->b; };
};
int main() {
    AddStr s1;
    s1.setStr( "Hello ", "World" );
    +s1;
    return 0;
}