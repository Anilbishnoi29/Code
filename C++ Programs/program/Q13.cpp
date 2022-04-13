// 13.	Write a program to show the use of friend function ?
// use we can access diffrent classes member in one function
#include<iostream>
using namespace std;
class ComplexA; // formal declaration for compiler
class ComplexB; // formal declaration for compiler
// class FriendA
class ComplexA {
private:
    int a;
public:
    ComplexA( int a ) {
        this->a = a;
    }
    // friend function declare
    friend int add( ComplexA, ComplexB );
};
// ComplexB
class ComplexB {
private:
    int b;
public:
    ComplexB( int b ) {
        this->b = b;
    }
    // friend function declare
    friend int add( ComplexA, ComplexB );
};
// friend function define
int add( ComplexA comA, ComplexB comB ) {
    int sum = comA.a + comB.b;
    return sum;
};
int main() {
    ComplexA ca( 20 );
    ComplexB cb( 30 );
    cout << "sum of ComplexA and ComplexB : " << add( ca, cb );
    return 0;
}