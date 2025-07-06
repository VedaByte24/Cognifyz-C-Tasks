// Task 10: Inventory Management System

#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
};

int main() {
    const int MAX = 100;
    Item inventory[MAX];
    int count = 0;
    int choice;

    while (true) {
        cout << "\n1. Add Item\n2. Display Items\n3. Search by Name\n4. Exit\nChoose: ";
        cin >> choice;

        if (choice == 1) {
            if (count < MAX) {
                cout << "Enter item ID: ";
                cin >> inventory[count].id;
                cout << "Enter item Name: ";
                cin >> inventory[count].name;
                count++;
            } else {
                cout << "Inventory full!" << endl;
            }
        } else if (choice == 2) {
            cout << "\n--- Inventory List ---\n";
            for (int i = 0; i < count; i++) {
                cout << "ID: " << inventory[i].id << ", Name: " << inventory[i].name << endl;
            }
        } else if (choice == 3) {
            string searchName;
            cout << "Enter name to search: ";
            cin >> searchName;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (inventory[i].name == searchName) {
                    cout << "Found - ID: " << inventory[i].id << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Item not found." << endl;
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
