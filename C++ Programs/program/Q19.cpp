// Q.19 Write a C++ program to overload -- operator?
#include<iostream>
using namespace std;

class Complex {
private:
    int a, b;
public:
    void setData( int a, int b ) {
        this->a = a;
        this->b = b;
    };
    void showData() {
        cout << "a : " << this->a << ", b : " << this->b << endl;
    };
    Complex operator+( Complex c ) {
        Complex temp;
        temp.a = this->a + c.a;
        temp.b = this->b + c.b;
        return temp;
    }
};
int main() {
    Complex c1, c2, c3;
    c1.setData( 3, 4 );
    c2.setData( 5, 6 );
    c3 = c1 + c2;
    c3.showData();
}