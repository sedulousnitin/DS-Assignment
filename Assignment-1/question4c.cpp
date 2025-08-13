#include <iostream>
using namespace std;

int main() {
    int r, c;
    int a[10], t;

    cout << "Enter rows & cols: ";
    cin >> r >> c;

    cout << "Enter matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    // Transpose logic
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            t[j][i] = a[i][j];

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << t[i][j] << " ";
        cout << endl;
    }

    return 0;
}
