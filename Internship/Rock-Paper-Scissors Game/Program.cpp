// Task 9: Rock-Paper-Scissors

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string choices[] = {"rock", "paper", "scissors"};
    int userChoice;
    srand(time(0));
    int computerChoice = rand() % 3;

    cout << "Choose:\n0 - Rock\n1 - Paper\n2 - Scissors\nYour choice: ";
    cin >> userChoice;

    cout << "Computer chose: " << choices[computerChoice] << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
