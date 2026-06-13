### Lesson codes

# Practice 1
// Hello world in C++
#include <iostream>
#include <string>

int main() {
   
std::string name;
int age;

std::cout << "What is your name: ";
std::getline(std::cin >> std::ws, name);

std::cout << "How old are you: ";
std::cin >> age;

std::cout << "Hello " << name << ", you are " << age << " years old";


    return 0;
}

# Lesson2
// Hello world in C++
#include <iostream>
#include <string>

using namespace std;


int main() {

    

    string message("I have learned something new today\n"),
          prompt("Please input two lines of text: "),
          strline1, strline2, sum;

    cout << message;
    cout << prompt;

    getline(cin, strline1);
    getline(cin, strline2);

    sum = strline1 + " * " + strline2;
    cout << sum << endl;
   

    return 0;
}

## Switches
#include <iostream>

using namespace std;

int main() {

    char op;
    double num1;
    double num2;
    double result;

    cout << "************Calculator************\n";
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << "\n";
            break;

        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << "\n";
            break;

        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << "\n";
            break;

        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << "\n";
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;

        default:
            cout << "Error: Invalid operator.\n";
    }



     cout << "************Calculator************";
}

## Temperature convertor
#include <iostream>

using namespace std;

int main() {
    double temp;
    char unit;
    
    cout << "************ TEmperature Converter ************\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";

    cout << "What unit would you like to convert to? (F/C): ";
    cin >> unit;

    if(unit == 'F' || unit == 'f') {
        cout << "Enter the temperature in celcius: ";
        cin >> temp;
        temp = (temp * 9/5) + 32;
        cout << "The temperature in Fahrenheit is: " << temp << " F\n";
    } else if(unit == 'C' || unit == 'c') {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;
        temp = (temp - 32) * 5/9;
        cout << "The temperature in Celsius is: " << temp <<" C\n";
    } else {
        cout << "Invalid unit entered. Please enter F or C.\n";
    }

    cout << "***********************************************";


    return 0;
}

## Triangle
#include <iostream>
#include <string>


using namespace std;

int main() {
    // Draw a traingle using nested loops
   
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
   
    return 0;
}

//  difference between ++i and i++
// ++i is the pre-increment operator, which increments the value of i before it is
// used in an expression. For example, if i is 5, then ++i will first increment i to 6 and then return 6.
// i++ is the post-increment operator, which increments the value of i after it is
// used in an expression. For example, if i is 5, then i++ will first return 5 and then increment i to 6.

## Number guessing game

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