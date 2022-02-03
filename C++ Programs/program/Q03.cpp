//Q3. Write a C++ program to swap two numbers.
#include<iostream>
using namespace std;

class SwipNumber {
private:
    int a, b;
public:
    SwipNumber( int a, int b ) {
        this->a = a;
        this->b = b;
    }
    void swipNum() {
        cout << "number is : " << a << " , " << b << endl;
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "swiped number is : " << a << " , " << b << endl;
    }
};
int main() {
    int a, b;
    cout << "Enter number-1 : ";
    cin >> a;
    cout << "Enter number-2 : ";
    cin >> b;

    SwipNumber SwipN( a, b );
    SwipN.swipNum();

    return 0;
}