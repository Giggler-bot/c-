#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char userChoice, char computerChoice);
void determineWinner(char userChoice, char computerChoice);

int main()
{
    char userChoice;
    char computerChoice;

    userChoice = getUserChoice();
    computerChoice = getComputerChoice();

    cout << "**********Results**********\n";
    showChoice(userChoice, computerChoice);
    determineWinner(userChoice, computerChoice);

    return 0;
}

char getUserChoice()
{
    char userChoice;

    cout << "Welcome To My Rock Paper Scissors Game\n";
    cout << "******************************************\n";

    do
    {
        cout << "Enter an option.\n";
        cout << "r - Rock\n";
        cout << "p - Paper\n";
        cout << "s - Scissors\n";

        cout << "Your choice: ";
        cin >> userChoice;

        userChoice = tolower(userChoice);

    } while (userChoice != 'r' && userChoice != 'p' && userChoice != 's');

    return userChoice;
};

char getComputerChoice()
{
    srand(time(0));
    int randNum = rand() % 3;

    switch (randNum)
    {
    case 0:
        return 'r';
    case 1:
        return 'p';
    case 2:
        return 's';
    default:
        return 'r';
    }
};

void showChoice(char userChoice, char computerChoice)
{

    switch (userChoice)
    {
    case 'r':
        cout << "You chose Rock.\n";
        break;
    case 'p':
        cout << "You chose Paper.\n";
        break;
    case 's':
        cout << "You chose Scissors.\n";
        break;
    }

    switch (computerChoice)
    {
    case 'r':
        cout << "Computer chose Rock.\n";
        break;
    case 'p':
        cout << "Computer chose Paper.\n";
        break;
    case 's':
        cout << "Computer chose Scissors.\n";
        break;
    }
};
void determineWinner(char userChoice, char computerChoice)
{
    if (userChoice == computerChoice)
    {
        cout << "It's a tie";
    }
    else if ((userChoice == 'r' && computerChoice == 's') ||
             (userChoice == 'p' && computerChoice == 'r') ||
             (userChoice == 's' && computerChoice == 'p'))
    {
        cout << "You win";
    }
    else
    {
        cout << "COmputer wins";
    }
};