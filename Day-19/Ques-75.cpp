//Write a program to Transpose matrix.

#include <iostream>
using namespace std;

int main() {
    int a[10][10], transpose[10][10];
    int r, c, i, j;

    cout<<"Enter the no. of rows and column of matrix : ";
    cin >> r >> c;

    cout<<"Enter elements of matrix:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    cout << "Transpose of matrix is:" << endl;

    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}