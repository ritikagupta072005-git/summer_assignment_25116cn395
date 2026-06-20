//Write a program to Check symmetric matrix.

#include <iostream>
using namespace std;

int main() {
    int a[100][100], r, c, i, j;
    bool symmetric = true;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    if (r != c) {
        cout << "Matrix is not symmetric.";
        return 0;
    }

    cout << "Enter matrix elements:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
        cout << "Matrix is symmetric.";
    else
        cout << "Matrix is not symmetric.";

    return 0;
}