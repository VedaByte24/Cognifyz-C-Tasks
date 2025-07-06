// Task 1: String Reversal

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    // Ask the user for a string
    cout << "Enter a string: ";
    getline(cin, input); // This allows spaces too

    // Display the string in reverse
    cout << "Reversed string: ";
    for (int i = input.length() - 1; i >= 0; i--) {
        cout << input[i];
    }

    cout << endl;
    return 0;
}
