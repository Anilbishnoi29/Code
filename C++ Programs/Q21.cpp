//Q.20 Write a C++ program to overload ‘+’ and ‘-‘, operators for Complex class i.e. these operators can be used to add and subtract two objects (complex numbers) of complex class.
#include<iostream>
using namespace std;

class Complex {
private:
    int a;
public:
    void setData( int a ) {
        this->a = a;
    };
    void showData() {
        cout << "a : " << this->a << endl;
    };
    Complex operator+( Complex c ) {
        Complex temp;
        temp.a = a + c.a;
        return temp;
    }
    Complex operator-( Complex c ) {
        Complex temp;
        temp.a = a - c.a;
        return temp;
    }
};
int main() {
    Complex c1, c2, c3;
    c1.setData( 5 );
    c2.setData( 10 );

    c3 = c1 + c2;
    c3.showData();
    c3 = c1 - c2;
    c3.showData();
    return 0;
}