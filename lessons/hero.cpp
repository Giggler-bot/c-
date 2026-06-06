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