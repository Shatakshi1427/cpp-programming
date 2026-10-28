#include <iostream>
using namespace std;

class SavingsAccount
{
    float balance;
    float interestRate;

public:
    SavingsAccount(float b, float r)
    {
        balance = b;
        interestRate = r;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
        cout << "New Balance: " << balance << endl;
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
            cout << "New Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void applyInterest()
    {
        float interest = balance * interestRate / 100;
        balance = balance + interest;

        cout << "Interest Applied: " << interest << endl;
        cout << "New Balance: " << balance << endl;
    }
};


class CheckingAccount
{
    float balance;

public:
    CheckingAccount(float b)
    {
        balance = b;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
        cout << "New Balance: " << balance << endl;
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
            cout << "New Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void applyInterest()
    {
        cout << "Checking Account does not have interest." << endl;
    }
};


int main()
{
    int accountChoice, operationChoice;
    float balance, interestRate, amount;

    cout << "===== BANKING SYSTEM =====" << endl;

    cout << endl <<"1. Savings Account";
    cout << endl <<"2. Checking Account";

    cout << endl << endl <<"Select Account: ";
    cin >> accountChoice;

    if (accountChoice == 1)
    {
        cout << endl <<"Enter Initial Balance: ";
        cin >> balance;

        cout << "Enter Interest Rate: ";
        cin >> interestRate;

        SavingsAccount account(balance, interestRate);

        cout << endl <<"1. Deposit";
        cout << endl <<"2. Withdraw";
        cout << endl <<"3. Apply Interest";

        cout << endl << endl <<"Select Operation: ";
        cin >> operationChoice;

        switch (operationChoice)
        {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.applyInterest();
                break;

            default:
                cout << "Invalid operation." << endl;
        }
    }

    // Checking Account
    else if (accountChoice == 2)
    {
        cout << "\nEnter Initial Balance: ";
        cin >> balance;

        CheckingAccount account(balance);

        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Apply Interest";

        cout << "\n\nSelect Operation: ";
        cin >> operationChoice;

        switch (operationChoice)
        {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.applyInterest();
                break;

            default:
                cout << "Invalid operation." << endl;
        }
    }

    else
    {
        cout << "Invalid account choice." << endl;
    }

    return 0;
}
