#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);
int getUserChoice();

void saveBalance(double balance);
double loadBalance();

int main()
{
    int userChoice;
    double balance = loadBalance();

    do
    {
        userChoice = getUserChoice();

        switch (userChoice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            saveBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            saveBalance(balance);
            break;
        case 4:
            cout << "Thank you for using our services. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (userChoice != 4);

    return 0;
}

int getUserChoice()
{
    int choice;
    {
        cout << "*************************\n";
        cout << "Select an option:\n";
        cout << "*************************\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";

        cout << "\nEnter your choice: ";

        while (!(cin >> choice))
        {
            cin.clear();            // Reset the error state
            cin.ignore(1000, '\n'); // Discard invalid input
            cout << "Invalid input. Enter a choice (1-4): ";
        }

        return choice;
    }
};

void showBalance(double balance)
{
    cout << "Your current balance is: $" << fixed << setprecision(2) << balance << endl;
};

double deposit()
{
    double amount = 0;

    cout << "Enter the amount to deposit: $";
    cin >> amount;

    if (amount > 0)
    {
        cout << "You have deposited: $" << fixed << setprecision(2) << amount << endl;
        return amount;
    }
    else
    {
        cout << "Invalid amount. Please enter a positive value." << endl;
        return 0;
    }
};
double withdraw(double balance)
{
    double amount = 0;

    cout << "Enter the amount to withdraw: $";
    cin >> amount;

    if (amount > balance)
    {
        cout << "Insufficient funds. Your current balance is: $" << fixed << setprecision(2) << balance << endl;
        return 0;
    }
    else if (amount <= 0)
    {
        cout << "Invalid amount. Please enter a positive value." << endl;
        return 0;
    }
    else
    {
        cout << "You have withdrawn: $" << fixed << setprecision(2) << amount << endl;
        return amount;
    }
};

void saveBalance(double balance)
{
    ofstream outFile("balance.txt");
    if (outFile.is_open())
    {
        outFile << fixed << setprecision(2) << balance;
        outFile.close();
    }
    else
    {
        cout << "Error saving balance to file." << endl;
    }
}

double loadBalance()
{
    ifstream inFile("balance.txt");
    double balance = 0;

    if (inFile.is_open())
    {
        inFile >> balance;
        inFile.close();
    }
    else
    {
        cout << "No previous balance found. Starting with $0.00." << endl;
    }

    return balance;
}