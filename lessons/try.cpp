#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int num;
    int guess;
    int tries = 0;

    num = (rand() % 100) + 1;

    cout << "******* Number Guessing Game *******\n" << endl;

    do {
        
    cout << "Enter a number between 1 - 100: ";
    cin >> guess;
    tries++;

    if(guess < num) {
        cout << "Too low! Try again.\n";
    } else if(guess > num) {
        cout << "Too high! Try again.\n";
    } else {
        cout << "Correct! The number is " << num << "\n";
        cout << "You guessed in " << tries << " attempts \n";
    }

    } while (guess != num);

    cout << "Thanks for playing the game";
   

    return 0;
}