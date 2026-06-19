#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "AREA AND PERIMETER CALCULATOR\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Choose shape: ";
    cin >> choice;

    if(choice == 1)
    {
        float r;
        const float pi = 3.142;

        cout << "Enter radius: ";
        cin >> r;

        cout << "Area = " << pi * r * r << endl;
        cout << "Perimeter = " << 2 * pi * r << endl;
    }
    else if(choice == 2)
    {
        float length, width;

        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        cout << "Area = " << length * width << endl;
        cout << "Perimeter = "
             << 2 * (length + width) << endl;
    }
    else if(choice == 3)
    {
        float base, height, a, b, c;

        cout << "Enter base: ";
        cin >> base;

        cout << "Enter height: ";
        cin >> height;

        cout << "Enter side a: ";
        cin >> a;

        cout << "Enter side b: ";
        cin >> b;

        cout << "Enter side c: ";
        cin >> c;

        cout << "Area = "
             << 0.5 * base * height << endl;

        cout << "Perimeter = "
             << a + b + c << endl;
    }
    else {cout << "Invalid Choice";}

    return 0;
}