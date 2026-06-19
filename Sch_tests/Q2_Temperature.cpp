#include <iostream>

using namespace std;

int main()
{
    double temp;
    char unit;
    double converted_temp;

    cout << "********** Temperature Converter **********" << endl;
    cout << "F = Fahrenheit" << endl;
    cout << "C = Celsius" << endl;

    cout << "What unit would you like to convert to (F/C):  ";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter temperature in celcius: ";
        cin >> temp;

        converted_temp = (temp * 9 / 5) + 32;

        cout << temp << "°C" << " in " << "Fahrenheit is " << converted_temp << "°F";
    }
    else if (unit == 'C' || unit == 'c')
    {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;
        temp = (temp - 32) * 5 / 9;
        cout << "The temperature in Celsius is: " << temp << " °C\n";
    }
    else
    {
        cout << "Invalid unit entered. Please enter F or C.\n";
    }

    return 0;
}
 