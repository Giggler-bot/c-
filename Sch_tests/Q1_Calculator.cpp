#include <iostream>

using namespace std;

int main() {

    double num1, num2;
    char operators;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operators;

    cout << "Enter second number: ";
    cin >> num2;

        switch (operators) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Error: Division by zero!";
                } else {
                    cout << num1 << " / " << num2 << " = " << num1 / num2;
                }
                break;
            default:
                cout << "Invalid operator!";
        }

    return 0;
}