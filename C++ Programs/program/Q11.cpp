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
    void swapChar( char& a, char& b ) {
        this->c2 = a;
        this->c1 = b;
        cout << "char-1 : " << this->c1 << ", char-2 : " << this->c2 << endl;
    };
};
int main() {
    char a, b;
    cout << "Enter two char " << endl;
    cin >> a >> b;
    SwapChar sc( a, b );
    sc.swapChar( a, b );
    return 0;
}