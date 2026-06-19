#include <iostream>
#include <string>
using namespace std;

int main()
{
    string indexNumber;
    string fullName;
    string program;
    string dob;
    int age;

    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter Index Number: ";
    getline(cin, indexNumber);

    cout << "Enter Program: ";
    getline(cin, program);

    cout << "Enter Age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter Date of Birth: ";
    getline(cin, dob);

    cout << "\nCongratulate "
         << fullName
         << " for your admission to GTUC. "
         << "You have been accepted to offer the program "
         << program
         << ". Your index number is "
         << indexNumber
         << ". Please check if your age is "
         << age
         << " and your date of birth is "
         << dob
         << ". Thank you.";

    return 0;
}