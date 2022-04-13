//Q5. Write a C++ program to perform string manipulation.
#include<iostream>  
using namespace std;
int main() {
    string string1 = "Focus ";
    string string2 = "and ";
    string string3 = "win";
    string string4 = string1 + string2 + string3;
    int  len = string4.length();
    cout << "Concatenation : " << string4 << endl;
    cout << "Length of string1 is : " << len << endl; // length 
    cout << "Part of string 2 : " << string2.substr( 3, 8 ) << endl; // substr
    cout << "Replacing 'win' :  " << string4.replace( 10, 15, "just Focus" ) << endl; //replace
    cout << "Erasing :  " << string3.erase( 0, 1 ) << endl;//
    return 0;
}