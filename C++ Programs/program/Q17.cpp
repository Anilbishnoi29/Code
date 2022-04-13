//Q17. Write a C++ program to implement Account class with the data members account number, A / c holder’s Name and Balance, and member function for following operations use constructors to initialize data members..
// 1. To Deposit amount
// 2. To Withdraw amount
// 3. To Transfer amount from one A / c to another.
#include<iostream>
using namespace std;
class Account {
private:
    string accountHolderName;
    int accountNumber;
    double accountBalance;
public:
    // set data
    void setAccount( string acName, int acNo, double balance ) {
        this->accountHolderName = acName;
        this->accountNumber = acNo;
        this->accountBalance = balance;
    };
    // get balance
    double getBalance() {
        return this->accountBalance;
    };
    // deposit amount
    double depositAmount( double amount ) {
        return this->accountBalance += amount;
    };
    // withdraw amount
    void withdrawAmount( double amount ) {
        if (this->accountBalance >= amount) {
            this->accountBalance -= amount;
            cout << "Your Remaining Balance is " << this->accountBalance << endl;
        }
        else {
            cout << "Insufficient Balance " << endl;
        }
    };// ATM
    void atm( Account& a, Account& b ) {
        bool innerActivity = true;
        while (innerActivity) {
            int operations;
            cout << "Enter 1 : check balance" << endl << "Enter 2 : deposit amount" << endl
                << "Enter 3 : withdraw amount" << endl << "Enter 4 : transfer amount" << endl
                << "Enter 5 : Exit" << endl;
            cin >> operations;
            switch (operations) {
                case 1:
                    cout << "Your Balance is " << a.getBalance() << endl;
                    break;
                case 2:
                    double depositAmount;
                    cout << "Enter amount for deposit" << endl;
                    cin >> depositAmount;
                    cout << "Your New Balance is " << a.depositAmount( depositAmount ) << endl;
                    break;
                case 3:
                    double withdrawAmount;
                    cout << "Enter amount for withdraw" << endl;
                    cin >> withdrawAmount;
                    a.withdrawAmount( withdrawAmount );
                    break;
                case 4:
                    double transferAmount;
                    cout << "Enter amount for transfer" << endl;
                    cin >> transferAmount;
                    a.transferAmount( b, transferAmount );
                    break;
                case 5:
                    innerActivity = false;
                    break;
            }
        }
    };
    // transfer amount
    void transferAmount( Account& b, double amount ) {
        if (this->accountBalance >= amount) {
            this->accountBalance -= amount;
            cout << "Your Remaining Balance is " << this->accountBalance << endl;
            b.accountBalance += amount;
        }
        else {
            cout << "Insufficient Balance " << endl;
        }
    };
};
// set data
string setAccountName() {
    string acName;
    cout << "Enter your name : " << endl;
    getline( cin >> ws, acName );
    cin.clear();
    return acName;
};
long setAccountNumber() {
    long acNumber;
    cout << "Enter your account number : " << endl;
    cin >> acNumber;
    cin.clear();
    return acNumber;
};
double setAccountBalance() {
    double acBalance;
    cout << "Enter your balance : " << endl;
    cin >> acBalance;
    cin.clear();
    return acBalance;
};

int main() {
    Account a, b;
    cout << "Enter data for account-1" << endl;
    a.setAccount( setAccountName(), setAccountNumber(), setAccountBalance() );
    cout << "Enter data for account-2" << endl;
    b.setAccount( setAccountName(), setAccountNumber(), setAccountBalance() );

    int userChoice;
    bool flag = true;
    while (flag) {
        cout << endl;
        cout << "1 : for account-1" << endl << "2 : for account-2" << endl << "3 : for Exit" << endl;
        cin >> userChoice;
        if (userChoice == 1) {
            a.atm( a, b );
        }
        else if (userChoice == 2) {
            b.atm( b, a );
        }
        else if (userChoice == 3) {
            flag = false;
            cout << "Thank you!" << endl;
        }
        else {
            cout << "invailed input" << endl;
        }
    }
    return 0;
}