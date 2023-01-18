#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Bank
{

private:
    string name;
    long long accno;
    char type[10];
    long long amount = 0;
    long long total = 0;

public:
    void setvalue()
    {
        cout << "Enter name\n";
        cin.ignore();

        getline(cin, name);

        cout << "Enter Account Number\n";
        cin >> accno;

        cout << "Enter Account Type\n";
        cin >> type;

        cout << "Enter Balance\n";
        cin >> total;
    }

    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accno << endl;
        cout << "Account Type: " << type << endl;
        cout << "Balance: " << total << endl;
    }

    // The function to Deposit amount
    void deposit()
    {
        cout << "\nEnter amount to be Deposited\n";
        cin >> amount;
    }

    // The function to show balance amount
    void showbal()
    {
        total += amount;
        cout << "\nTotal Balance is: " << total << endl;
    }

    // The function to withdram amount in ATM
    void withdrawl()
    {
        int a, avail_balance;
        cout << "Enter amount to withdraw: \n";
        cin >> a;
        avail_balance = total - a;
        cout << "Available Balance is: " << avail_balance;
    }
};
int main()
{
    // Creating the object for the existing class
    Bank b;

    int choice;

    while (1)
    {
        cout<< "\n---------------------------------------";
        cout<< "\n---------------WELCOME-----------------";
        cout<< "\n---------------------------------------\n";
        cout << "\n\nEnter Your Choices:\n";
        cout << "\t1. Enter name, Account Number, Account Type.\n";
        cout << "\t2. Balance Enquiry.\n";
        cout << "\t3. Deposit Money.\n";
        cout << "\t4. Show Total Balance.\n";
        cout << "\t5. Withdraw Money.\n";
        cout << "\t6. Cancel.\n";
        cout<<"\n Choice: ";
        cin >> choice;

        // Choices to Select
        switch (choice)
        {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;

            case 3:
            b.deposit();
            break;

            case 4:
            b.showbal();
            break;

            case 5:
            b.withdrawl();
            break;

            case 6:
            exit(1);
            break;

            default:
            cout<<"\nInvalid Choice\n";
        }
    }
    return 0;
}