// task is to develop a Number Guessing game

//Create a program that generates a random number and asks the user to guess it.
// Provide feedback on whether the guess is too high or too low until the user guesses the correct number.


// Code -

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "I have generated a random number between 1 and 100.\n";
    cout << "Can you guess what it is?\n";

    // Loop until the user guesses the correct number
    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number.\n";
        }
    }

    return 0;
}
