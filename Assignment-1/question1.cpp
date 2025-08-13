#include <iostream>
using namespace std;
int arr[100];
int n = 0; 

void createArray() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void display() {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void insertElement() {
    if (n == 100) {
        cout << "Array full.\n";
        return;
    }
    int pos, val;
    cout << "Enter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = val;
    n++;
}

void deleteElement() {
    if (n == 0) {
        cout << "Array empty.\n";
        return;
    }
    int pos;
    cout << "Enter position to delete (1 to " << n << "): ";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

void linearSearch() {
    int val;
    cout << "Enter value to search: ";
    cin >> val;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            cout << "Found at position " << i + 1 << "\n";
            found = true;
        }
    }
    if (!found)
        cout << "Not found.\n";
}
