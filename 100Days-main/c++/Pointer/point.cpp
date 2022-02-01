#include<iostream>
using namespace std;

int main() {
    // pointers are variables they stores the address of other variables
    // pointer type as same as variable data-type
    // by the help of pointer we can assess and modify variable
    int a = 10;

    int* aPtr;

    aPtr = &a;

    cout << aPtr << endl; // print address of a 
    cout << *aPtr << endl; // print value of a

    cout << "aPter value" << aPtr << endl; // ++ operation on pointer
    aPtr++;
    cout << aPtr << endl; // ++ operation on pointer
    aPtr--;
    cout << --aPtr << endl; // -- operation on pointer

    // print arr by pointer

    int arr[] = { 1,2,3,4,5 };
    // cout << *arr << endl;

    int* ptr = arr;
    for (int i = 0;i < 5;i++) {
        cout << *ptr << endl;
        *ptr++;
    }




    return 0;
}