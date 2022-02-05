//Q5. Write a C++ program to perform string manipulation.
#include<iostream>  
using namespace std;
int main() {
    string str = "Lorem Ipsum ";
    cout << str << endl;
    str.erase( 4, 4 );
    cout << str << endl;
    return 0;
}