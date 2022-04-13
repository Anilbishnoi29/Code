//Q4.Write a C++ program to generate Fibonacci series.
#include<iostream>
using namespace std;
class FibonacciSeries {
public:
    void fibSeries( int a ) {
        int fib1 = 0, fib2 = 1, fib3;
        if (a < 1)return;
        cout << fib1 << endl;
        for (int i = 0;i < a;i++) {
            cout << fib2 << endl;
            fib3 = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib3;
        }
    }
};
int main() {
    int getNum;
    cout << "Enter the number for ";
    cin >> getNum;
    FibonacciSeries Fib;
    Fib.fibSeries( getNum );
    return 0;
}