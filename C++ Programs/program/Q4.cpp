#include<iostream>
using namespace std;

class FibonacciSeries {
private:
    int maxNum;
public:
    FibonacciSeries( int a ) {
        this->maxNum = a;
    }

    void fibSeries() {
        int fib1 = 0, fib2 = 1, fib3;
        if (maxNum < 1)return;
        cout << fib1 << endl;
        for (int i = 0;i < maxNum;i++) {
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

    FibonacciSeries Fib( getNum );
    Fib.fibSeries();
    return 0;
}