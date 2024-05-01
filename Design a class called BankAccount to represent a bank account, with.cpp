/*Bank Account Management System

You're tasked with creating a simple bank account management system in C++. Design a class called BankAccount to represent a bank account, with
 the following specifications:

Member Variables:
accountNumber: An integer representing the unique account number.
accountHolderName: A string representing the name of the account holder.
balance: A double representing the current balance in the account.
Constructor:
Define a constructor that initializes the accountNumber, accountHolderName, and balance when an object of the BankAccount class is created.
Member Functions:
deposit(double amount): A function that takes a double parameter amount and adds it to the account's balance.
withdraw(double amount): A function that takes a double parameter amount and subtracts it from the account's balance. Ensure that the 
withdrawal amount does not exceed the current balance.
displayAccountDetails(): A function that displays the account details including the account number, account holder name, and current balance.
Sample Usage:
Create objects of the BankAccount class and demonstrate the functionality by depositing and withdrawing amounts from the accounts, and 
displaying their details.
Implement the BankAccount class with the specified member variables and functions, and provide a sample usage of the class to demonstrate 
its functionality.*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(int accNumber, std::string accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited Rs." << amount << " into account " << accountNumber <<endl;
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" <<endl;
        } else {
            balance -= amount;
            cout << "Withdrawn Rs." << amount << " from account " << accountNumber <<endl;
        }
    }

    // Function to display account details
    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber <<endl;
        cout << "Account Holder Name: " << accountHolderName <<endl;
        cout << "Current Balance: Rs." << balance <<endl;
    }
};

int main() {
    // Create BankAccount objects
    BankAccount acc1(12345, "Nischal", 1000);
    BankAccount acc2(67890, "Anurag", 2000);

    // Deposit and withdraw from accounts
    acc1.deposit(500);
    acc1.withdraw(200);
    acc2.deposit(1000);
    acc2.withdraw(2500);

    // Display account details
    std::cout << "Account 1 Details:" << endl;
    acc1.displayAccountDetails();
    cout << endl << "Account 2 Details:" << endl;
    acc2.displayAccountDetails();

    return 0;
}

