#include<iostream>
using namespace std;

int getFibonacci( int n ) {
    // base case
    if (n == 0 || n == 1)return n;
        // process
    return getFibonacci( n - 1 ) + getFibonacci( n - 2 );

}

int main() {
    int i = 0;
    int x;
    cout << "enter a number" << endl;
    cin >> x;
    cout << "Fibonacci series" << endl;

    while (i < x) {
        /* code */
        cout << getFibonacci( i ) << endl;
        i++;
    }

    return 0;
}