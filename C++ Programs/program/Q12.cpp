// 12.	Write a program to the functionality of inline function.

#include<iostream>
using namespace std;
inline int sum( int a, int b ) {
    return a + b;
};
int main() {
    int x, y;
    cout << "Enter two numbers:" << endl;
    cin >> x >> y;
    cout << sum( x, y );
    return 0;
};