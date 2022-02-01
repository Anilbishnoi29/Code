//Q15. Write a C++ program to manipulate the class account using classesand function.A user should be able to perform the following functions.a.Deposit money.b.Withdraw money, c.Calculate the interest d.Check the total balance in his account.
#include<iostream>
using namespace std;

class Account {
private:
    string userName;
    int userAccountNumber;
    double userBalance = 50000;

public:
    Account( int acNo, string acName ) {
        this->userAccountNumber = acNo;
        this->userName = acName;
        cout << "============================================" << endl;
        cout << "Hello " << this->userName << endl;
        cout << "Account Balance : " << this->userBalance << endl;
        cout << "============================================" << endl;
    };

    // get user name
    string getUserName() {
        return this->userName;
    }
    // get user account balance
    double getAccountBalance() {
        return this->userBalance;
    };
    // Deposit money
    double depositMoney( double depositAmount ) {
        return this->userBalance += depositAmount;
    };
    // Withdraw money
    double withdrawMoney( double withdrawAmount ) {
        return this->userBalance -= withdrawAmount;
    };
    // Calculate the interest
    double getInterestAmount( int time ) {
        return (this->userBalance * 0.05 * time);
    };

};
int main() {
    cout << "============================================" << endl;
    cout << "============================================" << endl;
    string name;
    int accountNumber;
    cout << "Enter your name : " << endl;
    getline( cin >> ws, name );
    cout << "Enter your account number : " << endl;
    cin >> accountNumber;

    Account ac( accountNumber, name );

    int userChoice;
    bool flag = true;

    while (flag) {
        cout << "1. For Check account balance" << endl
            << "2. For deposit money" << endl
            << "3. For withdraw money" << endl
            << "4. For check interest" << endl
            << "5. Exit" << endl;
        cout << endl;
        cin >> userChoice;
        switch (userChoice) {
            case 1:
                cout << "Hello! " << ac.getUserName() << ", Your total balance is " << ac.getAccountBalance() << endl;cout << endl;
                break;
            case 2:
                double depositAmount;
                cout << "Enter the amount for deposit" << endl;
                cin >> depositAmount;
                ac.depositMoney( depositAmount );
                cout << "Hello! " << ac.getUserName() << ", Your new balance is " << ac.getAccountBalance() << endl;cout << endl;
                break;
            case 3:
                double withdrawAmount;
                cout << "Enter the amount for withdraw" << endl;
                cin >> withdrawAmount;
                ac.withdrawMoney( withdrawAmount );
                cout << "Hello! " << ac.getUserName() << ", Your remaining balance is " << ac.getAccountBalance() << endl;cout << endl;
                break;
            case 4:
                int time;
                cout << "Enter the time in months " << endl;
                cin >> time;
                cout << "Hello! " << ac.getUserName() << ", Your total interest is " << ac.getInterestAmount( time ) << endl;cout << endl;
                break;
            case 5:
                if (userChoice == 5) {
                    flag = false;
                }
                cout << "Hello! " << "Thank you! " << ac.getUserName() << endl;
                cout << endl;
                break;
            default:
                cout << ac.getUserName() << ", your entered invailed input. " << endl;
        }
    };
    return 0;
}