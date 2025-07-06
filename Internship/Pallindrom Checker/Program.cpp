// Task 6: Palindrome Checker

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string text, original;

    cout << "Enter a word or phrase: ";
    getline(cin, text);

    // Remove spaces and make lowercase for checking
    for (char c : text) {
        if (isalnum(c)) {
            original += tolower(c);
        }
    }

    string reversed = original;
    reverse(reversed.begin(), reversed.end());

    if (original == reversed) {
        cout << "It's a palindrome!" << endl;
    } else {
        cout << "It's not a palindrome." << endl;
    }

    return 0;
}
