//Q10. Write a C++ program to create a function template to swap two numbers.
// C++ program to implement
// function templates
#include <iostream>
using namespace std;
template <class T>
void swap_numbers( T& x, T& y ) {
    T t;
    t = x;
    x = y;
    y = t;
};
int main() {
    int a, b;
    cout << "Enter two number : " << endl;
    cin >> a >> b;
    swap_numbers( a, b );
    cout << "a : " << a << " b : " << b << endl;
    return 0;
}