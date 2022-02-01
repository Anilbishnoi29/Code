#include<iostream>
using namespace std;
void display( int* p ) {
    *p = 100;
    cout << *p << endl;
}
int main() {
    int age = 20;
    cout << age << endl;
    display( &age );
    return 0;
}