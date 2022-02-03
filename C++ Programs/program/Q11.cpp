// 11.	Write a code for swapping of two characters through swap function which shows the functionality of call by reference ?

#include<iostream>
using namespace std;
class SwapChar {
private:
    char c1;
    char c2;
public:
    SwapChar( char c1, char c2 ) {
        this->c1 = c1;
        this->c2 = c2;
    };
    char getChar1() {
        return this->c1;
    }
    char getChar2() {
        return this->c2;
    }
    void swapChar( char& a, char& b ) {
        this->c2 = a;
        this->c1 = b;
    };
};

int main() {
    char a = 'a';
    char b = 'b';
    SwapChar sc( a, b );
    // before swap
    cout << sc.getChar1() << endl;
    cout << sc.getChar2() << endl;
    // after swap
    sc.swapChar( a, b );
    cout << sc.getChar1() << endl;
    cout << sc.getChar2() << endl;
    return 0;
}