#include<iostream>
using namespace std;
int sum( int, int ); // function declaration or prototype
int main() {
    int a = 5, b = 8;
    int sumOf = sum( a, b );// function calling and sending the actual arguments
    cout << sumOf << endl;
    return 0;
}
// function defined
// here x , y are formal arguments they receive values for actual arguments(a,b)
// here we have to declare to formal arguments 
int sum( int x, int y ) {
    return(x + y);
}