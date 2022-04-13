// Q24. Explain the utility of virtual function through a C++ program ?
#include <iostream>  
#include<string>
using namespace std;
class Base {
    string str1 = "Base";
public:
    void display() { cout << "Value of str1 is : " << str1 << endl; }
};
class Child : public Base {
    string str2 = "Base";
public:
    void display() { cout << "Value of str2 is : " << str2 << endl; }
};
int main() {
    Base* a;
    Child b;
    a = &b;
    a->display();
    return 0;
}