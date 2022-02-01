#include<iostream>
using namespace std;

// print 5 to 1 (-)
void N( int n ) {
    // base case
    if (n == 0) {
        return;
    }
    // work
    cout << n << endl;
    // Recursion
    N( n - 1 );
}

// print 1 to 5 (+)
void P( int n ) {
    // base case
    if (n == 0) {
        return;
    }
    // Recursion
    P( n - 1 );
    // work
    cout << n << endl;
}

int main() {
    cout << "Negative Number..." << endl;
    N( 5 );
    cout << "Positive Number..." << endl;
    P( 5 );
    return 0;
}