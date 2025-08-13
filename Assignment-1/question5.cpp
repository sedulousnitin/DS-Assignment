#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int a[10], b, c;
    int i, j, k;

    cout << "Enter rows & cols of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows & cols of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible because "
             << "columns of first != rows of second.\n";
        return 0;
    }

    cout << "Enter first matrix:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }

    
    for ( i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Result matrix:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
