// Task 4: Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Set the random seed
    int secret = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "Guess the number (between 1 and 100): ";

    while (true) {
        cin >> guess;

        if (guess < secret) {
            cout << "Too low. Try a higher number: ";
        } else if (guess > secret) {
            cout << "Too high. Try a lower number: ";
        } else {
            cout << "Congratulations! You guessed it right!" << endl;
            break;
        }
    }

    return 0;
}
