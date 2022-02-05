#include<iostream>
using namespace std;
// declaration
inline void fun();
int main() {
    fun(); // calling
    return 0;
};
// definition
void fun() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
};