#include<iostream>
using namespace std;

int main() {

    int numbers[ 5 ] = { 22,34,56,78,56 };

    int* ptr = numbers;
    int* ptr0 = &numbers[ 0 ];
    int* ptr1 = &numbers[ 1 ];
    int* ptr2 = &numbers[ 2 ];
    int* ptr3 = &numbers[ 3 ];
    int* ptr4 = &numbers[ 4 ];
    cout << ptr << endl;
    cout << ptr0 << endl;
    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr3 << endl;
    cout << ptr4 << endl;



    return 0;
}