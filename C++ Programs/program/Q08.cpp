//Q8. Write a C++ program to perform matrix addition and multiplication.
#include<iostream>
using namespace std;
int main() {
    int i, j, a, b, first [ 10 ][ 10 ], second [ 10 ][ 10 ], sum [ 10 ][ 10 ],
        subtract [ 10 ][ 10 ], multiply [ 10 ][ 10 ];
    cout << "Enter the number of rows and columns of matrix : " << endl;
    cin >> a >> b;
    cout << "Enter the elements of first matrix : " << endl;
    for (i = 0;i < a;i++) {
        for (j = 0;j < b;j++) {
            cin >> first [ i ][ j ];
        }
    }
    cout << "Enter the elements of second matrix" << endl;
    for (i = 0;i < a;i++) {
        for (j = 0;j < b;j++) {
            cin >> second [ i ][ j ];
        }
    }
    for (i = 0;i < a;i++) {
        for (j = 0;j < b;j++) {
            sum [ i ][ j ] = first [ i ][ j ] + second [ i ][ j ];
            multiply [ i ][ j ] = first [ i ][ j ] * second [ i ][ j ];
        }
    }
    cout << "\nSum of entered matrices : " << endl;
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            cout << sum [ i ][ j ] << " ";
        }
        cout << endl;
    }
    cout << "\nMultiplication of entered matrices : " << endl;
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            cout << multiply [ i ][ j ] << " ";
        }
        cout << endl;
    }
    return 0;
}