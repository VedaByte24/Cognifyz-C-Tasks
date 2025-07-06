// Task 2: Simple Calculator

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    // Get numbers and operator from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform the operation based on user input
    cout << "Result: ";
    switch (op) {
        case '+':
            cout << (num1 + num2);
            break;
        case '-':
            cout << (num1 - num2);
            break;
        case '*':
            cout << (num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                cout << (num1 / num2);
            else
                cout << "Error: Cannot divide by zero!";
            break;
        case '%':
            if ((int)num2 != 0)
                cout << ((int)num1 % (int)num2);
            else
                cout << "Error: Cannot divide by zero!";
            break;
        default:
            cout << "Invalid operator!";
    }

    cout << endl;
    return 0;
}
