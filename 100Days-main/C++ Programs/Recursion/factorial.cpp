#include<iostream>
using namespace std;

int getFactorial( int n ) {
    // base case
    if (n <= 1) return 1;
    // process
    return n * getFactorial( n - 1 );
}

int main() {
    cout << getFactorial( 5 );
    return 0;
}