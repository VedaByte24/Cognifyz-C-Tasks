// Task 8: Array Sorting

#include <iostream>
using namespace std;

int main() {
    int n, order;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Choose order: 1 for Ascending, 2 for Descending: ";
    cin >> order;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            bool shouldSwap = (order == 1 && arr[j] > arr[j + 1]) || 
                              (order == 2 && arr[j] < arr[j + 1]);
            if (shouldSwap) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
