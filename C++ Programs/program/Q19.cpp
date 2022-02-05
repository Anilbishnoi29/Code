// Q.19 Write a C++ program to overload -- operator?
#include<iostream>
using namespace std;
class Number {
private:
    int a;
public:
    void setData( int a ) {
        this->a = a;
    };
    Number operator--() {
        Number temp;
        temp.a = --a;
        return temp;
    }
    void showData() {
        cout << this->a << endl;
    };
};
int main() {
    Number n1, n2;
    n1.setData( 4 );
    n1.showData();
    n2 = --n1;
    n2.showData();
    return 0;
}