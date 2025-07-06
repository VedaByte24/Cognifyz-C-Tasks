// Task 3: Fibonacci Series

#include <iostream>
using namespace std;

int main() {
    int n;
    long long first = 0, second = 1, next;

    // Ask the user how many terms they want
    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        cout << "Fibonacci series: ";
        for (int i = 1; i <= n; i++) {
            cout << first << " ";
            next = first + second;
            first = second;
            second = next;
        }
        cout << endl;
    }

    return 0;
}
