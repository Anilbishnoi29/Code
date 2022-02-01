//Q17. Write a C++ program to implement Account class with the data members account number, A / c holder’s Name and Balance, and member function for following operations use constructors to initialize data members..
// 1. To Deposit amount
// 2. To Withdraw amount
// 3. To Transfer amount from one A / c to another.
#include<iostream>
using namespace std;

class Account {
private:
    string accountHolderName;
    long accountNumber;
    double accountBalance;
public:
    void setAccoutnDetails( string name, long number, double balance ) {
        this->accountHolderName = name;
        this->accountNumber = number;
        this->accountBalance = balance;
    };
    double getBalance() {
        return this->accountBalance;
    }
    double depositAmount( double amount ) {
        return this->accountBalance += amount;
    };
    double withdrawAmount( double amount ) {
        return this->accountBalance -= amount;
    };
    void transferAmount( Account& A, Account& B, double amount ) {
        A.accountBalance = A.accountBalance - amount;
        B.accountBalance = B.accountBalance + amount;
    };
    // operations
    friend void operationOnAccount( Account A, Account B );
};
// helper functions
void operationOnAccount( Account A, Account B ) {

    bool flag = true;
    while (flag) {
        int operationChoice;
        cout << "1. To Deposit amount " << endl
            << "2. To Withdraw amount" << endl
            << "3. To Transfer amount from one A / c to another" << endl
            << "4. balance" << endl
            << "5. To Exit" << endl;
        cin >> operationChoice;
        switch (operationChoice) {
            case 1:
                double amountForDeposit;
                cout << "Enter the amount for deposit" << endl;
                cin >> amountForDeposit;
                cout << "Your new balance is : " << A.depositAmount( amountForDeposit ) << endl;
                break;
            case 2:
                double amountForWithdraw;
                cout << "Enter the amount for withdraw" << endl;
                cin >> amountForWithdraw;
                cout << "Your remaining balance is : " << A.withdrawAmount( amountForWithdraw ) << endl;
                break;
            case 3:
                double amountForTransfer;
                cout << "Enter the amount for transfer" << endl;
                cin >> amountForTransfer;
                // cout << "Your remaining balance is : " << A.transferAmount( A, B, amountForTransfer ) << endl;
                A.transferAmount( A, B, amountForTransfer );
                break;
            case 4:
                cout << "Your new balance is : " << A.getBalance() << endl;
                break;
            case 5:
                if (operationChoice == 5) {
                    flag = false;
                }
                cout << "Thank You!" << endl;
                break;
            default:cout << "Invailed input" << endl;
                break;
        };
    };
};
string setAccountName() {
    string acName;
    cout << "Enter your name : " << endl;
    getline( cin >> ws, acName );
    cin.clear();
    return acName;
}
long setAccountNumber() {
    long acNumber;
    cout << "Enter your account number : " << endl;
    cin >> acNumber;
    cin.clear();
    return acNumber;
}
double setAccountBalance() {
    double acBalance;
    cout << "Enter your balance : " << endl;
    cin >> acBalance;
    cin.clear();
    return acBalance;
}

int main() {
    Account a1;
    a1.setAccoutnDetails( setAccountName(), setAccountNumber(), setAccountBalance() );
    Account a2;
    a2.setAccoutnDetails( setAccountName(), setAccountNumber(), setAccountBalance() );

    bool isTrue = true;
    while (isTrue) {
        int userChoiceAccount;
        cout << "Enter 1. for Account-1, " << endl << "Enter 2. for Account-2" << endl << "Enter 3. for Exit" << endl;
        cin >> userChoiceAccount;
        switch (userChoiceAccount) {
            case 1:
                operationOnAccount( a1, a2 );
                break;
            case 2:
                operationOnAccount( a2, a1 );
                break;
            case 3:
                if (userChoiceAccount == 3) {
                    isTrue = false;
                }
                cout << "Thank you!" << endl;
                break;
            default:cout << "Invailed input" << endl;
        }
    }
    return 0;
}