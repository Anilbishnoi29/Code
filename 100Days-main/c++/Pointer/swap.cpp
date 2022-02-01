#include<iostream>
using namespace std;

void swap( int* a, int* b ) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    cout << endl;
    cout << a << endl << b << endl;
    cout << endl;
    int* aPtr = &a;
    int* bPtr = &b;
    swap( *aPtr, *bPtr );
    cout << a << endl << b << endl;

    return 0;
}