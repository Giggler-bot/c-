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
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "******* Number Guessing Game *******" << endl;

    do {
        cout << "Enter a guess between 1 and 100: ";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < num) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Correct! You've guessed the number!" << endl;
            cout << "Congratulations! You guessed the number in "
                 << tries << " tries." << endl;
        }

    } while (guess != num);

    cout << "Thank you for playing the Number Guessing Game!" << endl;

    return 0;
}