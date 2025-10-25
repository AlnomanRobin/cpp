#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "=====================================\n";
    cout << "🎮 Welcome to the Number Guessing Game!\n";
    cout << "=====================================\n";
    cout << "I have chosen a number between 1 and 100.\n";
    cout << "Can you guess it?\n\n";

    // Main game loop
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "\n🎉 Congratulations! You guessed it in " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    cout << "\nThanks for playing! 👋\n";
    return 0;
}

