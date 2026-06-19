#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is even." << endl;

        cout << "Converted odd number = " << num + 1;
    }
    else
    {
        cout << num << " is odd." << endl;

        cout << "Converted even number = " << num + 1;
    }

    return 0;
}