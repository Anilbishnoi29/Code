#include<iostream>
using namespace std;
void printSpell( int n, string str[] ) {
    // Base case
    if (n == 0) return;

    printSpell( n / 10, str );

    cout << str[ n % 10 ] << " ";

}

int main() {
    string str[ 10 ] = { "zero","one","two","three","four","five","six","seven","eight","nine" };

    printSpell( 432, str );
    return 0;
}