//Q3. Write a C++ program to swap two numbers.
#include<iostream>
// #include <bits/stdc++.h>
using namespace std;
void swap_numbers( int& x, int& y ) {
    int t;
    t = x;
    x = y;
    y = t;
};
int main() {
    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;
    swap_numbers( a, b );
    cout << "a : " << a << " b : " << b << endl;
    return 0;
}