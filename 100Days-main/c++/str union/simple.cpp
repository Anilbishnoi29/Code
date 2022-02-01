#include<iostream>
using namespace std;

int main() {
    int elements;
    int counter = 0;
    cout << "Enter the elements : " << endl;
    cin >> elements;
    cout << "Possible orders of matrix " << endl;
    int temp = elements;
    for (int i = 1; i <= elements;i++) {
        if ((temp % i) == 0) {
            counter++;
        }
    }

    cout << counter;
    return 0;
}