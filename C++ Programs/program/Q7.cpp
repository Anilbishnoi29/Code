#include<iostream>
using namespace std;

class PrimeNumber {
private:
    int primeStart;
    int primeEnd;
public:
    PrimeNumber( int num1, int num2 ) {
        this->primeStart = num1;
        this->primeEnd = num2;
    }

    void generatePrime() {
        int i, j;
        bool flag;
        for (i = primeStart; i <= primeEnd; i++) {

            if (i == 1 || i == 0)
                continue;
            flag = true;

            for (j = 2; j <= i / 2; ++j) {
                if (i % j == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                cout << i << " ";
        }
    }

};

int main() {
    int startNum, endNum;
    cout << "Enter the starting number : " << endl;
    cin >> startNum;
    cout << "Enter the ending number : " << endl;
    cin >> endNum;

    PrimeNumber pNum( startNum, endNum );
    pNum.generatePrime();
    return 0;
}